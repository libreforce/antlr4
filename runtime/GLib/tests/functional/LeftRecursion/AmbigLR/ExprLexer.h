
// Generated from T.g4 by ANTLR 4.6



#ifndef __TEST_EXPR_LEXER_H__
#define __TEST_EXPR_LEXER_H__

#include <glib-object.h>

G_BEGIN_DECLS

typedef enum _TestExprLexerSymbols  TestExprLexerSymbols;

enum _TestExprLexerSymbols {
  TEST_EXPR_LEXER_SYMBOL_T__0 = 1, TEST_EXPR_LEXER_SYMBOL_T__1 = 2, TEST_EXPR_LEXER_SYMBOL_T__2 = 3, 
  TEST_EXPR_LEXER_SYMBOL_MUL = 4, TEST_EXPR_LEXER_SYMBOL_DIV = 5, TEST_EXPR_LEXER_SYMBOL_ADD = 6, 
  TEST_EXPR_LEXER_SYMBOL_SUB = 7, TEST_EXPR_LEXER_SYMBOL_ID = 8, TEST_EXPR_LEXER_SYMBOL_INT = 9, 
  TEST_EXPR_LEXER_SYMBOL_NEWLINE = 10, TEST_EXPR_LEXER_SYMBOL_WS = 11
};



#define TEST_TYPE_EXPR_LEXER            (test_expr_lexer_get_type())
#define TEST_EXPR_LEXER(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_EXPR_LEXER, TestExprLexer))
#define TEST_EXPR_LEXER_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_EXPR_LEXER, TestExprLexerClass))
#define TEST_IS_EXPR_LEXER(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_EXPR_LEXER))
#define TEST_IS_EXPR_LEXER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_EXPR_LEXER))
#define TEST_EXPR_LEXER_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_EXPR_LEXER, TestExprLexerClass))

typedef struct _TestExprLexer      TestExprLexer;
typedef struct _TestExprLexerClass TestExprLexerClass;

struct _TestExprLexer {
    /*< private >*/
    AntlrLexer parent_instance;

    /*< public >*/
};

struct _TestExprLexerClass {
    /*< private >*/
    AntlrLexerClass parent_class;
};

GType test_expr_lexer_get_type(void) G_GNUC_CONST;
TestExprLexer *test_expr_lexer_new();

TestExprLexer *test_expr_lexer_new_with_char_stream (AntlrCharStream *char_stream);

void test_expr_lexer_atn_free ();
void test_expr_lexer_decision_to_dfa_free ();
void test_expr_lexer_token_names_free();



// Individual action functions triggered by action() above.

// Individual semantic predicate functions triggered by sempred() above.


G_END_DECLS

#endif /* __TEST_EXPR_LEXER_H__ */

