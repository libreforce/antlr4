
#include <glib-object.h>

#include "antlr-runtime/types.h"
#include "antlr-runtime/token.h"
#include "antlr-runtime/int-stream.h"
//#include "antlr-runtime/token-stream.h"
#include "antlr-runtime/vocabulary.h"
//#include "antlr-runtime/vocabulary-impl.h"
#include "antlr-runtime/misc/object.h"
#include "antlr-runtime/misc/int-iset.h"
#include "antlr-runtime/misc/interval.h"
#include "antlr-runtime/misc/interval-set.h"

#include "interval-set.h"

void
test_interval_set_suite_single_element(void) {
    AntlrIntervalSet *interval_set;
    gchar *str;

    interval_set = antlr_interval_set_of(99);
    str = antlr_interval_set_to_string(interval_set, FALSE);
    g_assert_cmpstr(str, ==, "{99}");
    g_free(str);

    g_object_unref(interval_set);
}

void
test_interval_set_suite_min(void) {
    gint min;
    AntlrIntISet *interval_set;

    AntlrIntervalSet *complete_char_set = antlr_interval_set_of_from_limit(0, 0xFFFE);
    min = antlr_interval_set_get_min_element(complete_char_set);
    g_assert_cmpint(0, ==, min);

    AntlrIntervalSet *interval_set_epsilon = antlr_interval_set_of(ANTLR_TOKEN_EPSILON);
    interval_set = antlr_int_iset_or(ANTLR_INT_ISET(complete_char_set), ANTLR_INT_ISET(interval_set_epsilon));
    //g_print("\n\t%s\n", antlr_interval_set_to_string(interval_set, FALSE));
    min = antlr_interval_set_get_min_element(ANTLR_INTERVAL_SET(interval_set));
    g_assert_cmpint(ANTLR_TOKEN_EPSILON, ==, min);

    AntlrIntervalSet *interval_set_eof = antlr_interval_set_of(ANTLR_TOKEN_EOF);
    interval_set = antlr_int_iset_or(ANTLR_INT_ISET(complete_char_set), ANTLR_INT_ISET(interval_set_eof));
    //g_print("\n\t%s\n", antlr_interval_set_to_string(interval_set, FALSE));
    min = antlr_interval_set_get_min_element(ANTLR_INTERVAL_SET(interval_set));
    g_assert_cmpint(ANTLR_TOKEN_EOF, ==, min);


    g_object_unref(complete_char_set);
    g_object_unref(interval_set_epsilon);
    g_object_unref(interval_set);
}

void
test_interval_set_suite_isolated_elements(void) {
    AntlrIntervalSet *interval_set = antlr_interval_set_new();
    antlr_int_iset_add(ANTLR_INT_ISET(interval_set), 1);
    antlr_int_iset_add(ANTLR_INT_ISET(interval_set), 'z');
    antlr_int_iset_add(ANTLR_INT_ISET(interval_set), 0xFFF0);

    gchar *str = antlr_interval_set_to_string(interval_set, FALSE);
    g_assert_cmpstr(str, ==, "{1, 122, 65520}");
    g_free(str);

    g_object_unref(interval_set);
}

void
test_interval_set_suite_mixed_ranges_and_elements(void) {
    AntlrIntervalSet *interval_set = antlr_interval_set_new();
    antlr_int_iset_add(ANTLR_INT_ISET(interval_set), 1);
    antlr_interval_set_add(interval_set, 'a', 'z'+1);
    antlr_interval_set_add(interval_set, '0', '9'+1);

    gchar *str = antlr_interval_set_to_string(interval_set, FALSE);
    g_assert_cmpstr(str, ==, "{1, 48..58, 97..123}");
    g_free(str);

    g_object_unref(interval_set);
}

void
test_interval_set_suite_simple_and(void) {
    AntlrIntervalSet *interval_set_a = antlr_interval_set_of_from_limit(10, 21);
    //g_print("%s\n", antlr_interval_set_to_string(interval_set_a, FALSE));
    AntlrIntervalSet *interval_set_b = antlr_interval_set_of_from_limit(13, 16);
    //g_print("%s\n", antlr_interval_set_to_string(interval_set_b, FALSE));
    AntlrIntISet *interval_set   = antlr_int_iset_and(ANTLR_INT_ISET(interval_set_a), ANTLR_INT_ISET(interval_set_b));

    gchar *str = antlr_int_iset_to_string(interval_set);
    g_assert_cmpstr(str, ==, "{13..16}");
    g_free(str);

    g_object_unref(interval_set);
    g_object_unref(interval_set_a);
    g_object_unref(interval_set_b);
}

