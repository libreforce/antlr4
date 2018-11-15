#include "bit-set.h"

#include "antlr-runtime/types.h"
#include "antlr-runtime/misc/object.h"
#include "antlr-runtime/misc/bit-set.h"

#define antlr_bit_set_free(bit_set) g_object_unref(bit_set)

void
antlr_test_bit_set_length(void) {
    guint length;
    AntlrBitSet *bit_set = antlr_bit_set_new();


    antlr_bit_set_set(bit_set, 0, TRUE);
    length = antlr_bit_set_length(bit_set);
    g_assert_cmpuint(length, ==, 1);


    antlr_bit_set_set(bit_set, 32, TRUE);
    length = antlr_bit_set_length(bit_set);
    g_assert_cmpuint(length, ==, 33);


    antlr_bit_set_set(bit_set, 48, TRUE);
    length = antlr_bit_set_length(bit_set);
    g_assert_cmpuint(length, ==, 49);

    antlr_bit_set_set(bit_set, 64, TRUE);
    length = antlr_bit_set_length(bit_set);
    g_assert_cmpuint(length, ==, 65);


    antlr_bit_set_set(bit_set, 48, FALSE);
    antlr_bit_set_set(bit_set, 64, FALSE);
    length = antlr_bit_set_length(bit_set);
    g_assert_cmpuint(length, ==, 33);

    antlr_bit_set_free(bit_set);
}

void
antlr_test_bit_set_cardinality(void) {
    guint length;
    AntlrBitSet *bit_set = antlr_bit_set_new();

    antlr_bit_set_set(bit_set, 0, TRUE);
    length = antlr_bit_set_cardinality (bit_set);
    g_assert_cmpuint(length, ==, 1);

    antlr_bit_set_set(bit_set, 18, TRUE);
    length = antlr_bit_set_cardinality (bit_set);
    g_assert_cmpuint(length, ==, 2);

    antlr_bit_set_free(bit_set);
}

void
antlr_test_bit_set_to_string(void) {
    gchar *str;
    AntlrBitSet *bit_set = antlr_bit_set_new();

    antlr_bit_set_set(bit_set, 0, TRUE);
    str = antlr_bit_set_to_string(bit_set);
    g_assert_cmpstr(str, ==, "{0}");
    //g_assert_cmpstr(str, ==, "1");
    g_free(str);

    antlr_bit_set_set(bit_set, 2, TRUE);
    str = antlr_bit_set_to_string(bit_set);
    g_assert_cmpstr(str, ==, "{0, 2}");
    //g_assert_cmpstr(str, ==, "101");
    g_free(str);


    antlr_bit_set_free(bit_set);
}

void
antlr_test_bit_set_or(void) {
    gchar *str;
    AntlrBitSet *bitset = antlr_bit_set_new();
    AntlrBitSet *bitset_b = antlr_bit_set_new();

    antlr_bit_set_set(bitset_b, 1, TRUE);
    antlr_bit_set_or (bitset, bitset_b);
    {
        str = antlr_bit_set_to_string(bitset);
        g_assert_cmpstr(str, ==, "{1}");
        //g_assert_cmpstr(str, ==, "10");
        g_free(str);
    }


    antlr_bit_set_set(bitset, 0, TRUE);
    antlr_bit_set_or (bitset, bitset_b);
    {
        str = antlr_bit_set_to_string(bitset);
        g_assert_cmpstr(str, ==, "{0, 1}");
        //g_assert_cmpstr(str, ==, "11");
        g_free(str);
    }

    antlr_bit_set_set(bitset, 8, TRUE);
    antlr_bit_set_or (bitset, bitset_b);
    {
        str = antlr_bit_set_to_string(bitset);
        g_assert_cmpstr(str, ==, "{0, 1, 8}");
        //g_assert_cmpstr(str, ==, "100000011");
        g_free(str);
    }

    antlr_bit_set_free(bitset);
    antlr_bit_set_free(bitset_b);
}

