
#include "atn/suite.h"
#include "misc/suite.h"
#include "dfa/suite.h"
#include "misc/suite.h"
#include "common-token-stream.h"

#include "suite.h"

GTestSuite *
test_antlr_create_suite(void) {
    GTestSuite *suite_antlr = g_test_create_suite("antlr-runtime");

    GTestSuite *suite_antlr_misc = test_antlr_misc_create_suite();
    g_test_suite_add_suite(suite_antlr, suite_antlr_misc);

    GTestSuite *suite_antlr_atn = test_antlr_atn_create_suite();
    g_test_suite_add_suite(suite_antlr, suite_antlr_atn);

    GTestSuite *suite_antlr_dfa = test_antlr_dfa_create_suite();
    g_test_suite_add_suite(suite_antlr, suite_antlr_dfa);

    GTestSuite *suite_antlr_common_token_stream = test_antlr_common_token_stream_suite_create();
    g_test_suite_add_suite(suite_antlr, suite_antlr_common_token_stream);


    return suite_antlr;
}
