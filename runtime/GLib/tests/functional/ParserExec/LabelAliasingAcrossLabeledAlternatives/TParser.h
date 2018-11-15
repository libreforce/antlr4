
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
  TEST_T_PARSER_T__0 = 1, TEST_T_PARSER_T__1 = 2, TEST_T_PARSER_WS = 3
};

enum _TestTParserRules {
    TEST_T_PARSER_START = 0, TEST_T_PARSER_A = 1, TEST_T_PARSER_SUBRULE = 2
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
typedef struct _TestContextA TestContextA; 
typedef struct _TestContextSubrule TestContextSubrule; 

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

AntlrTerminalNode *test_context_start_token_get_eof(TestContextStart* self);
GList* test_context_start_rule_get_a(TestContextStart* self);// of TestContextA
TestContextA* test_context_start_at_rule_get_a(TestContextStart* self, size_t i);


TestContextStart* test_t_parser_parse_start(TestTParser* self, GError **error);
//----------------- AContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_A            (test_context_a_get_type())
#define TEST_CONTEXT_A(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_A, TestContextA))
#define TEST_CONTEXT_A_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_A, TestContextAClass))
#define TEST_IS_CONTEXT_A(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_A))
#define TEST_IS_CONTEXT_A_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_A))
#define TEST_CONTEXT_A_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_A, TestContextAClass))


//typedef struct _TestContextA      TestContextA;
typedef struct _TestContextAClass TestContextAClass;

struct _TestContextA {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextAClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_a_get_type(void) G_GNUC_CONST;
TestContextA *test_context_a_new(AntlrParserRuleContext *parent, size_t invokingState);



#define TEST_TYPE_CONTEXT_ONE            (test_context_one_get_type())
#define TEST_CONTEXT_ONE(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_ONE, TestContextOne))
#define TEST_CONTEXT_ONE_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_ONE, TestContextOneClass))
#define TEST_IS_CONTEXT_ONE(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_ONE))
#define TEST_IS_CONTEXT_ONE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_ONE))
#define TEST_CONTEXT_ONE_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_ONE, TestContextOneClass))


typedef struct _TestContextOne      TestContextOne;
typedef struct _TestContextOneClass TestContextOneClass;

struct _TestContextOne {
    /*< private >*/
    TestContextA parent_instance;

    /*< public >*/
    TestContextSubrule *label;
};

struct _TestContextOneClass {
    /*< private >*/
    TestContextAClass parent_class;
};

GType test_context_one_get_type(void) G_GNUC_CONST;
TestContextOne *test_context_one_new(TestContextA *ctx);

TestContextSubrule *test_context_one_rule_get_subrule(TestContextOne* self);



#define TEST_TYPE_CONTEXT_TWO            (test_context_two_get_type())
#define TEST_CONTEXT_TWO(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_TWO, TestContextTwo))
#define TEST_CONTEXT_TWO_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_TWO, TestContextTwoClass))
#define TEST_IS_CONTEXT_TWO(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_TWO))
#define TEST_IS_CONTEXT_TWO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_TWO))
#define TEST_CONTEXT_TWO_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_TWO, TestContextTwoClass))


typedef struct _TestContextTwo      TestContextTwo;
typedef struct _TestContextTwoClass TestContextTwoClass;

struct _TestContextTwo {
    /*< private >*/
    TestContextA parent_instance;

    /*< public >*/
    AntlrToken *label;
};

struct _TestContextTwoClass {
    /*< private >*/
    TestContextAClass parent_class;
};

GType test_context_two_get_type(void) G_GNUC_CONST;
TestContextTwo *test_context_two_new(TestContextA *ctx);



TestContextA* test_t_parser_parse_a(TestTParser* self, GError **error);
//----------------- SubruleContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_SUBRULE            (test_context_subrule_get_type())
#define TEST_CONTEXT_SUBRULE(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_SUBRULE, TestContextSubrule))
#define TEST_CONTEXT_SUBRULE_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_SUBRULE, TestContextSubruleClass))
#define TEST_IS_CONTEXT_SUBRULE(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_SUBRULE))
#define TEST_IS_CONTEXT_SUBRULE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_SUBRULE))
#define TEST_CONTEXT_SUBRULE_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_SUBRULE, TestContextSubruleClass))


//typedef struct _TestContextSubrule      TestContextSubrule;
typedef struct _TestContextSubruleClass TestContextSubruleClass;

struct _TestContextSubrule {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextSubruleClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_subrule_get_type(void) G_GNUC_CONST;
TestContextSubrule *test_context_subrule_new(AntlrParserRuleContext *parent, size_t invokingState);



TestContextSubrule* test_t_parser_parse_subrule(TestTParser* self, GError **error);



G_END_DECLS

#endif /* __TEST_T_PARSER_H__ */

