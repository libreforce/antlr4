
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
  TEST_T_PARSER_T__3 = 4, TEST_T_PARSER_ID = 5, TEST_T_PARSER_WS = 6
};

enum _TestTParserRules {
    TEST_T_PARSER_START = 0, TEST_T_PARSER_STATEMENT = 1, TEST_T_PARSER_IF_STATEMENT = 2
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


typedef struct _TestContextStart TestContextStart; 
typedef struct _TestContextStatement TestContextStatement; 
typedef struct _TestContextIfStatement TestContextIfStatement; 

//----------------- StartContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_START            (test_context_start_get_type())
#define TEST_CONTEXT_START(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_START, TestContextStart))
#define TEST_CONTEXT_START_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_START, TestContextStartClass))
#define TEST_IS_CONTEXT_START(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_START))
#define TEST_IS_CONTEXT_START_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_START))
#define TEST_CONTEXT_START_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_START, TestContextStartClass))


//typedef struct _TestContextStart      TestContextStart;
typedef struct _TestContextStartClass TestContextStartClass;

struct _TestContextStart {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextStartClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_start_get_type(void) G_GNUC_CONST;
TestContextStart *test_context_start_new(AntlrParserRuleContext *parent, size_t invokingState);

GList* test_context_start_rule_get_statement(TestContextStart* self);// of TestContextStatement
TestContextStatement* test_context_start_at_rule_get_statement(TestContextStart* self, size_t i);


TestContextStart* test_t_parser_parse_start(TestTParser* self, GError **error);
//----------------- StatementContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_STATEMENT            (test_context_statement_get_type())
#define TEST_CONTEXT_STATEMENT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_STATEMENT, TestContextStatement))
#define TEST_CONTEXT_STATEMENT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_STATEMENT, TestContextStatementClass))
#define TEST_IS_CONTEXT_STATEMENT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_STATEMENT))
#define TEST_IS_CONTEXT_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_STATEMENT))
#define TEST_CONTEXT_STATEMENT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_STATEMENT, TestContextStatementClass))


//typedef struct _TestContextStatement      TestContextStatement;
typedef struct _TestContextStatementClass TestContextStatementClass;

struct _TestContextStatement {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextStatementClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_statement_get_type(void) G_GNUC_CONST;
TestContextStatement *test_context_statement_new(AntlrParserRuleContext *parent, size_t invokingState);

TestContextIfStatement *test_context_statement_rule_get_if_statement(TestContextStatement* self);


TestContextStatement* test_t_parser_parse_statement(TestTParser* self, GError **error);
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

GList* test_context_if_statement_rule_get_statement(TestContextIfStatement* self);// of TestContextStatement
TestContextStatement* test_context_if_statement_at_rule_get_statement(TestContextIfStatement* self, size_t i);


TestContextIfStatement* test_t_parser_parse_if_statement(TestTParser* self, GError **error);



G_END_DECLS

#endif /* __TEST_T_PARSER_H__ */

