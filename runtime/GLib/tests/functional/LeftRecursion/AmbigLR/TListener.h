
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
 * @enter_prog: Prog enter event
 * @exit_prog: Prog exit event
 * @enter_print_expr: PrintExpr enter event
 * @exit_print_expr: PrintExpr exit event
 * @enter_assign: Assign enter event
 * @exit_assign: Assign exit event
 * @enter_blank: Blank enter event
 * @exit_blank: Blank exit event
 * @enter_parens: Parens enter event
 * @exit_parens: Parens exit event
 * @enter_mul_div: MulDiv enter event
 * @exit_mul_div: MulDiv exit event
 * @enter_add_sub: AddSub enter event
 * @exit_add_sub: AddSub exit event
 * @enter_id: Id enter event
 * @exit_id: Id exit event
 * @enter_int: Int enter event
 * @exit_int: Int exit event
 *
 *
 * This interface defines an abstract listener for a parse tree produced by TParser.
 */
struct _TestTListenerInterface
{
    /*< private >*/
    GTypeInterface parent_iface;

    /*< public >*/
    void (*enter_prog)  (TestTListener *self, TestContextProg *ctx);
    void (*exit_prog)   (TestTListener *self, TestContextProg *ctx);

    void (*enter_print_expr)  (TestTListener *self, TestContextPrintExpr *ctx);
    void (*exit_print_expr)   (TestTListener *self, TestContextPrintExpr *ctx);

    void (*enter_assign)  (TestTListener *self, TestContextAssign *ctx);
    void (*exit_assign)   (TestTListener *self, TestContextAssign *ctx);

    void (*enter_blank)  (TestTListener *self, TestContextBlank *ctx);
    void (*exit_blank)   (TestTListener *self, TestContextBlank *ctx);

    void (*enter_parens)  (TestTListener *self, TestContextParens *ctx);
    void (*exit_parens)   (TestTListener *self, TestContextParens *ctx);

    void (*enter_mul_div)  (TestTListener *self, TestContextMulDiv *ctx);
    void (*exit_mul_div)   (TestTListener *self, TestContextMulDiv *ctx);

    void (*enter_add_sub)  (TestTListener *self, TestContextAddSub *ctx);
    void (*exit_add_sub)   (TestTListener *self, TestContextAddSub *ctx);

    void (*enter_id)  (TestTListener *self, TestContextId *ctx);
    void (*exit_id)   (TestTListener *self, TestContextId *ctx);

    void (*enter_int)  (TestTListener *self, TestContextInt *ctx);
    void (*exit_int)   (TestTListener *self, TestContextInt *ctx);

};

GType test_t_listener_get_type (void) G_GNUC_CONST;

void test_t_listener_enter_prog  (TestTListener *self, TestContextProg *ctx);
void test_t_listener_exit_prog   (TestTListener *self, TestContextProg *ctx);

void test_t_listener_enter_print_expr  (TestTListener *self, TestContextPrintExpr *ctx);
void test_t_listener_exit_print_expr   (TestTListener *self, TestContextPrintExpr *ctx);

void test_t_listener_enter_assign  (TestTListener *self, TestContextAssign *ctx);
void test_t_listener_exit_assign   (TestTListener *self, TestContextAssign *ctx);

void test_t_listener_enter_blank  (TestTListener *self, TestContextBlank *ctx);
void test_t_listener_exit_blank   (TestTListener *self, TestContextBlank *ctx);

void test_t_listener_enter_parens  (TestTListener *self, TestContextParens *ctx);
void test_t_listener_exit_parens   (TestTListener *self, TestContextParens *ctx);

void test_t_listener_enter_mul_div  (TestTListener *self, TestContextMulDiv *ctx);
void test_t_listener_exit_mul_div   (TestTListener *self, TestContextMulDiv *ctx);

void test_t_listener_enter_add_sub  (TestTListener *self, TestContextAddSub *ctx);
void test_t_listener_exit_add_sub   (TestTListener *self, TestContextAddSub *ctx);

void test_t_listener_enter_id  (TestTListener *self, TestContextId *ctx);
void test_t_listener_exit_id   (TestTListener *self, TestContextId *ctx);

void test_t_listener_enter_int  (TestTListener *self, TestContextInt *ctx);
void test_t_listener_exit_int   (TestTListener *self, TestContextInt *ctx);



G_END_DECLS

#endif /* __TEST_T_LISTENER_H__ */
