#include <glib-object.h>

#include "antlr-runtime/runtime.h"
#include "antlr-runtime/token.h"

#include "L.h"

/**
 * export CLASSPATH="/home/gaulouis/local/src/tmp/antlr4.6/tool/target/antlr4-4.6-complete.jar"
 * java -Xmx500M org.antlr.v4.Tool -Dlanguage=GLib -package Test L.g4
 */
int main(int argc, const char* argv[]) {

    /*
    AntlrInputStream *file_stream = antlr_input_stream_new_from_string("[\"foo]");
    */
    const gchar *filename = g_strdup_printf("%s/%s", PACKAGE_SRC_DIR, argv[1]);
    GError *error = NULL;
    AntlrFileStream *file_stream = antlr_file_stream_new_from_filename_encoding(filename, NULL, &error);
    if (!file_stream) {
        g_print("%s\n", error->message);
        g_clear_error(&error);
        return 1;
    }

    TestFunctionalL *lexer = test_functional_l_new_with_char_stream(ANTLR_CHAR_STREAM(file_stream));
    AntlrCommonTokenStream *tokens = antlr_common_token_stream_new_with_token_source(ANTLR_TOKEN_SOURCE(lexer));
    antlr_buffered_token_stream_fill(tokens);
    GPtrArray_AntlrToken *array = ANTLR_BUFFERED_TOKEN_STREAM(tokens)->tokens;
    int i;
    for(i=0; i<array->len; i++) {
        AntlrToken *token = g_ptr_array_index(array, i);
        gchar *str = antlr_token_to_string(token);
        g_print("%s\n", str);
    }



    return 0;
}
