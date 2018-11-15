
// Generated from T.g4 by ANTLR 4.6


//#include "antlr4-runtime.h"




#ifndef __TEST_T_PARSER_H__
#define __TEST_T_PARSER_H__

#include <glib-object.h>

G_BEGIN_DECLS

#define TEST_T_PARSER_EOF ANTLR_TOKEN_EOF

typedef enum _TestTParserTokens  TestTParserTokens;
typedef enum _TestTParserRules   TestTParserRules;

enum _TestTParserTokens {
  TEST_T_PARSER_T__0 = 1, TEST_T_PARSER_ELSE = 2, TEST_T_PARSER_ID = 3, 
  TEST_T_PARSER_WS = 4
};

enum _TestTParserRules {
    TEST_T_PARSER_S = 0, TEST_T_PARSER_STMT = 1, TEST_T_PARSER_IF_STMT = 2
};


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


typedef struct _TestContextS TestContextS; 
typedef struct _TestContextStmt TestContextStmt; 
typedef struct _TestContextIfStmt TestContextIfStmt; 

//----------------- SContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_S            (test_context_s_get_type())
#define TEST_CONTEXT_S(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_S, TestContextS))
#define TEST_CONTEXT_S_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_S, TestContextSClass))
#define TEST_IS_CONTEXT_S(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_S))
#define TEST_IS_CONTEXT_S_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_S))
#define TEST_CONTEXT_S_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_S, TestContextSClass))


//typedef struct _TestContextS      TestContextS;
typedef struct _TestContextSClass TestContextSClass;

struct _TestContextS {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextSClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_s_get_type(void) G_GNUC_CONST;
TestContextS *test_context_s_new(AntlrParserRuleContext *parent, size_t invokingState);

TestContextStmt *test_context_s_rule_get_stmt(TestContextS* self);
AntlrTerminalNode *test_context_s_token_get_eof(TestContextS* self);


TestContextS* test_t_parser_parse_s(TestTParser* self, GError **error);
//----------------- StmtContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_STMT            (test_context_stmt_get_type())
#define TEST_CONTEXT_STMT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_STMT, TestContextStmt))
#define TEST_CONTEXT_STMT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_STMT, TestContextStmtClass))
#define TEST_IS_CONTEXT_STMT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_STMT))
#define TEST_IS_CONTEXT_STMT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_STMT))
#define TEST_CONTEXT_STMT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_STMT, TestContextStmtClass))


//typedef struct _TestContextStmt      TestContextStmt;
typedef struct _TestContextStmtClass TestContextStmtClass;

struct _TestContextStmt {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextStmtClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_stmt_get_type(void) G_GNUC_CONST;
TestContextStmt *test_context_stmt_new(AntlrParserRuleContext *parent, size_t invokingState);

TestContextIfStmt *test_context_stmt_rule_get_if_stmt(TestContextStmt* self);
AntlrTerminalNode *test_context_stmt_token_get_id(TestContextStmt* self);


TestContextStmt* test_t_parser_parse_stmt(TestTParser* self, GError **error);
//----------------- IfStmtContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_IF_STMT            (test_context_if_stmt_get_type())
#define TEST_CONTEXT_IF_STMT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_IF_STMT, TestContextIfStmt))
#define TEST_CONTEXT_IF_STMT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_IF_STMT, TestContextIfStmtClass))
#define TEST_IS_CONTEXT_IF_STMT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_IF_STMT))
#define TEST_IS_CONTEXT_IF_STMT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_IF_STMT))
#define TEST_CONTEXT_IF_STMT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_IF_STMT, TestContextIfStmtClass))


//typedef struct _TestContextIfStmt      TestContextIfStmt;
typedef struct _TestContextIfStmtClass TestContextIfStmtClass;

struct _TestContextIfStmt {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextIfStmtClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_if_stmt_get_type(void) G_GNUC_CONST;
TestContextIfStmt *test_context_if_stmt_new(AntlrParserRuleContext *parent, size_t invokingState);

AntlrTerminalNode *test_context_if_stmt_token_get_id(TestContextIfStmt* self);
GList* test_context_if_stmt_rule_get_stmt(TestContextIfStmt* self);// of TestContextStmt
TestContextStmt* test_context_if_stmt_at_rule_get_stmt(TestContextIfStmt* self, size_t i);


TestContextIfStmt* test_t_parser_parse_if_stmt(TestTParser* self, GError **error);

//gboolean test_t_parser_sempred(TestTParser *self, AntlrRuleContext *local_context, size_t ruleIndex, size_t predicateIndex);
gboolean test_t_parser_sempred_ifstmt(TestTParser* self, AntlrRuleContext *local_context, size_t predicateIndex);



G_END_DECLS

#endif /* __TEST_T_PARSER_H__ */

