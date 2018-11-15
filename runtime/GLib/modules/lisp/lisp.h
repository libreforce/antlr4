/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * lisp.h
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


#ifndef __ANTLR_LISP_H__
#define __ANTLR_LISP_H__

#include <glib-object.h>


G_BEGIN_DECLS

#define ANTLR_TYPE_LISP            (antlr_lisp_get_type())
#define ANTLR_LISP(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), ANTLR_TYPE_LISP, AntlrLisp))
#define ANTLR_LISP_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), ANTLR_TYPE_LISP, AntlrLispClass))
#define ANTLR_IS_LISP(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ANTLR_TYPE_LISP))
#define ANTLR_IS_LISP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ANTLR_TYPE_LISP))
#define ANTLR_LISP_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), ANTLR_TYPE_LISP, AntlrLispClass))

typedef struct _AntlrLisp AntlrLisp;
typedef struct _AntlrLispClass AntlrLispClass;

struct _AntlrLisp {
	GObject parent_instance;
};

struct _AntlrLispClass {
	GObjectClass parent_class;
};

GType antlr_lisp_get_type();
AntlrLisp *antlr_lisp_new();

G_END_DECLS

#endif /* __ANTLR_LISP_H__ */

