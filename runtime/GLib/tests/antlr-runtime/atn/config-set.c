#include <glib-object.h>

#include "antlr-runtime/runtime.h"
#include "../mock/config-set.h"

#include "config-set.h"


static AntlrPredictionContext*
create_prediction_context_end()
{
    AntlrPredictionContext *tmp=NULL;
    tmp=antlr_singleton_prediction_context_create(NULL, ANTLR_PREDICTION_CONTEXT_EMPTY_RETURN_STATE);
    AntlrPredictionContext *a=antlr_singleton_prediction_context_create(tmp, 22);
    tmp=antlr_singleton_prediction_context_create(NULL, ANTLR_PREDICTION_CONTEXT_EMPTY_RETURN_STATE);
    AntlrPredictionContext *b=antlr_singleton_prediction_context_create(tmp, 22);

    GArray *parents = g_array_new(FALSE, TRUE, sizeof(AntlrPredictionContext*));
    g_array_append_val(parents, a);
    g_array_append_val(parents, b);
    GArray *return_states = g_array_new(FALSE, TRUE, sizeof(gint));
    gint return_state_a = 41;
    gint return_state_b = 55;
    g_array_append_val(return_states, return_state_a);
    g_array_append_val(return_states, return_state_b);

    AntlrPredictionContext *context=antlr_array_prediction_context_new_full(parents, return_states);

    return context;
}

static AntlrPredictionContext*
create_prediction_context_22_67_end()
{
    AntlrPredictionContext *tmp=create_prediction_context_end();
    AntlrPredictionContext *parent_22_67=antlr_singleton_prediction_context_create(tmp, 67);
    AntlrPredictionContext *parent_36_67=antlr_singleton_prediction_context_create(tmp, 67);

    GArray *parents = g_array_new(FALSE, TRUE, sizeof(AntlrPredictionContext*));
    g_array_append_val(parents, parent_22_67);
    g_array_append_val(parents, parent_36_67);
    GArray *return_states = g_array_new(FALSE, TRUE, sizeof(gint));
    gint return_state_22_67 = 22;
    gint return_state_36_67 = 36;
    g_array_append_val(return_states, return_state_22_67);
    g_array_append_val(return_states, return_state_36_67);

    AntlrPredictionContext *context=antlr_array_prediction_context_new_full(parents, return_states);

    return context;
}


static AntlrPredictionContext*
create_prediction_context_41_end()
{
    AntlrPredictionContext *tmp=NULL;
    tmp=create_prediction_context_22_67_end();

    AntlrPredictionContext *context=antlr_singleton_prediction_context_create(tmp, 41);

    return context;
}


static AntlrPredictionContext*
create_prediction_context_55_end()
{
    AntlrPredictionContext *tmp=NULL;
    tmp=create_prediction_context_22_67_end();

    AntlrPredictionContext *context=antlr_singleton_prediction_context_create(tmp, 55);

    return context;
}

static AntlrPredictionContext*
create_prediction_context()
{
    AntlrPredictionContext *tmp=NULL;
    tmp=create_prediction_context_22_67_end();

    GArray *parents = g_array_new(FALSE, TRUE, sizeof(AntlrPredictionContext*));
    g_array_append_val(parents, tmp);
    g_array_append_val(parents, tmp);
    GArray *return_states = g_array_new(FALSE, TRUE, sizeof(gint));
    gint return_state_1 = 41;
    gint return_state_2 = 55;
    g_array_append_val(return_states, return_state_1);
    g_array_append_val(return_states, return_state_2);
    AntlrPredictionContext *context=antlr_array_prediction_context_new_full(parents, return_states);

    return context;

}

/**
 * DFAState.toString()
 * 1:[(57,1,[[41 22 $, 55 22 $]]), (56,1,[[41 [22 67 [41 22 $, 55 22 $], 36 67 [41 22 $, 55 22 $]], 55 [22 67 [41 22 $, 55 22 $], 36 67 [41 22 $, 55 22 $]]]])]
 *
 */
static AntlrDFAState*
create_atn_config_set()
{
    AntlrATNConfigSet *configs = antlr_atn_config_set_new();

    //atn_state;
    AntlrATNState *atn_state_57 = antlr_atn_state_new();
    atn_state_57->state_number = 57;
    AntlrATNState *atn_state_56 = antlr_atn_state_new();
    atn_state_56->state_number = 56;

    AntlrPredictionContext *context_56 = create_prediction_context();//create_prediction_context_22_67_end();//create_prediction_context_41_end();//create_prediction_context_end();
    AntlrPredictionContext *context_57 = create_prediction_context_end();

    AntlrATNConfig *config_1 = antlr_atn_config_new_with_state(atn_state_57, 1, context_57);
    AntlrATNConfig *config_2 = antlr_atn_config_new_with_state(atn_state_56, 1, context_56);

    antlr_atn_config_set_add(configs, config_1);
    antlr_atn_config_set_add(configs, config_2);

    return configs;
}



#include "config-set.h"


#if GLIB_CHECK_VERSION(2,25,12)
typedef GTestFixtureFunc TCFunc;
#else
typedef void (*TCFunc)(void);
#endif
#define TESTCASE(t, d) g_test_create_case (#t, 0, d, NULL, (TCFunc) test_antlr_atn_config_set_##t, NULL)


void
test_antlr_atn_config_set_test1(void) {
    //g_test_message("Not implemented");

    /* [(23,1,[$]), (25,2,[$]), (27,3,[$]), (29,4,[$]), (31,5,[$]), (33,6,[$]), (35,7,[$]), (37,8,[$]), (39,9,[$])] */
    AntlrATNConfigSet *configs = test_antlr_mock_config_set_create_0();
    //g_print("%s\n", antlr_atn_config_set_to_string(configs));

    g_assert(TRUE);
}

GTestSuite *
test_antlr_atn_config_set_create_suite(void) {
    GTestSuite *suite_config_set = g_test_create_suite("ConfigSet");

    g_test_suite_add (suite_config_set, TESTCASE (test1, NULL));

	return suite_config_set;
}

