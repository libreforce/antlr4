
// Generated from T.g4 by ANTLR 4.6



//#include "antlr4-runtime.h"
//#include "TParser.h"


#ifndef __TEST_T_LISTENER_H__
#define __TEST_T_LISTENER_H__

#include <glib-object.h>

G_BEGIN_DECLS

#define TEST_TYPE_T_LISTENER                (test_t_listener_get_type ())
#define TEST_T_LISTENER(obj)                (G_TYPE_CHECK_INSTANCE_CAST ((obj),  TEST_TYPE_T_LISTENER,  TestTListener))
#define TEST_IS_T_LISTENER(obj)             (G_TYPE_CHECK_INSTANCE_TYPE ((obj),  TEST_TYPE_T_LISTENER))
#define TEST_T_LISTENER_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst),  TEST_TYPE_T_LISTENER,  TestTListenerInterface))


typedef struct _TestTListener          TestTListener;/* dummy object */
typedef struct _TestTListenerInterface TestTListenerInterface;

/**
 * TestTListenerInterface:
 * @enter_if_statement: IfStatement enter event
 * @exit_if_statement: IfStatement exit event
 * @enter_else_if_statement: ElseIfStatement enter event
 * @exit_else_if_statement: ElseIfStatement exit event
 * @enter_expression: Expression enter event
 * @exit_expression: Expression exit event
 * @enter_executable_statement: ExecutableStatement enter event
 * @exit_executable_statement: ExecutableStatement exit event
 * @enter_else_statement: ElseStatement enter event
 * @exit_else_statement: ElseStatement exit event
 *
 *
 * This interface defines an abstract listener for a parse tree produced by TParser.
 */
struct _TestTListenerInterface
{
    /*< private >*/
    GTypeInterface parent_iface;

    /*< public >*/
    void (*enter_if_statement)  (TestTListener *self, TestContextIfStatement *ctx);
    void (*exit_if_statement)   (TestTListener *self, TestContextIfStatement *ctx);

    void (*enter_else_if_statement)  (TestTListener *self, TestContextElseIfStatement *ctx);
    void (*exit_else_if_statement)   (TestTListener *self, TestContextElseIfStatement *ctx);

    void (*enter_expression)  (TestTListener *self, TestContextExpression *ctx);
    void (*exit_expression)   (TestTListener *self, TestContextExpression *ctx);

    void (*enter_executable_statement)  (TestTListener *self, TestContextExecutableStatement *ctx);
    void (*exit_executable_statement)   (TestTListener *self, TestContextExecutableStatement *ctx);

    void (*enter_else_statement)  (TestTListener *self, TestContextElseStatement *ctx);
    void (*exit_else_statement)   (TestTListener *self, TestContextElseStatement *ctx);

};

GType test_t_listener_get_type (void) G_GNUC_CONST;

void test_t_listener_enter_if_statement  (TestTListener *self, TestContextIfStatement *ctx);
void test_t_listener_exit_if_statement   (TestTListener *self, TestContextIfStatement *ctx);

void test_t_listener_enter_else_if_statement  (TestTListener *self, TestContextElseIfStatement *ctx);
void test_t_listener_exit_else_if_statement   (TestTListener *self, TestContextElseIfStatement *ctx);

void test_t_listener_enter_expression  (TestTListener *self, TestContextExpression *ctx);
void test_t_listener_exit_expression   (TestTListener *self, TestContextExpression *ctx);

void test_t_listener_enter_executable_statement  (TestTListener *self, TestContextExecutableStatement *ctx);
void test_t_listener_exit_executable_statement   (TestTListener *self, TestContextExecutableStatement *ctx);

void test_t_listener_enter_else_statement  (TestTListener *self, TestContextElseStatement *ctx);
void test_t_listener_exit_else_statement   (TestTListener *self, TestContextElseStatement *ctx);



G_END_DECLS

#endif /* __TEST_T_LISTENER_H__ */
