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
 * mvn -DskipTests install
 *
 * java -Xmx500M -cp "$CLASSPATH" org.antlr.v4.Tool -Dlanguage=GLib -package Sql Hello.g
 *
 */


#include <config.h>


#include <glib-object.h>
#include <glib/gi18n.h>


#include <antlr-runtime/runtime.h>


///#include "mysql/antlr.h"
///#include "mysql/lexer.h"
///#include "mysql/parser.h"
///#include "mysql/listener.h"
///#include "mysql/visitor.h"
#include "mysql/MysqlLexer.h"
#include "mysql/MysqlParser.h"
#include "mysql/MysqlParserListener.h"
#include "mysql/MysqlParserBaseListener.h"
//#include "mysql/MysqlListener.h"

//#include "antlr-runtime/proxy-error-listener.h"
#include "d3/d3.h"

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

    // antlr_init(&argc, &argv);

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
    MysqlContextStat *stat_context = mysql_parser_parse_stat(parser, &error);
    if (!stat_context) {
        if (error) {
            g_print("%s\n", error->message);
            g_clear_error(&error);
        } else {
            g_print("%s\n", "Error reporting ignored");
        }
    }
    GError **pareser_error = &error;
    g_return_val_if_fail (pareser_error == NULL || *pareser_error == NULL, -1);



#ifdef EXPORT
    //g_print("%s\n", antlr_rule_context_to_string_tree(stat_context));
    GArray *rule_names = antlr_recognizer_get_rule_names(ANTLR_RECOGNIZER(parser));
    g_print("%s\n", antlr_tree_to_string_tree(ANTLR_TREE(stat_context), rule_names));

    //antlr_tree_export(tree, ANTLR_EXPORT_LISP);
    //antlr_lisp_export(tree);
    AntlrD3 *d3_export = antlr_d3_new(/*stat_context, rule_names*/);
    d3_export->rule_names = rule_names;
    d3_export->indent_depth = 0;
    d3_export->format = ANTLR_D3_INDENT;
    AntlrD3Output *output = antlr_d3_export(d3_export, ANTLR_TREE(stat_context), NULL);
    gchar *str_output = output->str;
    g_print("%s\n", str_output);
    //g_print("%s\n", antlr_rule_context_to_string_from_recognizer(ANTLR_RULE_CONTEXT(stat_context), ANTLR_RECOGNIZER(parser)));
#endif

    /*
    GError *parser_error = NULL;
    MysqlContextSchemaName *stat_context = mysql_parser_parse_schema_name(parser, &parser_error);
    if (parser_error) {
        g_print("%s\n", parser_error->message);
        g_clear_error(&error);
    }
    */


    // Walk it and attach our listener
//#define WALK 1

//#define WALK 1
//BNF
//EBNF

#ifdef WALK
    AntlrParseTreeWalker *walker = antlr_parse_tree_walker_new();
    MysqlParserBaseListener *listener = mysql_parser_base_listener_new();
    antlr_parse_tree_walker_walk(walker, ANTLR_PARSE_TREE_LISTENER(listener), ANTLR_PARSE_TREE(stat_context));
#endif

    // faire un truc pour construire rapidement des langague que je puisse debuger pas a pas
    // pour checker plein de language, du plus compliqué au plus simple
    // dans eclipse faire un projet qui compile tout les langge et le main switchera le language


    g_object_unref(file_stream);
    g_object_unref(lexer);
    g_object_unref(tokens);
    g_object_unref(parser);
    g_object_unref(stat_context);
#ifdef WALK
    g_object_unref(walker);
    g_object_unref(listener);
#endif

    // antlr_lexer_finalize();
    mysql_lexer_atn_free();
    mysql_lexer_decision_to_dfa_free ();
    mysql_lexer_token_names_free ();
    // antlr_parser_finalize();
    mysql_parser_atn_free();
    mysql_parser_decision_to_dfa_free ();
    mysql_parser_token_names_free ();

    // antlr_quit();
    antlr_atn_simulator_error_free();
    antlr_semantic_context_none_free();
    antlr_rule_context_empty_free();
    antlr_prediction_context_empty_free();


    //antlr_object_garbage_collector_atn_config();
    antlr_object_dump_instance();

//    antlr_object_dump_interval_set();
//    antlr_object_dump_interval();

    return 0;
}
/**
 * select t.field as f from table as t
 * select field from table where id=10
 * select field from table
 *
 *
 *
 *
 */

#if 0

typedef AntlrRecognizer AntlrAnalyzer;

AntlrAnalyzer *parser = antlr_parser_new();
AntlrAnalyzer *parser = antlr_parser_factory();// parser.set decision etc ...
AntlrAnalyzer *parser = antlr_parser_factory_load("mysql");// export=ANTLR_MODULE; libmysql.so, mysql.dll

antlr_parser_set_error_handler(parser, mysql_error);
antlr_parser_set_parser_handler(parser, mysql_handler);
antlr_parser_set_visitor(parser, mysql_visitor);

antlr_parser_new_from_file("test.xml");
antlr_parser_new_from_string("hello");

antlr_parser_load_file(parser, "test.xml");
antlr_parser_load_string(parser, "hello");

mysql_antlr_parse_rule(parser, "test.xml");
antlr_parse_from_string(parser, MY_RULE, "hello");






AntlrError *error=NULL;
AntlrParser *parser=antlr_factory_create("mysql");
AntlrTree *tree=antlr_parse(parser,  // MysqlParser
                            "name",  // MYSQL_RULE_NAME
                            "john",  // string input
                            &error); // Error
if (error) {
  antlr_println("%s", error->message);
  // tree->getErrorAt();
  antlr_clear_error(&error);
}



#endif
