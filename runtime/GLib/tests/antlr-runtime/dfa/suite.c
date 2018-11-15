#include "dfa-state.h"
#include "dfa.h"

#include "suite.h"


GTestSuite *
test_antlr_dfa_create_suite(void) {
    GTestSuite *suite = g_test_create_suite("dfa");

    GTestSuite *suite_dfa_state = test_antlr_dfa_state_create_suite();
    g_test_suite_add_suite(suite, suite_dfa_state);

    GTestSuite *suite_dfa = test_antlr_dfa_dfa_create_suite();
    g_test_suite_add_suite(suite, suite_dfa);

    return suite;
}

