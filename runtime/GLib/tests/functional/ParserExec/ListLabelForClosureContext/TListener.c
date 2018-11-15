
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



G_DEFINE_INTERFACE(TestTListener, test_t_listener, ANTLR_TYPE_PARSE_TREE_LISTENER)


static void
test_t_listener_default_init(TestTListenerInterface *iface) {
    /* Add properties and signals to the interface here */
}

/**
 * test_t_listener_enter_if_statement:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Enter a parse tree produced by #TestContextIfStatement.
 */
void test_t_listener_enter_if_statement  (TestTListener *self, TestContextIfStatement *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->enter_if_statement(self, ctx);
}
/**
 * test_t_listener_exit_if_statement:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Exit a parse tree produced by #TestContextIfStatement.
 */
void test_t_listener_exit_if_statement   (TestTListener *self, TestContextIfStatement *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->exit_if_statement(self, ctx);
}

/**
 * test_t_listener_enter_else_if_statement:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Enter a parse tree produced by #TestContextElseIfStatement.
 */
void test_t_listener_enter_else_if_statement  (TestTListener *self, TestContextElseIfStatement *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->enter_else_if_statement(self, ctx);
}
/**
 * test_t_listener_exit_else_if_statement:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Exit a parse tree produced by #TestContextElseIfStatement.
 */
void test_t_listener_exit_else_if_statement   (TestTListener *self, TestContextElseIfStatement *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->exit_else_if_statement(self, ctx);
}

/**
 * test_t_listener_enter_expression:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Enter a parse tree produced by #TestContextExpression.
 */
void test_t_listener_enter_expression  (TestTListener *self, TestContextExpression *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->enter_expression(self, ctx);
}
/**
 * test_t_listener_exit_expression:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Exit a parse tree produced by #TestContextExpression.
 */
void test_t_listener_exit_expression   (TestTListener *self, TestContextExpression *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->exit_expression(self, ctx);
}

/**
 * test_t_listener_enter_executable_statement:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Enter a parse tree produced by #TestContextExecutableStatement.
 */
void test_t_listener_enter_executable_statement  (TestTListener *self, TestContextExecutableStatement *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->enter_executable_statement(self, ctx);
}
/**
 * test_t_listener_exit_executable_statement:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Exit a parse tree produced by #TestContextExecutableStatement.
 */
void test_t_listener_exit_executable_statement   (TestTListener *self, TestContextExecutableStatement *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->exit_executable_statement(self, ctx);
}

/**
 * test_t_listener_enter_else_statement:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Enter a parse tree produced by #TestContextElseStatement.
 */
void test_t_listener_enter_else_statement  (TestTListener *self, TestContextElseStatement *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->enter_else_statement(self, ctx);
}
/**
 * test_t_listener_exit_else_statement:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Exit a parse tree produced by #TestContextElseStatement.
 */
void test_t_listener_exit_else_statement   (TestTListener *self, TestContextElseStatement *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->exit_else_statement(self, ctx);
}






