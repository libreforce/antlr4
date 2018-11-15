/*
 * flexible-hash-map.h
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


#ifndef __ANTLR_TEST_FLEXIBLE_HASH_MAP_H__
#define __ANTLR_TEST_FLEXIBLE_HASH_MAP_H__


#include <glib.h>
#include <glib/gtestutils.h>

#if GLIB_CHECK_VERSION(2,25,12)
typedef GTestFixtureFunc TCFunc;
#else
typedef void (*TCFunc)(void);
#endif
#define TESTCASE(t, d) g_test_create_case (#t, 0, d, NULL, (TCFunc) t, NULL)


void antlr_test_flexible_hash_map_new_and_free (void);

GTestSuite *
antlr_test_flexible_hash_map_suite_create(void);


#endif /* __ANTLR_TEST_FLEXIBLE_HASH_MAP_H__ */

