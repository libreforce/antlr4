/**
 *
 * export MAVEN_OPTS="-Xmx1G"     # don't forget this on linux
 * mvn install -DskipTests=true   # make sure all artifacts are visible on this machine
 *
 */
#include <config.h>


#include <glib-object.h>
#include <glib/gi18n.h>


#include <antlr-runtime/runtime.h>

#include "php/PhpLexerBase.h"
#include "php/PhpLexer.h"
#include "php/PhpParser.h"
//#include "php/PhpListener.h"
//#include "php/PhpBaseListener.h"
#include "php/PhpParserListener.h"
#include "php/PhpParserBaseListener.h"


#if 0

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

    const gchar *filename = "/home/gaulouis/local/src/glib-antlr/share/script/script.php";
    GError *error = NULL;
    AntlrFileStream *file_stream = antlr_file_stream_new_from_filename_encoding(filename, NULL, &error);
    if (!file_stream) {
        g_print("Error: %s\n", error->message);
        g_error_free(error);
        return -1;
    }


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
    PhpParserListener *listener = php_parser_base_listener_new();
    AntlrParseTreeWalker *walker = antlr_parse_tree_walker_new();
    antlr_parse_tree_walker_walk(walker, ANTLR_PARSE_TREE_LISTENER(listener), ANTLR_PARSE_TREE(block_context));

    g_object_unref(listener);
    g_object_unref(walker);
    g_object_unref(block_context);
    g_object_unref(tokens);
    g_object_unref(parser);
    g_object_unref(lexer);

    php_lexer_atn_free();

#ifdef G_OS_WIN32
    g_free (prefix);
    g_free (localedir);
#endif

    return 0;
}

#else
#include <glib-object.h>
#include "d3/d3.h"

#if 0
(htmlDocument (htmlElementOrPhpBlock (phpBlock (topStatement (statement (expressionStatement (expression (chain (chainBase (keyedVariable $var))) (assignmentOperator =) (expression (string " (interpolatedStringPart Hello World) "))) ;))))) <EOF>)

(htmlDocument (htmlElementOrPhpBlock (htmlElements (htmlElement <?p) (htmlElement hp) (htmlElement var) (htmlElement =) (htmlElement ") (htmlElement Hello World) (htmlElement ") (htmlElement >))) <EOF>)
#endif


/**
 * cd ~/local/src/glib-antlr/share/grammar/php
 * java -Xmx5M org.antlr.v4.Tool -Dlanguage=GLib -package Php -o /home/gaulouis/local/src/glib-antlr/lib/php PhpLexer.g4
 * java -Xmx500M org.antlr.v4.Tool -Dlanguage=GLib -package Php -o /home/gaulouis/local/src/glib-antlr/lib/php PhpParser.g4
 *
 */
