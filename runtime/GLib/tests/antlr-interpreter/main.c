//#include "test-suite.h"
#include <glib-object.h>

#include "suite.h"


int
main(int argc, char *argv[])
{
    g_test_init (&argc, &argv, NULL);

    GTestSuite *suite = g_test_get_root();

    GTestSuite *suite_antlr_interpreter = test_antlr_interpreter_create_suite();
    g_test_suite_add_suite(suite, suite_antlr_interpreter);

    g_test_run_suite(suite);


    return 0;
}
