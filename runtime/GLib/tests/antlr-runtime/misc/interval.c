#include <glib-object.h>

#include "antlr-runtime/types.h"
#include "antlr-runtime/token.h"
#include "antlr-runtime/vocabulary.h"
#include "antlr-runtime/misc/object.h"
#include "antlr-runtime/misc/interval.h"

#include "interval.h"

void
test_interval_of(void) {
    AntlrInterval *interval = antlr_interval_of(0, 100);
    gchar *str = antlr_interval_to_string(interval);
    g_assert_cmpstr(str, ==, "0..100");

    g_free(str);
    g_object_unref(interval);
}

void
test_interval_to_string(void) {

    AntlrInterval *interval = antlr_interval_of(-2, 100);
    gchar *str = antlr_interval_to_string(interval);
    g_assert_cmpstr(str, ==, "-2..100");
    g_free(str);
    g_object_unref(interval);

    interval = antlr_interval_of(100, 0);
    str = antlr_interval_to_string(interval);
    g_assert_cmpstr(str, ==, "100..0");
    g_free(str);
    g_object_unref(interval);

}

//void
//test_interval_gdb(void) {
//    AntlrInterval *interval = antlr_interval_of(-2, 100);
//    gchar *str = antlr_interval_to_string(interval);

//    GValue value = G_VALUE_INIT;
//    g_value_init(&value, G_TYPE_STRING);
//    g_object_get_property(G_OBJECT(interval), "dump", &value);

//    g_free(str);
//    g_object_unref(interval);

//}

GTestSuite *
test_interval_create_suite(void) {
    GTestSuite *suite_interval = g_test_create_suite("Interval");

    g_test_suite_add (suite_interval, TESTCASE (test_interval_of, NULL));
    g_test_suite_add (suite_interval, TESTCASE (test_interval_to_string, NULL));

//    g_test_suite_add (suite_interval, TESTCASE (test_interval_gdb, NULL));

	return suite_interval;
}

