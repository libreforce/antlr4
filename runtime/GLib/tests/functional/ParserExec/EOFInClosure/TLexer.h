
// Generated from T.g4 by ANTLR 4.6



#ifndef __TEST_T_LEXER_H__
#define __TEST_T_LEXER_H__

#include <glib-object.h>

G_BEGIN_DECLS

typedef enum _TestTLexerSymbols  TestTLexerSymbols;

enum _TestTLexerSymbols {
  TEST_T_LEXER_SYMBOL_T__0 = 1, TEST_T_LEXER_SYMBOL_T__1 = 2
};



#define TEST_TYPE_T_LEXER            (test_t_lexer_get_type())
#define TEST_T_LEXER(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_T_LEXER, TestTLexer))
#define TEST_T_LEXER_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_T_LEXER, TestTLexerClass))
#define TEST_IS_T_LEXER(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_T_LEXER))
#define TEST_IS_T_LEXER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_T_LEXER))
#define TEST_T_LEXER_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_T_LEXER, TestTLexerClass))

typedef struct _TestTLexer      TestTLexer;
typedef struct _TestTLexerClass TestTLexerClass;

struct _TestTLexer {
    /*< private >*/
    AntlrLexer parent_instance;

    /*< public >*/
};

struct _TestTLexerClass {
    /*< private >*/
    AntlrLexerClass parent_class;
};

GType test_t_lexer_get_type(void) G_GNUC_CONST;
TestTLexer *test_t_lexer_new();

TestTLexer *test_t_lexer_new_with_char_stream (AntlrCharStream *char_stream);

void test_t_lexer_atn_free ();
void test_t_lexer_decision_to_dfa_free ();
void test_t_lexer_token_names_free();



// Individual action functions triggered by action() above.

// Individual semantic predicate functions triggered by sempred() above.


G_END_DECLS

#endif /* __TEST_T_LEXER_H__ */

