#include <glib-object.h>

#include "antlr-runtime/runtime.h"

#include "../mock/dfa-state.h"

#include "dfa-state.h"


#if GLIB_CHECK_VERSION(2,25,12)
typedef GTestFixtureFunc TCFunc;
#else
typedef void (*TCFunc)(void);
#endif
#define TESTCASE(t, d) g_test_create_case (#t, 0, d, NULL, (TCFunc) test_antlr_dfa_state_##t, NULL)


AntlrPredictionContext*
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

AntlrPredictionContext*
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


AntlrPredictionContext*
create_prediction_context_41_end()
{
    AntlrPredictionContext *tmp=NULL;
    tmp=create_prediction_context_22_67_end();

    AntlrPredictionContext *context=antlr_singleton_prediction_context_create(tmp, 41);

    return context;
}


AntlrPredictionContext*
create_prediction_context_55_end()
{
    AntlrPredictionContext *tmp=NULL;
    tmp=create_prediction_context_22_67_end();

    AntlrPredictionContext *context=antlr_singleton_prediction_context_create(tmp, 55);

    return context;
}

AntlrPredictionContext*
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
AntlrDFAState*
create_dfa_state()
{
    AntlrATNConfigSet *configs = antlr_atn_config_set_new();

    //atn_state;
    AntlrATNState *atn_state_57 = antlr_atn_state_new();
    atn_state_57->state_number = 57;
    AntlrATNState *atn_state_56 = antlr_atn_state_new();
    atn_state_56->state_number = 56;
    AntlrDFAState *dfa_state = antlr_dfa_state_new_with_config_set(configs);
    dfa_state->state_number = 1;

    AntlrPredictionContext *context_56 = create_prediction_context();//create_prediction_context_22_67_end();//create_prediction_context_41_end();//create_prediction_context_end();
    AntlrPredictionContext *context_57 = create_prediction_context_end();

    AntlrATNConfig *config_1 = antlr_atn_config_new_with_state(atn_state_57, 1, context_57);
    AntlrATNConfig *config_2 = antlr_atn_config_new_with_state(atn_state_56, 1, context_56);

    antlr_atn_config_set_add(configs, config_1);
    antlr_atn_config_set_add(configs, config_2);

    return dfa_state;
}

AntlrDFAState*
create_dfa_state_3()
{
    AntlrATNConfigSet *configs = antlr_atn_config_set_new();

    //atn_state;
    AntlrATNState *atn_state_57 = antlr_atn_state_new();
    atn_state_57->state_number = 57;
    AntlrDFAState *dfa_state = antlr_dfa_state_new_with_config_set(configs);
    dfa_state->state_number = 1;

    AntlrPredictionContext *context_57 = create_prediction_context_end();

    AntlrATNConfig *config_1 = antlr_atn_config_new_with_state(atn_state_57, 1, context_57);

    antlr_atn_config_set_add(configs, config_1);

    return dfa_state;
}










// -------------------------

/**
 * @brief test_antlr_dfa_state_test1
 * TODO: dfa_state_1 == dfa_state_2 or lookup ne le trouve pas...
 * dfa_state_1.hash = 1334633380
 * dfa_state_1.hash_config = 1026215948
 *
 * dfa_state_2.hash = 1782852228
 * dfa_state_2.hash_config = 19406071
 *
 */
