/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2016 Gaulouis <gaulouis.fr@gmail.com>
 * 
 * org-antlr is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * org-antlr is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 *
 * java -Xmx500M -cp "$CLASSPATH" org.antlr.v4.Tool -Dlanguage=GLib -package Sql Hello.g
 *
 */

#include <config.h>


#include <glib-object.h>
#include <glib/gi18n.h>

#include "antlr-runtime/types.h"

#include "antlr-runtime/misc/object.h"

#include "antlr-runtime/int-stream.h"
#include "antlr-runtime/input-stream.h"
#include "antlr-runtime/file-stream.h"
#include "antlr-runtime/char-stream.h"
#include "antlr-runtime/token-stream.h"
#include "antlr-runtime/buffered-token-stream.h"
#include "antlr-runtime/common-token-stream.h"

#include "antlr-runtime/misc/object.h"
#include "antlr-runtime/misc/bit-set.h"
#include "antlr-runtime/misc/int-iset.h"
#include "antlr-runtime/misc/interval.h"
#include "antlr-runtime/vocabulary.h"
#include "antlr-runtime/misc/interval-set.h"
#include "antlr-runtime/misc/integer-list.h"
#include "antlr-runtime/misc/integer-stack.h"
#include "antlr-runtime/atn/transition.h"
#include "antlr-runtime/atn/lexer-action.h"
#include "antlr-runtime/atn/atn-state.h"
#include "antlr-runtime/atn/rule-stop-state.h"
#include "antlr-runtime/atn/rule-start-state.h"
#include "antlr-runtime/atn/atn.h"
#                                               include "antlr-runtime/atn/semantic-context.h"
#                                               include "antlr-runtime/atn/config.h"
#                                               include "antlr-runtime/atn/config-set.h"
#include "antlr-runtime/atn/prediction-context.h"
#include "antlr-runtime/atn/prediction-context-cache.h"
#include "antlr-runtime/atn/atn-simulator.h"

#include "antlr-runtime/tree/tree.h"
#include "antlr-runtime/tree/syntax-tree.h"
#include "antlr-runtime/tree/parse-tree.h"
#include "antlr-runtime/tree/terminal-node.h"
#include "antlr-runtime/tree/error-node.h"
#include "antlr-runtime/tree/parse-tree-listener.h"
#include "antlr-runtime/tree/parse-tree-walker.h"
#include "antlr-runtime/rule-context.h"
#include "antlr-runtime/parser-rule-context.h"
#include "antlr-runtime/token-source.h"

#include "antlr-runtime/vocabulary.h"
#include "antlr-runtime/recognizer.h"
#include "antlr-runtime/int-stream.h"
#include "antlr-runtime/token-factory.h"
#include "antlr-runtime/lexer.h"
#include "antlr-runtime/parser.h"


//#define PROG_NAME 3
#define PROG_NAME 50
//#define PROG_NAME 60

//#define PROG_NAME 10



#if PROG_NAME == 50

static gchar     *output_directory = NULL;
static gchar     *lib_directory = NULL;
static gboolean   generate_atn = FALSE;
static gchar     *encoding = NULL;
static gboolean   show_version = FALSE;
static GPtrArray *grammar_files = NULL;

static gboolean
callback_remaining_args (const gchar *option_name,
                         const gchar *value,
                         gpointer data,
                         GError **error)
{
    g_ptr_array_add (grammar_files, g_strdup (value));
    return TRUE;
}


static GOptionEntry entries[] =
{
    {"version",                0 , 0, G_OPTION_ARG_NONE, &show_version, "Affiche la version de l'application", FALSE},
    {"output-directory",      'o', 0, G_OPTION_ARG_FILENAME, &output_directory, "Specify output directory where all output is generated", NULL},
    {"lib-directory",         'l', 0, G_OPTION_ARG_FILENAME, &lib_directory, "Specify location of grammars, tokens files", NULL},
    {"atn",                   'a', 0, G_OPTION_ARG_NONE, &generate_atn, "Generate rule augmented transition network diagrams", NULL},
    {"encoding",               0 , 0, G_OPTION_ARG_STRING, &encoding, "Specify grammar file encoding; e.g., euc-jp", "CODAGE"},
#if 0
    new Option("libDirectory",		"-lib", OptionArgType.STRING, "specify location of grammars, tokens files"),
    new Option("generate_ATN_dot",	"-atn", "generate rule augmented transition network diagrams"),
    new Option("grammarEncoding",	"-encoding", OptionArgType.STRING, "specify grammar file encoding; e.g., euc-jp"),
    new Option("msgFormat",			"-message-format", OptionArgType.STRING, "specify output style for messages in antlr, gnu, vs2005"),
    new Option("longMessages",		"-long-messages", "show exception details when available for errors and warnings"),
    new Option("gen_listener",		"-listener", "generate parse tree listener (default)"),
    new Option("gen_listener",		"-no-listener", "don't generate parse tree listener"),
    new Option("gen_visitor",		"-visitor", "generate parse tree visitor"),
    new Option("gen_visitor",		"-no-visitor", "don't generate parse tree visitor (default)"),
    new Option("genPackage",		"-package", OptionArgType.STRING, "specify a package/namespace for the generated code"),
    new Option("gen_dependencies",	"-depend", "generate file dependencies"),
    new Option("",					"-D<option>=value", "set/override a grammar-level option"),
    new Option("warnings_are_errors", "-Werror", "treat warnings as errors"),
    new Option("launch_ST_inspector", "-XdbgST", "launch StringTemplate visualizer on generated code"),
    new Option("ST_inspector_wait_for_close", "-XdbgSTWait", "wait for STViz to close before continuing"),
    new Option("force_atn",			"-Xforce-atn", "use the ATN simulator for all predictions"),
    new Option("log",   			"-Xlog", "dump lots of logging info to antlr-timestamp.log"),
#endif
    { G_OPTION_REMAINING,      0 , 0, G_OPTION_ARG_CALLBACK, callback_remaining_args, NULL, NULL },
    { NULL }
};


//#include <gtk/gtk.h>
int
main (int argc, char *argv[])
{
  GError *error = NULL;
  GOptionContext *context;

  //int i; for(i=0; i<argc; i++) {g_print("%s\n", argv[i]);}

#define ANTLR_MAJOR_VERSION  4
#define ANTLR_MINOR_VERSION  5
#define ANTLR_VERSION        G_ENCODE_VERSION(ANTLR_MAJOR_VERSION, ANTLR_MINOR_VERSION)
#define ANTLR_VERSION_STRING "4.5.3"

  const gchar *summary="Tool to generate ANTLR Parser.";// ANTLR Parser Generator, version 4.5.3
  const gchar *description=""
          "For bug reporting instructions, please see : <file:///usr/share/doc/antlr-4/README.Bugs>.\n"
          "Online help at : <http://www.antlr.org/>\n"
          "Full documentation at: <http://www.antlr.org/>\n";
  const gchar *parameter_string="[FICHIER]...";
  grammar_files = g_ptr_array_new ();

  context = g_option_context_new (parameter_string);
  g_option_context_set_summary(context, summary);
  g_option_context_set_description(context, description);

  g_option_context_add_main_entries (context, entries, GETTEXT_PACKAGE);
  //g_option_context_add_group (context, gtk_get_option_group (TRUE));
  if (!g_option_context_parse (context, &argc, &argv, &error))
    {
      g_print ("option parsing failed: %s\n", error->message);
      return 1;
    }
  else {
      if (show_version==TRUE) {
          const gchar *version_description="ANTLR generator version 1.0.1\n"
                                           "ANTLR runtime version %s\n";
          g_print(version_description, ANTLR_VERSION_STRING);
          return 0;
      }
      if (generate_atn==TRUE) {
          return 0;
      }
      if (grammar_files->len>0) {
          //g_basename(grammar_files->pdata[j]);// deprecate
          //g_path_get_basename(grammar_files->pdata[j]);
          int j; for(j=0; j<grammar_files->len; j++) {g_print("%s\n", (gchar*)grammar_files->pdata[j]);}

          return 0;
      }


  }

  return 0;

}

#endif

#if 0

Tool::

public static void main(String[] args) {
    Tool antlr = new Tool(args);
    if ( args.length == 0 ) { antlr.help(); antlr.exit(0); }

    try {
        antlr.processGrammarsOnCommandLine();
    }
    finally {
        if ( antlr.log ) {
            try {
                String logname = antlr.logMgr.save();
                System.out.println("wrote "+logname);
            }
            catch (IOException ioe) {
                antlr.errMgr.toolError(ErrorType.INTERNAL_ERROR, ioe);
            }
        }
    }
    if ( antlr.return_dont_exit ) return;

    if (antlr.errMgr.getNumErrors() > 0) {
        antlr.exit(1);
    }
    antlr.exit(0);
}

public void processGrammarsOnCommandLine() {
    List<GrammarRootAST> sortedGrammars = sortGrammarByTokenVocab(grammarFiles);

    for (GrammarRootAST t : sortedGrammars) {
        final Grammar g = createGrammar(t);
        g.fileName = t.fileName;
        if ( gen_dependencies ) {
            BuildDependencyGenerator dep =
                new BuildDependencyGenerator(this, g);
            /*
                List outputFiles = dep.getGeneratedFileList();
                List dependents = dep.getDependenciesFileList();
                System.out.println("output: "+outputFiles);
                System.out.println("dependents: "+dependents);
                 */
            System.out.println(dep.getDependencies().render());

        }
        else if (errMgr.getNumErrors() == 0) {
            process(g, true);
        }
    }
}

public void processGrammarsOnCommandLine() {
    List<GrammarRootAST> sortedGrammars = sortGrammarByTokenVocab(grammarFiles);

    for (GrammarRootAST t : sortedGrammars) {
        final Grammar g = createGrammar(t);
        g.fileName = t.fileName;
        if ( gen_dependencies ) {
            BuildDependencyGenerator dep =
                new BuildDependencyGenerator(this, g);
            /*
                List outputFiles = dep.getGeneratedFileList();
                List dependents = dep.getDependenciesFileList();
                System.out.println("output: "+outputFiles);
                System.out.println("dependents: "+dependents);
                 */
            System.out.println(dep.getDependencies().render());

        }
        else if (errMgr.getNumErrors() == 0) {
            process(g, true);
        }
    }
}

public void process(Grammar g, boolean gencode) {
    g.loadImportedGrammars();

    GrammarTransformPipeline transform = new GrammarTransformPipeline(g, this);
    transform.process();

    LexerGrammar lexerg;
    GrammarRootAST lexerAST;
    if ( g.ast!=null && g.ast.grammarType== ANTLRParser.COMBINED &&
         !g.ast.hasErrors )
    {
        lexerAST = transform.extractImplicitLexer(g); // alters g.ast
        if ( lexerAST!=null ) {
            if (grammarOptions != null) {
                lexerAST.cmdLineOptions = grammarOptions;
            }

            lexerg = new LexerGrammar(this, lexerAST);
            lexerg.fileName = g.fileName;
            lexerg.originalGrammar = g;
            g.implicitLexer = lexerg;
            lexerg.implicitLexerOwner = g;
            processNonCombinedGrammar(lexerg, gencode);
//				System.out.println("lexer tokens="+lexerg.tokenNameToTypeMap);
//				System.out.println("lexer strings="+lexerg.stringLiteralToTypeMap);
        }
    }
    if ( g.implicitLexer!=null ) g.importVocab(g.implicitLexer);
//		System.out.println("tokens="+g.tokenNameToTypeMap);
//		System.out.println("strings="+g.stringLiteralToTypeMap);
    processNonCombinedGrammar(g, gencode);
}

#endif




#if PROG_NAME == 60
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>

static int
command_line (GApplication            *application,
              GApplicationCommandLine *cmdline)
{
  gchar **argv;
  gint argc;
  gint i;

  argv = g_application_command_line_get_arguments (cmdline, &argc);

  for (i = 0; i < argc; i++)
    g_print ("handling argument %s remotely\n", argv[i]);

  g_strfreev (argv);

  return 0;
}

static gboolean
test_local_cmdline (GApplication   *application,
                    gchar        ***arguments,
                    gint           *exit_status)
{
  gint i, j;
  gchar **argv;

  argv = *arguments;

  i = 1;
  while (argv[i])
    {
      if (g_str_has_prefix (argv[i], "--local-"))
        {
          g_print ("handling argument %s locally\n", argv[i]);
          g_free (argv[i]);
          for (j = i; argv[j]; j++)
            argv[j] = argv[j + 1];
        }
      else
        {
          g_print ("not handling argument %s locally\n", argv[i]);
          i++;
        }
    }

  *exit_status = 0;

  return FALSE;
}

typedef GApplication TestApplication;
typedef GApplicationClass TestApplicationClass;

static GType test_application_get_type (void);
G_DEFINE_TYPE (TestApplication, test_application, G_TYPE_APPLICATION)