void
test_interval_set_range_and_isolated_element(void) {
    AntlrIntervalSet *s1 = antlr_interval_set_of_from_limit('a','z'+1);
    AntlrIntervalSet *s2 = antlr_interval_set_of('d');
    AntlrIntISet *s  = antlr_int_iset_and(ANTLR_INT_ISET(s1), ANTLR_INT_ISET(s2));
    gchar *str = antlr_int_iset_to_string(s);
    //g_print("%s\n", str);
    g_assert_cmpstr(str, ==, "{100}");
    g_free(str);
}

void
test_interval_set_empty_intersection(void) {
    AntlrIntervalSet *s1 = antlr_interval_set_of_from_limit('a','z'+1);
    AntlrIntervalSet *s2 = antlr_interval_set_of_from_limit('0','9'+1);
    AntlrIntISet *s  = antlr_int_iset_and(ANTLR_INT_ISET(s1), ANTLR_INT_ISET(s2));
    gchar *str = antlr_interval_set_to_string(ANTLR_INTERVAL_SET(s), FALSE);
    g_assert_cmpstr(str, ==, "{}");

    g_object_unref(s1);
    g_object_unref(s2);
    g_object_unref(s);
    g_free(str);
}

void
test_interval_set_empty_intersection_single_elements(void) {
    AntlrIntervalSet *s1 = antlr_interval_set_of('a');
    AntlrIntervalSet *s2 = antlr_interval_set_of('d');
    AntlrIntISet *s  = antlr_int_iset_and(ANTLR_INT_ISET(s1), ANTLR_INT_ISET(s2));
    gchar *str = antlr_interval_set_to_string(ANTLR_INTERVAL_SET(s), FALSE);
    g_assert_cmpstr(str, ==, "{}");

    g_object_unref(s1);
    g_object_unref(s2);
    g_object_unref(s);
    g_free(str);
}

void
test_interval_set_subtract_of_completely_contained_range(void)
{
    AntlrIntervalSet *s1 = antlr_interval_set_of_from_limit(10, 20+1);
    AntlrIntervalSet *s2 = antlr_interval_set_of_from_limit(12, 15+1);
    AntlrIntISet *s  = antlr_int_iset_subtract(ANTLR_INT_ISET(s1), ANTLR_INT_ISET(s2));

    gchar *str = antlr_interval_set_to_string(ANTLR_INTERVAL_SET(s), FALSE);
    gchar* expecting = "{10..11, 17..21}";
    g_assert_cmpstr(str, ==, expecting);

    g_object_unref(s1);
    g_object_unref(s2);
    g_object_unref(s);
    g_free(str);
}

void
test_interval_set_not_single_element(void) {
    AntlrIntervalSet *interval_set = antlr_interval_set_of_from_limit(1, 1000+1);
    antlr_interval_set_add(interval_set, 2000, 3000 + 1);

    AntlrIntervalSet *s = antlr_interval_set_of_from_limit(50, 50 + 1);

    AntlrIntISet *set = antlr_int_iset_complement(ANTLR_INT_ISET(s), ANTLR_INT_ISET(interval_set));
    gchar *str = antlr_interval_set_to_string(ANTLR_INTERVAL_SET(set), FALSE);
    gchar *expecting = "{1..49, 52..1001, 2000..3001}";

    g_assert_cmpstr(str, ==, expecting);

    g_free(str);
}

void
test_interval_set_not_set(void)
{
    AntlrIntervalSet *vocabulary = antlr_interval_set_of_from_limit(1, 1000+1);
    AntlrIntervalSet *s          = antlr_interval_set_of_from_limit(50, 60+1);
    antlr_int_iset_add(ANTLR_INT_ISET(s), 5);
    antlr_interval_set_add(s, 250, 300+1);

    AntlrIntISet *set = antlr_int_iset_complement(ANTLR_INT_ISET(s), ANTLR_INT_ISET(vocabulary));

    gchar *str = antlr_int_iset_to_string(ANTLR_INT_ISET(set));
    gchar *expecting = "{1..4, 6..49, 62..249, 302..1001}";
    g_assert_cmpstr(str, ==, expecting);

    g_free(str);
}

