/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * config.c
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

#include "prediction.h"

#include "config.h"

/**
 * test_antlr_mock_atn_config_create_16_7_$:
 * Returns : (16,7,[$])
 */
AntlrATNConfig*
test_antlr_mock_atn_config_create_16_7_$(void)
{
    AntlrATNState *atn_state=NULL;
    gint alt = 7;
    AntlrPredictionContext *prediction_context=NULL;
    AntlrSemanticContext *semantic_context=NULL;
    AntlrATNConfig *config = NULL;


    atn_state = antlr_atn_state_new();
    atn_state->state_number = 16;
    prediction_context = test_antlr_mock_prediction_create_$();
    config = antlr_atn_config_new_full(atn_state, alt, prediction_context, semantic_context);

    return config;
}


/**
 * test_antlr_mock_atn_config_create_6_2_$:
 * Returns : (6,2,[$])
 */
AntlrATNConfig*
test_antlr_mock_atn_config_create_6_2_$(void)
{
    AntlrATNState *atn_state=NULL;
    gint alt = 2;
    AntlrPredictionContext *prediction_context=NULL;
    AntlrSemanticContext *semantic_context=NULL;
    AntlrATNConfig *config = NULL;


    atn_state = antlr_atn_state_new();
    atn_state->state_number = 6;
    prediction_context = test_antlr_mock_prediction_create_$();
    config = antlr_atn_config_new_full(atn_state, alt, prediction_context, semantic_context);

    return config;
}

/**
 * test_antlr_mock_atn_config_create_20_9_$:
 * Returns : (20,9,[$])
 */
AntlrATNConfig*
test_antlr_mock_atn_config_create_20_9_$(void)
{
    AntlrATNState *atn_state=NULL;
    gint alt = 9;
    AntlrPredictionContext *prediction_context=NULL;
    AntlrSemanticContext *semantic_context=NULL;
    AntlrATNConfig *config = NULL;


    atn_state = antlr_atn_state_new();
    atn_state->state_number = 20;
    prediction_context = test_antlr_mock_prediction_create_$();
    config = antlr_atn_config_new_full(atn_state, alt, prediction_context, semantic_context);

    return config;
}

/**
 * test_antlr_mock_atn_config_create_4_1_$:
 * Returns : (4,1,[$])
 */
AntlrATNConfig*
test_antlr_mock_atn_config_create_4_1_$(void)
{
    AntlrATNState *atn_state=NULL;
    gint alt = 1;
    AntlrPredictionContext *prediction_context=NULL;
    AntlrSemanticContext *semantic_context=NULL;
    AntlrATNConfig *config = NULL;


    atn_state = antlr_atn_state_new();
    atn_state->state_number = 4;
    prediction_context = test_antlr_mock_prediction_create_$();
    config = antlr_atn_config_new_full(atn_state, alt, prediction_context, semantic_context);

    return config;
}

/**
 * test_antlr_mock_atn_config_create_14_6_$:
 * Returns : (14,6,[$])
 */
AntlrATNConfig*
test_antlr_mock_atn_config_create_14_6_$(void)
{
    AntlrATNState *atn_state=NULL;
    gint alt = 6;
    AntlrPredictionContext *prediction_context=NULL;
    AntlrSemanticContext *semantic_context=NULL;
    AntlrATNConfig *config = NULL;


    atn_state = antlr_atn_state_new();
    atn_state->state_number = 14;
    prediction_context = test_antlr_mock_prediction_create_$();
    config = antlr_atn_config_new_full(atn_state, alt, prediction_context, semantic_context);

    return config;
}

/**
 * test_antlr_mock_atn_config_create_23_1_$:
 * Returns : (23,1,[$])
 */
AntlrATNConfig*
test_antlr_mock_atn_config_create_23_1_$(void)
{
    AntlrATNState *atn_state=NULL;
    gint alt = 1;
    AntlrPredictionContext *prediction_context=NULL;
    AntlrATNConfig *config = NULL;


    atn_state = antlr_atn_state_new();
    atn_state->state_number = 23;
    prediction_context = test_antlr_mock_prediction_create_$();
    config = antlr_atn_config_new_with_state(atn_state, alt, prediction_context);

    return config;
}

/**
 * test_antlr_mock_atn_config_create_25_2_$:
 * Returns : (25,2,[$])
 */
AntlrATNConfig*
test_antlr_mock_atn_config_create_25_2_$(void)
{
    AntlrATNState *atn_state=NULL;
    gint alt = 2;
    AntlrPredictionContext *prediction_context=NULL;
    AntlrATNConfig *config = NULL;


    atn_state = antlr_atn_state_new();
    atn_state->state_number = 25;
    prediction_context = test_antlr_mock_prediction_create_$();
    config = antlr_atn_config_new_with_state(atn_state, alt, prediction_context);

    return config;
}

