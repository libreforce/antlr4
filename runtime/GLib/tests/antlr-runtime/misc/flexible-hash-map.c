#include "flexible-hash-map.h"

#include "antlr-runtime/types.h"
#include "antlr-runtime/misc/object.h"
#include "antlr-runtime/misc/flexible-hash-map.h"

#include "antlr-runtime/vocabulary.h"
#include "antlr-runtime/vocabulary-impl.h"
#include "antlr-runtime/misc/object.h"
#include "antlr-runtime/misc/interval.h"
#include "antlr-runtime/misc/interval-set.h"
#include "antlr-runtime/misc/bit-set.h"
#include "antlr-runtime/atn/transition.h"
#include "antlr-runtime/atn/semantic-context.h"
#include "antlr-runtime/atn/atn-state.h"
#include "antlr-runtime/atn/config.h"
#include "antlr-runtime/atn/prediction-context.h"
#include "antlr-runtime/atn/singleton-prediction-context.h"
#include "antlr-runtime/atn/empty-prediction-context.h"

//typedef struct _Entry Entry;
//struct _Entry {
//    AntlrATNConfig *key;
//    AntlrBitSet *value;
//};

//static gchar*
//antlr_flexible_hash_map_entry_to_string(Entry *entry)
//{
//    gchar *s1 = antlr_atn_config_to_string(entry->key);
//    gchar *s2 = antlr_bit_set_to_string(entry->value);
//    gchar *s = g_strdup_printf("%s:%s", s1, s2);
//    g_free(s1);
//    g_free(s2);
//    return s;
//}


void
antlr_test_flexible_hash_map_new_and_free(void) {
    /* g_test_message("Not implemented"); */
    AntlrFlexibleHashMap *map = antlr_flexible_hash_map_new(NULL, NULL);

    antlr_flexible_hash_map_free(map);
}



void
antlr_test_flexible_hash_map_get(void) {
    AntlrFlexibleHashMap *map = antlr_flexible_hash_map_new(antlr_atn_config_alt_context_hash_code, antlr_atn_config_alt_context_equals);

    AntlrATNConfig *key1;
    AntlrATNConfig *key2;
    AntlrBitSet *value1;
    AntlrBitSet *value2;
    gpointer prev;
    AntlrATNState *state = antlr_atn_state_new();
    state->state_number = 0;
    key1 = antlr_atn_config_new_with_state(state, 1, antlr_empty_prediction_context_new());
    key1->state = antlr_atn_state_new();
    key1->state->state_number = 0;
    key1->context = antlr_empty_prediction_context_new();
    value1  = antlr_bit_set_new();
    antlr_bit_set_set(value1, 7, TRUE);
    prev = antlr_flexible_hash_map_put(map, (gpointer)key1, (gpointer)value1);
    g_assert(prev==NULL);

    prev = antlr_flexible_hash_map_get(map, (gpointer)key1);
    g_assert(prev==value1);

    key2 = antlr_atn_config_new_with_state(state, 1, antlr_empty_prediction_context_new());
    key2->state = antlr_atn_state_new();
    key2->state->state_number = 0;
    key2->context = antlr_empty_prediction_context_new();
    value2  = antlr_bit_set_new();
    antlr_bit_set_set(value2, 3, TRUE);
    prev = antlr_flexible_hash_map_put(map, (gpointer)key2, (gpointer)value2);
    g_assert(TRUE);

//    Entry entry;
//    entry.key = key1;
//    entry.value = value1;
//    gchar *str = antlr_flexible_hash_map_entry_to_string(&entry);
//    g_print("%s\n", str);


    antlr_flexible_hash_map_free(map);
}

void
antlr_test_flexible_hash_map_put(void) {
    AntlrFlexibleHashMap *map = antlr_flexible_hash_map_new(antlr_atn_config_alt_context_hash_code, antlr_atn_config_alt_context_equals);

    AntlrATNConfig *key1;
    AntlrBitSet *value1;
    gpointer prev1;
    AntlrATNState *state = antlr_atn_state_new();
    state->state_number = 0;
    key1 = antlr_atn_config_new_with_state(state, 1, (AntlrPredictionContext*)antlr_empty_prediction_context_new());
    value1  = antlr_bit_set_new();
    antlr_bit_set_set(value1, 7, FALSE);
    prev1 = antlr_flexible_hash_map_put(map, (gpointer)key1, (gpointer)value1);
    g_assert(prev1==NULL);

//    Entry entry;
//    entry.key = key1;
//    entry.value = value1;
//    gchar *str = antlr_flexible_hash_map_entry_to_string(&entry);
//    g_print("%s\n", str);

#if 0
    AntlrATNConfig *key2;
    AntlrBitSet *value2;
    gpointer prev2;
    key2 = antlr_atn_config_new();
    key2->state = antlr_atn_state_new();
    key2->state->state_number = 1;
    key2->context = antlr_empty_prediction_context_new();
    value2  = antlr_bit_set_new();
    prev2 = antlr_flexible_hash_map_put(map, (gpointer)key2, (gpointer)value2);
    g_assert(prev2==NULL);
#else
    AntlrBitSet *value2;
    gpointer prev2;
    value2  = antlr_bit_set_new();
    prev2 = antlr_flexible_hash_map_put(map, (gpointer)key1, (gpointer)value2);
    g_assert(prev2==value1);
#endif

    antlr_flexible_hash_map_free(map);
}

