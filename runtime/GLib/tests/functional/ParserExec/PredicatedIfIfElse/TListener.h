
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
 * @enter_s: S enter event
 * @exit_s: S exit event
 * @enter_stmt: Stmt enter event
 * @exit_stmt: Stmt exit event
 * @enter_if_stmt: IfStmt enter event
 * @exit_if_stmt: IfStmt exit event
 *
 *
 * This interface defines an abstract listener for a parse tree produced by TParser.
 */
struct _TestTListenerInterface
{
    /*< private >*/
    GTypeInterface parent_iface;

    /*< public >*/
    void (*enter_s)  (TestTListener *self, TestContextS *ctx);
    void (*exit_s)   (TestTListener *self, TestContextS *ctx);

    void (*enter_stmt)  (TestTListener *self, TestContextStmt *ctx);
    void (*exit_stmt)   (TestTListener *self, TestContextStmt *ctx);

    void (*enter_if_stmt)  (TestTListener *self, TestContextIfStmt *ctx);
    void (*exit_if_stmt)   (TestTListener *self, TestContextIfStmt *ctx);

};

GType test_t_listener_get_type (void) G_GNUC_CONST;

void test_t_listener_enter_s  (TestTListener *self, TestContextS *ctx);
void test_t_listener_exit_s   (TestTListener *self, TestContextS *ctx);

void test_t_listener_enter_stmt  (TestTListener *self, TestContextStmt *ctx);
void test_t_listener_exit_stmt   (TestTListener *self, TestContextStmt *ctx);

void test_t_listener_enter_if_stmt  (TestTListener *self, TestContextIfStmt *ctx);
void test_t_listener_exit_if_stmt   (TestTListener *self, TestContextIfStmt *ctx);



G_END_DECLS

#endif /* __TEST_T_LISTENER_H__ */