static void
test_application_finalize (GObject *object)
{
  G_OBJECT_CLASS (test_application_parent_class)->finalize (object);
}

static void
test_application_init (TestApplication *app)
{
}

static void
test_application_class_init (TestApplicationClass *klass)
{
  G_OBJECT_CLASS (klass)->finalize = test_application_finalize;
  //G_APPLICATION_CLASS (klass)->local_command_line = test_local_cmdline;
}

static GApplication *
test_application_new (const gchar       *application_id,
                      GApplicationFlags  flags)
{
  g_return_val_if_fail (g_application_id_is_valid (application_id), NULL);

  return g_object_new (test_application_get_type (),
                       "application-id", application_id,
                       "flags", flags,
                       NULL);
}

int
main (int argc, char **argv)
{
  GApplication *app;
  int status;

  app = test_application_new ("org.gnome.Antlr", 0);
  g_application_set_inactivity_timeout (app, 10000);
  g_signal_connect (app, "command-line", G_CALLBACK (command_line), NULL);

  status = g_application_run (app, argc, argv);

  g_object_unref (app);

  return status;
}
#endif


#if PROG_NAME == 40

// idealy:
//#include "antlr-runtime/runtime.h"
//#include "mysql/antlr.h"
//#include "mysql/interpreter.h"
//#include "mysql/dom.h"

#include "mysql/MysqlLexer.h"
#include "mysql/MysqlParser.h"

#include "mysql/MysqlParserListener.h"
#include "mysql/MysqlParserBaseListener.h"
//#include "mysql/MysqlListener.h"

//#include "antlr-runtime/proxy-error-listener.h"

int
main (int argc, char *argv[])
{

#ifdef G_OS_WIN32
    gchar *prefix = g_win32_get_package_installation_directory_of_module (NULL);
    gchar *localedir = g_build_filename (prefix, "share", "locale", NULL);
#endif

#ifdef ENABLE_NLS
# ifndef G_OS_WIN32
    bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
# else
    bindtextdomain (GETTEXT_PACKAGE, localedir);
# endif
    bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
    textdomain (GETTEXT_PACKAGE);
#endif

#if !GLIB_CHECK_VERSION(2,35,0)
    g_type_init ();
#endif

    const gchar *filename = "/home/gaulouis/local/src/glib-antlr/share/script/script.sql";
    GError *error = NULL;
    AntlrFileStream *file_stream = antlr_file_stream_new_from_filename_encoding(filename, NULL, &error);
    if (!file_stream) {
        g_print("%s\n", error->message);
        g_error_free(error);
        return 1;
    }
    // Get our lexer
    MysqlLexer *lexer = mysql_lexer_new_with_char_stream(ANTLR_CHAR_STREAM(file_stream));

    // Get a list of matched tokens
    AntlrCommonTokenStream *tokens = antlr_common_token_stream_new_with_token_source(ANTLR_TOKEN_SOURCE(lexer));

    // Pass the tokens to the parser
    MysqlParser *parser = mysql_parser_new_with_token_stream( ANTLR_TOKEN_STREAM(tokens) );

    // Specify our entry point
    GError *parser_error = NULL;
    MysqlContextStat *stat_context = mysql_parser_parse_stat(parser, &parser_error);

    // Walk it and attach our listener
    AntlrParseTreeWalker *walker = antlr_parse_tree_walker_new();
    MysqlParserBaseListener *listener = mysql_parser_base_listener_new();
    antlr_parse_tree_walker_walk(walker, ANTLR_PARSE_TREE_LISTENER(listener), ANTLR_PARSE_TREE(stat_context));

    //g_list_free(ANTLR_PARSER(parser)->precedence_stack);
    g_object_unref(G_OBJECT(parser));

    return 0;
}

#endif

#if PROG_NAME == 3

#include "php/php-lexer.h"
#include "php/php-context-block.h"
#include "php/php-context-prolog.h"
#include "php/php-context-epilog.h"
#include "php/php-context-statement.h"
#include "php/php-parser-listener.h"
#include "php/php-parser.h"

int
main (int argc, char *argv[])
{
//    GHashTable *table = g_hash_table_new(antlr_atn_config_hash_code, antlr_atn_config_equals);
//    AntlrATNState *state = antlr_atn_state_new();
//    AntlrATNConfig *config = antlr_atn_config_new_with_state(state, 0, NULL);
//    g_hash_table_add(table, config);

//    AntlrATNConfig *conf = antlr_atn_config_new_with_state(state, 0, NULL);
//    gpointer v = g_hash_table_lookup(table, conf);
//    g_print("v: %p\n", v);


#ifdef G_OS_WIN32
    gchar *prefix = g_win32_get_package_installation_directory_of_module (NULL);
    gchar *localedir = g_build_filename (prefix, "share", "locale", NULL);
#endif

#ifdef ENABLE_NLS

# ifndef G_OS_WIN32
    bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
# else
    bindtextdomain (GETTEXT_PACKAGE, localedir);
# endif
    bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
    textdomain (GETTEXT_PACKAGE);
#endif

#if !GLIB_CHECK_VERSION(2,35,0)
    g_type_init ();
#endif

//    GError *q = g_error_new(g_quark_from_string("ANTLR"), 500, "%s", "");
//    GArray *edges = g_array_sized_new(FALSE, FALSE, sizeof(GError*), 30);
//    g_array_insert_val(edges, 1, q);
//    return 0;

    //g_log(ANTLR, );

//    gchar *msg = _("This set is readonly");
//    g_print("%s\n", msg);

//    GQuark domain = g_quark_from_string("ANTLR");
//    GError *my_error = g_error_new(domain, 500, "Error : \"%s\"", "My Error");
//    //g_set_error_literal(&my_error, domain, 500, "My Message");
//    //g_set_error(&my_error, domain, 500, "Error : \"%s\"", "My Message");
//
//    g_print("%s> %d: %s\n", g_quark_to_string(my_error->domain), my_error->code, my_error->message);
//    if (g_error_matches(my_error, domain, 501)) {
//        g_print("g_error_matches(501)\n");
//    } else if (g_error_matches(my_error, domain, 500)) {
//        g_print("g_error_matches(500)\n");
//    } else {
//        // Unkown GError
//    }

//    AntlrATNConfigSet *config_set = antlr_atn_config_set_new();
//    AntlrATNConfig *config = antlr_atn_config_new();
//    config->state = NULL;
//    antlr_atn_config_set_add(config_set, config);



    const gchar *filename = "/home/sam/local/src/org-antlr/share/script/script.php";
    GError *error = NULL;
    AntlrFileStream *file_stream = antlr_file_stream_new_from_filename_encoding(filename, NULL, &error);
//    if (!error) {
//        g_object_unref(file_stream);
//    }


    // Get our lexer
    PhpLexer *lexer = php_lexer_new_with_char_stream(ANTLR_CHAR_STREAM(file_stream));

    // Get a list of matched tokens
    AntlrCommonTokenStream *tokens = antlr_common_token_stream_new_with_token_source(ANTLR_TOKEN_SOURCE(lexer));

    // Pass the tokens to the parser
    PhpParser *parser = php_parser_new_with_token_stream( ANTLR_TOKEN_STREAM(tokens) );

    // Specify our entry point
    GError *parser_error = NULL;
    PhpContextBlock *block_context = php_parser_parse_block(parser, &parser_error);



    // Walk it and attach our listener
    PhpParserListener *listener = php_parser_listener_new();
    AntlrParseTreeWalker *walker = antlr_parse_tree_walker_new();
    antlr_parse_tree_walker_walk(walker, ANTLR_PARSE_TREE_LISTENER(listener), block_context);

    // tree/ErrorNodeImpl :: ParseTreeVisitor
    // ParseTreeListener
    // TODO parser-rule-context.c
    // implmente tree/terminal-node-impl.c


/*
        // Get our lexer
        SQLLexer lexer = new SQLLexer( new ANTLRFileStream(args[0]));

        // Get a list of matched tokens
        CommonTokenStream tokens = new CommonTokenStream( lexer );

        // Pass the tokens to the parser
        SQLParser parser = new SQLParser( tokens );

        // Specify our entry point
        SQLParser.StatContext statContext = parser.stat();

        // Walk it and attach our listener
        ParseTreeWalker walker = new ParseTreeWalker();
        SQLListener listener = new SQLListener();
        walker.walk(listener, statContext);

 */


#ifdef G_OS_WIN32
    g_free (prefix);
    g_free (localedir);
#endif

    return 0;
}

#endif


// ????    SqlParserListener *listener = sql_parser_listener_new();
#if PROG_NAME == 4

// idealy:
//#include "antlr-runtime/runtime.h"
//#include "sql/antlr-sql.h"

#include "sql/sql-types.h"
#include "sql/sql-lexer.h"
//#include "sql/sql-context-block.h"
//#include "sql/sql-context-prolog.h"
//#include "sql/sql-context-epilog.h"
#include "sql/sql-context-statement.h"
//#include "sql/sql-parser-listener.h"
#include "sql/sql-parser.h"

#include "sql/sql-parser-listener.h"
#include "sql/sql-parser-base-listener.h"
#include "sql/sql-listener.h"

#include "antlr-runtime/proxy-error-listener.h"


//typedef struct _Src {
//    AntlrLexer *antlr_lexer;
//    SqlLexer *sql_lexer;
//} Src;
//typedef struct _App {
//    gint i;
//    Src src;
//} App;


int
main (int argc, char *argv[])
{

#ifdef G_OS_WIN32
    gchar *prefix = g_win32_get_package_installation_directory_of_module (NULL);
    gchar *localedir = g_build_filename (prefix, "share", "locale", NULL);
#endif

#ifdef ENABLE_NLS
# ifndef G_OS_WIN32
    bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
# else
    bindtextdomain (GETTEXT_PACKAGE, localedir);
# endif
    bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
    textdomain (GETTEXT_PACKAGE);
#endif

#if !GLIB_CHECK_VERSION(2,35,0)
    g_type_init ();
#endif

    //App app = {555, {NULL, NULL}};

    const gchar *filename = "/home/gaulouis/local/src/glib-antlr/share/script/script.sql";
    GError *error = NULL;
    AntlrFileStream *file_stream = antlr_file_stream_new_from_filename_encoding(filename, NULL, &error);
    if (error) {
        if (file_stream) {
            antlr_file_stream_free(file_stream);
        }
        g_print("%s\n", error->message);
        g_error_free(error);
        return 1;
    }
    // Get our lexer
    SqlLexer *lexer = sql_lexer_new_with_char_stream(ANTLR_CHAR_STREAM(file_stream));

    // Get a list of matched tokens
    AntlrCommonTokenStream *tokens = antlr_common_token_stream_new_with_token_source(ANTLR_TOKEN_SOURCE(lexer));

    // Pass the tokens to the parser
    SqlParser *parser = sql_parser_new_with_token_stream( ANTLR_TOKEN_STREAM(tokens) );

    // Specify our entry point
    GError *parser_error = NULL;
    SqlContextStatement *stat_context = sql_parser_parse_statement(parser, &parser_error);

    // Walk it and attach our listener
    AntlrParseTreeWalker *walker = antlr_parse_tree_walker_new();
    SqlListener *listener = sql_listener_new();
    antlr_parse_tree_walker_walk(walker, ANTLR_PARSE_TREE_LISTENER(listener), ANTLR_PARSE_TREE(stat_context));

    //g_list_free(ANTLR_PARSER(parser)->precedence_stack);
    g_object_unref(G_OBJECT(parser));

    return 0;
}

#endif



#if PROG_NAME==1

#include <gtk/gtk.h>

enum
{
  COL_NAME = 0,
  COL_AGE,
  NUM_COLS
} ;


static GtkTreeModel *
create_and_fill_model (void)
{
  GtkListStore  *store;
  GtkTreeIter    iter;
  GtkTreeIter    child;

#if 1
  store = gtk_tree_store_new(NUM_COLS, G_TYPE_STRING, G_TYPE_UINT);

  /* Append an empty top-level row to the tree store.
   *  Iter will point to the new row */
  gtk_tree_store_append(store, &iter, NULL);
  gtk_tree_store_set (store, &iter,
                      COL_NAME, "Heinz El-Mann",
                      COL_AGE, 51,
                      -1);

  /* Append another empty top-level row to the tree store.
   *  Iter will point to the new row */
  gtk_tree_store_append(store, &iter, NULL);
  gtk_tree_store_set (store, &iter,
                      COL_NAME, "Jane Doe",
                      COL_AGE, 23,
                      -1);

  /* Append a child to the row we just added.
   *  Child will point to the new row */
  gtk_tree_store_append(store, &child, &iter);
  gtk_tree_store_set (store, &child,
                      COL_NAME, "Joe Bungop",
                      COL_AGE, 91,
                      -1);


#else
  store = gtk_list_store_new (NUM_COLS, G_TYPE_STRING, G_TYPE_UINT);

  /* Append a row and fill in some data */
  gtk_list_store_append (store, &iter);
  gtk_list_store_set (store, &iter,
                      COL_NAME, "Heinz El-Mann",
                      COL_AGE, 51,
                      -1);

  /* append another row and fill in some data */
  gtk_list_store_append (store, &iter);
  gtk_list_store_set (store, &iter,
                      COL_NAME, "Jane Doe",
                      COL_AGE, 23,
                      -1);

  /* ... and a third row */
  gtk_list_store_append (store, &iter);
  gtk_list_store_set (store, &iter,
                      COL_NAME, "Joe Bungop",
                      COL_AGE, 91,
                      -1);
#endif
  return GTK_TREE_MODEL (store);
}

