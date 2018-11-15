
// Generated from T.g4 by ANTLR 4.6



#include <glib-object.h>

#include "antlr-runtime/types.h"

#include "antlr-runtime/misc/object.h"
#include "antlr-runtime/misc/int-iset.h"
#include "antlr-runtime/misc/interval.h"

#include "antlr-runtime/tree/tree.h"
#include "antlr-runtime/tree/syntax-tree.h"
#include "antlr-runtime/tree/parse-tree.h"
#include "antlr-runtime/tree/terminal-node.h"
#include "antlr-runtime/tree/terminal-node-impl.h"
#include "antlr-runtime/tree/error-node.h"
#include "antlr-runtime/tree/error-node-impl.h"
#include "antlr-runtime/tree/parse-tree-listener.h"

#include "antlr-runtime/int-stream.h"
#include "antlr-runtime/tree/tree.h"
#include "antlr-runtime/tree/syntax-tree.h"
#include "antlr-runtime/tree/parse-tree.h"
#include "antlr-runtime/tree/terminal-node.h"
#include "antlr-runtime/tree/error-node.h"
#include "antlr-runtime/tree/parse-tree-listener.h"
#include "antlr-runtime/rule-node.h"
#include "antlr-runtime/rule-context.h"
#include "antlr-runtime/parser-rule-context.h"
#include "antlr-runtime/vocabulary.h"
#include "antlr-runtime/vocabulary-impl.h"
#include "antlr-runtime/recognizer.h"
#include "antlr-runtime/parser.h"


#include "TParser.h"

#include "TListener.h"

#include "TBaseListener.h"


/* virtual AntlrParserTreeLsitener */
static void test_t_base_listener_interface_parse_tree_listener_visit_terminal (AntlrParseTreeListener *self, AntlrTerminalNode *node) {

}
static void test_t_base_listener_interface_parse_tree_listener_visit_error_node (AntlrParseTreeListener *self, AntlrErrorNode *node) {

}
static void test_t_base_listener_interface_parse_tree_listener_enter_every_rule (AntlrParseTreeListener *self, AntlrParserRuleContext *ctx) {

}
static void test_t_base_listener_interface_parse_tree_listener_exit_every_rule (AntlrParseTreeListener *self, AntlrParserRuleContext *ctx) {

}

static void test_t_base_listener_interface_parse_tree_listener_init(AntlrParseTreeListenerInterface *iface)
{
    iface->visit_terminal   = test_t_base_listener_interface_parse_tree_listener_visit_terminal;
    iface->visit_error_node = test_t_base_listener_interface_parse_tree_listener_visit_error_node;
    iface->enter_every_rule = test_t_base_listener_interface_parse_tree_listener_enter_every_rule;
    iface->exit_every_rule  = test_t_base_listener_interface_parse_tree_listener_exit_every_rule;
}

#define ENABLE_TRACE 1

static void test_t_base_listener_interface_t_listener_enter_prog(TestTListener *self, TestContextProg *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("enter_prog => %s\n", str_text);
    g_free(str_text);
#endif
}
static void test_t_base_listener_interface_t_listener_exit_prog(TestTListener *self, TestContextProg *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("exit_prog => %s\n", str_text);
    g_free(str_text);
#endif
}

static void test_t_base_listener_interface_t_listener_enter_print_expr(TestTListener *self, TestContextPrintExpr *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("enter_print_expr => %s\n", str_text);
    g_free(str_text);
#endif
}
static void test_t_base_listener_interface_t_listener_exit_print_expr(TestTListener *self, TestContextPrintExpr *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("exit_print_expr => %s\n", str_text);
    g_free(str_text);
#endif
}

static void test_t_base_listener_interface_t_listener_enter_assign(TestTListener *self, TestContextAssign *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("enter_assign => %s\n", str_text);
    g_free(str_text);
#endif
}
static void test_t_base_listener_interface_t_listener_exit_assign(TestTListener *self, TestContextAssign *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("exit_assign => %s\n", str_text);
    g_free(str_text);
#endif
}

static void test_t_base_listener_interface_t_listener_enter_blank(TestTListener *self, TestContextBlank *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("enter_blank => %s\n", str_text);
    g_free(str_text);
#endif
}
static void test_t_base_listener_interface_t_listener_exit_blank(TestTListener *self, TestContextBlank *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("exit_blank => %s\n", str_text);
    g_free(str_text);
#endif
}

