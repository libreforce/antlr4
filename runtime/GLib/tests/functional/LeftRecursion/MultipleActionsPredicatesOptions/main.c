#include <stdlib.h>
#include <glib-object.h>

#include "antlr-runtime/runtime.h"


#include "TLexer.h"
#include "TParser.h"
#include "TBaseListener.h"
#include "TListener.h"


gchar *input[]={
    "a",
    "1",
    "a-1",
    "a.b",
    "a.this",
    "-a",
    "-a+b"
};
gchar *output[]={
    "(s (e a) <EOF>)\n",
    "(s (e 1) <EOF>)\n",
    "(s (e (e a) - (e 1)) <EOF>)\n",
    "(s (e (e a) . b) <EOF>)\n",
    "(s (e (e a) . this) <EOF>)\n",
    "(s (e - (e a)) <EOF>)\n",
    "(s (e (e - (e a)) + (e b)) <EOF>)\n"
};

static void
functional_left_recursion_direct_call_to_left_recursive_rule(void) {

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
    TestContextS *context = test_t_parser_parse_s(parser, &parser_error);
    if (context==NULL) {
        if (parser_error) {
            g_log (g_quark_to_string(parser_error->domain),
                   G_LOG_LEVEL_ERROR,
                   "failed to parse grammar: %s (%d)", parser_error->message, parser_error->code);
        } else {
            g_error("ANTLR-ERROR 100: failed to parse grammar\n");
        }
    }

#if 0
    GArray *rule_names = antlr_recognizer_get_rule_names(ANTLR_RECOGNIZER(parser));
    g_print("%s\n", antlr_tree_to_string_tree(ANTLR_TREE(context), rule_names));
#endif

}

static void
functional_left_recursion_direct_call_to_left_recursive_rule_test (void)
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
      functional_left_recursion_direct_call_to_left_recursive_rule();
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

    g_test_add_func("/test", functional_left_recursion_direct_call_to_left_recursive_rule_test);

    g_test_run();
#else
    functional_left_recursion_direct_call_to_left_recursive_rule();
#endif

    return 0;
}
