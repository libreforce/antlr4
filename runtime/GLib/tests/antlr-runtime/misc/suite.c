#include "suite.h"

#include "interval.h"
#include "interval-set.h"
#include "double-key-map.h"
#include "flexible-hash-map.h"
#include "bit-set.h"


GTestSuite *
test_antlr_misc_create_suite(void) {
    GTestSuite *suite = g_test_create_suite("misc");

    GTestSuite *suite_interval = test_interval_create_suite();
    g_test_suite_add_suite(suite, suite_interval);

    GTestSuite *suite_interval_set = test_interval_set_suite_create();
    g_test_suite_add_suite(suite, suite_interval_set);

    GTestSuite *suite_double_key_map = antlr_test_double_key_map_suite_create();
    g_test_suite_add_suite(suite, suite_double_key_map);

    GTestSuite *suite_bit_set = antlr_test_bit_set_suite_create();
    g_test_suite_add_suite(suite, suite_bit_set);

    GTestSuite *suite_flexible_hash_map = antlr_test_flexible_hash_map_suite_create();
    g_test_suite_add_suite(suite, suite_flexible_hash_map);

    return suite;
}

