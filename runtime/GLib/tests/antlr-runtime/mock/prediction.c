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

#include "prediction.h"


/**
 * test_antlr_mock_prediction_create_$:
 * Returns : $
 */
AntlrPredictionContext*
test_antlr_mock_prediction_create_$(void)
{
    //AntlrPredictionContext *empty=antlr_singleton_prediction_context_create(NULL, ANTLR_PREDICTION_CONTEXT_EMPTY_RETURN_STATE);
    AntlrPredictionContext *empty=antlr_empty_prediction_context_new();
    return empty;
}
