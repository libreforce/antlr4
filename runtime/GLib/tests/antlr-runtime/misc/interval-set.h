/*
 * interval-set.h
 * Copyright (C) 2013 MY_NAME MY.NAME@CONTACT
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __TEST_INTERVAL_SET_H__
#define __TEST_INTERVAL_SET_H__


#include <glib.h>
#include <glib/gtestutils.h>

#if GLIB_CHECK_VERSION(2,25,12)
typedef GTestFixtureFunc TCFunc;
#else
typedef void (*TCFunc)(void);
#endif
#define TESTCASE(t, d) g_test_create_case (#t, 0, d, NULL, (TCFunc) t, NULL)



void test_interval_set_suite_single_element(void);
void test_interval_set_suite_min(void);
void test_interval_set_suite_isolated_elements(void);
void test_interval_set_suite_mixed_ranges_and_elements(void);
void test_interval_set_suite_simple_and(void);
void test_interval_set_range_and_isolated_element(void);
void test_interval_set_empty_intersection(void);
void test_interval_set_empty_intersection_single_elements(void);
void test_interval_set_subtract_of_completely_contained_range(void);
void test_interval_set_not_single_element(void);
void test_interval_set_not_set(void);
void test_interval_set_not_equal_set(void);
void test_interval_set_not_set_edge_element(void);
void test_interval_set_not_set_fragmented_vocabulary(void);
void my_stop(void);


GTestSuite *
test_interval_set_suite_create(void);


#endif /* __TEST_INTERVAL_SET_H__ */