static void test_t_base_listener_interface_t_listener_enter_parens(TestTListener *self, TestContextParens *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("enter_parens => %s\n", str_text);
    g_free(str_text);
#endif
}
static void test_t_base_listener_interface_t_listener_exit_parens(TestTListener *self, TestContextParens *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("exit_parens => %s\n", str_text);
    g_free(str_text);
#endif
}

static void test_t_base_listener_interface_t_listener_enter_mul_div(TestTListener *self, TestContextMulDiv *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("enter_mul_div => %s\n", str_text);
    g_free(str_text);
#endif
}
static void test_t_base_listener_interface_t_listener_exit_mul_div(TestTListener *self, TestContextMulDiv *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("exit_mul_div => %s\n", str_text);
    g_free(str_text);
#endif
}

static void test_t_base_listener_interface_t_listener_enter_add_sub(TestTListener *self, TestContextAddSub *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("enter_add_sub => %s\n", str_text);
    g_free(str_text);
#endif
}
static void test_t_base_listener_interface_t_listener_exit_add_sub(TestTListener *self, TestContextAddSub *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("exit_add_sub => %s\n", str_text);
    g_free(str_text);
#endif
}

static void test_t_base_listener_interface_t_listener_enter_id(TestTListener *self, TestContextId *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("enter_id => %s\n", str_text);
    g_free(str_text);
#endif
}
static void test_t_base_listener_interface_t_listener_exit_id(TestTListener *self, TestContextId *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("exit_id => %s\n", str_text);
    g_free(str_text);
#endif
}

static void test_t_base_listener_interface_t_listener_enter_int(TestTListener *self, TestContextInt *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("enter_int => %s\n", str_text);
    g_free(str_text);
#endif
}
static void test_t_base_listener_interface_t_listener_exit_int(TestTListener *self, TestContextInt *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("exit_int => %s\n", str_text);
    g_free(str_text);
#endif
}


static void test_t_base_listener_interface_t_listener_init(TestTListenerInterface *iface)
{
    iface->enter_prog = test_t_base_listener_interface_t_listener_enter_prog;
    iface->exit_prog = test_t_base_listener_interface_t_listener_exit_prog;

    iface->enter_print_expr = test_t_base_listener_interface_t_listener_enter_print_expr;
    iface->exit_print_expr = test_t_base_listener_interface_t_listener_exit_print_expr;

    iface->enter_assign = test_t_base_listener_interface_t_listener_enter_assign;
    iface->exit_assign = test_t_base_listener_interface_t_listener_exit_assign;

    iface->enter_blank = test_t_base_listener_interface_t_listener_enter_blank;
    iface->exit_blank = test_t_base_listener_interface_t_listener_exit_blank;

    iface->enter_parens = test_t_base_listener_interface_t_listener_enter_parens;
    iface->exit_parens = test_t_base_listener_interface_t_listener_exit_parens;

    iface->enter_mul_div = test_t_base_listener_interface_t_listener_enter_mul_div;
    iface->exit_mul_div = test_t_base_listener_interface_t_listener_exit_mul_div;

    iface->enter_add_sub = test_t_base_listener_interface_t_listener_enter_add_sub;
    iface->exit_add_sub = test_t_base_listener_interface_t_listener_exit_add_sub;

    iface->enter_id = test_t_base_listener_interface_t_listener_enter_id;
    iface->exit_id = test_t_base_listener_interface_t_listener_exit_id;

    iface->enter_int = test_t_base_listener_interface_t_listener_enter_int;
    iface->exit_int = test_t_base_listener_interface_t_listener_exit_int;


}

static void test_t_base_listener_class_init(TestTBaseListenerClass *klass);
static void test_t_base_listener_init(TestTBaseListener *gobject);

G_DEFINE_TYPE_WITH_CODE (TestTBaseListener, test_t_base_listener, G_TYPE_OBJECT,
                         G_IMPLEMENT_INTERFACE (ANTLR_TYPE_PARSE_TREE_LISTENER,
                                                test_t_base_listener_interface_parse_tree_listener_init)
                         G_IMPLEMENT_INTERFACE (TEST_TYPE_T_LISTENER,
                                                test_t_base_listener_interface_t_listener_init))

static void
test_t_base_listener_class_init(TestTBaseListenerClass *klass)
{
}

static void
test_t_base_listener_init (TestTBaseListener *object)
{
}

TestTBaseListener *
test_t_base_listener_new (void)
{
    return g_object_new (test_t_base_listener_get_type (), NULL);
}

