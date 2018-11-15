
// Generated from T.g4 by ANTLR 4.6


//#include "antlr4-runtime.h"




#ifndef __TEST_T_PARSER_H__
#define __TEST_T_PARSER_H__

#include <glib-object.h>

G_BEGIN_DECLS

typedef enum _TestTParserTokens  TestTParserTokens;
typedef enum _TestTParserRules   TestTParserRules;

enum _TestTParserTokens {
  TEST_T_PARSER_T__0 = 1, TEST_T_PARSER_T__1 = 2, TEST_T_PARSER_T__2 = 3, 
  TEST_T_PARSER_T__3 = 4, TEST_T_PARSER_T__4 = 5
};

enum _TestTParserRules {
    TEST_T_PARSER_IF_STATEMENT = 0, TEST_T_PARSER_ELSE_IF_STATEMENT = 1, 
    TEST_T_PARSER_EXPRESSION = 2, TEST_T_PARSER_EXECUTABLE_STATEMENT = 3, 
    TEST_T_PARSER_ELSE_STATEMENT = 4
};

#define TEST_PARSER_EOF ANTLR_TOKEN_EOF

#define TEST_TYPE_T_PARSER            (test_t_parser_get_type())
#define TEST_T_PARSER(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_T_PARSER, TestTParser))
#define TEST_T_PARSER_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_T_PARSER, TestTParserClass))
#define TEST_IS_T_PARSER(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_T_PARSER))
#define TEST_IS_T_PARSER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_T_PARSER))
#define TEST_T_PARSER_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_T_PARSER, TestTParserClass))

typedef struct _TestTParser      TestTParser;
typedef struct _TestTParserClass TestTParserClass;

struct _TestTParser {
    /*< private >*/
    AntlrParser parent_instance;

    GArray *rule_names;

    /*< public >*/
};

struct _TestTParserClass {
    /*< private >*/
    AntlrParserClass parent_class;
};

GType test_t_parser_get_type(void) G_GNUC_CONST;
TestTParser *test_t_parser_new();
TestTParser *test_t_parser_new_with_token_stream (AntlrTokenStream *input);

void test_t_parser_atn_free ();
void test_t_parser_decision_to_dfa_free ();
void test_t_parser_token_names_free();


typedef struct _TestContextIfStatement TestContextIfStatement; 
typedef struct _TestContextElseIfStatement TestContextElseIfStatement; 
typedef struct _TestContextExpression TestContextExpression; 
typedef struct _TestContextExecutableStatement TestContextExecutableStatement; 
typedef struct _TestContextElseStatement TestContextElseStatement; 

//----------------- IfStatementContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_IF_STATEMENT            (test_context_if_statement_get_type())
#define TEST_CONTEXT_IF_STATEMENT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_IF_STATEMENT, TestContextIfStatement))
#define TEST_CONTEXT_IF_STATEMENT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_IF_STATEMENT, TestContextIfStatementClass))
#define TEST_IS_CONTEXT_IF_STATEMENT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_IF_STATEMENT))
#define TEST_IS_CONTEXT_IF_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_IF_STATEMENT))
#define TEST_CONTEXT_IF_STATEMENT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_IF_STATEMENT, TestContextIfStatementClass))


//typedef struct _TestContextIfStatement      TestContextIfStatement;
typedef struct _TestContextIfStatementClass TestContextIfStatementClass;

