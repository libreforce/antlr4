
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
 * @enter_a: A enter event
 * @exit_a: A exit event
 * @enter_b: B enter event
 * @exit_b: B exit event
 *
 *
 * This interface defines an abstract listener for a parse tree produced by TParser.
 */
struct _TestTListenerInterface
{
    /*< private >*/
    GTypeInterface parent_iface;

    /*< public >*/
    void (*enter_a)  (TestTListener *self, TestContextA *ctx);
    void (*exit_a)   (TestTListener *self, TestContextA *ctx);

    void (*enter_b)  (TestTListener *self, TestContextB *ctx);
    void (*exit_b)   (TestTListener *self, TestContextB *ctx);

};

GType test_t_listener_get_type (void) G_GNUC_CONST;

void test_t_listener_enter_a  (TestTListener *self, TestContextA *ctx);
void test_t_listener_exit_a   (TestTListener *self, TestContextA *ctx);

void test_t_listener_enter_b  (TestTListener *self, TestContextB *ctx);
void test_t_listener_exit_b   (TestTListener *self, TestContextB *ctx);



G_END_DECLS

#endif /* __TEST_T_LISTENER_H__ */