static GtkWidget *
create_view_and_model (void)
{
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *view;

  view = gtk_tree_view_new ();

  /* --- Column #1 --- */

  renderer = gtk_cell_renderer_text_new ();
  gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (view),
                                               -1,
                                               "Name",
                                               renderer,
                                               "text", COL_NAME,
                                               NULL);

  /* --- Column #2 --- */

  renderer = gtk_cell_renderer_text_new ();
  gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (view),
                                               -1,
                                               "Age",
                                               renderer,
                                               "text", COL_AGE,
                                               NULL);

  model = create_and_fill_model ();

  gtk_tree_view_set_model (GTK_TREE_VIEW (view), model);

  /* The tree view has acquired its own reference to the
   *  model, so we can drop ours. That way the model will
   *  be freed automatically when the tree view is destroyed */

  g_object_unref (model);

  return view;
}

static gboolean
drawing_area_expose_event_callback (GtkWidget *widget, GdkEventExpose *event, gpointer data)
{
  gdk_draw_arc (widget->window,
                widget->style->fg_gc[gtk_widget_get_state (widget)],
                TRUE,
                0, 0, widget->allocation.width, widget->allocation.height,
                0, 64 * 360);
  return TRUE;
}
static GtkWidget *
create_drawing (void)
{
    GtkWidget *drawing_area;
    GtkWidget *scrolled_window;

  drawing_area = gtk_drawing_area_new();
  gtk_widget_set_size_request (drawing_area, 200, 200);
  g_signal_connect (G_OBJECT (drawing_area), "expose_event",
                    G_CALLBACK (drawing_area_expose_event_callback), NULL);

  scrolled_window = gtk_scrolled_window_new(NULL, NULL);
  gtk_scrolled_window_add_with_viewport(scrolled_window, drawing_area);

  return scrolled_window;
}

static GtkWidget *
create_window (void)
{
    GtkWidget *window;
    GtkWidget *paned;
    GtkWidget *tree_view;
    GtkWidget *graphic_view;

    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    g_signal_connect (window, "delete_event", gtk_main_quit, NULL); /* dirty */

    tree_view = create_view_and_model();
    ///graphic_view = create_drawing();
    paned = gtk_hpaned_new();

    gtk_paned_pack1(GTK_PANED(paned), tree_view, FALSE, FALSE);
    ///gtk_paned_pack2(GTK_PANED(paned), graphic_view, TRUE, FALSE);

    gtk_container_add (GTK_CONTAINER (window), paned);

    return window;
}

int
main (int argc, char **argv)
{
  GtkWidget *window;

  gtk_init (&argc, &argv);


  window = create_window();
  gtk_widget_show_all (window);

  gtk_main ();

  return 0;
}

#endif


#if PROG_NAME == 2
#include <stdlib.h>
#include <stdio.h>
#include <gtk/gtk.h>

enum {
    BMP_COLUMN,
    TEXT_COLUMN,
    N_COLUMN
};

/* Utilisateurs Visual C++ : il faut ajouter gdk_pixbuf-2.0.lib dans les options du linker */

int main(int argc, char **argv)
{
    GtkWidget *pWindow;
    GtkWidget *pTreeView;
    GtkWidget *pScrollbar;
    GtkTreeStore *pTreeStore;
    GtkTreeViewColumn *pColumn;
    GtkCellRenderer *pCellRenderer;
    GdkPixbuf *pPixBufA;
    GdkPixbuf *pPixBufB;
    gchar *sTexte;
    gint i;

    gtk_init(&argc, &argv);

    /* Creation de la fenetre principale */
    pWindow = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(pWindow), 320, 200);
    gtk_window_set_title(GTK_WINDOW(pWindow), "GtkTreeView et GtkTreeStore");
    g_signal_connect(G_OBJECT(pWindow), "destroy", G_CALLBACK(gtk_main_quit), NULL);

    /* Creation du modele */
    pTreeStore = gtk_tree_store_new(N_COLUMN, GDK_TYPE_PIXBUF, G_TYPE_STRING);

    sTexte = g_malloc(16);

    /* Chargement des images */
    pPixBufA = gdk_pixbuf_new_from_file("../icon_computer.png", NULL);
    pPixBufB = gdk_pixbuf_new_from_file("../icon_computer.png", NULL);

    /* Insertion des elements */
    for(i = 0 ; i < 10 ; ++i)
    {
        GtkTreeIter pIter;
        GtkTreeIter pIter2;
        gint j;

        sprintf(sTexte, "Ordinateur %d", i);

        /* Creation de la nouvelle ligne */
        gtk_tree_store_append(pTreeStore, &pIter, NULL);

        /* Mise a jour des donnees */
        gtk_tree_store_set(pTreeStore, &pIter,
            BMP_COLUMN, pPixBufA,
            TEXT_COLUMN, sTexte,
            -1);

        for(j = 0 ; j < 2 ; ++j)
        {
            sprintf(sTexte, "Repertoire %d", j);

            /* Creation de la nouvelle ligne enfant */
            gtk_tree_store_append(pTreeStore, &pIter2, &pIter);

            /* Mise a jour des donnees */
            gtk_tree_store_set(pTreeStore, &pIter2,
                BMP_COLUMN, pPixBufB,
                TEXT_COLUMN, sTexte,
                -1);
        }
    }

    g_free(sTexte);

    g_object_unref(pPixBufA);
    g_object_unref(pPixBufB);

    /* Creation de la vue */
    pTreeView = gtk_tree_view_new_with_model(GTK_TREE_MODEL(pTreeStore));

    /* Creation de la premiere colonne */
    pCellRenderer = gtk_cell_renderer_pixbuf_new();
    pColumn = gtk_tree_view_column_new_with_attributes("Image",
        pCellRenderer,
        "pixbuf", BMP_COLUMN,
        NULL);

    /* Ajout de la colonne à la vue */
    gtk_tree_view_append_column(GTK_TREE_VIEW(pTreeView), pColumn);

    /* Creation de la deuxieme colonne */
    pCellRenderer = gtk_cell_renderer_text_new();
    pColumn = gtk_tree_view_column_new_with_attributes("Label",
        pCellRenderer,
        "text", TEXT_COLUMN,
        NULL);

    /* Ajout de la colonne à la vue */
    gtk_tree_view_append_column(GTK_TREE_VIEW(pTreeView), pColumn);

    /* Ajout de la vue a la fenetre */
    pScrollbar = gtk_scrolled_window_new(NULL, NULL);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(pScrollbar),
        GTK_POLICY_AUTOMATIC,
        GTK_POLICY_AUTOMATIC);
    gtk_container_add(GTK_CONTAINER(pScrollbar), pTreeView);
    gtk_container_add(GTK_CONTAINER(pWindow), pScrollbar);

    gtk_widget_show_all(pWindow);

    gtk_main();

    return EXIT_SUCCESS;
}

#endif


#if PROG_NAME == 10