static void
test_antlr_dfa_state_test1(void) {
    //g_test_skip("skip me");
    //g_test_message("Not implemented");

    /* 1:[(57,1,[[41 22 $, 55 22 $]]), (56,1,[[41 [22 67 [41 22 $, 55 22 $], 36 67 [41 22 $, 55 22 $]], 55 [22 67 [41 22 $, 55 22 $], 36 67 [41 22 $, 55 22 $]]]]), (77,1,[76 74 [41 [22 67 [41 22 $, 55 22 $], 36 67 [41 22 $, 55 22 $]], 55 [22 67 [41 22 $, 55 22 $], 36 67 [41 22 $, 55 22 $]]]]), (57,2,[[41 36 $, 55 36 $]]), (56,2,[[41 [22 67 [41 36 $, 55 36 $], 36 67 [41 36 $, 55 36 $]], 55 [22 67 [41 36 $, 55 36 $], 36 67 [41 36 $, 55 36 $]]]]), (77,2,[76 74 [41 [22 67 [41 36 $, 55 36 $], 36 67 [41 36 $, 55 36 $]], 55 [22 67 [41 36 $, 55 36 $], 36 67 [41 36 $, 55 36 $]]]])] */
    AntlrDFAState *dfa_state_1 = create_dfa_state();
    AntlrDFAState *dfa_state_2 = create_dfa_state();
    AntlrDFAState *dfa_state_3 = create_dfa_state_3();

    /*
    gchar *str = NULL;
    str = antlr_dfa_state_to_string(dfa_state_1);
    g_print("%s\n", str);
    str = antlr_dfa_state_to_string(dfa_state_2);
    g_print("%s\n", str);

    gint hash = 0;
    hash = antlr_dfa_state_hash_code(dfa_state_1);
    g_print("1) hash: %d\n", hash);
    hash = antlr_dfa_state_hash_code(dfa_state_2);
    g_print("2) hash: %d\n", hash);
    g_print("equals: %s\n", antlr_dfa_state_equals(dfa_state_1, dfa_state_2)?"TRUE":"FALSE");
    */

    GHashTable_AntlrDFAState_AntlrDFAState *hash_table = g_hash_table_new_full((GHashFunc)antlr_dfa_state_hash_code, (GEqualFunc)antlr_dfa_state_equals, (GDestroyNotify)NULL, (GDestroyNotify)g_object_unref);
    //GHashTable *hash_table = g_hash_table_new_full((GHashFunc)antlr_dfa_state_hash_code, (GEqualFunc)antlr_dfa_state_equals, (GDestroyNotify)NULL, (GDestroyNotify)g_object_unref);
    g_hash_table_add(hash_table, dfa_state_1);
    g_hash_table_add(hash_table, dfa_state_3);

    gpointer exist = g_hash_table_lookup(hash_table, dfa_state_2);
    if (exist==NULL) {
        g_assert(FALSE);
    } else {
        g_assert(TRUE);
    }

    g_hash_table_destroy(hash_table);
    //g_hash_table_unref();

}

/**
 * (gdb) set print pretty on
 * $ gdb ./tests_libantlrdfa
 * (gdb) break /home/gaulouis/local/src/glib-antlr/tests/antlr-runtime/dfa/dfa-state.c:193
 * (gdb) r
 * (gdb) gforeach i in hash_table:print($i)
 * (gdb) python for i in GHashPrinter(gdb.parse_and_eval("hash_table")).children(): print("%s", i)
 * (gdb) c
 * (gdb) q
 * $
 */

static void
test_antlr_dfa_state_test2(void) {

    /* 1:[(57,1,[[41 22 $, 55 22 $]]), (56,1,[[41 [22 67 [41 22 $, 55 22 $], 36 67 [41 22 $, 55 22 $]], 55 [22 67 [41 22 $, 55 22 $], 36 67 [41 22 $, 55 22 $]]]]), (77,1,[76 74 [41 [22 67 [41 22 $, 55 22 $], 36 67 [41 22 $, 55 22 $]], 55 [22 67 [41 22 $, 55 22 $], 36 67 [41 22 $, 55 22 $]]]]), (57,2,[[41 36 $, 55 36 $]]), (56,2,[[41 [22 67 [41 36 $, 55 36 $], 36 67 [41 36 $, 55 36 $]], 55 [22 67 [41 36 $, 55 36 $], 36 67 [41 36 $, 55 36 $]]]]), (77,2,[76 74 [41 [22 67 [41 36 $, 55 36 $], 36 67 [41 36 $, 55 36 $]], 55 [22 67 [41 36 $, 55 36 $], 36 67 [41 36 $, 55 36 $]]]])] */
    AntlrDFAState *dfa_state_1 = create_dfa_state();
    AntlrDFAState *dfa_state_2 = create_dfa_state();

    /*
    gchar *str = NULL;
    str = antlr_dfa_state_to_string(dfa_state_1);
    g_print("%s\n", str);
    str = antlr_dfa_state_to_string(dfa_state_2);
    g_print("%s\n", str);

    g_print("equals: %s\n", antlr_dfa_state_equals(dfa_state_1, dfa_state_2)?"TRUE":"FALSE");
    */
    g_assert(antlr_dfa_state_equals(dfa_state_1, dfa_state_2));

}

static void
test_antlr_dfa_state_test3(void) {

    AntlrDFAState *dfa_state = test_antlr_mock_dfa_state_create_simple();
    gchar *str = antlr_object_to_string(ANTLR_OBJECT(dfa_state));
    //g_print("%s\n", str);

    g_assert(TRUE);
}

GTestSuite *
test_antlr_dfa_state_create_suite(void) {
    GTestSuite *suite_dfa_state = g_test_create_suite("state");

    g_test_suite_add (suite_dfa_state, TESTCASE (test1, NULL));
    //g_test_suite_add (suite_dfa_state, TESTCASE (test2, NULL));
    //g_test_suite_add (suite_dfa_state, TESTCASE (test3, NULL));

	return suite_dfa_state;
}