int
main (int argc, char *argv[])
{
    const gchar *filename = "/home/gaulouis/local/src/glib-antlr/share/script/script.php";
    GError *error = NULL;
    AntlrFileStream *file_stream = antlr_file_stream_new_from_filename_encoding(filename, NULL, &error);
    if (!file_stream) {
        g_print("%s\n", error->message);
        g_clear_error(&error);
        return 1;
    }
    MyPhpLexer *lexer = my_php_lexer_new_with_char_stream(ANTLR_CHAR_STREAM(file_stream));
    //AntlrATN *atn_lexer = antlr_recognizer_get_atn(ANTLR_RECOGNIZER(lexer));
    //g_print("Please uderstand ATN representation (%p)\n", atn_lexer);
    AntlrCommonTokenStream *tokens = antlr_common_token_stream_new_with_token_source(ANTLR_TOKEN_SOURCE(lexer));
    MyPhpParser *parser = my_php_parser_new_with_token_stream( ANTLR_TOKEN_STREAM(tokens) );
//    AntlrATN *atn_parser = antlr_recognizer_get_atn(ANTLR_RECOGNIZER(parser));
//    g_print("Please understand ATN representation (%p)\n", atn_parser);
///    GArrayAntlrDFA *decision = php_parser_get_decision_to_dfa(parser);
///    g_print("Dans la version Java : PhpParser._decisionToDFA[1].s0!=NULL");
///    g_print("%p\n", decision);
    GError *parser_error = NULL;

    antlr_lexer_push_mode(ANTLR_LEXER(lexer), MY_PHP_LEXER_RULE_PHP);
    MyContextPhpBlock *context = my_php_parser_parse_php_block(parser, &parser_error);

    //MyContextHtmlDocument *context = my_php_parser_parse_html_document(parser, &parser_error);
    if (context==NULL) {
        if (parser_error) {
            g_log (g_quark_to_string(parser_error->domain),
                   G_LOG_LEVEL_ERROR,
                   "failed to parse grammar: %s (%d)", parser_error->message, parser_error->code);
        } else {
            g_error("ANTLR-ERROR 100: failed to parse grammar\n");
        }
    }


#if 1
    //g_print("%s\n", antlr_rule_context_to_string_tree(stat_context));
    GArray *rule_names = antlr_recognizer_get_rule_names(ANTLR_RECOGNIZER(parser));
    g_print("%s\n", antlr_tree_to_string_tree(ANTLR_TREE(context), rule_names));
#else
    /*
    AntlrTree *php_block = antlr_tree_get_child(ANTLR_TREE(context), 0);
    g_print("%s\n", antlr_parse_tree_get_text(ANTLR_PARSE_TREE(php_block)));
    */
    gint i;
    gint size = antlr_tree_get_child_count(ANTLR_TREE(context));
    for (i=0; i<size; i++) {
        AntlrTree *stament = antlr_tree_get_child(ANTLR_TREE(context), i);
        g_print("%s\n", antlr_parse_tree_get_text(ANTLR_PARSE_TREE(stament)));
    }
#endif

#if 0
    //antlr_tree_export(tree, ANTLR_EXPORT_LISP);
    //antlr_lisp_export(tree);
    AntlrD3 *d3_export = antlr_d3_new(/*block_context, rule_names*/);
    d3_export->rule_names = rule_names;
    d3_export->indent_depth = 0;
    d3_export->format = ANTLR_D3_INDENT;
    AntlrD3Output *output = antlr_d3_export(d3_export, ANTLR_TREE(block_context), NULL);
    gchar *str_output = output->str;
    g_print("%s\n", str_output);
    //g_print("%s\n", antlr_rule_context_to_string_from_recognizer(ANTLR_RULE_CONTEXT(block_context), ANTLR_RECOGNIZER(parser)));
#endif

#if 0
    g_object_unref(file_stream);
    g_object_unref(lexer);
    g_object_unref(tokens);
    g_object_unref(parser);
    g_object_unref(context);
    //g_object_unref(walker);
    //g_object_unref(listener);

    // antlr_quit();
    my_php_lexer_atn_free();
    my_php_lexer_decision_to_dfa_free ();
    my_php_lexer_token_names_free();
    my_php_parser_atn_free();
    my_php_parser_decision_to_dfa_free ();
    my_php_parser_token_names_free();

    antlr_atn_simulator_error_free();
    antlr_semantic_context_none_free();
    antlr_rule_context_empty_free();
    antlr_prediction_context_empty_free();

    //antlr_object_garbage_collector_atn_config(); c'est trop la merde ce ATNConfig. Qui est cencé etre le propriétaire ?
    // que représente ATNConfig ? see la doc => le chemin de transition vers un état ???



    g_print("\n");
    antlr_object_dump_instance();
//    antlr_object_dump_interval_set();
//    antlr_object_dump_interval();
    //antlr_object_dump_collector_interval_set();

/*
AntlrIntervalSet(17 instances/17) dont 25 Interval
AntlrInterval(31 instances/31)
 */
#endif

    return 0;
}

#endif
