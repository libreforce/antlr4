/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * d3.c
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
#include "antlr-runtime/types.h"
#include "antlr-runtime/misc/object.h"
#include "antlr-runtime/tree/tree.h"
#include "antlr-runtime/rule-context.h"

#include "d3.h"

static gchar *antlr_d3_endln = "\n";
static gchar *antlr_d3_ws = " ";
static gchar *antlr_d3_nil = "";
static gchar *antlr_d3_null = "null";
static gchar  antlr_d3_comma = ',';
static gchar  antlr_d3_glue = ' ';

static void antlr_d3_class_init(AntlrD3Class *klass);
static void antlr_d3_init(AntlrD3 *gobject);

G_DEFINE_TYPE (AntlrD3, antlr_d3, G_TYPE_OBJECT)

static void
antlr_d3_class_init(AntlrD3Class *klass)
{
    //GObjectClass *gobject_class;
    //gobject_class = (GObjectClass *) klass;
}

static void
antlr_d3_init (AntlrD3 *object)
{
    object->rule_names = NULL;
    object->format = ANTLR_D3_INDENT;
    object->indent_char = ' ';
    object->indent_length = 4;
    object->indent_max_depth = 10;

    object->indent_depth = 0;
    object->indent = NULL;
    object->id = 0;
    object->parent_id = 0;
    object->glue = antlr_d3_glue;
}

AntlrD3 *
antlr_d3_new (void)
{
	return g_object_new (antlr_d3_get_type (),
	                     NULL);
}

#if 0
static gchar*
antlr_rule_context_interface_tree_to_string_tree (AntlrTree *self, GArray *rule_names)
{
    gchar *s = antlr_tree_trees_get_node_text(self, rule_names);
    gint child_count = antlr_tree_get_child_count(self);
    if ( child_count==0 )
        return s;
    GString *buf = g_string_new("(");
    g_string_append(buf, s);
    g_string_append_c_inline(buf, ' ');

    int i;
    for (i = 0; i<child_count; i++) {
        if ( i>0 )
            g_string_append_c_inline(buf, ' ');
        AntlrTree *child = antlr_tree_get_child(self, i);
        gchar *child_str = antlr_tree_to_string_tree(child, rule_names);
        g_string_append(buf, child_str);
    }

    g_string_append_c_inline(buf, ')');

    // cf: antlr_tree_default_to_string_tree
    // see Trees a set of utilitys routines
    return g_string_free(buf, FALSE);
}
#endif

#include "antlr-runtime/atn/atn.h"
//#include "antlr-runtime/parser-rule-context.h"
#include "antlr-runtime/tree/syntax-tree.h"
#include "antlr-runtime/tree/parse-tree.h"

#include "antlr-runtime/tree/terminal-node.h"
#include "antlr-runtime/tree/error-node.h"
#include "antlr-runtime/tree/terminal-node-impl.h"
#include "antlr-runtime/token.h"
static gchar*
antlr_d3_tree_get_node_text(AntlrTree *t, GArray *rule_names) {
    if ( rule_names!=NULL ) {
        if ( ANTLR_IS_RULE_CONTEXT(t) ) {
            AntlrRuleContext *rule = ANTLR_RULE_CONTEXT(t);
            gint rule_index = antlr_rule_context_get_rule_index(rule);
            GString *rule_name = g_array_index(rule_names, GString*, rule_index);
//            int altNumber = ((RuleContext) t).getAltNumber();
//            if ( altNumber!=ANTLR_ATN_INVALID_ALT_NUMBER ) {
//                return ruleName+":"+altNumber;
//            }
            return rule_name->str;
        } else if ( ANTLR_IS_ERROR_NODE(t)) {
            return g_strdup("AntlrErrorNode(t).toString()");
        } else if ( ANTLR_IS_TERMINAL_NODE(t)) {
            AntlrToken *symbol = antlr_terminal_node_get_symbol(ANTLR_TERMINAL_NODE(t));
            if (NULL!=symbol) {
                gchar *s = antlr_token_get_text(symbol);
                return s;
            }
        }

    }

    return NULL;
}


