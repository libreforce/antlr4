#include <stdlib.h>
#include <glib-object.h>

#include "antlr-runtime/runtime.h"


#include "TLexer.h"
#include "TParser.h"
#include "TBaseListener.h"
#include "TListener.h"

static void
test_functional_t_parser_exec_labels(void) {

    const gchar *filename = g_strdup_printf("%s/%s", PACKAGE_SRC_DIR, "input.txt");
    GError *error = NULL;
    AntlrFileStream *file_stream = antlr_file_stream_new_from_filename_encoding(filename, NULL, &error);
    if (!file_stream) {
        g_print("%s\n", error->message);
        g_clear_error(&error);
        return;
    }

    TestTLexer *lexer = test_t_lexer_new_with_char_stream(ANTLR_CHAR_STREAM(file_stream));
    AntlrCommonTokenStream *tokens = antlr_common_token_stream_new_with_token_source(ANTLR_TOKEN_SOURCE(lexer));
    TestTParser *parser = test_t_parser_new_with_token_stream( ANTLR_TOKEN_STREAM(tokens) );
    GError *parser_error = NULL;
    TestContextA *context = test_t_parser_parse_a(parser, &parser_error);
    if (context==NULL) {
        if (parser_error) {
            g_log (g_quark_to_string(parser_error->domain),
                   G_LOG_LEVEL_ERROR,
                   "failed to parse grammar: %s (%d)", parser_error->message, parser_error->code);
        } else {
            g_error("ANTLR-ERROR 100: failed to parse grammar\n");
        }
    }


}

static void
test_functional_t_parser_exec_labels_test (void)
{
    const gchar  *filename=NULL;
    gchar        *output=NULL;
    gsize         length=0;
    GError       *error=NULL;
    filename = g_strdup_printf("%s/%s", PACKAGE_SRC_DIR, "output.txt");
    if (!g_file_get_contents(filename, &output, &length, &error)) {
        g_assert_not_reached();
        //exit(1);
    }

  if (g_test_subprocess ())
    {
      test_functional_t_parser_exec_labels();
      return;
    }

  // Reruns this same test in a subprocess
  g_test_trap_subprocess (NULL, 0, 0);

  g_test_trap_assert_passed ();
  g_test_trap_assert_stdout (output);

//  g_test_trap_assert_failed ();
//  g_test_trap_assert_stderr ("*ERROR*too large*");
}

/**
 * export CLASSPATH="/home/gaulouis/local/src/tmp/antlr4.6/tool/target/antlr4-4.6-complete.jar"
 * java -Xmx500M org.antlr.v4.Tool -Dlanguage=GLib -package Test T.g4
 */
int main(int argc, char* argv[]) {

#if 0
    g_test_init (&argc, &argv, NULL);

    g_test_add_func("/test", test_functional_t_parser_exec_labels_test);

    g_test_run();
#else
    test_functional_t_parser_exec_labels();
#endif

    return 0;
}


/*
 * FIXE: member vector
 * push_back
 * _init() g_ptr_array_new
 * include TParser.h
 * FIXME:
 * #define TEST_T_PARSER_EOF ANTLR_TOKEN_EOF
 *
 */
