#include "config.h"
#include "config-set.h"
#include "ordered-config-set.h"


#include "suite.h"


GTestSuite *
test_antlr_atn_create_suite(void) {
    GTestSuite *suite = g_test_create_suite("atn");

    GTestSuite *suite_config = test_antlr_atn_config_create_suite();
    g_test_suite_add_suite(suite, suite_config);

    GTestSuite *suite_config_set = test_antlr_atn_config_set_create_suite();
    g_test_suite_add_suite(suite, suite_config_set);

    GTestSuite *suite_ordered_config_set = test_antlr_atn_ordered_config_set_create_suite();
    g_test_suite_add_suite(suite, suite_ordered_config_set);

    return suite;
}