static gchar*
antlr_d3_get_indent(AntlrD3 *self)
{
    gchar *tab = NULL;
    AntlrD3Format format = self->format;

    if (format>=ANTLR_D3_INVALID)
        format = ANTLR_D3_DEFAULT;

    switch (format) {
    case ANTLR_D3_INDENT:
        tab = g_strnfill(self->indent_depth * self->indent_length, self->indent_char);
        break;
    case ANTLR_D3_DEFAULT:
    case ANTLR_D3_INLINE:
    default:
        tab = antlr_d3_nil;
        break;
    }
    return tab;
}

static gchar*
antlr_d3_get_endl(AntlrD3 *self)
{
    gchar *endln = NULL;
    AntlrD3Format format = self->format;

    if (format>=ANTLR_D3_INVALID)
        format = ANTLR_D3_DEFAULT;

    switch (format) {
    case ANTLR_D3_INDENT:
        endln = antlr_d3_endln;
        break;
    case ANTLR_D3_DEFAULT:
    case ANTLR_D3_INLINE:
    default:
        endln = antlr_d3_ws;
        break;
    }
    return endln;
}


static gchar*
antlr_d3_export_tree_node(AntlrD3 *self, AntlrTree *tree)
{
    gchar *s = antlr_d3_tree_get_node_text(tree, self->rule_names);
    gint child_count = antlr_tree_get_child_count(tree);
    gchar *indent = antlr_d3_get_indent(self);
    gchar *endl = antlr_d3_get_endl(self);
    gchar  current_glue = self->glue;
    gint id = self->id;
    gint parent_id = self->parent_id;
    gchar *parent = NULL;
    if (id>1) {
        parent = g_strdup_printf("%d", parent_id);
    } else {
        parent = g_strdup("null");
    }

    GString *buffer = g_string_new("");
    g_string_append_printf(buffer, "%s{%s", indent, endl);
    self->indent_depth++;

    gchar *sub_indent = antlr_d3_get_indent(self);
    g_string_append_printf(buffer, "%s\"name\": \"%s\",%s", sub_indent, s, endl);
    g_string_append_printf(buffer, "%s\"id\": \"%d\",%s", sub_indent, self->id, endl);
    if ( child_count ) {
        g_string_append_printf(buffer, "%s\"children\": [%s", sub_indent, endl);
        self->indent_depth++;
        // TODO: refactor antlr_d3_export_tree_children
        if (child_count>1) {
            self->glue = antlr_d3_comma;
        }
        self->parent_id = id;
        int i;
        int last = child_count-1;
        for (i = 0; i<child_count; i++) {
            if (i==last) {
                self->glue = antlr_d3_glue;
            }
            self->id++;
            AntlrTree *child = antlr_tree_get_child(tree, i);
            gchar *child_str = antlr_d3_export_tree_node(self, ANTLR_TREE(child));
            g_string_append(buffer, child_str);
            g_free(child_str);
        }
        self->indent_depth--;
        g_string_append_printf(buffer, "%s],%s", sub_indent, endl);
        self->glue = current_glue;
    }
    g_string_append_printf(buffer, "%s\"parent\": \"%s\"%s", sub_indent, parent, endl);

    self->indent_depth--;
    g_string_append_printf(buffer, "%s}%c%s", indent, current_glue, endl);

    return g_string_free(buffer, FALSE);
}

#include "antlr-runtime/tree/tree.h"
AntlrD3Output*
antlr_d3_export(AntlrD3 *self, AntlrTree *tree, GError **error)
{
    AntlrD3Output *output = g_new(AntlrD3Output, 1);
    ((AntlrExportOutput*)output)->type = antlr_d3_get_type();

    gchar *indent = antlr_d3_get_indent(self);
    gchar *endl = antlr_d3_get_endl(self);
    GString *buf = g_string_new("");

    g_string_append_printf(buf, "%s[%s", indent, endl);
    self->indent_depth++;

    self->id++;
    // le mieux est d'appeler la fonction qui affichera les children...
    gchar *str_node = antlr_d3_export_tree_node(self, tree);
    g_string_append(buf, str_node);
    g_free(str_node);

    self->indent_depth--;
    g_string_append_printf(buf, "%s]%s", indent, endl);

    //output->str = g_strdup("[{\"name\": \"root\", \"parent\": \"null\"}]");
    output->str = g_string_free(buf, FALSE);
    return output;
}
