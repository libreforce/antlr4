
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
 * @enter_one: One enter event
 * @exit_one: One exit event
 * @enter_two: Two enter event
 * @exit_two: Two exit event
 * @enter_subrule: Subrule enter event
 * @exit_subrule: Subrule exit event
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

    void (*enter_one)  (TestTListener *self, TestContextOne *ctx);
    void (*exit_one)   (TestTListener *self, TestContextOne *ctx);

    void (*enter_two)  (TestTListener *self, TestContextTwo *ctx);
    void (*exit_two)   (TestTListener *self, TestContextTwo *ctx);

    void (*enter_subrule)  (TestTListener *self, TestContextSubrule *ctx);
    void (*exit_subrule)   (TestTListener *self, TestContextSubrule *ctx);

};

GType test_t_listener_get_type (void) G_GNUC_CONST;

void test_t_listener_enter_start  (TestTListener *self, TestContextStart *ctx);
void test_t_listener_exit_start   (TestTListener *self, TestContextStart *ctx);

void test_t_listener_enter_one  (TestTListener *self, TestContextOne *ctx);
void test_t_listener_exit_one   (TestTListener *self, TestContextOne *ctx);

void test_t_listener_enter_two  (TestTListener *self, TestContextTwo *ctx);
void test_t_listener_exit_two   (TestTListener *self, TestContextTwo *ctx);

void test_t_listener_enter_subrule  (TestTListener *self, TestContextSubrule *ctx);
void test_t_listener_exit_subrule   (TestTListener *self, TestContextSubrule *ctx);



G_END_DECLS

#endif /* __TEST_T_LISTENER_H__ */
