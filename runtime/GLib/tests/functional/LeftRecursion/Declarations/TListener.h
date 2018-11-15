
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
 * @enter_declarator: Declarator enter event
 * @exit_declarator: Declarator exit event
 * @enter_e: E enter event
 * @exit_e: E exit event
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

    void (*enter_declarator)  (TestTListener *self, TestContextDeclarator *ctx);
    void (*exit_declarator)   (TestTListener *self, TestContextDeclarator *ctx);

    void (*enter_e)  (TestTListener *self, TestContextE *ctx);
    void (*exit_e)   (TestTListener *self, TestContextE *ctx);

};

GType test_t_listener_get_type (void) G_GNUC_CONST;

void test_t_listener_enter_s  (TestTListener *self, TestContextS *ctx);
void test_t_listener_exit_s   (TestTListener *self, TestContextS *ctx);

void test_t_listener_enter_declarator  (TestTListener *self, TestContextDeclarator *ctx);
void test_t_listener_exit_declarator   (TestTListener *self, TestContextDeclarator *ctx);

void test_t_listener_enter_e  (TestTListener *self, TestContextE *ctx);
void test_t_listener_exit_e   (TestTListener *self, TestContextE *ctx);



G_END_DECLS

#endif /* __TEST_T_LISTENER_H__ */