void
test_interval_set_not_equal_set(void)
{
    AntlrIntervalSet *vocabulary = antlr_interval_set_of_from_limit(1, 1000+1);
    AntlrIntervalSet *s          = antlr_interval_set_of_from_limit(1, 1000+1);
    AntlrIntISet *set = antlr_int_iset_complement(ANTLR_INT_ISET(s), ANTLR_INT_ISET(vocabulary));

    gchar *str = antlr_int_iset_to_string(set);
    g_assert_cmpstr(str, ==, "{}");

    g_free(str);
}

void
test_interval_set_not_set_edge_element(void)
{
    AntlrIntervalSet *vocabulary = antlr_interval_set_of_from_limit(1, 2+1);
    AntlrIntervalSet *s          = antlr_interval_set_of(1);
    AntlrIntISet *set = antlr_int_iset_complement(ANTLR_INT_ISET(s), ANTLR_INT_ISET(vocabulary));
    gchar *str = antlr_int_iset_to_string(set);
    g_assert_cmpstr(str, ==, "{2..3}");

    g_object_unref(vocabulary);
    g_object_unref(s);
    g_free(str);

}



void
test_interval_set_not_set_fragmented_vocabulary(void)
{
    AntlrIntervalSet *vocabulary = antlr_interval_set_of_from_limit(1, 255+1);
#if 0
    g_print("\n");
    g_print("%s\n", g_type_name_from_instance((GTypeInstance*)vocabulary));
    AntlrInterval *inter = (AntlrInterval *)vocabulary->intervals->data;
    GTypeInstance *inst = (GTypeInstance*)inter;
    GTypeClass *klass = inst->g_class;
    GType type = klass->g_type;
    g_print("type = %x\n", type);
    int long t = type;
    int long typenode = t - t%4;
    GQuark q = g_type_qname(type);
    guint qq = q;
    gint qqq = qq;
    g_print("%d ... %d / 0x%x - %s\n", qqq, g_quark_from_string("AntlrInterval"), q, g_quark_to_string(q));

#endif
    antlr_interval_set_add(vocabulary, 1000, 2000+1);
    antlr_int_iset_add(ANTLR_INT_ISET(vocabulary), 9999);
    AntlrIntervalSet *s          = antlr_interval_set_of_from_limit(50, 60+1);
    antlr_int_iset_add(ANTLR_INT_ISET(s), 3);
    antlr_interval_set_add(s, 250, 300+1);
    antlr_int_iset_add(ANTLR_INT_ISET(s), 10000);
    AntlrIntISet *set = antlr_int_iset_complement(ANTLR_INT_ISET(s), ANTLR_INT_ISET(vocabulary));
    gchar *str = antlr_int_iset_to_string(set);
    g_assert_cmpstr(str, ==, "{1..2, 4..49, 62..249, 1000..2001, 9999}");

    g_free(str);
}

void
test_interval_set_add(void)
{
    gchar *str;
    AntlrIntervalSet *set = antlr_interval_set_new();
    antlr_interval_set_add(set, 4, 4);
    antlr_interval_set_add(set, 60, 60);
    antlr_interval_set_add(set, 62, 62);

    str = antlr_int_iset_to_string(ANTLR_INT_ISET(set));
    g_assert_cmpstr(str, ==, "{4, 60, 62}");
    g_free(str);

    antlr_interval_set_add(set, 61, 61);

    str = antlr_int_iset_to_string(ANTLR_INT_ISET(set));
    g_assert_cmpstr(str, ==, "{4, 60..62}");
    g_free(str);
}

//AntlrIntervalSet_toString(value["set"])
static void
test_interval_set_to_string(void)
{
    gchar *str;
    AntlrIntervalSet *set = antlr_interval_set_new();
    antlr_interval_set_add(set, 10, 10);
    antlr_interval_set_add(set, 32, 32);
    antlr_interval_set_add(set, 97, 98);

    str = antlr_int_iset_to_string(ANTLR_INT_ISET(set));
    g_assert_cmpstr(str, ==, "{10, 32, 97..98}");
    g_free(str);

}


GTestSuite *
test_interval_set_suite_create(void) {
    GTestSuite *suite_interval_set = g_test_create_suite("IntervalSet");

    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_suite_single_element, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_suite_min, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_suite_isolated_elements, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_suite_mixed_ranges_and_elements, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_suite_simple_and, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_range_and_isolated_element, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_empty_intersection, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_empty_intersection_single_elements, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_subtract_of_completely_contained_range, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_not_single_element, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_not_set, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_not_equal_set, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_not_set_edge_element, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_not_set_fragmented_vocabulary, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_add, NULL));
    g_test_suite_add (suite_interval_set, TESTCASE (test_interval_set_to_string, NULL));


	return suite_interval_set;
}

