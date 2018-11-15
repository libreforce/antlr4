
// Generated from T.g4 by ANTLR 4.6



//#include "antlr4-runtime.h"
#include "TListener.h"


#ifndef __TEST_T_BASE_LISTENER_H__
#define __TEST_T_BASE_LISTENER_H__

#include <glib-object.h>


G_BEGIN_DECLS

#define TEST_TYPE_T_BASE_LISTENER            (test_t_base_listener_get_type())
#define TEST_T_BASE_LISTENER(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_T_BASE_LISTENER, TestTBaseListener))
#define TEST_T_BASE_LISTENER_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), TEST_TYPE_T_BASE_LISTENER, TestTBaseListenerClass))
#define TEST_IS_T_BASE_LISTENER(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_T_BASE_LISTENER))
#define TEST_IS_T_BASE_LISTENER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TEST_TYPE_T_BASE_LISTENER))
#define TEST_T_BASE_LISTENER_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), TEST_TYPE_T_BASE_LISTENER, TestTBaseListenerClass))

typedef struct _TestTBaseListener TestTBaseListener;
typedef struct _TestTBaseListenerClass TestTBaseListenerClass;

/**
 * TestTBaseListener:
 *
 * This class provides an empty implementation of TListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
struct _TestTBaseListener {
        /*< private >*/
        GObject parent_instance;
};

struct _TestTBaseListenerClass {
        /*< private >*/
        GObjectClass parent_class;
};

GType test_t_base_listener_get_type(void)G_GNUC_CONST;
TestTBaseListener *test_t_base_listener_new();

G_END_DECLS

#endif /* __TEST_T_BASE_LISTENER_H__ */







/*
class TBaseListener : public TListener {
public:

};
*/
