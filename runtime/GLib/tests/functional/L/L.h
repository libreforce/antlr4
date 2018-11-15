
// Generated from /home/gaulouis/local/src/glib-antlr/tests/functional/L/L.g4 by ANTLR 4.6



#ifndef __TEST_FUNCTIONAL_L_H__
#define __TEST_FUNCTIONAL_L_H__

#include <glib-object.h>

G_BEGIN_DECLS

typedef enum _TestFunctionalLSymbols  TestFunctionalLSymbols;

enum _TestFunctionalLSymbols {
  TEST_FUNCTIONAL_L_SYMBOL_ACTION2 = 1, TEST_FUNCTIONAL_L_SYMBOL_STRING = 2, 
  TEST_FUNCTIONAL_L_SYMBOL_WS = 3
};



#define TEST_FUNCTIONAL_TYPE_L            (test_functional_l_get_type())
#define TEST_FUNCTIONAL_L(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_FUNCTIONAL_TYPE_L, TestFunctionalL))
#define TEST_FUNCTIONAL_L_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_FUNCTIONAL_TYPE_L, TestFunctionalLClass))
#define TEST_FUNCTIONAL_IS_L(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_FUNCTIONAL_TYPE_L))
#define TEST_FUNCTIONAL_IS_L_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_FUNCTIONAL_TYPE_L))
#define TEST_FUNCTIONAL_L_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_FUNCTIONAL_TYPE_L, TestFunctionalLClass))

typedef struct _TestFunctionalL      TestFunctionalL;
typedef struct _TestFunctionalLClass TestFunctionalLClass;

struct _TestFunctionalL {
    /*< private >*/
    AntlrLexer parent_instance;

    /*< public >*/
};

struct _TestFunctionalLClass {
    /*< private >*/
    AntlrLexerClass parent_class;
};

GType test_functional_l_get_type(void) G_GNUC_CONST;
TestFunctionalL *test_functional_l_new();

TestFunctionalL *test_functional_l_new_with_char_stream (AntlrCharStream *char_stream);

void test_functional_l_atn_free ();
void test_functional_l_decision_to_dfa_free ();
void test_functional_l_token_names_free();



// Individual action functions triggered by action() above.

// Individual semantic predicate functions triggered by sempred() above.


G_END_DECLS

#endif /* __TEST_FUNCTIONAL_L_H__ */