/**
 * test_antlr_mock_atn_config_create_27_3_$:
 * Returns : (27,3,[$])
 */
AntlrATNConfig*
test_antlr_mock_atn_config_create_27_3_$(void)
{
    AntlrATNState *atn_state=NULL;
    gint alt = 3;
    AntlrPredictionContext *prediction_context=NULL;
    AntlrATNConfig *config = NULL;


    atn_state = antlr_atn_state_new();
    atn_state->state_number = 27;
    prediction_context = test_antlr_mock_prediction_create_$();
    config = antlr_atn_config_new_with_state(atn_state, alt, prediction_context);

    return config;
}

/**
 * test_antlr_mock_atn_config_create_29_4_$:
 * Returns : (29,4,[$])
 */
AntlrATNConfig*
test_antlr_mock_atn_config_create_29_4_$(void)
{
    AntlrATNState *atn_state=NULL;
    gint alt = 4;
    AntlrPredictionContext *prediction_context=NULL;
    AntlrATNConfig *config = NULL;


    atn_state = antlr_atn_state_new();
    atn_state->state_number = 29;
    prediction_context = test_antlr_mock_prediction_create_$();
    config = antlr_atn_config_new_with_state(atn_state, alt, prediction_context);

    return config;
}

/**
 * test_antlr_mock_atn_config_create_31_5_$:
 * Returns : (31,5,[$])
 */
AntlrATNConfig*
test_antlr_mock_atn_config_create_31_5_$(void)
{
    AntlrATNState *atn_state=NULL;
    gint alt = 5;
    AntlrPredictionContext *prediction_context=NULL;
    AntlrATNConfig *config = NULL;


    atn_state = antlr_atn_state_new();
    atn_state->state_number = 31;
    prediction_context = test_antlr_mock_prediction_create_$();
    config = antlr_atn_config_new_with_state(atn_state, alt, prediction_context);

    return config;
}

/**
 * test_antlr_mock_atn_config_create_33_6_$:
 * Returns : (33,6,[$])
 */
AntlrATNConfig*
test_antlr_mock_atn_config_create_33_6_$(void)
{
    AntlrATNState *atn_state=NULL;
    gint alt = 6;
    AntlrPredictionContext *prediction_context=NULL;
    AntlrATNConfig *config = NULL;


    atn_state = antlr_atn_state_new();
    atn_state->state_number = 33;
    prediction_context = test_antlr_mock_prediction_create_$();
    config = antlr_atn_config_new_with_state(atn_state, alt, prediction_context);

    return config;
}


/**
 * test_antlr_mock_atn_config_create_35_7_$:
 * Returns : (35,7,[$])
 */
AntlrATNConfig*
test_antlr_mock_atn_config_create_35_7_$(void)
{
    AntlrATNState *atn_state=NULL;
    gint alt = 7;
    AntlrPredictionContext *prediction_context=NULL;
    AntlrATNConfig *config = NULL;


    atn_state = antlr_atn_state_new();
    atn_state->state_number = 35;
    prediction_context = test_antlr_mock_prediction_create_$();
    config = antlr_atn_config_new_with_state(atn_state, alt, prediction_context);

    return config;
}

/**
 * test_antlr_mock_atn_config_create_37_8_$:
 * Returns : (37,8,[$])
 */
AntlrATNConfig*
test_antlr_mock_atn_config_create_37_8_$(void)
{
    AntlrATNState *atn_state=NULL;
    gint alt = 8;
    AntlrPredictionContext *prediction_context=NULL;
    AntlrATNConfig *config = NULL;


    atn_state = antlr_atn_state_new();
    atn_state->state_number = 37;
    prediction_context = test_antlr_mock_prediction_create_$();
    config = antlr_atn_config_new_with_state(atn_state, alt, prediction_context);

    return config;
}

/**
 * test_antlr_mock_atn_config_create_39_9_$:
 * Returns : (39,9,[$])
 */
AntlrATNConfig*
test_antlr_mock_atn_config_create_39_9_$(void)
{
    AntlrATNState *atn_state=NULL;
    gint alt = 9;
    AntlrPredictionContext *prediction_context=NULL;
    AntlrATNConfig *config = NULL;


    atn_state = antlr_atn_state_new();
    atn_state->state_number = 39;
    prediction_context = test_antlr_mock_prediction_create_$();
    config = antlr_atn_config_new_with_state(atn_state, alt, prediction_context);

    return config;
}
