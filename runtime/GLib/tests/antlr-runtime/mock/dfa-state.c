/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * dfa-state.c
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

#include "config-set.h"

#include "dfa-state.h"

/**
 * test_antlr_mock_dfa_state_create_simple:
 * Returns :
 * 0:[(23,1,[$]), (25,2,[$]), (27,3,[$]), (29,4,[$]), (31,5,[$]), (33,6,[$]), (35,7,[$]), (37,8,[$]), (39,9,[$])]
 * 1:[(14,6,[$])]=>6
 * 2:[(4,1,[$])]=>1
 * 3:[(20,9,[$])]=>9
 * 4:[(6,2,[$])]=>2
 * 5:[(16,7,[$])]=>7
 */
AntlrDFAState*
test_antlr_mock_dfa_state_create_simple(void)
{
    AntlrATNConfigSet *configs = test_antlr_mock_config_set_create_0();

    AntlrDFAState *dfa_state = antlr_dfa_state_new_with_config_set(configs);
    dfa_state->state_number = 1;

    return dfa_state;
}
