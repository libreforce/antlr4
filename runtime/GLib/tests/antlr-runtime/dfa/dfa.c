#include "dfa.h"



#if GLIB_CHECK_VERSION(2,25,12)
typedef GTestFixtureFunc TCFunc;
#else
typedef void (*TCFunc)(void);
#endif
#define TESTCASE(t, d) g_test_create_case (#t, 0, d, NULL, (TCFunc) test_antlr_dfa_dfa_##t, NULL)


void
test_antlr_dfa_dfa_test1(void) {
	g_test_message("Not implemented");
	/* Add asserts */
}

GTestSuite *
test_antlr_dfa_dfa_create_suite(void) {
    GTestSuite *suite_dfa = g_test_create_suite("dfa");

    g_test_suite_add (suite_dfa, TESTCASE (test1, NULL));

	return suite_dfa;
}

