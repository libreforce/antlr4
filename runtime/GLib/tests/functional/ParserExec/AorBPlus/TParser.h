
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
  TEST_T_PARSER_ID = 1, TEST_T_PARSER_INT = 2, TEST_T_PARSER_WS = 3
};

enum _TestTParserRules {
    TEST_T_PARSER_A = 0
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


typedef struct _TestContextA TestContextA; 

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

GList* test_context_a_token_get_id(TestContextA* self);// of AntlrTerminalNode*
AntlrTerminalNode *test_context_a_at_token_get_id(TestContextA* self, size_t i);
GList* test_context_a_token_get_int(TestContextA* self);// of AntlrTerminalNode*
AntlrTerminalNode *test_context_a_at_token_get_int(TestContextA* self, size_t i);


TestContextA* test_t_parser_parse_a(TestTParser* self, GError **error);



G_END_DECLS

#endif /* __TEST_T_PARSER_H__ */

