
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
  TEST_T_PARSER_T__0 = 1, TEST_T_PARSER_T__1 = 2, TEST_T_PARSER_T__2 = 3, 
  TEST_T_PARSER_T__3 = 4, TEST_T_PARSER_T__4 = 5, TEST_T_PARSER_T__5 = 6, 
  TEST_T_PARSER_T__6 = 7, TEST_T_PARSER_T__7 = 8, TEST_T_PARSER_T__8 = 9, 
  TEST_T_PARSER_T__9 = 10, TEST_T_PARSER_T__10 = 11, TEST_T_PARSER_T__11 = 12, 
  TEST_T_PARSER_T__12 = 13, TEST_T_PARSER_T__13 = 14, TEST_T_PARSER_T__14 = 15, 
  TEST_T_PARSER_T__15 = 16, TEST_T_PARSER_T__16 = 17, TEST_T_PARSER_T__17 = 18, 
  TEST_T_PARSER_T__18 = 19, TEST_T_PARSER_T__19 = 20, TEST_T_PARSER_T__20 = 21, 
  TEST_T_PARSER_T__21 = 22, TEST_T_PARSER_T__22 = 23, TEST_T_PARSER_T__23 = 24, 
  TEST_T_PARSER_T__24 = 25, TEST_T_PARSER_T__25 = 26, TEST_T_PARSER_T__26 = 27, 
  TEST_T_PARSER_T__27 = 28, TEST_T_PARSER_T__28 = 29, TEST_T_PARSER_T__29 = 30, 
  TEST_T_PARSER_T__30 = 31, TEST_T_PARSER_T__31 = 32, TEST_T_PARSER_T__32 = 33, 
  TEST_T_PARSER_T__33 = 34, TEST_T_PARSER_T__34 = 35, TEST_T_PARSER_T__35 = 36, 
  TEST_T_PARSER_T__36 = 37, TEST_T_PARSER_T__37 = 38, TEST_T_PARSER_T__38 = 39, 
  TEST_T_PARSER_T__39 = 40, TEST_T_PARSER_T__40 = 41, TEST_T_PARSER_T__41 = 42, 
  TEST_T_PARSER_T__42 = 43, TEST_T_PARSER_T__43 = 44, TEST_T_PARSER_T__44 = 45, 
  TEST_T_PARSER_T__45 = 46, TEST_T_PARSER_T__46 = 47, TEST_T_PARSER_T__47 = 48, 
  TEST_T_PARSER_T__48 = 49, TEST_T_PARSER_ID = 50, TEST_T_PARSER_INT = 51, 
  TEST_T_PARSER_WS = 52
};

enum _TestTParserRules {
    TEST_T_PARSER_S = 0, TEST_T_PARSER_EXPRESSION_LIST = 1, TEST_T_PARSER_E = 2, 
    TEST_T_PARSER_TYPESPEC = 3
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
typedef struct _TestContextExpressionList TestContextExpressionList; 
typedef struct _TestContextE TestContextE; 
typedef struct _TestContextTypespec TestContextTypespec; 

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
TestContextS *test_context_s_new(AntlrParserRuleContext *parent, gint invokingState);

TestContextE *test_context_s_rule_get_e(TestContextS* self);
AntlrTerminalNode *test_context_s_token_get_eof(TestContextS* self);


TestContextS* test_t_parser_parse_s(TestTParser* self, GError **error);
//----------------- ExpressionListContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_EXPRESSION_LIST            (test_context_expression_list_get_type())
#define TEST_CONTEXT_EXPRESSION_LIST(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_EXPRESSION_LIST, TestContextExpressionList))
#define TEST_CONTEXT_EXPRESSION_LIST_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_EXPRESSION_LIST, TestContextExpressionListClass))
#define TEST_IS_CONTEXT_EXPRESSION_LIST(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_EXPRESSION_LIST))
#define TEST_IS_CONTEXT_EXPRESSION_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_EXPRESSION_LIST))
#define TEST_CONTEXT_EXPRESSION_LIST_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_EXPRESSION_LIST, TestContextExpressionListClass))


//typedef struct _TestContextExpressionList      TestContextExpressionList;
typedef struct _TestContextExpressionListClass TestContextExpressionListClass;

struct _TestContextExpressionList {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextExpressionListClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_expression_list_get_type(void) G_GNUC_CONST;
TestContextExpressionList *test_context_expression_list_new(AntlrParserRuleContext *parent, gint invokingState);

GList* test_context_expression_list_rule_get_e(TestContextExpressionList* self);// of TestContextE
TestContextE* test_context_expression_list_at_rule_get_e(TestContextExpressionList* self, size_t i);


TestContextExpressionList* test_t_parser_parse_expression_list(TestTParser* self, GError **error);
//----------------- EContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_E            (test_context_e_get_type())
#define TEST_CONTEXT_E(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_E, TestContextE))
#define TEST_CONTEXT_E_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_E, TestContextEClass))
#define TEST_IS_CONTEXT_E(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_E))
#define TEST_IS_CONTEXT_E_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_E))
#define TEST_CONTEXT_E_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_E, TestContextEClass))


//typedef struct _TestContextE      TestContextE;
typedef struct _TestContextEClass TestContextEClass;

struct _TestContextE {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextEClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_e_get_type(void) G_GNUC_CONST;
TestContextE *test_context_e_new(AntlrParserRuleContext *parent, gint invokingState);

GList* test_context_e_rule_get_e(TestContextE* self);// of TestContextE
TestContextE* test_context_e_at_rule_get_e(TestContextE* self, size_t i);
AntlrTerminalNode *test_context_e_token_get_int(TestContextE* self);
AntlrTerminalNode *test_context_e_token_get_id(TestContextE* self);
TestContextTypespec *test_context_e_rule_get_typespec(TestContextE* self);
TestContextExpressionList *test_context_e_rule_get_expression_list(TestContextE* self);



TestContextE* test_t_parser_parse_e(TestTParser* self, GError **error);
TestContextE* test_t_parser_parse_e_with_precedence(TestTParser* self, gint precedence, GError **error);

//----------------- TypespecContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_TYPESPEC            (test_context_typespec_get_type())
#define TEST_CONTEXT_TYPESPEC(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_TYPESPEC, TestContextTypespec))
#define TEST_CONTEXT_TYPESPEC_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_TYPESPEC, TestContextTypespecClass))
#define TEST_IS_CONTEXT_TYPESPEC(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_TYPESPEC))
#define TEST_IS_CONTEXT_TYPESPEC_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_TYPESPEC))
#define TEST_CONTEXT_TYPESPEC_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_TYPESPEC, TestContextTypespecClass))


//typedef struct _TestContextTypespec      TestContextTypespec;
typedef struct _TestContextTypespecClass TestContextTypespecClass;

struct _TestContextTypespec {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextTypespecClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_typespec_get_type(void) G_GNUC_CONST;
TestContextTypespec *test_context_typespec_new(AntlrParserRuleContext *parent, gint invokingState);

AntlrTerminalNode *test_context_typespec_token_get_id(TestContextTypespec* self);


TestContextTypespec* test_t_parser_parse_typespec(TestTParser* self, GError **error);

//gboolean test_t_parser_sempred(TestTParser *self, AntlrRuleContext *local_context, size_t ruleIndex, size_t predicateIndex);
gboolean test_t_parser_sempred_e(TestTParser* self, AntlrRuleContext *local_context, size_t predicateIndex);



G_END_DECLS

#endif /* __TEST_T_PARSER_H__ */

