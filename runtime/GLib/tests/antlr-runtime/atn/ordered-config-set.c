#include "ordered-config-set.h"

#if GLIB_CHECK_VERSION(2,25,12)
typedef GTestFixtureFunc TCFunc;
#else
typedef void (*TCFunc)(void);
#endif
#define TESTCASE(t, d) g_test_create_case (#t, 0, d, NULL, (TCFunc) test_antlr_atn_ordered_config_set_##t, NULL)


void
test_antlr_atn_ordered_config_set_test1(void) {
	g_test_message("Not implemented");
	/* Add asserts */
}

GTestSuite *
test_antlr_atn_ordered_config_set_create_suite(void) {
    GTestSuite *suite_ordered_atn_config_set = g_test_create_suite("OrderedConfigSet");

    g_test_suite_add (suite_ordered_atn_config_set, TESTCASE (test1, NULL));

	return suite_ordered_atn_config_set;
}

