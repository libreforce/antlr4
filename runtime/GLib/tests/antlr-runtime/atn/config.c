
#include <glib-object.h>

#include "antlr-runtime/types.h"
#include "antlr-runtime/misc/object.h"
#include "antlr-runtime/atn/semantic-context.h"
#include "antlr-runtime/atn/atn-state.h"
#include "antlr-runtime/atn/config.h"

#include "../mock/config.h"

#include "config.h"

#if GLIB_CHECK_VERSION(2,25,12)
typedef GTestFixtureFunc TCFunc;
#else
typedef void (*TCFunc)(void);
#endif
#define TESTCASE(t, d) g_test_create_case (#t, 0, d, NULL, (TCFunc) test_antlr_atn_config_##t, NULL)

void
test_antlr_atn_config_test1(void) {
    //g_test_message("Not implemented");

    /// (16,7,[$])
    AntlrATNConfig *config = test_antlr_mock_atn_config_create_16_7_$();
    //g_print("%s\n", antlr_atn_config_to_string(config));

    //g_object_unref(config);

    g_assert(TRUE);
}


GTestSuite *
test_antlr_atn_config_create_suite(void) {
    GTestSuite *suite_config = g_test_create_suite("Config");

    g_test_suite_add (suite_config, TESTCASE (test1, NULL));

	return suite_config;
}

