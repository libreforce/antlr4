/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * d3.h
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


#ifndef __ANTLR_D3_H__
#define __ANTLR_D3_H__

#include <glib-object.h>

typedef enum _AntlrD3Format {
    ANTLR_D3_DEFAULT=0,
    ANTLR_D3_INLINE,
    ANTLR_D3_INDENT,
    ANTLR_D3_INVALID
} AntlrD3Format;

G_BEGIN_DECLS

#define ANTLR_TYPE_D3            (antlr_d3_get_type())
#define ANTLR_D3(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), ANTLR_TYPE_D3, AntlrD3))
#define ANTLR_D3_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), ANTLR_TYPE_D3, AntlrD3Class))
#define ANTLR_IS_D3(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ANTLR_TYPE_D3))
#define ANTLR_IS_D3_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ANTLR_TYPE_D3))
#define ANTLR_D3_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), ANTLR_TYPE_D3, AntlrD3Class))

typedef struct _AntlrD3 AntlrD3;
typedef struct _AntlrD3Class AntlrD3Class;


typedef struct _AntlrExportOutput {
    GType type;// ANTLR_TYPE_LISP, ANTLR_TYPE_D3, ...
} AntlrExportOutput;

typedef struct _AntlrD3Output {
    AntlrExportOutput parent_instance;

    gchar *str;
} AntlrD3Output;

struct _AntlrD3 {
    /*< private >*/
    GObject parent_instance;
    gchar   *indent;// ???? maybe a hash table of indent
    gchar    glue;
    gint     indent_depth;
    gint     id;
    gint     parent_id;

    /*< public >*/
    GArrayGString *rule_names;
    AntlrD3Format format;
    gchar    indent_char;// '\t', ' '
    gint     indent_length;// number of indent_char
    gint     indent_max_depth;
};

struct _AntlrD3Class {
	GObjectClass parent_class;
};

GType antlr_d3_get_type();
AntlrD3 *antlr_d3_new(/*tree, rule_names*/);
AntlrD3Output *antlr_d3_export(AntlrD3 *self, AntlrTree *tree, GError **error);

G_END_DECLS

#endif /* __ANTLR_D3_H__ */