static guint serialized_data[] = {
    0x0003,
    0x0430, 0xd6d1, 0x8206, 0xad2d, 0x4417, 0xaef1, 0x8d80, 0xaadd,
    0x0003, 0x004b, 0x019f, 0x0004, 0x0002, 0x0009, 0x0002, 0x0004,
    0x0003, 0x0009, 0x0003, 0x0004, 0x0004, 0x0009, 0x0004, 0x0004,
    0x0005, 0x0009, 0x0005, 0x0004, 0x0006, 0x0009, 0x0006, 0x0004,
    0x0007, 0x0009, 0x0007, 0x0004, 0x0008, 0x0009, 0x0008, 0x0004,
    0x0009, 0x0009, 0x0009, 0x0004, 0x000a, 0x0009, 0x000a, 0x0004,
    0x000b, 0x0009, 0x000b, 0x0004, 0x000c, 0x0009, 0x000c, 0x0004,
    0x000d, 0x0009, 0x000d, 0x0004, 0x000e, 0x0009, 0x000e, 0x0004,
    0x000f, 0x0009, 0x000f, 0x0004, 0x0010, 0x0009, 0x0010, 0x0004,
    0x0011, 0x0009, 0x0011, 0x0004, 0x0012, 0x0009, 0x0012, 0x0004,
    0x0013, 0x0009, 0x0013, 0x0004, 0x0014, 0x0009, 0x0014, 0x0004,
    0x0015, 0x0009, 0x0015, 0x0004, 0x0016, 0x0009, 0x0016, 0x0004,
    0x0017, 0x0009, 0x0017, 0x0004, 0x0018, 0x0009, 0x0018, 0x0004,
    0x0019, 0x0009, 0x0019, 0x0004, 0x001a, 0x0009, 0x001a, 0x0004,
    0x001b, 0x0009, 0x001b, 0x0004, 0x001c, 0x0009, 0x001c, 0x0004,
    0x001d, 0x0009, 0x001d, 0x0004, 0x001e, 0x0009, 0x001e, 0x0004,
    0x001f, 0x0009, 0x001f, 0x0004, 0x0020, 0x0009, 0x0020, 0x0004,
    0x0021, 0x0009, 0x0021, 0x0004, 0x0022, 0x0009, 0x0022, 0x0004,
    0x0023, 0x0009, 0x0023, 0x0004, 0x0024, 0x0009, 0x0024, 0x0004,
    0x0025, 0x0009, 0x0025, 0x0004, 0x0026, 0x0009, 0x0026, 0x0004,
    0x0027, 0x0009, 0x0027, 0x0004, 0x0028, 0x0009, 0x0028, 0x0004,
    0x0029, 0x0009, 0x0029, 0x0004, 0x002a, 0x0009, 0x002a, 0x0003,
    0x0002, 0x0006, 0x0002, 0x0056, 0x000a, 0x0002, 0x000d, 0x0002,
    0x000e, 0x0002, 0x0057, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003,
    0x0004, 0x0003, 0x0004, 0x0003, 0x0004, 0x0003, 0x0004, 0x0005,
    0x0004, 0x0060, 0x000a, 0x0004, 0x0003, 0x0004, 0x0005, 0x0004,
    0x0063, 0x000a, 0x0004, 0x0003, 0x0005, 0x0003, 0x0005, 0x0003,
    0x0006, 0x0003, 0x0006, 0x0003, 0x0007, 0x0003, 0x0007, 0x0003,
    0x0007, 0x0005, 0x0007, 0x006c, 0x000a, 0x0007, 0x0003, 0x0007,
    0x0003, 0x0007, 0x0005, 0x0007, 0x0070, 0x000a, 0x0007, 0x0003,
    0x0007, 0x0003, 0x0007, 0x0003, 0x0007, 0x0005, 0x0007, 0x0075,
    0x000a, 0x0007, 0x0003, 0x0007, 0x0003, 0x0007, 0x0003, 0x0007,
    0x0005, 0x0007, 0x007a, 0x000a, 0x0007, 0x0003, 0x0007, 0x0003,
    0x0007, 0x0003, 0x0007, 0x0005, 0x0007, 0x007f, 0x000a, 0x0007,
    0x0005, 0x0007, 0x0081, 0x000a, 0x0007, 0x0003, 0x0008, 0x0003,
    0x0008, 0x0003, 0x0009, 0x0003, 0x0009, 0x0003, 0x000a, 0x0003,
    0x000a, 0x0003, 0x000a, 0x0003, 0x000a, 0x0007, 0x000a, 0x008b,
    0x000a, 0x000a, 0x000c, 0x000a, 0x000e, 0x000a, 0x008e, 0x000b,
    0x000a, 0x0003, 0x000a, 0x0003, 0x000a, 0x0003, 0x000b, 0x0003,
    0x000b, 0x0003, 0x000b, 0x0007, 0x000b, 0x0095, 0x000a, 0x000b,
    0x000c, 0x000b, 0x000e, 0x000b, 0x0098, 0x000b, 0x000b, 0x0003,
    0x000c, 0x0003, 0x000c, 0x0003, 0x000c, 0x0003, 0x000c, 0x0007,
    0x000c, 0x009e, 0x000a, 0x000c, 0x000c, 0x000c, 0x000e, 0x000c,
    0x00a1, 0x000b, 0x000c, 0x0003, 0x000d, 0x0003, 0x000d, 0x0003,
    0x000e, 0x0003, 0x000e, 0x0003, 0x000e, 0x0003, 0x000f, 0x0003,
    0x000f, 0x0003, 0x000f, 0x0003, 0x000f, 0x0007, 0x000f, 0x00ac,
    0x000a, 0x000f, 0x000c, 0x000f, 0x000e, 0x000f, 0x00af, 0x000b,
    0x000f, 0x0003, 0x0010, 0x0003, 0x0010, 0x0003, 0x0010, 0x0003,
    0x0010, 0x0003, 0x0010, 0x0003, 0x0010, 0x0003, 0x0010, 0x0005,
    0x0010, 0x00b8, 0x000a, 0x0010, 0x0003, 0x0011, 0x0003, 0x0011,
    0x0003, 0x0012, 0x0003, 0x0012, 0x0003, 0x0013, 0x0003, 0x0013,
    0x0003, 0x0014, 0x0003, 0x0014, 0x0003, 0x0015, 0x0003, 0x0015,
    0x0003, 0x0016, 0x0003, 0x0016, 0x0003, 0x0017, 0x0003, 0x0017,
    0x0003, 0x0017, 0x0005, 0x0017, 0x00c9, 0x000a, 0x0017, 0x0003,
    0x0018, 0x0003, 0x0018, 0x0003, 0x0018, 0x0003, 0x0018, 0x0003,
    0x0018, 0x0003, 0x0018, 0x0003, 0x0018, 0x0003, 0x0018, 0x0003,
    0x0018, 0x0003, 0x0018, 0x0003, 0x0018, 0x0003, 0x0018, 0x0003,
    0x0018, 0x0003, 0x0018, 0x0005, 0x0018, 0x00d9, 0x000a, 0x0018,
    0x0003, 0x0019, 0x0003, 0x0019, 0x0003, 0x0019, 0x0003, 0x0019,
    0x0007, 0x0019, 0x00df, 0x000a, 0x0019, 0x000c, 0x0019, 0x000e,
    0x0019, 0x00e2, 0x000b, 0x0019, 0x0003, 0x001a, 0x0003, 0x001a,
    0x0005, 0x001a, 0x00e6, 0x000a, 0x001a, 0x0003, 0x001b, 0x0003,
    0x001b, 0x0005, 0x001b, 0x00ea, 0x000a, 0x001b, 0x0003, 0x001b,
    0x0003, 0x001b, 0x0003, 0x001b, 0x0005, 0x001b, 0x00ef, 0x000a,
    0x001b, 0x0005, 0x001b, 0x00f1, 0x000a, 0x001b, 0x0003, 0x001c,
    0x0003, 0x001c, 0x0003, 0x001c, 0x0003, 0x001c, 0x0003, 0x001c,
    0x0005, 0x001c, 0x00f8, 0x000a, 0x001c, 0x0005, 0x001c, 0x00fa,
    0x000a, 0x001c, 0x0003, 0x001d, 0x0003, 0x001d, 0x0003, 0x001d,
    0x0005, 0x001d, 0x00ff, 0x000a, 0x001d, 0x0003, 0x001d, 0x0003,
    0x001d, 0x0003, 0x001d, 0x0003, 0x001d, 0x0005, 0x001d, 0x0105,
    0x000a, 0x001d, 0x0003, 0x001e, 0x0003, 0x001e, 0x0003, 0x001e,
    0x0003, 0x001e, 0x0005, 0x001e, 0x010b, 0x000a, 0x001e, 0x0005,
    0x001e, 0x010d, 0x000a, 0x001e, 0x0003, 0x001e, 0x0003, 0x001e,
    0x0005, 0x001e, 0x0111, 0x000a, 0x001e, 0x0003, 0x001f, 0x0003,
    0x001f, 0x0005, 0x001f, 0x0115, 0x000a, 0x001f, 0x0003, 0x001f,
    0x0003, 0x001f, 0x0005, 0x001f, 0x0119, 0x000a, 0x001f, 0x0003,
    0x001f, 0x0005, 0x001f, 0x011c, 0x000a, 0x001f, 0x0003, 0x001f,
    0x0003, 0x001f, 0x0003, 0x001f, 0x0003, 0x001f, 0x0003, 0x001f,
    0x0003, 0x001f, 0x0003, 0x001f, 0x0003, 0x001f, 0x0003, 0x001f,
    0x0003, 0x001f, 0x0003, 0x001f, 0x0003, 0x001f, 0x0003, 0x001f,
    0x0003, 0x001f, 0x0003, 0x001f, 0x0003, 0x001f, 0x0005, 0x001f,
    0x012e, 0x000a, 0x001f, 0x0003, 0x0020, 0x0005, 0x0020, 0x0131,
    0x000a, 0x0020, 0x0003, 0x0020, 0x0003, 0x0020, 0x0003, 0x0020,
    0x0005, 0x0020, 0x0136, 0x000a, 0x0020, 0x0003, 0x0020, 0x0003,
    0x0020, 0x0003, 0x0020, 0x0003, 0x0020, 0x0005, 0x0020, 0x013c,
    0x000a, 0x0020, 0x0003, 0x0020, 0x0003, 0x0020, 0x0005, 0x0020,
    0x0140, 0x000a, 0x0020, 0x0003, 0x0020, 0x0003, 0x0020, 0x0003,
    0x0020, 0x0003, 0x0020, 0x0003, 0x0020, 0x0003, 0x0020, 0x0003,
    0x0020, 0x0005, 0x0020, 0x0149, 0x000a, 0x0020, 0x0005, 0x0020,
    0x014b, 0x000a, 0x0020, 0x0003, 0x0020, 0x0003, 0x0020, 0x0005,
    0x0020, 0x014f, 0x000a, 0x0020, 0x0003, 0x0021, 0x0003, 0x0021,
    0x0003, 0x0021, 0x0003, 0x0021, 0x0003, 0x0021, 0x0007, 0x0021,
    0x0156, 0x000a, 0x0021, 0x000c, 0x0021, 0x000e, 0x0021, 0x0159,
    0x000b, 0x0021, 0x0003, 0x0021, 0x0003, 0x0021, 0x0005, 0x0021,
    0x015d, 0x000a, 0x0021, 0x0003, 0x0022, 0x0003, 0x0022, 0x0003,
    0x0022, 0x0007, 0x0022, 0x0162, 0x000a, 0x0022, 0x000c, 0x0022,
    0x000e, 0x0022, 0x0165, 0x000b, 0x0022, 0x0003, 0x0023, 0x0003,
    0x0023, 0x0003, 0x0023, 0x0003, 0x0023, 0x0003, 0x0023, 0x0003,
    0x0023, 0x0003, 0x0023, 0x0005, 0x0023, 0x016e, 0x000a, 0x0023,
    0x0005, 0x0023, 0x0170, 0x000a, 0x0023, 0x0003, 0x0024, 0x0003,
    0x0024, 0x0003, 0x0024, 0x0003, 0x0024, 0x0005, 0x0024, 0x0176,
    0x000a, 0x0024, 0x0003, 0x0024, 0x0003, 0x0024, 0x0003, 0x0024,
    0x0003, 0x0024, 0x0003, 0x0024, 0x0003, 0x0024, 0x0003, 0x0024,
    0x0003, 0x0024, 0x0005, 0x0024, 0x0180, 0x000a, 0x0024, 0x0003,
    0x0025, 0x0003, 0x0025, 0x0003, 0x0025, 0x0007, 0x0025, 0x0185,
    0x000a, 0x0025, 0x000c, 0x0025, 0x000e, 0x0025, 0x0188, 0x000b,
    0x0025, 0x0003, 0x0026, 0x0003, 0x0026, 0x0003, 0x0026, 0x0003,
    0x0026, 0x0003, 0x0026, 0x0003, 0x0027, 0x0003, 0x0027, 0x0003,
    0x0027, 0x0007, 0x0027, 0x0192, 0x000a, 0x0027, 0x000c, 0x0027,
    0x000e, 0x0027, 0x0195, 0x000b, 0x0027, 0x0003, 0x0028, 0x0003,
    0x0028, 0x0003, 0x0029, 0x0003, 0x0029, 0x0003, 0x002a, 0x0003,
    0x002a, 0x0003, 0x002a, 0x0003, 0x002a, 0x0003, 0x002a, 0x0002,
    0x0002, 0x002b, 0x0002, 0x0004, 0x0006, 0x0008, 0x000a, 0x000c,
    0x000e, 0x0010, 0x0012, 0x0014, 0x0016, 0x0018, 0x001a, 0x001c,
    0x001e, 0x0020, 0x0022, 0x0024, 0x0026, 0x0028, 0x002a, 0x002c,
    0x002e, 0x0030, 0x0032, 0x0034, 0x0036, 0x0038, 0x003a, 0x003c,
    0x003e, 0x0040, 0x0042, 0x0044, 0x0046, 0x0048, 0x004a, 0x004c,
    0x004e, 0x0050, 0x0052, 0x0002, 0x0007, 0x0004, 0x0002, 0x0028,
    0x002b, 0x002d, 0x002e, 0x0004, 0x0002, 0x0007, 0x0009, 0x002c,
    0x002c, 0x0004, 0x0002, 0x0033, 0x0033, 0x0036, 0x0036, 0x0003,
    0x0002, 0x0043, 0x0044, 0x0003, 0x0002, 0x0038, 0x0039, 0x01b0,
    0x0002, 0x0055, 0x0003, 0x0002, 0x0002, 0x0002, 0x0004, 0x0059,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0006, 0x005b, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0008, 0x0064, 0x0003, 0x0002, 0x0002, 0x0002,
    0x000a, 0x0066, 0x0003, 0x0002, 0x0002, 0x0002, 0x000c, 0x0080,
    0x0003, 0x0002, 0x0002, 0x0002, 0x000e, 0x0082, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0010, 0x0084, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0012, 0x0086, 0x0003, 0x0002, 0x0002, 0x0002, 0x0014, 0x0091,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0016, 0x0099, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0018, 0x00a2, 0x0003, 0x0002, 0x0002, 0x0002,
    0x001a, 0x00a4, 0x0003, 0x0002, 0x0002, 0x0002, 0x001c, 0x00a7,
    0x0003, 0x0002, 0x0002, 0x0002, 0x001e, 0x00b7, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0020, 0x00b9, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0022, 0x00bb, 0x0003, 0x0002, 0x0002, 0x0002, 0x0024, 0x00bd,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0026, 0x00bf, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0028, 0x00c1, 0x0003, 0x0002, 0x0002, 0x0002,
    0x002a, 0x00c3, 0x0003, 0x0002, 0x0002, 0x0002, 0x002c, 0x00c8,
    0x0003, 0x0002, 0x0002, 0x0002, 0x002e, 0x00d8, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0030, 0x00da, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0032, 0x00e5, 0x0003, 0x0002, 0x0002, 0x0002, 0x0034, 0x00e7,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0036, 0x00f2, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0038, 0x00fb, 0x0003, 0x0002, 0x0002, 0x0002,
    0x003a, 0x0106, 0x0003, 0x0002, 0x0002, 0x0002, 0x003c, 0x012d,
    0x0003, 0x0002, 0x0002, 0x0002, 0x003e, 0x014e, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0040, 0x015c, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0042, 0x015e, 0x0003, 0x0002, 0x0002, 0x0002, 0x0044, 0x0166,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0046, 0x017f, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0048, 0x0181, 0x0003, 0x0002, 0x0002, 0x0002,
    0x004a, 0x0189, 0x0003, 0x0002, 0x0002, 0x0002, 0x004c, 0x018e,
    0x0003, 0x0002, 0x0002, 0x0002, 0x004e, 0x0196, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0050, 0x0198, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0052, 0x019a, 0x0003, 0x0002, 0x0002, 0x0002, 0x0054, 0x0056,
    0x0005, 0x0006, 0x0004, 0x0002, 0x0055, 0x0054, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0056, 0x0057, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0057, 0x0055, 0x0003, 0x0002, 0x0002, 0x0002, 0x0057, 0x0058,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0058, 0x0003, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0059, 0x005a, 0x0007, 0x0047, 0x0002, 0x0002,
    0x005a, 0x0005, 0x0003, 0x0002, 0x0002, 0x0002, 0x005b, 0x005c,
    0x0007, 0x0003, 0x0002, 0x0002, 0x005c, 0x005f, 0x0005, 0x0014,
    0x000b, 0x0002, 0x005d, 0x005e, 0x0007, 0x0004, 0x0002, 0x0002,
    0x005e, 0x0060, 0x0005, 0x0030, 0x0019, 0x0002, 0x005f, 0x005d,
    0x0003, 0x0002, 0x0002, 0x0002, 0x005f, 0x0060, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0060, 0x0062, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0061, 0x0063, 0x0005, 0x001a, 0x000e, 0x0002, 0x0062, 0x0061,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0062, 0x0063, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0063, 0x0007, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0064, 0x0065, 0x0007, 0x0047, 0x0002, 0x0002, 0x0065, 0x0009,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0066, 0x0067, 0x0007, 0x0047,
    0x0002, 0x0002, 0x0067, 0x000b, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0068, 0x0069, 0x0005, 0x0004, 0x0003, 0x0002, 0x0069, 0x006a,
    0x0007, 0x0031, 0x0002, 0x0002, 0x006a, 0x006c, 0x0003, 0x0002,
    0x0002, 0x0002, 0x006b, 0x0068, 0x0003, 0x0002, 0x0002, 0x0002,
    0x006b, 0x006c, 0x0003, 0x0002, 0x0002, 0x0002, 0x006c, 0x006d,
    0x0003, 0x0002, 0x0002, 0x0002, 0x006d, 0x006e, 0x0007, 0x0047,
    0x0002, 0x0002, 0x006e, 0x0070, 0x0007, 0x0031, 0x0002, 0x0002,
    0x006f, 0x006b, 0x0003, 0x0002, 0x0002, 0x0002, 0x006f, 0x0070,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0070, 0x0071, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0071, 0x0074, 0x0007, 0x0047, 0x0002, 0x0002,
    0x0072, 0x0073, 0x0007, 0x0006, 0x0002, 0x0002, 0x0073, 0x0075,
    0x0005, 0x000e, 0x0008, 0x0002, 0x0074, 0x0072, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0074, 0x0075, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0075, 0x0081, 0x0003, 0x0002, 0x0002, 0x0002, 0x0076, 0x0077,
    0x0005, 0x000a, 0x0006, 0x0002, 0x0077, 0x0078, 0x0007, 0x0031,
    0x0002, 0x0002, 0x0078, 0x007a, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0079, 0x0076, 0x0003, 0x0002, 0x0002, 0x0002, 0x0079, 0x007a,
    0x0003, 0x0002, 0x0002, 0x0002, 0x007a, 0x007b, 0x0003, 0x0002,
    0x0002, 0x0002, 0x007b, 0x0081, 0x0007, 0x0047, 0x0002, 0x0002,
    0x007c, 0x007e, 0x0007, 0x004b, 0x0002, 0x0002, 0x007d, 0x007f,
    0x0005, 0x000e, 0x0008, 0x0002, 0x007e, 0x007d, 0x0003, 0x0002,
    0x0002, 0x0002, 0x007e, 0x007f, 0x0003, 0x0002, 0x0002, 0x0002,
    0x007f, 0x0081, 0x0003, 0x0002, 0x0002, 0x0002, 0x0080, 0x006f,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0080, 0x0079, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0080, 0x007c, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0081, 0x000d, 0x0003, 0x0002, 0x0002, 0x0002, 0x0082, 0x0083,
    0x0007, 0x0047, 0x0002, 0x0002, 0x0083, 0x000f, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0084, 0x0085, 0x0007, 0x0047, 0x0002, 0x0002,
    0x0085, 0x0011, 0x0003, 0x0002, 0x0002, 0x0002, 0x0086, 0x0087,
    0x0007, 0x0023, 0x0002, 0x0002, 0x0087, 0x008c, 0x0005, 0x000c,
    0x0007, 0x0002, 0x0088, 0x0089, 0x0007, 0x0030, 0x0002, 0x0002,
    0x0089, 0x008b, 0x0005, 0x000c, 0x0007, 0x0002, 0x008a, 0x0088,
    0x0003, 0x0002, 0x0002, 0x0002, 0x008b, 0x008e, 0x0003, 0x0002,
    0x0002, 0x0002, 0x008c, 0x008a, 0x0003, 0x0002, 0x0002, 0x0002,
    0x008c, 0x008d, 0x0003, 0x0002, 0x0002, 0x0002, 0x008d, 0x008f,
    0x0003, 0x0002, 0x0002, 0x0002, 0x008e, 0x008c, 0x0003, 0x0002,
    0x0002, 0x0002, 0x008f, 0x0090, 0x0007, 0x0022, 0x0002, 0x0002,
    0x0090, 0x0013, 0x0003, 0x0002, 0x0002, 0x0002, 0x0091, 0x0096,
    0x0005, 0x000c, 0x0007, 0x0002, 0x0092, 0x0093, 0x0007, 0x0030,
    0x0002, 0x0002, 0x0093, 0x0095, 0x0005, 0x000c, 0x0007, 0x0002,
    0x0094, 0x0092, 0x0003, 0x0002, 0x0002, 0x0002, 0x0095, 0x0098,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0096, 0x0094, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0096, 0x0097, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0097, 0x0015, 0x0003, 0x0002, 0x0002, 0x0002, 0x0098, 0x0096,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0099, 0x009a, 0x0007, 0x0004,
    0x0002, 0x0002, 0x009a, 0x009f, 0x0005, 0x0008, 0x0005, 0x0002,
    0x009b, 0x009c, 0x0007, 0x0030, 0x0002, 0x0002, 0x009c, 0x009e,
    0x0005, 0x0008, 0x0005, 0x0002, 0x009d, 0x009b, 0x0003, 0x0002,
    0x0002, 0x0002, 0x009e, 0x00a1, 0x0003, 0x0002, 0x0002, 0x0002,
    0x009f, 0x009d, 0x0003, 0x0002, 0x0002, 0x0002, 0x009f, 0x00a0,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00a0, 0x0017, 0x0003, 0x0002,
    0x0002, 0x0002, 0x00a1, 0x009f, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00a2, 0x00a3, 0x0007, 0x0003, 0x0002, 0x0002, 0x00a3, 0x0019,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00a4, 0x00a5, 0x0007, 0x0005,
    0x0002, 0x0002, 0x00a5, 0x00a6, 0x0005, 0x001c, 0x000f, 0x0002,
    0x00a6, 0x001b, 0x0003, 0x0002, 0x0002, 0x0002, 0x00a7, 0x00ad,
    0x0005, 0x002e, 0x0018, 0x0002, 0x00a8, 0x00a9, 0x0005, 0x0028,
    0x0015, 0x0002, 0x00a9, 0x00aa, 0x0005, 0x002e, 0x0018, 0x0002,
    0x00aa, 0x00ac, 0x0003, 0x0002, 0x0002, 0x0002, 0x00ab, 0x00a8,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00ac, 0x00af, 0x0003, 0x0002,
    0x0002, 0x0002, 0x00ad, 0x00ab, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00ad, 0x00ae, 0x0003, 0x0002, 0x0002, 0x0002, 0x00ae, 0x001d,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00af, 0x00ad, 0x0003, 0x0002,
    0x0002, 0x0002, 0x00b0, 0x00b8, 0x0007, 0x004b, 0x0002, 0x0002,
    0x00b1, 0x00b8, 0x0007, 0x0047, 0x0002, 0x0002, 0x00b2, 0x00b3,
    0x0007, 0x001a, 0x0002, 0x0002, 0x00b3, 0x00b4, 0x0007, 0x0047,
    0x0002, 0x0002, 0x00b4, 0x00b8, 0x0007, 0x001a, 0x0002, 0x0002,
    0x00b5, 0x00b8, 0x0007, 0x0048, 0x0002, 0x0002, 0x00b6, 0x00b8,
    0x0005, 0x000c, 0x0007, 0x0002, 0x00b7, 0x00b0, 0x0003, 0x0002,
    0x0002, 0x0002, 0x00b7, 0x00b1, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00b7, 0x00b2, 0x0003, 0x0002, 0x0002, 0x0002, 0x00b7, 0x00b5,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00b7, 0x00b6, 0x0003, 0x0002,
    0x0002, 0x0002, 0x00b8, 0x001f, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00b9, 0x00ba, 0x0005, 0x001e, 0x0010, 0x0002, 0x00ba, 0x0021,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00bb, 0x00bc, 0x0005, 0x001e,
    0x0010, 0x0002, 0x00bc, 0x0023, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00bd, 0x00be, 0x0005, 0x001e, 0x0010, 0x0002, 0x00be, 0x0025,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00bf, 0x00c0, 0x0009, 0x0002,
    0x0002, 0x0002, 0x00c0, 0x0027, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00c1, 0x00c2, 0x0009, 0x0003, 0x0002, 0x0002, 0x00c2, 0x0029,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00c3, 0x00c4, 0x0007, 0x0015,
    0x0002, 0x0002, 0x00c4, 0x002b, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00c5, 0x00c9, 0x0007, 0x000a, 0x0002, 0x0002, 0x00c6, 0x00c7,
    0x0007, 0x000a, 0x0002, 0x0002, 0x00c7, 0x00c9, 0x0007, 0x002c,
    0x0002, 0x0002, 0x00c8, 0x00c5, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00c8, 0x00c6, 0x0003, 0x0002, 0x0002, 0x0002, 0x00c9, 0x002d,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00ca, 0x00cb, 0x0005, 0x0022,
    0x0012, 0x0002, 0x00cb, 0x00cc, 0x0005, 0x0026, 0x0014, 0x0002,
    0x00cc, 0x00cd, 0x0005, 0x0020, 0x0011, 0x0002, 0x00cd, 0x00d9,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00ce, 0x00cf, 0x0005, 0x0024,
    0x0013, 0x0002, 0x00cf, 0x00d0, 0x0005, 0x002a, 0x0016, 0x0002,
    0x00d0, 0x00d1, 0x0005, 0x0022, 0x0012, 0x0002, 0x00d1, 0x00d2,
    0x0007, 0x0007, 0x0002, 0x0002, 0x00d2, 0x00d3, 0x0005, 0x0020,
    0x0011, 0x0002, 0x00d3, 0x00d9, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00d4, 0x00d5, 0x0005, 0x0024, 0x0013, 0x0002, 0x00d5, 0x00d6,
    0x0005, 0x002c, 0x0017, 0x0002, 0x00d6, 0x00d7, 0x0007, 0x000b,
    0x0002, 0x0002, 0x00d7, 0x00d9, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00d8, 0x00ca, 0x0003, 0x0002, 0x0002, 0x0002, 0x00d8, 0x00ce,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00d8, 0x00d4, 0x0003, 0x0002,
    0x0002, 0x0002, 0x00d9, 0x002f, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00da, 0x00e0, 0x0005, 0x0032, 0x001a, 0x0002, 0x00db, 0x00dc,
    0x0007, 0x0030, 0x0002, 0x0002, 0x00dc, 0x00df, 0x0005, 0x0032,
    0x001a, 0x0002, 0x00dd, 0x00df, 0x0005, 0x003e, 0x0020, 0x0002,
    0x00de, 0x00db, 0x0003, 0x0002, 0x0002, 0x0002, 0x00de, 0x00dd,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00df, 0x00e2, 0x0003, 0x0002,
    0x0002, 0x0002, 0x00e0, 0x00de, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00e0, 0x00e1, 0x0003, 0x0002, 0x0002, 0x0002, 0x00e1, 0x0031,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00e2, 0x00e0, 0x0003, 0x0002,
    0x0002, 0x0002, 0x00e3, 0x00e6, 0x0005, 0x0034, 0x001b, 0x0002,
    0x00e4, 0x00e6, 0x0005, 0x003c, 0x001f, 0x0002, 0x00e5, 0x00e3,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00e5, 0x00e4, 0x0003, 0x0002,
    0x0002, 0x0002, 0x00e6, 0x0033, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00e7, 0x00f0, 0x0005, 0x0036, 0x001c, 0x0002, 0x00e8, 0x00ea,
    0x0009, 0x0004, 0x0002, 0x0002, 0x00e9, 0x00e8, 0x0003, 0x0002,
    0x0002, 0x0002, 0x00e9, 0x00ea, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00ea, 0x00eb, 0x0003, 0x0002, 0x0002, 0x0002, 0x00eb, 0x00ec,
    0x0007, 0x0035, 0x0002, 0x0002, 0x00ec, 0x00ee, 0x0005, 0x003c,
    0x001f, 0x0002, 0x00ed, 0x00ef, 0x0005, 0x0040, 0x0021, 0x0002,
    0x00ee, 0x00ed, 0x0003, 0x0002, 0x0002, 0x0002, 0x00ee, 0x00ef,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00ef, 0x00f1, 0x0003, 0x0002,
    0x0002, 0x0002, 0x00f0, 0x00e9, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00f0, 0x00f1, 0x0003, 0x0002, 0x0002, 0x0002, 0x00f1, 0x0035,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00f2, 0x00f9, 0x0005, 0x0038,
    0x001d, 0x0002, 0x00f3, 0x00f4, 0x0007, 0x0041, 0x0002, 0x0002,
    0x00f4, 0x00f7, 0x0005, 0x003c, 0x001f, 0x0002, 0x00f5, 0x00f6,
    0x0007, 0x0046, 0x0002, 0x0002, 0x00f6, 0x00f8, 0x0005, 0x001c,
    0x000f, 0x0002, 0x00f7, 0x00f5, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00f7, 0x00f8, 0x0003, 0x0002, 0x0002, 0x0002, 0x00f8, 0x00fa,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00f9, 0x00f3, 0x0003, 0x0002,
    0x0002, 0x0002, 0x00f9, 0x00fa, 0x0003, 0x0002, 0x0002, 0x0002,
    0x00fa, 0x0037, 0x0003, 0x0002, 0x0002, 0x0002, 0x00fb, 0x0104,
    0x0005, 0x003a, 0x001e, 0x0002, 0x00fc, 0x00fe, 0x0009, 0x0005,
    0x0002, 0x0002, 0x00fd, 0x00ff, 0x0007, 0x0034, 0x0002, 0x0002,
    0x00fe, 0x00fd, 0x0003, 0x0002, 0x0002, 0x0002, 0x00fe, 0x00ff,
    0x0003, 0x0002, 0x0002, 0x0002, 0x00ff, 0x0100, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0100, 0x0101, 0x0007, 0x0035, 0x0002, 0x0002,
    0x0101, 0x0102, 0x0005, 0x003a, 0x001e, 0x0002, 0x0102, 0x0103,
    0x0005, 0x0040, 0x0021, 0x0002, 0x0103, 0x0105, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0104, 0x00fc, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0104, 0x0105, 0x0003, 0x0002, 0x0002, 0x0002, 0x0105, 0x0039,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0106, 0x0110, 0x0005, 0x003c,
    0x001f, 0x0002, 0x0107, 0x010c, 0x0007, 0x0042, 0x0002, 0x0002,
    0x0108, 0x010a, 0x0009, 0x0005, 0x0002, 0x0002, 0x0109, 0x010b,
    0x0007, 0x0034, 0x0002, 0x0002, 0x010a, 0x0109, 0x0003, 0x0002,
    0x0002, 0x0002, 0x010a, 0x010b, 0x0003, 0x0002, 0x0002, 0x0002,
    0x010b, 0x010d, 0x0003, 0x0002, 0x0002, 0x0002, 0x010c, 0x0108,
    0x0003, 0x0002, 0x0002, 0x0002, 0x010c, 0x010d, 0x0003, 0x0002,
    0x0002, 0x0002, 0x010d, 0x010e, 0x0003, 0x0002, 0x0002, 0x0002,
    0x010e, 0x010f, 0x0007, 0x0035, 0x0002, 0x0002, 0x010f, 0x0111,
    0x0005, 0x003c, 0x001f, 0x0002, 0x0110, 0x0107, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0110, 0x0111, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0111, 0x003b, 0x0003, 0x0002, 0x0002, 0x0002, 0x0112, 0x0114,
    0x0005, 0x0008, 0x0005, 0x0002, 0x0113, 0x0115, 0x0005, 0x004a,
    0x0026, 0x0002, 0x0114, 0x0113, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0114, 0x0115, 0x0003, 0x0002, 0x0002, 0x0002, 0x0115, 0x0118,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0116, 0x0117, 0x0007, 0x0006,
    0x0002, 0x0002, 0x0117, 0x0119, 0x0005, 0x000a, 0x0006, 0x0002,
    0x0118, 0x0116, 0x0003, 0x0002, 0x0002, 0x0002, 0x0118, 0x0119,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0119, 0x011b, 0x0003, 0x0002,
    0x0002, 0x0002, 0x011a, 0x011c, 0x0005, 0x0042, 0x0022, 0x0002,
    0x011b, 0x011a, 0x0003, 0x0002, 0x0002, 0x0002, 0x011b, 0x011c,
    0x0003, 0x0002, 0x0002, 0x0002, 0x011c, 0x012e, 0x0003, 0x0002,
    0x0002, 0x0002, 0x011d, 0x011e, 0x0005, 0x0052, 0x002a, 0x0002,
    0x011e, 0x011f, 0x0005, 0x0050, 0x0029, 0x0002, 0x011f, 0x012e,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0120, 0x0121, 0x0007, 0x0023,
    0x0002, 0x0002, 0x0121, 0x0122, 0x0005, 0x0030, 0x0019, 0x0002,
    0x0122, 0x0123, 0x0007, 0x0022, 0x0002, 0x0002, 0x0123, 0x012e,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0124, 0x0125, 0x0007, 0x0045,
    0x0002, 0x0002, 0x0125, 0x0126, 0x0005, 0x0032, 0x001a, 0x0002,
    0x0126, 0x0127, 0x0007, 0x0043, 0x0002, 0x0002, 0x0127, 0x0128,
    0x0007, 0x0034, 0x0002, 0x0002, 0x0128, 0x0129, 0x0007, 0x0035,
    0x0002, 0x0002, 0x0129, 0x012a, 0x0005, 0x0032, 0x001a, 0x0002,
    0x012a, 0x012b, 0x0007, 0x0046, 0x0002, 0x0002, 0x012b, 0x012c,
    0x0005, 0x001c, 0x000f, 0x0002, 0x012c, 0x012e, 0x0003, 0x0002,
    0x0002, 0x0002, 0x012d, 0x0112, 0x0003, 0x0002, 0x0002, 0x0002,
    0x012d, 0x011d, 0x0003, 0x0002, 0x0002, 0x0002, 0x012d, 0x0120,
    0x0003, 0x0002, 0x0002, 0x0002, 0x012d, 0x0124, 0x0003, 0x0002,
    0x0002, 0x0002, 0x012e, 0x003d, 0x0003, 0x0002, 0x0002, 0x0002,
    0x012f, 0x0131, 0x0009, 0x0004, 0x0002, 0x0002, 0x0130, 0x012f,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0130, 0x0131, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0131, 0x0132, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0132, 0x0133, 0x0007, 0x0035, 0x0002, 0x0002, 0x0133, 0x0135,
    0x0005, 0x003c, 0x001f, 0x0002, 0x0134, 0x0136, 0x0005, 0x0040,
    0x0021, 0x0002, 0x0135, 0x0134, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0135, 0x0136, 0x0003, 0x0002, 0x0002, 0x0002, 0x0136, 0x014f,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0137, 0x0138, 0x0007, 0x0041,
    0x0002, 0x0002, 0x0138, 0x013b, 0x0005, 0x003c, 0x001f, 0x0002,
    0x0139, 0x013a, 0x0007, 0x0046, 0x0002, 0x0002, 0x013a, 0x013c,
    0x0005, 0x001c, 0x000f, 0x0002, 0x013b, 0x0139, 0x0003, 0x0002,
    0x0002, 0x0002, 0x013b, 0x013c, 0x0003, 0x0002, 0x0002, 0x0002,
    0x013c, 0x014f, 0x0003, 0x0002, 0x0002, 0x0002, 0x013d, 0x013f,
    0x0009, 0x0005, 0x0002, 0x0002, 0x013e, 0x0140, 0x0007, 0x0034,
    0x0002, 0x0002, 0x013f, 0x013e, 0x0003, 0x0002, 0x0002, 0x0002,
    0x013f, 0x0140, 0x0003, 0x0002, 0x0002, 0x0002, 0x0140, 0x0141,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0141, 0x0142, 0x0007, 0x0035,
    0x0002, 0x0002, 0x0142, 0x0143, 0x0005, 0x003a, 0x001e, 0x0002,
    0x0143, 0x0144, 0x0005, 0x0040, 0x0021, 0x0002, 0x0144, 0x014f,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0145, 0x014a, 0x0007, 0x0042,
    0x0002, 0x0002, 0x0146, 0x0148, 0x0009, 0x0005, 0x0002, 0x0002,
    0x0147, 0x0149, 0x0007, 0x0034, 0x0002, 0x0002, 0x0148, 0x0147,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0148, 0x0149, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0149, 0x014b, 0x0003, 0x0002, 0x0002, 0x0002,
    0x014a, 0x0146, 0x0003, 0x0002, 0x0002, 0x0002, 0x014a, 0x014b,
    0x0003, 0x0002, 0x0002, 0x0002, 0x014b, 0x014c, 0x0003, 0x0002,
    0x0002, 0x0002, 0x014c, 0x014d, 0x0007, 0x0035, 0x0002, 0x0002,
    0x014d, 0x014f, 0x0005, 0x003c, 0x001f, 0x0002, 0x014e, 0x0130,
    0x0003, 0x0002, 0x0002, 0x0002, 0x014e, 0x0137, 0x0003, 0x0002,
    0x0002, 0x0002, 0x014e, 0x013d, 0x0003, 0x0002, 0x0002, 0x0002,
    0x014e, 0x0145, 0x0003, 0x0002, 0x0002, 0x0002, 0x014f, 0x003f,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0150, 0x0151, 0x0007, 0x0046,
    0x0002, 0x0002, 0x0151, 0x0157, 0x0005, 0x001c, 0x000f, 0x0002,
    0x0152, 0x0153, 0x0005, 0x0028, 0x0015, 0x0002, 0x0153, 0x0154,
    0x0005, 0x001c, 0x000f, 0x0002, 0x0154, 0x0156, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0155, 0x0152, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0156, 0x0159, 0x0003, 0x0002, 0x0002, 0x0002, 0x0157, 0x0155,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0157, 0x0158, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0158, 0x015d, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0159, 0x0157, 0x0003, 0x0002, 0x0002, 0x0002, 0x015a, 0x015b,
    0x0007, 0x0037, 0x0002, 0x0002, 0x015b, 0x015d, 0x0005, 0x0012,
    0x000a, 0x0002, 0x015c, 0x0150, 0x0003, 0x0002, 0x0002, 0x0002,
    0x015c, 0x015a, 0x0003, 0x0002, 0x0002, 0x0002, 0x015d, 0x0041,
    0x0003, 0x0002, 0x0002, 0x0002, 0x015e, 0x0163, 0x0005, 0x0046,
    0x0024, 0x0002, 0x015f, 0x0160, 0x0007, 0x0030, 0x0002, 0x0002,
    0x0160, 0x0162, 0x0005, 0x0046, 0x0024, 0x0002, 0x0161, 0x015f,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0162, 0x0165, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0163, 0x0161, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0163, 0x0164, 0x0003, 0x0002, 0x0002, 0x0002, 0x0164, 0x0043,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0165, 0x0163, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0166, 0x016f, 0x0009, 0x0006, 0x0002, 0x0002,
    0x0167, 0x016d, 0x0007, 0x003d, 0x0002, 0x0002, 0x0168, 0x016e,
    0x0007, 0x0035, 0x0002, 0x0002, 0x0169, 0x016a, 0x0007, 0x003a,
    0x0002, 0x0002, 0x016a, 0x016e, 0x0007, 0x003c, 0x0002, 0x0002,
    0x016b, 0x016c, 0x0007, 0x003b, 0x0002, 0x0002, 0x016c, 0x016e,
    0x0007, 0x003c, 0x0002, 0x0002, 0x016d, 0x0168, 0x0003, 0x0002,
    0x0002, 0x0002, 0x016d, 0x0169, 0x0003, 0x0002, 0x0002, 0x0002,
    0x016d, 0x016b, 0x0003, 0x0002, 0x0002, 0x0002, 0x016e, 0x0170,
    0x0003, 0x0002, 0x0002, 0x0002, 0x016f, 0x0167, 0x0003, 0x0002,
    0x0002, 0x0002, 0x016f, 0x0170, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0170, 0x0045, 0x0003, 0x0002, 0x0002, 0x0002, 0x0171, 0x0172,
    0x0007, 0x003e, 0x0002, 0x0002, 0x0172, 0x0173, 0x0005, 0x0044,
    0x0023, 0x0002, 0x0173, 0x0175, 0x0007, 0x0023, 0x0002, 0x0002,
    0x0174, 0x0176, 0x0005, 0x0048, 0x0025, 0x0002, 0x0175, 0x0174,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0175, 0x0176, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0176, 0x0177, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0177, 0x0178, 0x0007, 0x0022, 0x0002, 0x0002, 0x0178, 0x0180,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0179, 0x017a, 0x0007, 0x003f,
    0x0002, 0x0002, 0x017a, 0x017b, 0x0005, 0x0044, 0x0023, 0x0002,
    0x017b, 0x017c, 0x0007, 0x0023, 0x0002, 0x0002, 0x017c, 0x017d,
    0x0005, 0x0048, 0x0025, 0x0002, 0x017d, 0x017e, 0x0007, 0x0022,
    0x0002, 0x0002, 0x017e, 0x0180, 0x0003, 0x0002, 0x0002, 0x0002,
    0x017f, 0x0171, 0x0003, 0x0002, 0x0002, 0x0002, 0x017f, 0x0179,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0180, 0x0047, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0181, 0x0186, 0x0005, 0x0010, 0x0009, 0x0002,
    0x0182, 0x0183, 0x0007, 0x0030, 0x0002, 0x0002, 0x0183, 0x0185,
    0x0005, 0x0010, 0x0009, 0x0002, 0x0184, 0x0182, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0185, 0x0188, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0186, 0x0184, 0x0003, 0x0002, 0x0002, 0x0002, 0x0186, 0x0187,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0187, 0x0049, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0188, 0x0186, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0189, 0x018a, 0x0007, 0x0040, 0x0002, 0x0002, 0x018a, 0x018b,
    0x0007, 0x0023, 0x0002, 0x0002, 0x018b, 0x018c, 0x0005, 0x004c,
    0x0027, 0x0002, 0x018c, 0x018d, 0x0007, 0x0022, 0x0002, 0x0002,
    0x018d, 0x004b, 0x0003, 0x0002, 0x0002, 0x0002, 0x018e, 0x0193,
    0x0005, 0x004e, 0x0028, 0x0002, 0x018f, 0x0190, 0x0007, 0x0030,
    0x0002, 0x0002, 0x0190, 0x0192, 0x0005, 0x004e, 0x0028, 0x0002,
    0x0191, 0x018f, 0x0003, 0x0002, 0x0002, 0x0002, 0x0192, 0x0195,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0193, 0x0191, 0x0003, 0x0002,
    0x0002, 0x0002, 0x0193, 0x0194, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0194, 0x004d, 0x0003, 0x0002, 0x0002, 0x0002, 0x0195, 0x0193,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0196, 0x0197, 0x0007, 0x0047,
    0x0002, 0x0002, 0x0197, 0x004f, 0x0003, 0x0002, 0x0002, 0x0002,
    0x0198, 0x0199, 0x0007, 0x0047, 0x0002, 0x0002, 0x0199, 0x0051,
    0x0003, 0x0002, 0x0002, 0x0002, 0x019a, 0x019b, 0x0007, 0x0023,
    0x0002, 0x0002, 0x019b, 0x019c, 0x0005, 0x0006, 0x0004, 0x0002,
    0x019c, 0x019d, 0x0007, 0x0022, 0x0002, 0x0002, 0x019d, 0x0053,
    0x0003, 0x0002, 0x0002, 0x0002, 0x0033, 0x0057, 0x005f, 0x0062,
    0x006b, 0x006f, 0x0074, 0x0079, 0x007e, 0x0080, 0x008c, 0x0096,
    0x009f, 0x00ad, 0x00b7, 0x00c8, 0x00d8, 0x00de, 0x00e0, 0x00e5,
    0x00e9, 0x00ee, 0x00f0, 0x00f7, 0x00f9, 0x00fe, 0x0104, 0x010a,
    0x010c, 0x0110, 0x0114, 0x0118, 0x011b, 0x012d, 0x0130, 0x0135,
    0x013b, 0x013f, 0x0148, 0x014a, 0x014e, 0x0157, 0x015c, 0x0163,
    0x016d, 0x016f, 0x0175, 0x017f, 0x0186, 0x0193
};

