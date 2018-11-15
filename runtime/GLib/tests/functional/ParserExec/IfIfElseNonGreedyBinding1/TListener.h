
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
 * @enter_start: Start enter event
 * @exit_start: Start exit event
 * @enter_statement: Statement enter event
 * @exit_statement: Statement exit event
 * @enter_if_statement: IfStatement enter event
 * @exit_if_statement: IfStatement exit event
 *
 *
 * This interface defines an abstract listener for a parse tree produced by TParser.
 */
struct _TestTListenerInterface
{
    /*< private >*/
    GTypeInterface parent_iface;

    /*< public >*/
    void (*enter_start)  (TestTListener *self, TestContextStart *ctx);
    void (*exit_start)   (TestTListener *self, TestContextStart *ctx);

    void (*enter_statement)  (TestTListener *self, TestContextStatement *ctx);
    void (*exit_statement)   (TestTListener *self, TestContextStatement *ctx);

    void (*enter_if_statement)  (TestTListener *self, TestContextIfStatement *ctx);
    void (*exit_if_statement)   (TestTListener *self, TestContextIfStatement *ctx);

};

GType test_t_listener_get_type (void) G_GNUC_CONST;

void test_t_listener_enter_start  (TestTListener *self, TestContextStart *ctx);
void test_t_listener_exit_start   (TestTListener *self, TestContextStart *ctx);

void test_t_listener_enter_statement  (TestTListener *self, TestContextStatement *ctx);
void test_t_listener_exit_statement   (TestTListener *self, TestContextStatement *ctx);

void test_t_listener_enter_if_statement  (TestTListener *self, TestContextIfStatement *ctx);
void test_t_listener_exit_if_statement   (TestTListener *self, TestContextIfStatement *ctx);



G_END_DECLS

#endif /* __TEST_T_LISTENER_H__ */