struct _TestContextIfStatement {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextIfStatementClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_if_statement_get_type(void) G_GNUC_CONST;
TestContextIfStatement *test_context_if_statement_new(AntlrParserRuleContext *parent, size_t invokingState);

TestContextExpression *test_context_if_statement_rule_get_expression(TestContextIfStatement* self);
GList* test_context_if_statement_rule_get_executable_statement(TestContextIfStatement* self);// of TestContextExecutableStatement
TestContextExecutableStatement* test_context_if_statement_at_rule_get_executable_statement(TestContextIfStatement* self, size_t i);
GList* test_context_if_statement_rule_get_else_if_statement(TestContextIfStatement* self);// of TestContextElseIfStatement
TestContextElseIfStatement* test_context_if_statement_at_rule_get_else_if_statement(TestContextIfStatement* self, size_t i);
TestContextElseStatement *test_context_if_statement_rule_get_else_statement(TestContextIfStatement* self);


TestContextIfStatement* test_t_parser_parse_if_statement(TestTParser* self, GError **error);
//----------------- ElseIfStatementContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_ELSE_IF_STATEMENT            (test_context_else_if_statement_get_type())
#define TEST_CONTEXT_ELSE_IF_STATEMENT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_ELSE_IF_STATEMENT, TestContextElseIfStatement))
#define TEST_CONTEXT_ELSE_IF_STATEMENT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_ELSE_IF_STATEMENT, TestContextElseIfStatementClass))
#define TEST_IS_CONTEXT_ELSE_IF_STATEMENT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_ELSE_IF_STATEMENT))
#define TEST_IS_CONTEXT_ELSE_IF_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_ELSE_IF_STATEMENT))
#define TEST_CONTEXT_ELSE_IF_STATEMENT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_ELSE_IF_STATEMENT, TestContextElseIfStatementClass))


//typedef struct _TestContextElseIfStatement      TestContextElseIfStatement;
typedef struct _TestContextElseIfStatementClass TestContextElseIfStatementClass;

struct _TestContextElseIfStatement {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextElseIfStatementClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_else_if_statement_get_type(void) G_GNUC_CONST;
TestContextElseIfStatement *test_context_else_if_statement_new(AntlrParserRuleContext *parent, size_t invokingState);

TestContextExpression *test_context_else_if_statement_rule_get_expression(TestContextElseIfStatement* self);
GList* test_context_else_if_statement_rule_get_executable_statement(TestContextElseIfStatement* self);// of TestContextExecutableStatement
TestContextExecutableStatement* test_context_else_if_statement_at_rule_get_executable_statement(TestContextElseIfStatement* self, size_t i);


TestContextElseIfStatement* test_t_parser_parse_else_if_statement(TestTParser* self, GError **error);
//----------------- ExpressionContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_EXPRESSION            (test_context_expression_get_type())
#define TEST_CONTEXT_EXPRESSION(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_EXPRESSION, TestContextExpression))
#define TEST_CONTEXT_EXPRESSION_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_EXPRESSION, TestContextExpressionClass))
#define TEST_IS_CONTEXT_EXPRESSION(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_EXPRESSION))
#define TEST_IS_CONTEXT_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_EXPRESSION))
#define TEST_CONTEXT_EXPRESSION_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_EXPRESSION, TestContextExpressionClass))


//typedef struct _TestContextExpression      TestContextExpression;
typedef struct _TestContextExpressionClass TestContextExpressionClass;

struct _TestContextExpression {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextExpressionClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_expression_get_type(void) G_GNUC_CONST;
TestContextExpression *test_context_expression_new(AntlrParserRuleContext *parent, size_t invokingState);



TestContextExpression* test_t_parser_parse_expression(TestTParser* self, GError **error);
//----------------- ExecutableStatementContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_EXECUTABLE_STATEMENT            (test_context_executable_statement_get_type())
#define TEST_CONTEXT_EXECUTABLE_STATEMENT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_EXECUTABLE_STATEMENT, TestContextExecutableStatement))
#define TEST_CONTEXT_EXECUTABLE_STATEMENT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_EXECUTABLE_STATEMENT, TestContextExecutableStatementClass))
#define TEST_IS_CONTEXT_EXECUTABLE_STATEMENT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_EXECUTABLE_STATEMENT))
#define TEST_IS_CONTEXT_EXECUTABLE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_EXECUTABLE_STATEMENT))
#define TEST_CONTEXT_EXECUTABLE_STATEMENT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_EXECUTABLE_STATEMENT, TestContextExecutableStatementClass))


//typedef struct _TestContextExecutableStatement      TestContextExecutableStatement;
typedef struct _TestContextExecutableStatementClass TestContextExecutableStatementClass;

struct _TestContextExecutableStatement {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextExecutableStatementClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_executable_statement_get_type(void) G_GNUC_CONST;
TestContextExecutableStatement *test_context_executable_statement_new(AntlrParserRuleContext *parent, size_t invokingState);



TestContextExecutableStatement* test_t_parser_parse_executable_statement(TestTParser* self, GError **error);
//----------------- ElseStatementContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_ELSE_STATEMENT            (test_context_else_statement_get_type())
#define TEST_CONTEXT_ELSE_STATEMENT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_ELSE_STATEMENT, TestContextElseStatement))
#define TEST_CONTEXT_ELSE_STATEMENT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_ELSE_STATEMENT, TestContextElseStatementClass))
#define TEST_IS_CONTEXT_ELSE_STATEMENT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_ELSE_STATEMENT))
#define TEST_IS_CONTEXT_ELSE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_ELSE_STATEMENT))
#define TEST_CONTEXT_ELSE_STATEMENT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_ELSE_STATEMENT, TestContextElseStatementClass))


//typedef struct _TestContextElseStatement      TestContextElseStatement;
typedef struct _TestContextElseStatementClass TestContextElseStatementClass;

struct _TestContextElseStatement {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextElseStatementClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_else_statement_get_type(void) G_GNUC_CONST;
TestContextElseStatement *test_context_else_statement_new(AntlrParserRuleContext *parent, size_t invokingState);



TestContextElseStatement* test_t_parser_parse_else_statement(TestTParser* self, GError **error);



G_END_DECLS

#endif /* __TEST_T_PARSER_H__ */

