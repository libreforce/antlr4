/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * lisp.c
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


#include "lisp.h"


static void antlr_lisp_class_init(AntlrLispClass *klass);
static void antlr_lisp_init(AntlrLisp *gobject);

G_DEFINE_TYPE (AntlrLisp, antlr_lisp, G_TYPE_OBJECT)

static void
antlr_lisp_class_object_dispose(GObject *object)
{
    G_OBJECT_CLASS(antlr_lisp_parent_class)->dispose(object);
}

static void
antlr_lisp_class_init(AntlrLispClass *klass)
{
	GObjectClass *gobject_class;

    gobject_class = (GObjectClass *) klass;
    gobject_class->dispose = antlr_lisp_class_object_dispose;

}

static void
antlr_lisp_init (AntlrLisp *object)
{
}

AntlrLisp *
antlr_lisp_new (void)
{
	return g_object_new (antlr_lisp_get_type (),
	                     NULL);
}

#include "antlr-runtime/types.h"
#include "antlr-runtime/tree/tree.h"
gchar*
antlr_lisp_export(AntlrTree *tree)
{
    return NULL;
}
