#include <glib-object.h>


#include "test.h"

/**
 * export CLASSPATH="/home/gaulouis/local/src/tmp/antlr4.6/tool/target/antlr4-4.6-complete.jar"
 * java -Xmx500M org.antlr.v4.Tool -Dlanguage=GLib -package Test L.g4
 */
int main(int argc, char* argv[]) {

    g_test_init (&argc, &argv, NULL);

    g_test_add_func("/test", test_functional_lexer_exec_char_set_test);

    g_test_run();


    return 0;
}
