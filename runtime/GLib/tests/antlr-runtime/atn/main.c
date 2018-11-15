

#include <glib-object.h>

#include "suite.h"


/*
#include <glib-object.h>

#include "antlr-runtime/types.h"
#include "antlr-runtime/atn/semantic-context.h"
#include "antlr-runtime/atn/atn-state.h"
#include "antlr-runtime/atn/config.h"

#include "config.h"
*/

int
main(int argc, char *argv[])
{

    g_test_init (&argc, &argv, NULL);

    GTestSuite *suite = g_test_get_root();

    GTestSuite *suite_atn = test_antlr_atn_create_suite();
    g_test_suite_add_suite(suite, suite_atn);

    g_test_run_suite(suite);

/*
    AntlrATNState *state = antlr_atn_state_new();
    AntlrATNState *config = g_new(AntlrATNState, 1);
//    g_object_unref(state);
//    g_free(config);
*/
    return 0;
}
