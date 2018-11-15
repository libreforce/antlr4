
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
//#include "T.h"

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

static void test_t_base_listener_interface_t_listener_enter_stat(TestTListener *self, TestContextStat *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("enter_stat => %s\n", str_text);
    g_free(str_text);
#endif
}
static void test_t_base_listener_interface_t_listener_exit_stat(TestTListener *self, TestContextStat *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("exit_stat => %s\n", str_text);
    g_free(str_text);
#endif
}

static void test_t_base_listener_interface_t_listener_enter_ifstat(TestTListener *self, TestContextIfstat *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("enter_ifstat => %s\n", str_text);
    g_free(str_text);
#endif
}
static void test_t_base_listener_interface_t_listener_exit_ifstat(TestTListener *self, TestContextIfstat *ctx) {
#if ENABLE_TRACE
    gchar *str_text = antlr_parse_tree_get_text(ANTLR_PARSE_TREE(ctx));
    g_print("exit_ifstat => %s\n", str_text);
    g_free(str_text);
#endif
}


static void test_t_base_listener_interface_t_listener_init(TestTListenerInterface *iface)
{
    iface->enter_stat = test_t_base_listener_interface_t_listener_enter_stat;
    iface->exit_stat = test_t_base_listener_interface_t_listener_exit_stat;

    iface->enter_ifstat = test_t_base_listener_interface_t_listener_enter_ifstat;
    iface->exit_ifstat = test_t_base_listener_interface_t_listener_exit_ifstat;


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

