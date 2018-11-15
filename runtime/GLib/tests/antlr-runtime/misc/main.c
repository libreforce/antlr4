

#include <glib-object.h>

#include "suite.h"


int
main(int argc, char *argv[])
{
    g_test_init (&argc, &argv, NULL);

    GTestSuite *suite = g_test_get_root();

    GTestSuite *suite_misc = test_antlr_misc_create_suite();
    g_test_suite_add_suite(suite, suite_misc);

    g_test_run_suite(suite);


    return 0;
}
