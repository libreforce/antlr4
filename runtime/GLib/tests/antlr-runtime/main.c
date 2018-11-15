

//#include "test-suite.h"
#include <glib-object.h>

#include "suite.h"
int
main(int argc, char *argv[])
{
    g_test_init (&argc, &argv, NULL);

    GTestSuite *suite = g_test_get_root();

    g_test_verbose();
    GTestSuite *suite_antlr = test_antlr_create_suite();
    g_test_suite_add_suite(suite, suite_antlr);

    g_test_run_suite(suite);

    /*
    g_test_init (&argc, &argv, NULL);

    GTestSuite *suite = g_test_get_root();

    GTestSuite *suite_antlr_atn = test_antlr_atn_create_suite();
    g_test_suite_add_suite(suite, suite_antlr_atn);

    g_test_run_suite(suite);
*/

    /*
    g_test_init (&argc, &argv, NULL);

    GTestSuite *suite = g_test_get_root();


    GTestSuite *suite_antlr_misc = test_antlr_misc_create_suite();
    g_test_suite_add_suite(suite, suite_antlr_misc);

    GTestSuite *suite_antlr = test_antlr_common_token_stream_suite_create();
    g_test_suite_add_suite(suite, suite_antlr);


    g_test_run_suite(suite);
    */


    return 0;
}