void
antlr_test_bit_set_get(void) {
    gboolean set;
    AntlrBitSet *bitset = antlr_bit_set_new();

    antlr_bit_set_set(bitset, 1, TRUE);
    antlr_bit_set_set(bitset, 8, TRUE);
    {
        set = antlr_bit_set_get(bitset, 0);
        g_assert(set==FALSE);
        set = antlr_bit_set_get(bitset, 1);
        g_assert(set==TRUE);
        set = antlr_bit_set_get(bitset, 8);
        g_assert(set==TRUE);
    }

    antlr_bit_set_free(bitset);
}

void
antlr_test_bit_set_equals(void) {
    gboolean equals;
    AntlrBitSet *first = antlr_bit_set_new();
    AntlrBitSet *next = antlr_bit_set_new();

    antlr_bit_set_set(first, 1, TRUE);
    //antlr_bit_set_set(first, 64, TRUE);
    antlr_bit_set_set(next, 1, TRUE);
    {
        equals = antlr_bit_set_equals(next, first);
        g_assert(equals==TRUE);
    }

    antlr_bit_set_free(first);
    antlr_bit_set_free(next);
}


void
antlr_test_g_array(void) {
#if 0
    GArray *array = g_array_sized_new(FALSE, TRUE, sizeof(gpointer), 2);
    g_array_set_size(array, 10);
    /*
    g_array_index(array, gpointer, 0) = (gpointer)0;
    g_array_index(array, gpointer, 1) = (gpointer)1;
    g_array_index(array, gpointer, 2) = (gpointer)2;
    g_array_index(array, gpointer, 3) = (gpointer)3;
    g_array_index(array, gpointer, 4) = (gpointer)4;
    g_print("\narray->len: %d\n", array->len);
    */
    gpointer v = 0xFF;
    g_array_insert_val(array, 10, v);

    int i;
    for (i=0; i<array->len; i++) {
        gpointer v = g_array_index(array, gpointer, i);
        g_print("%p\n", v);
    }
#endif

#if 0 // OK
    GArray *array = g_array_new(FALSE, TRUE, sizeof(gpointer));
    g_array_set_size(array, 8);
    g_array_index(array, gpointer, 0) = (gpointer)0;
    g_array_index(array, gpointer, 1) = (gpointer)1;
//    g_array_index(array, gpointer, 2) = (gpointer)2;
//    g_array_index(array, gpointer, 3) = (gpointer)3;
//    g_array_index(array, gpointer, 4) = (gpointer)4;
//    g_array_index(array, gpointer, 5) = (gpointer)5;
    g_array_index(array, gpointer, 6) = (gpointer)6;
    g_array_index(array, gpointer, 7) = (gpointer)7;

    int i;
    for (i=0; i<array->len; i++) {
        gpointer v = g_array_index(array, gpointer, i);
        g_print("%p\n", v);
    }
#endif

#if 0
    GArray *array = g_array_sized_new(FALSE, TRUE, sizeof(gpointer), 8);
    array->len = 8;
    g_array_index(array, gpointer, 0) = (gpointer)0;
    g_array_index(array, gpointer, 1) = (gpointer)1;
//    g_array_index(array, gpointer, 2) = (gpointer)2;
//    g_array_index(array, gpointer, 3) = (gpointer)3;
//    g_array_index(array, gpointer, 4) = (gpointer)4;
//    g_array_index(array, gpointer, 5) = (gpointer)5;
    g_array_index(array, gpointer, 6) = (gpointer)6;
    g_array_index(array, gpointer, 7) = (gpointer)7;

    int i;
    for (i=0; i<array->len; i++) {
        gpointer v = g_array_index(array, gpointer, i);
        g_print("%p\n", v);
    }
#endif

#if 0
    gchar *str;
    GArray *array = g_array_new(FALSE, TRUE, sizeof(gchar*));

    g_print("\n");

    str = g_strdup("Hello");
    g_print("%p => \"%s\"\n", str, str);
    g_array_append_val(array, str);
    str = g_strdup("World");
    g_print("%p => \"%s\"\n", str, str);
    g_array_append_val(array, str);
    str = g_strdup("!");
    g_print("%p => \"%s\"\n", str, str);
    g_array_append_val(array, str);

    g_print("array=%p\n", array->data);
    int i;
    for (i=0; i<array->len; i++) {
        gchar *v = g_array_index(array, gchar*, i);
        g_print("%p => \"%s\"\n", v, v);
    }
#endif

#if 0
    GString *str;
    GArrayGString *array = g_array_new(FALSE, TRUE, sizeof(gchar*));

    g_print("\n");

    str = g_string_new("Hello");
    g_array_append_val(array, str);
    str = g_string_new("World");
    g_array_append_val(array, str);
    str = g_string_new("!");
    g_array_append_val(array, str);

    g_print("%p->data = %p\n", array, array->data);
    int i;
    for (i=0; i<array->len; i++) {
        GString *v = g_array_index(array, GString*, i);
        g_print("%p->%p => \"%s\"\n", v, v->str, v->str);
    }
#endif

#if 0
    typedef GList GListGString;

    GString *str;
    GListGString *glist = NULL;
    //GList *glist = NULL;

    g_print("\n");

    str = g_string_new("Hello");
    glist = g_list_append(glist, str);
    str = g_string_new("World");
    glist = g_list_append(glist, str);
    str = g_string_new("!");
    glist = g_list_append(glist, str);

    GList *it;
    for (it=g_list_first(glist); it; it=it->next) {
        GString *item = it->data;
        if (item)
            g_print("\"%s\"\n", item->str);
        else
            g_print("{nil}\n");
    }
    g_print("\n");
#endif

}

