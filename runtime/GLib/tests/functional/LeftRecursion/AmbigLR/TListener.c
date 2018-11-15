
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
 * test_t_listener_enter_prog:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Enter a parse tree produced by #TestContextProg.
 */
void test_t_listener_enter_prog  (TestTListener *self, TestContextProg *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->enter_prog(self, ctx);
}
/**
 * test_t_listener_exit_prog:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Exit a parse tree produced by #TestContextProg.
 */
void test_t_listener_exit_prog   (TestTListener *self, TestContextProg *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->exit_prog(self, ctx);
}

/**
 * test_t_listener_enter_print_expr:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Enter a parse tree produced by #TestContextPrintExpr.
 */
void test_t_listener_enter_print_expr  (TestTListener *self, TestContextPrintExpr *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->enter_print_expr(self, ctx);
}
/**
 * test_t_listener_exit_print_expr:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Exit a parse tree produced by #TestContextPrintExpr.
 */
void test_t_listener_exit_print_expr   (TestTListener *self, TestContextPrintExpr *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->exit_print_expr(self, ctx);
}

/**
 * test_t_listener_enter_assign:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Enter a parse tree produced by #TestContextAssign.
 */
void test_t_listener_enter_assign  (TestTListener *self, TestContextAssign *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->enter_assign(self, ctx);
}
/**
 * test_t_listener_exit_assign:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Exit a parse tree produced by #TestContextAssign.
 */
void test_t_listener_exit_assign   (TestTListener *self, TestContextAssign *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->exit_assign(self, ctx);
}

/**
 * test_t_listener_enter_blank:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Enter a parse tree produced by #TestContextBlank.
 */
void test_t_listener_enter_blank  (TestTListener *self, TestContextBlank *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->enter_blank(self, ctx);
}
/**
 * test_t_listener_exit_blank:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Exit a parse tree produced by #TestContextBlank.
 */
void test_t_listener_exit_blank   (TestTListener *self, TestContextBlank *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->exit_blank(self, ctx);
}

/**
 * test_t_listener_enter_parens:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Enter a parse tree produced by #TestContextParens.
 */
void test_t_listener_enter_parens  (TestTListener *self, TestContextParens *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->enter_parens(self, ctx);
}
/**
 * test_t_listener_exit_parens:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Exit a parse tree produced by #TestContextParens.
 */
void test_t_listener_exit_parens   (TestTListener *self, TestContextParens *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->exit_parens(self, ctx);
}

/**
 * test_t_listener_enter_mul_div:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Enter a parse tree produced by #TestContextMulDiv.
 */
void test_t_listener_enter_mul_div  (TestTListener *self, TestContextMulDiv *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->enter_mul_div(self, ctx);
}
/**
 * test_t_listener_exit_mul_div:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Exit a parse tree produced by #TestContextMulDiv.
 */
void test_t_listener_exit_mul_div   (TestTListener *self, TestContextMulDiv *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->exit_mul_div(self, ctx);
}

/**
 * test_t_listener_enter_add_sub:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Enter a parse tree produced by #TestContextAddSub.
 */
void test_t_listener_enter_add_sub  (TestTListener *self, TestContextAddSub *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->enter_add_sub(self, ctx);
}
/**
 * test_t_listener_exit_add_sub:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Exit a parse tree produced by #TestContextAddSub.
 */
void test_t_listener_exit_add_sub   (TestTListener *self, TestContextAddSub *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->exit_add_sub(self, ctx);
}

/**
 * test_t_listener_enter_id:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Enter a parse tree produced by #TestContextId.
 */
void test_t_listener_enter_id  (TestTListener *self, TestContextId *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->enter_id(self, ctx);
}
/**
 * test_t_listener_exit_id:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Exit a parse tree produced by #TestContextId.
 */
void test_t_listener_exit_id   (TestTListener *self, TestContextId *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->exit_id(self, ctx);
}

/**
 * test_t_listener_enter_int:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Enter a parse tree produced by #TestContextInt.
 */
void test_t_listener_enter_int  (TestTListener *self, TestContextInt *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->enter_int(self, ctx);
}
/**
 * test_t_listener_exit_int:
 * @self: Some #TestTListener
 * @ctx: the parse tree instance
 *
 * Exit a parse tree produced by #TestContextInt.
 */
void test_t_listener_exit_int   (TestTListener *self, TestContextInt *ctx) {
    g_assert(TEST_IS_T_LISTENER(self));
    TEST_T_LISTENER_GET_INTERFACE(self)->exit_int(self, ctx);
}