/*
static gchar foo[] =
"\3\u0430\ud6d1\u8206\uad2d\u4417\uaef1\u8d80\uaadd\3K\u019f\4\2\t\2\4"
"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"
"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"
"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"
"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"
"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\3\2\6\2"
"V\n\2\r\2\16\2W\3\3\3\3\3\4\3\4\3\4\3\4\5\4`\n\4\3\4\5\4c\n\4\3\5\3\5"
"\3\6\3\6\3\7\3\7\3\7\5\7l\n\7\3\7\3\7\5\7p\n\7\3\7\3\7\3\7\5\7u\n\7\3"
"\7\3\7\3\7\5\7z\n\7\3\7\3\7\3\7\5\7\177\n\7\5\7\u0081\n\7\3\b\3\b\3\t"
"\3\t\3\n\3\n\3\n\3\n\7\n\u008b\n\n\f\n\16\n\u008e\13\n\3\n\3\n\3\13\3"
"\13\3\13\7\13\u0095\n\13\f\13\16\13\u0098\13\13\3\f\3\f\3\f\3\f\7\f\u009e"
"\n\f\f\f\16\f\u00a1\13\f\3\r\3\r\3\16\3\16\3\16\3\17\3\17\3\17\3\17\7"
"\17\u00ac\n\17\f\17\16\17\u00af\13\17\3\20\3\20\3\20\3\20\3\20\3\20\3"
"\20\5\20\u00b8\n\20\3\21\3\21\3\22\3\22\3\23\3\23\3\24\3\24\3\25\3\25"
"\3\26\3\26\3\27\3\27\3\27\5\27\u00c9\n\27\3\30\3\30\3\30\3\30\3\30\3\30"
"\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\5\30\u00d9\n\30\3\31\3\31\3\31"
"\3\31\7\31\u00df\n\31\f\31\16\31\u00e2\13\31\3\32\3\32\5\32\u00e6\n\32"
"\3\33\3\33\5\33\u00ea\n\33\3\33\3\33\3\33\5\33\u00ef\n\33\5\33\u00f1\n"
"\33\3\34\3\34\3\34\3\34\3\34\5\34\u00f8\n\34\5\34\u00fa\n\34\3\35\3\35"
"\3\35\5\35\u00ff\n\35\3\35\3\35\3\35\3\35\5\35\u0105\n\35\3\36\3\36\3"
"\36\3\36\5\36\u010b\n\36\5\36\u010d\n\36\3\36\3\36\5\36\u0111\n\36\3\37"
"\3\37\5\37\u0115\n\37\3\37\3\37\5\37\u0119\n\37\3\37\5\37\u011c\n\37\3"
"\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3"
"\37\3\37\5\37\u012e\n\37\3 \5 \u0131\n \3 \3 \3 \5 \u0136\n \3 \3 \3 "
"\3 \5 \u013c\n \3 \3 \5 \u0140\n \3 \3 \3 \3 \3 \3 \3 \5 \u0149\n \5 "
"\u014b\n \3 \3 \5 \u014f\n \3!\3!\3!\3!\3!\7!\u0156\n!\f!\16!\u0159\13"
"!\3!\3!\5!\u015d\n!\3\"\3\"\3\"\7\"\u0162\n\"\f\"\16\"\u0165\13\"\3#\3"
"#\3#\3#\3#\3#\3#\5#\u016e\n#\5#\u0170\n#\3$\3$\3$\3$\5$\u0176\n$\3$\3"
"$\3$\3$\3$\3$\3$\3$\5$\u0180\n$\3%\3%\3%\7%\u0185\n%\f%\16%\u0188\13%"
"\3&\3&\3&\3&\3&\3\'\3\'\3\'\7\'\u0192\n\'\f\'\16\'\u0195\13\'\3(\3(\3"
")\3)\3*\3*\3*\3*\3*\2\2+\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&("
"*,.\60\62\64\668:<>@BDFHJLNPR\2\7\4\2(+-.\4\2\7\t,,\4\2\63\63\66\66\3"
"\2CD\3\289\u01b0\2U\3\2\2\2\4Y\3\2\2\2\6[\3\2\2\2\bd\3\2\2\2\nf\3\2\2"
"\2\f\u0080\3\2\2\2\16\u0082\3\2\2\2\20\u0084\3\2\2\2\22\u0086\3\2\2\2"
"\24\u0091\3\2\2\2\26\u0099\3\2\2\2\30\u00a2\3\2\2\2\32\u00a4\3\2\2\2\34"
"\u00a7\3\2\2\2\36\u00b7\3\2\2\2 \u00b9\3\2\2\2\"\u00bb\3\2\2\2$\u00bd"
"\3\2\2\2&\u00bf\3\2\2\2(\u00c1\3\2\2\2*\u00c3\3\2\2\2,\u00c8\3\2\2\2."
"\u00d8\3\2\2\2\60\u00da\3\2\2\2\62\u00e5\3\2\2\2\64\u00e7\3\2\2\2\66\u00f2"
"\3\2\2\28\u00fb\3\2\2\2:\u0106\3\2\2\2<\u012d\3\2\2\2>\u014e\3\2\2\2@"
"\u015c\3\2\2\2B\u015e\3\2\2\2D\u0166\3\2\2\2F\u017f\3\2\2\2H\u0181\3\2"
"\2\2J\u0189\3\2\2\2L\u018e\3\2\2\2N\u0196\3\2\2\2P\u0198\3\2\2\2R\u019a"
"\3\2\2\2TV\5\6\4\2UT\3\2\2\2VW\3\2\2\2WU\3\2\2\2WX\3\2\2\2X\3\3\2\2\2"
"YZ\7G\2\2Z\5\3\2\2\2[\\\7\3\2\2\\_\5\24\13\2]^\7\4\2\2^`\5\60\31\2_]\3"
"\2\2\2_`\3\2\2\2`b\3\2\2\2ac\5\32\16\2ba\3\2\2\2bc\3\2\2\2c\7\3\2\2\2"
"de\7G\2\2e\t\3\2\2\2fg\7G\2\2g\13\3\2\2\2hi\5\4\3\2ij\7\61\2\2jl\3\2\2"
"\2kh\3\2\2\2kl\3\2\2\2lm\3\2\2\2mn\7G\2\2np\7\61\2\2ok\3\2\2\2op\3\2\2"
"\2pq\3\2\2\2qt\7G\2\2rs\7\6\2\2su\5\16\b\2tr\3\2\2\2tu\3\2\2\2u\u0081"
"\3\2\2\2vw\5\n\6\2wx\7\61\2\2xz\3\2\2\2yv\3\2\2\2yz\3\2\2\2z{\3\2\2\2"
"{\u0081\7G\2\2|~\7K\2\2}\177\5\16\b\2~}\3\2\2\2~\177\3\2\2\2\177\u0081"
"\3\2\2\2\u0080o\3\2\2\2\u0080y\3\2\2\2\u0080|\3\2\2\2\u0081\r\3\2\2\2"
"\u0082\u0083\7G\2\2\u0083\17\3\2\2\2\u0084\u0085\7G\2\2\u0085\21\3\2\2"
"\2\u0086\u0087\7#\2\2\u0087\u008c\5\f\7\2\u0088\u0089\7\60\2\2\u0089\u008b"
"\5\f\7\2\u008a\u0088\3\2\2\2\u008b\u008e\3\2\2\2\u008c\u008a\3\2\2\2\u008c"
"\u008d\3\2\2\2\u008d\u008f\3\2\2\2\u008e\u008c\3\2\2\2\u008f\u0090\7\""
"\2\2\u0090\23\3\2\2\2\u0091\u0096\5\f\7\2\u0092\u0093\7\60\2\2\u0093\u0095"
"\5\f\7\2\u0094\u0092\3\2\2\2\u0095\u0098\3\2\2\2\u0096\u0094\3\2\2\2\u0096"
"\u0097\3\2\2\2\u0097\25\3\2\2\2\u0098\u0096\3\2\2\2\u0099\u009a\7\4\2"
"\2\u009a\u009f\5\b\5\2\u009b\u009c\7\60\2\2\u009c\u009e\5\b\5\2\u009d"
"\u009b\3\2\2\2\u009e\u00a1\3\2\2\2\u009f\u009d\3\2\2\2\u009f\u00a0\3\2"
"\2\2\u00a0\27\3\2\2\2\u00a1\u009f\3\2\2\2\u00a2\u00a3\7\3\2\2\u00a3\31"
"\3\2\2\2\u00a4\u00a5\7\5\2\2\u00a5\u00a6\5\34\17\2\u00a6\33\3\2\2\2\u00a7"
"\u00ad\5.\30\2\u00a8\u00a9\5(\25\2\u00a9\u00aa\5.\30\2\u00aa\u00ac\3\2"
"\2\2\u00ab\u00a8\3\2\2\2\u00ac\u00af\3\2\2\2\u00ad\u00ab\3\2\2\2\u00ad"
"\u00ae\3\2\2\2\u00ae\35\3\2\2\2\u00af\u00ad\3\2\2\2\u00b0\u00b8\7K\2\2"
"\u00b1\u00b8\7G\2\2\u00b2\u00b3\7\32\2\2\u00b3\u00b4\7G\2\2\u00b4\u00b8"
"\7\32\2\2\u00b5\u00b8\7H\2\2\u00b6\u00b8\5\f\7\2\u00b7\u00b0\3\2\2\2\u00b7"
"\u00b1\3\2\2\2\u00b7\u00b2\3\2\2\2\u00b7\u00b5\3\2\2\2\u00b7\u00b6\3\2"
"\2\2\u00b8\37\3\2\2\2\u00b9\u00ba\5\36\20\2\u00ba!\3\2\2\2\u00bb\u00bc"
"\5\36\20\2\u00bc#\3\2\2\2\u00bd\u00be\5\36\20\2\u00be%\3\2\2\2\u00bf\u00c0"
"\t\2\2\2\u00c0\'\3\2\2\2\u00c1\u00c2\t\3\2\2\u00c2)\3\2\2\2\u00c3\u00c4"
"\7\25\2\2\u00c4+\3\2\2\2\u00c5\u00c9\7\n\2\2\u00c6\u00c7\7\n\2\2\u00c7"
"\u00c9\7,\2\2\u00c8\u00c5\3\2\2\2\u00c8\u00c6\3\2\2\2\u00c9-\3\2\2\2\u00ca"
"\u00cb\5\"\22\2\u00cb\u00cc\5&\24\2\u00cc\u00cd\5 \21\2\u00cd\u00d9\3"
"\2\2\2\u00ce\u00cf\5$\23\2\u00cf\u00d0\5*\26\2\u00d0\u00d1\5\"\22\2\u00d1"
"\u00d2\7\7\2\2\u00d2\u00d3\5 \21\2\u00d3\u00d9\3\2\2\2\u00d4\u00d5\5$"
"\23\2\u00d5\u00d6\5,\27\2\u00d6\u00d7\7\13\2\2\u00d7\u00d9\3\2\2\2\u00d8"
"\u00ca\3\2\2\2\u00d8\u00ce\3\2\2\2\u00d8\u00d4\3\2\2\2\u00d9/\3\2\2\2"
"\u00da\u00e0\5\62\32\2\u00db\u00dc\7\60\2\2\u00dc\u00df\5\62\32\2\u00dd"
"\u00df\5> \2\u00de\u00db\3\2\2\2\u00de\u00dd\3\2\2\2\u00df\u00e2\3\2\2"
"\2\u00e0\u00de\3\2\2\2\u00e0\u00e1\3\2\2\2\u00e1\61\3\2\2\2\u00e2\u00e0"
"\3\2\2\2\u00e3\u00e6\5\64\33\2\u00e4\u00e6\5<\37\2\u00e5\u00e3\3\2\2\2"
"\u00e5\u00e4\3\2\2\2\u00e6\63\3\2\2\2\u00e7\u00f0\5\66\34\2\u00e8\u00ea"
"\t\4\2\2\u00e9\u00e8\3\2\2\2\u00e9\u00ea\3\2\2\2\u00ea\u00eb\3\2\2\2\u00eb"
"\u00ec\7\65\2\2\u00ec\u00ee\5<\37\2\u00ed\u00ef\5@!\2\u00ee\u00ed\3\2"
"\2\2\u00ee\u00ef\3\2\2\2\u00ef\u00f1\3\2\2\2\u00f0\u00e9\3\2\2\2\u00f0"
"\u00f1\3\2\2\2\u00f1\65\3\2\2\2\u00f2\u00f9\58\35\2\u00f3\u00f4\7A\2\2"
"\u00f4\u00f7\5<\37\2\u00f5\u00f6\7F\2\2\u00f6\u00f8\5\34\17\2\u00f7\u00f5"
"\3\2\2\2\u00f7\u00f8\3\2\2\2\u00f8\u00fa\3\2\2\2\u00f9\u00f3\3\2\2\2\u00f9"
"\u00fa\3\2\2\2\u00fa\67\3\2\2\2\u00fb\u0104\5:\36\2\u00fc\u00fe\t\5\2"
"\2\u00fd\u00ff\7\64\2\2\u00fe\u00fd\3\2\2\2\u00fe\u00ff\3\2\2\2\u00ff"
"\u0100\3\2\2\2\u0100\u0101\7\65\2\2\u0101\u0102\5:\36\2\u0102\u0103\5"
"@!\2\u0103\u0105\3\2\2\2\u0104\u00fc\3\2\2\2\u0104\u0105\3\2\2\2\u0105"
"9\3\2\2\2\u0106\u0110\5<\37\2\u0107\u010c\7B\2\2\u0108\u010a\t\5\2\2\u0109"
"\u010b\7\64\2\2\u010a\u0109\3\2\2\2\u010a\u010b\3\2\2\2\u010b\u010d\3"
"\2\2\2\u010c\u0108\3\2\2\2\u010c\u010d\3\2\2\2\u010d\u010e\3\2\2\2\u010e"
"\u010f\7\65\2\2\u010f\u0111\5<\37\2\u0110\u0107\3\2\2\2\u0110\u0111\3"
"\2\2\2\u0111;\3\2\2\2\u0112\u0114\5\b\5\2\u0113\u0115\5J&\2\u0114\u0113"
"\3\2\2\2\u0114\u0115\3\2\2\2\u0115\u0118\3\2\2\2\u0116\u0117\7\6\2\2\u0117"
"\u0119\5\n\6\2\u0118\u0116\3\2\2\2\u0118\u0119\3\2\2\2\u0119\u011b\3\2"
"\2\2\u011a\u011c\5B\"\2\u011b\u011a\3\2\2\2\u011b\u011c\3\2\2\2\u011c"
"\u012e\3\2\2\2\u011d\u011e\5R*\2\u011e\u011f\5P)\2\u011f\u012e\3\2\2\2"
"\u0120\u0121\7#\2\2\u0121\u0122\5\60\31\2\u0122\u0123\7\"\2\2\u0123\u012e"
"\3\2\2\2\u0124\u0125\7E\2\2\u0125\u0126\5\62\32\2\u0126\u0127\7C\2\2\u0127"
"\u0128\7\64\2\2\u0128\u0129\7\65\2\2\u0129\u012a\5\62\32\2\u012a\u012b"
"\7F\2\2\u012b\u012c\5\34\17\2\u012c\u012e\3\2\2\2\u012d\u0112\3\2\2\2"
"\u012d\u011d\3\2\2\2\u012d\u0120\3\2\2\2\u012d\u0124\3\2\2\2\u012e=\3"
"\2\2\2\u012f\u0131\t\4\2\2\u0130\u012f\3\2\2\2\u0130\u0131\3\2\2\2\u0131"
"\u0132\3\2\2\2\u0132\u0133\7\65\2\2\u0133\u0135\5<\37\2\u0134\u0136\5"
"@!\2\u0135\u0134\3\2\2\2\u0135\u0136\3\2\2\2\u0136\u014f\3\2\2\2\u0137"
"\u0138\7A\2\2\u0138\u013b\5<\37\2\u0139\u013a\7F\2\2\u013a\u013c\5\34"
"\17\2\u013b\u0139\3\2\2\2\u013b\u013c\3\2\2\2\u013c\u014f\3\2\2\2\u013d"
"\u013f\t\5\2\2\u013e\u0140\7\64\2\2\u013f\u013e\3\2\2\2\u013f\u0140\3"
"\2\2\2\u0140\u0141\3\2\2\2\u0141\u0142\7\65\2\2\u0142\u0143\5:\36\2\u0143"
"\u0144\5@!\2\u0144\u014f\3\2\2\2\u0145\u014a\7B\2\2\u0146\u0148\t\5\2"
"\2\u0147\u0149\7\64\2\2\u0148\u0147\3\2\2\2\u0148\u0149\3\2\2\2\u0149"
"\u014b\3\2\2\2\u014a\u0146\3\2\2\2\u014a\u014b\3\2\2\2\u014b\u014c\3\2"
"\2\2\u014c\u014d\7\65\2\2\u014d\u014f\5<\37\2\u014e\u0130\3\2\2\2\u014e"
"\u0137\3\2\2\2\u014e\u013d\3\2\2\2\u014e\u0145\3\2\2\2\u014f?\3\2\2\2"
"\u0150\u0151\7F\2\2\u0151\u0157\5\34\17\2\u0152\u0153\5(\25\2\u0153\u0154"
"\5\34\17\2\u0154\u0156\3\2\2\2\u0155\u0152\3\2\2\2\u0156\u0159\3\2\2\2"
"\u0157\u0155\3\2\2\2\u0157\u0158\3\2\2\2\u0158\u015d\3\2\2\2\u0159\u0157"
"\3\2\2\2\u015a\u015b\7\67\2\2\u015b\u015d\5\22\n\2\u015c\u0150\3\2\2\2"
"\u015c\u015a\3\2\2\2\u015dA\3\2\2\2\u015e\u0163\5F$\2\u015f\u0160\7\60"
"\2\2\u0160\u0162\5F$\2\u0161\u015f\3\2\2\2\u0162\u0165\3\2\2\2\u0163\u0161"
"\3\2\2\2\u0163\u0164\3\2\2\2\u0164C\3\2\2\2\u0165\u0163\3\2\2\2\u0166"
"\u016f\t\6\2\2\u0167\u016d\7=\2\2\u0168\u016e\7\65\2\2\u0169\u016a\7:"
"\2\2\u016a\u016e\7<\2\2\u016b\u016c\7;\2\2\u016c\u016e\7<\2\2\u016d\u0168"
"\3\2\2\2\u016d\u0169\3\2\2\2\u016d\u016b\3\2\2\2\u016e\u0170\3\2\2\2\u016f"
"\u0167\3\2\2\2\u016f\u0170\3\2\2\2\u0170E\3\2\2\2\u0171\u0172\7>\2\2\u0172"
"\u0173\5D#\2\u0173\u0175\7#\2\2\u0174\u0176\5H%\2\u0175\u0174\3\2\2\2"
"\u0175\u0176\3\2\2\2\u0176\u0177\3\2\2\2\u0177\u0178\7\"\2\2\u0178\u0180"
"\3\2\2\2\u0179\u017a\7?\2\2\u017a\u017b\5D#\2\u017b\u017c\7#\2\2\u017c"
"\u017d\5H%\2\u017d\u017e\7\"\2\2\u017e\u0180\3\2\2\2\u017f\u0171\3\2\2"
"\2\u017f\u0179\3\2\2\2\u0180G\3\2\2\2\u0181\u0186\5\20\t\2\u0182\u0183"
"\7\60\2\2\u0183\u0185\5\20\t\2\u0184\u0182\3\2\2\2\u0185\u0188\3\2\2\2"
"\u0186\u0184\3\2\2\2\u0186\u0187\3\2\2\2\u0187I\3\2\2\2\u0188\u0186\3"
"\2\2\2\u0189\u018a\7@\2\2\u018a\u018b\7#\2\2\u018b\u018c\5L\'\2\u018c"
"\u018d\7\"\2\2\u018dK\3\2\2\2\u018e\u0193\5N(\2\u018f\u0190\7\60\2\2\u0190"
"\u0192\5N(\2\u0191\u018f\3\2\2\2\u0192\u0195\3\2\2\2\u0193\u0191\3\2\2"
"\2\u0193\u0194\3\2\2\2\u0194M\3\2\2\2\u0195\u0193\3\2\2\2\u0196\u0197"
"\7G\2\2\u0197O\3\2\2\2\u0198\u0199\7G\2\2\u0199Q\3\2\2\2\u019a\u019b\7"
"#\2\2\u019b\u019c\5\6\4\2\u019c\u019d\7\"\2\2\u019dS\3\2\2\2\63W_bkot"
"y~\u0080\u008c\u0096\u009f\u00ad\u00b7\u00c8\u00d8\u00de\u00e0\u00e5\u00e9"
"\u00ee\u00f0\u00f7\u00f9\u00fe\u0104\u010a\u010c\u0110\u0114\u0118\u011b"
"\u012d\u0130\u0135\u013b\u013f\u0148\u014a\u014e\u0157\u015c\u0163\u016d"
"\u016f\u0175\u017f\u0186\u0193";
*/