void
antlr_test_g_list_to_string(void) {
    AntlrBitSet *first = antlr_bit_set_new();
    antlr_bit_set_set(first, 1, TRUE);
    antlr_bit_set_set(first, 2, TRUE);

    AntlrBitSet *next = antlr_bit_set_new();
    antlr_bit_set_set(next, 0, TRUE);
    antlr_bit_set_set(next, 3, TRUE);

    GList *list = NULL;
    list = g_list_append(list, first);
    list = g_list_append(list, next);

    {
        gchar *str = g_list_to_string(list, (GStringFunc)antlr_bit_set_to_string, NULL);
        gchar *equals = "[{1, 2}, {0, 3}]";
        g_assert_cmpstr(equals, ==, str);
    }

    g_list_free(list);
    antlr_bit_set_free(first);
    antlr_bit_set_free(next);
/*
    AntlrBitSet *first = antlr_bit_set_new();
    GList *list = NULL;
    list = g_list_append(list, first);
    {
        gchar *str = g_list_to_string(list, (GStringFunc)antlr_bit_set_to_string, NULL);
        gchar *equals = "[]";
        g_assert_cmpstr(equals, ==, str);
    }
    g_list_free(list);
    antlr_bit_set_free(first);
*/

}



GTestSuite *
antlr_test_bit_set_suite_create(void) {
    GTestSuite *suite_bit_set = g_test_create_suite("BitSet");

    g_test_suite_add (suite_bit_set, TESTCASE (antlr_test_bit_set_length, NULL));
    g_test_suite_add (suite_bit_set, TESTCASE (antlr_test_bit_set_cardinality, NULL));
    g_test_suite_add (suite_bit_set, TESTCASE (antlr_test_bit_set_to_string, NULL));
    g_test_suite_add (suite_bit_set, TESTCASE (antlr_test_bit_set_or, NULL));
    g_test_suite_add (suite_bit_set, TESTCASE (antlr_test_bit_set_get, NULL));
    g_test_suite_add (suite_bit_set, TESTCASE (antlr_test_bit_set_equals, NULL));


    //g_test_suite_add (suite_bit_set, TESTCASE (antlr_test_g_array, NULL));
    //g_test_suite_add (suite_bit_set, TESTCASE (antlr_test_g_list_to_string, NULL));

	return suite_bit_set;
}

