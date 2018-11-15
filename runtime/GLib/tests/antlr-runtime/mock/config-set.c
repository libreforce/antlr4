/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * config-set.c
 * Copyright (C) 2014 Sergio DE VASCONCELOS <schaublore@gmail.com>
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

#include <glib-object.h>

#include "antlr-runtime/runtime.h"

#include "config.h"

#include "config-set.h"




/**
 * test_antlr_mock_config_set_create_0:
 * Returns : [(23,1,[$]), (25,2,[$]), (27,3,[$]), (29,4,[$]), (31,5,[$]), (33,6,[$]), (35,7,[$]), (37,8,[$]), (39,9,[$])]
 */
AntlrATNConfigSet*
test_antlr_mock_config_set_create_0 (void)
{
    AntlrATNConfigSet *configs = antlr_atn_config_set_new();

    AntlrATNConfig *config_1 = test_antlr_mock_atn_config_create_23_1_$();
    AntlrATNConfig *config_2 = test_antlr_mock_atn_config_create_25_2_$();
    AntlrATNConfig *config_3 = test_antlr_mock_atn_config_create_27_3_$();
    AntlrATNConfig *config_4 = test_antlr_mock_atn_config_create_29_4_$();
    AntlrATNConfig *config_5 = test_antlr_mock_atn_config_create_31_5_$();
    AntlrATNConfig *config_6 = test_antlr_mock_atn_config_create_33_6_$();
    AntlrATNConfig *config_7 = test_antlr_mock_atn_config_create_35_7_$();
    AntlrATNConfig *config_8 = test_antlr_mock_atn_config_create_37_8_$();
    AntlrATNConfig *config_9 = test_antlr_mock_atn_config_create_39_9_$();

    antlr_atn_config_set_add(configs, config_1);
    antlr_atn_config_set_add(configs, config_2);
    antlr_atn_config_set_add(configs, config_3);
    antlr_atn_config_set_add(configs, config_4);
    antlr_atn_config_set_add(configs, config_5);
    antlr_atn_config_set_add(configs, config_6);
    antlr_atn_config_set_add(configs, config_7);
    antlr_atn_config_set_add(configs, config_8);
    antlr_atn_config_set_add(configs, config_9);

    return configs;
}


/**
 * test_antlr_mock_config_set_create_1:
 * Returns : [(14,6,[$])]
 */
AntlrATNConfigSet*
test_antlr_mock_config_set_create_1 (void)
{
    AntlrATNConfigSet *configs = antlr_atn_config_set_new();

    AntlrATNConfig *config_1 = test_antlr_mock_atn_config_create_14_6_$();

    antlr_atn_config_set_add(configs, config_1);

    return configs;
}


/**
 * test_antlr_mock_config_set_create_2:
 * Returns : [(4,1,[$])]
 */
AntlrATNConfigSet*
test_antlr_mock_config_set_create_2 (void)
{
    AntlrATNConfigSet *configs = antlr_atn_config_set_new();

    AntlrATNConfig *config_1 = test_antlr_mock_atn_config_create_4_1_$();

    antlr_atn_config_set_add(configs, config_1);

    return configs;
}


/**
 * test_antlr_mock_config_set_create_3:
 * Returns : [(20,9,[$])]
 */
AntlrATNConfigSet*
test_antlr_mock_config_set_create_3 (void)
{
    AntlrATNConfigSet *configs = antlr_atn_config_set_new();

    AntlrATNConfig *config_1 = test_antlr_mock_atn_config_create_20_9_$();

    antlr_atn_config_set_add(configs, config_1);

    return configs;
}


/**
 * test_antlr_mock_config_set_create_4:
 * Returns : [(6,2,[$])]
 */
AntlrATNConfigSet*
test_antlr_mock_config_set_create_4 (void)
{
    AntlrATNConfigSet *configs = antlr_atn_config_set_new();

    AntlrATNConfig *config_1 = test_antlr_mock_atn_config_create_6_2_$();

    antlr_atn_config_set_add(configs, config_1);

    return configs;
}


/**
 * test_antlr_mock_config_set_create_5:
 * Returns : [(16,7,[$])]
 */
AntlrATNConfigSet*
test_antlr_mock_config_set_create_5 (void)
{
    AntlrATNConfigSet *configs = antlr_atn_config_set_new();

    AntlrATNConfig *config_1 = test_antlr_mock_atn_config_create_16_7_$();

    antlr_atn_config_set_add(configs, config_1);

    return configs;
}


