#include "common-token-stream.h"

void
test_common_token_stream_suite_test1(void) {
	g_test_message("Not implemented");
	/* Add asserts */
}

GTestSuite *
test_antlr_common_token_stream_suite_create(void) {
    //GTestSuite *test_common_token_stream_suite = g_test_create_suite("libgantlr");
    GTestSuite *test_common_token_stream_suite = g_test_create_suite("token");

    g_test_suite_add (test_common_token_stream_suite, TESTCASE (test_common_token_stream_suite_test1, NULL));

    return test_common_token_stream_suite;
}