void
antlr_test_flexible_hash_map_value(void) {
    AntlrFlexibleHashMap *map = antlr_flexible_hash_map_new(antlr_atn_config_alt_context_hash_code, antlr_atn_config_alt_context_equals);

    AntlrATNConfig *key1;
    AntlrBitSet *value1;
    gpointer prev1;
    AntlrATNState *state1 = antlr_atn_state_new();
    state1->state_number = 0;
    key1 = antlr_atn_config_new_with_state(state1, 1, antlr_empty_prediction_context_new());
    value1  = antlr_bit_set_new();
    antlr_bit_set_set(value1, 7, TRUE);
    prev1 = antlr_flexible_hash_map_put(map, (gpointer)key1, (gpointer)value1);
    g_assert(prev1==NULL);

    AntlrATNConfig *key2;
    AntlrBitSet *value2;
    gpointer prev2;
    AntlrATNState *state2 = antlr_atn_state_new();
    state2->state_number = 0;
    key2 = antlr_atn_config_new_with_state(state2, 1, antlr_empty_prediction_context_new());
    key2->state = antlr_atn_state_new();
    key2->state->state_number = 1;
    key2->context = antlr_empty_prediction_context_new();
    value2  = antlr_bit_set_new();
    antlr_bit_set_set(value2, 3, TRUE);
    prev2 = antlr_flexible_hash_map_put(map, (gpointer)key2, (gpointer)value2);
    g_assert(prev2==NULL);


    gchar *axcept[] = {
        "10000000",
        "1000"
    };
    GList *list = antlr_flexible_hash_map_values(map);
    GList *it;
    int i = 0;
    for (it = g_list_first(list); it; it=it->next) {
        AntlrBitSet *entry = it->data;
        gchar *str = antlr_bit_set_to_string(entry);
        g_assert_cmpstr(axcept[i], ==, str);
        i++;
    }

    antlr_flexible_hash_map_free(map);
}


static void
antlr_test_flexible_hash_map_help()
{
    AntlrATNConfig *config = antlr_atn_config_new_with_state(antlr_atn_state_new(), 0, (AntlrPredictionContext*)antlr_empty_prediction_context_new());
    AntlrFlexibleHashEntry *entry = g_new0(AntlrFlexibleHashEntry, 1);
    entry->key   = config;
    entry->value = antlr_bit_set_new();
    antlr_bit_set_set(entry->value, 2, TRUE);

    GList_AntlrFlexibleHashEntry *list_entry = g_list_append(NULL, entry);

    GHashTable_AntlrATNConfig_GList_AntlrFlexibleHashEntry *table = g_hash_table_new(NULL, NULL);
    g_hash_table_insert(table, config, list_entry);

    g_print("foo: %p, %p\n", table, entry);
    g_free(entry);
}

GTestSuite *
antlr_test_flexible_hash_map_suite_create(void) {
    GTestSuite *suite_flexible_hash_map = g_test_create_suite("FlexibleHashMap");

    g_test_suite_add (suite_flexible_hash_map, TESTCASE (antlr_test_flexible_hash_map_new_and_free, NULL));
    g_test_suite_add (suite_flexible_hash_map, TESTCASE (antlr_test_flexible_hash_map_put, NULL));
    g_test_suite_add (suite_flexible_hash_map, TESTCASE (antlr_test_flexible_hash_map_get, NULL));
    //g_test_suite_add (suite_flexible_hash_map, TESTCASE (antlr_test_flexible_hash_map_value, NULL));
    //g_test_suite_add (suite_flexible_hash_map, TESTCASE (antlr_test_flexible_hash_map_help, NULL));

	return suite_flexible_hash_map;
}

