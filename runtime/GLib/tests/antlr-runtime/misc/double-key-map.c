#include "double-key-map.h"

#include <antlr-runtime/misc/object.h>
#include <antlr-runtime/misc/double-key-map.h>

void
antlr_test_double_key_map_test1(void) {
	g_test_message("Not implemented");
	/* Add asserts */
    AntlrDoubleKeyMap *map = antlr_double_key_map_new();

    gchar *key1 = "Hello";
    gchar *key2 = "World";
    gchar *value = " ! ";
    gpointer old = antlr_double_key_map_put(map, key1, key2, value);
    g_assert(old==NULL);

    gchar *value2 = " Celine ";
    old = antlr_double_key_map_put(map, key1, key2, value2);
    g_assert(old==value);

    g_object_unref(map);

    //merge_cache = new DoubleKeyMap<PredictionContext, PredictionContext, PredictionContext>();


}

GTestSuite *
antlr_test_double_key_map_suite_create(void) {
    GTestSuite *suite_double_key_map = g_test_create_suite("DoubleKeyMap");

    g_test_suite_add (suite_double_key_map, TESTCASE (antlr_test_double_key_map_test1, NULL));

	return suite_double_key_map;
}

