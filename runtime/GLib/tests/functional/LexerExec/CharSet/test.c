
#include "antlr-runtime/runtime.h"


#include "L.h"



void
test_functional_lexer_exec_char_set(void) {
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


#if 0
void
test_functional_lexer_exec_char_set_test (void)
{
    const gchar  *filename=NULL;
    gchar        *output=NULL;
    gsize        *length=0;
    GError       *error=NULL;
    filename = g_strdup_printf("%s/%s", PACKAGE_SRC_DIR, "output.txt");
    if (!g_file_get_contents(filename, &output, &length, &error)) {
        g_assert_not_reached();
        exit(1);
    }


  if (g_test_subprocess ())
    {
      test_functional_lexer_exec_char_set ();
      return;
    }

  // Reruns this same test in a subprocess
  g_test_trap_subprocess (NULL, 0, 0);
  g_test_trap_assert_failed ();
  g_test_trap_assert_stdout (output);
}

#else

void
test_functional_lexer_exec_char_set_test (void)
{
    const gchar  *filename=NULL;
    gchar        *output=NULL;
    gsize        *length=0;
    GError       *error=NULL;
    filename = g_strdup_printf("%s/%s", PACKAGE_SRC_DIR, "output.txt");
    if (!g_file_get_contents(filename, &output, &length, &error)) {
        g_assert_not_reached();
        exit(1);
    }

    if (g_test_trap_fork (0, G_TEST_TRAP_SILENCE_STDOUT | G_TEST_TRAP_SILENCE_STDERR))
    {
      //test_functional_lexer_exec_char_set ();
      exit (0);
    }
    g_test_trap_assert_passed ();
    //g_test_trap_assert_stdout (output);
}
#endif

