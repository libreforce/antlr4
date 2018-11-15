#include <stdlib.h>
#include <glib-object.h>

#include "antlr-runtime/runtime.h"


#include "L.h"

static void
test_functional_lexer_exec_eof_suffix_in_first_rule_2(void) {

    const gchar *filename = g_strdup_printf("%s/%s", PACKAGE_SRC_DIR, "input.txt");
    GError *error = NULL;
    AntlrFileStream *file_stream = antlr_file_stream_new_from_filename_encoding(filename, NULL, &error);
    if (!file_stream) {
        g_print("%s\n", error->message);
        g_clear_error(&error);
        return;
    }

    TestL *lexer = test_l_new_with_char_stream(ANTLR_CHAR_STREAM(file_stream));
    AntlrCommonTokenStream *tokens = antlr_common_token_stream_new_with_token_source(ANTLR_TOKEN_SOURCE(lexer));
    AntlrBufferedTokenStream *tokens_buffered = ANTLR_BUFFERED_TOKEN_STREAM(tokens);
    antlr_buffered_token_stream_fill(tokens_buffered);
    GPtrArray_AntlrToken *array = tokens_buffered->tokens;
    int i;
    for(i=0; i<array->len; i++) {
        AntlrToken *token = g_ptr_array_index(array, i);
        gchar *str = antlr_token_to_string(token);
        g_print("%s\n", str);
        g_free(str);
    }

}

static void
test_functional_lexer_exec_eof_suffix_in_first_rule_2_test (void)
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
      test_functional_lexer_exec_eof_suffix_in_first_rule_2();
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
 * java -Xmx500M org.antlr.v4.Tool -Dlanguage=GLib -package Test L.g4
 */
int main(int argc, char* argv[]) {

#if 1
    g_test_init (&argc, &argv, NULL);

    g_test_add_func("/test", test_functional_lexer_exec_eof_suffix_in_first_rule_2_test);

    g_test_run();
#else
    test_functional_lexer_exec_eof_suffix_in_first_rule_2();
#endif

    return 0;
}