#include <string.h>
/*
void
deserialize(char *serialized) {
    gchar *glue = "";
    gchar *comma = ", ";
    glue = comma;
    gint data_length = g_utf8_strlen (serialized, G_MAXINT);

    gunichar *data = g_new0(gunichar, data_length);
    data[0] = serialized[0];

    // don't adjust the first value since that's the version number
    g_print("0x%0.4X%s\n", data[0], glue);
    int i;
    for (i = 1; i < data_length; i++) {
        gunichar v = g_utf8_get_char (g_utf8_offset_to_pointer (serialized, i));

        guint32 vv= (guint32)v;
        v = vv-2;
        if (vv>0xFF) {
            g_print("0x%0.4X%s", v, glue);
        } else {
            g_print("0x%0.2X%s", v, glue);
        }
        if (i%8==0) {
            g_print("\n");
        }
//        if (i==1) {
//            glue = comma;
//        }

        data[i] = v & 0x0000FFFF;
    }
}
*/


void
deserialize(guint *serialized, gint data_length) {
    gchar *glue = "";
    gchar *comma = ", ";
    glue = comma;

    // don't adjust the first value since that's the version number
    g_print("0x%0.4X%s\n", serialized[0], glue);
    int i;
    for (i = 1; i < data_length; i++) {

        guint v = serialized[i] - 2;
        if (v>0xFF) {
            g_print("0x%0.4X%s", v, glue);
        } else {
            g_print("0x%0.2X%s", v, glue);
        }
        if (i%8==0) {
            g_print("\n");
        }
    }
}


int
main (int argc, char *argv[])
{
//    g_print("%p\n", serialized_data);
    gint n = G_N_ELEMENTS(serialized_data);
    deserialize(serialized_data, n);
//    deserialize(foo);

    return 0;
}

#endif
