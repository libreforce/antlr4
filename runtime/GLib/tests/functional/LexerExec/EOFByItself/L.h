
// Generated from L.g4 by ANTLR 4.6



#ifndef __TEST_L_H__
#define __TEST_L_H__

#include <glib-object.h>

G_BEGIN_DECLS

typedef enum _TestLSymbols  TestLSymbols;

enum _TestLSymbols {
  TEST_L_SYMBOL_DONE = 1, TEST_L_SYMBOL_A = 2
};



#define TEST_TYPE_L            (test_l_get_type())
#define TEST_L(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_L, TestL))
#define TEST_L_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_L, TestLClass))
#define TEST_IS_L(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_L))
#define TEST_IS_L_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_L))
#define TEST_L_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_L, TestLClass))

typedef struct _TestL      TestL;
typedef struct _TestLClass TestLClass;

struct _TestL {
    /*< private >*/
    AntlrLexer parent_instance;

    /*< public >*/
};

struct _TestLClass {
    /*< private >*/
    AntlrLexerClass parent_class;
};

GType test_l_get_type(void) G_GNUC_CONST;
TestL *test_l_new();

TestL *test_l_new_with_char_stream (AntlrCharStream *char_stream);

void test_l_atn_free ();
void test_l_decision_to_dfa_free ();
void test_l_token_names_free();



// Individual action functions triggered by action() above.

// Individual semantic predicate functions triggered by sempred() above.


G_END_DECLS

#endif /* __TEST_L_H__ */

