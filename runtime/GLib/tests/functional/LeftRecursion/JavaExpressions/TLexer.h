
// Generated from T.g4 by ANTLR 4.6



#ifndef __TEST_T_LEXER_H__
#define __TEST_T_LEXER_H__

#include <glib-object.h>

G_BEGIN_DECLS

typedef enum _TestTLexerSymbols  TestTLexerSymbols;

enum _TestTLexerSymbols {
  TEST_T_LEXER_SYMBOL_T__0 = 1, TEST_T_LEXER_SYMBOL_T__1 = 2, TEST_T_LEXER_SYMBOL_T__2 = 3, 
  TEST_T_LEXER_SYMBOL_T__3 = 4, TEST_T_LEXER_SYMBOL_T__4 = 5, TEST_T_LEXER_SYMBOL_T__5 = 6, 
  TEST_T_LEXER_SYMBOL_T__6 = 7, TEST_T_LEXER_SYMBOL_T__7 = 8, TEST_T_LEXER_SYMBOL_T__8 = 9, 
  TEST_T_LEXER_SYMBOL_T__9 = 10, TEST_T_LEXER_SYMBOL_T__10 = 11, TEST_T_LEXER_SYMBOL_T__11 = 12, 
  TEST_T_LEXER_SYMBOL_T__12 = 13, TEST_T_LEXER_SYMBOL_T__13 = 14, TEST_T_LEXER_SYMBOL_T__14 = 15, 
  TEST_T_LEXER_SYMBOL_T__15 = 16, TEST_T_LEXER_SYMBOL_T__16 = 17, TEST_T_LEXER_SYMBOL_T__17 = 18, 
  TEST_T_LEXER_SYMBOL_T__18 = 19, TEST_T_LEXER_SYMBOL_T__19 = 20, TEST_T_LEXER_SYMBOL_T__20 = 21, 
  TEST_T_LEXER_SYMBOL_T__21 = 22, TEST_T_LEXER_SYMBOL_T__22 = 23, TEST_T_LEXER_SYMBOL_T__23 = 24, 
  TEST_T_LEXER_SYMBOL_T__24 = 25, TEST_T_LEXER_SYMBOL_T__25 = 26, TEST_T_LEXER_SYMBOL_T__26 = 27, 
  TEST_T_LEXER_SYMBOL_T__27 = 28, TEST_T_LEXER_SYMBOL_T__28 = 29, TEST_T_LEXER_SYMBOL_T__29 = 30, 
  TEST_T_LEXER_SYMBOL_T__30 = 31, TEST_T_LEXER_SYMBOL_T__31 = 32, TEST_T_LEXER_SYMBOL_T__32 = 33, 
  TEST_T_LEXER_SYMBOL_T__33 = 34, TEST_T_LEXER_SYMBOL_T__34 = 35, TEST_T_LEXER_SYMBOL_T__35 = 36, 
  TEST_T_LEXER_SYMBOL_T__36 = 37, TEST_T_LEXER_SYMBOL_T__37 = 38, TEST_T_LEXER_SYMBOL_T__38 = 39, 
  TEST_T_LEXER_SYMBOL_T__39 = 40, TEST_T_LEXER_SYMBOL_T__40 = 41, TEST_T_LEXER_SYMBOL_T__41 = 42, 
  TEST_T_LEXER_SYMBOL_T__42 = 43, TEST_T_LEXER_SYMBOL_T__43 = 44, TEST_T_LEXER_SYMBOL_T__44 = 45, 
  TEST_T_LEXER_SYMBOL_T__45 = 46, TEST_T_LEXER_SYMBOL_T__46 = 47, TEST_T_LEXER_SYMBOL_T__47 = 48, 
  TEST_T_LEXER_SYMBOL_T__48 = 49, TEST_T_LEXER_SYMBOL_ID = 50, TEST_T_LEXER_SYMBOL_INT = 51, 
  TEST_T_LEXER_SYMBOL_WS = 52
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

