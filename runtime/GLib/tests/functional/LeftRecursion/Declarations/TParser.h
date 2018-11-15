
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
  TEST_T_PARSER_T__3 = 4, TEST_T_PARSER_T__4 = 5, TEST_T_PARSER_ID = 6, 
  TEST_T_PARSER_INT = 7, TEST_T_PARSER_WS = 8
};

enum _TestTParserRules {
    TEST_T_PARSER_S = 0, TEST_T_PARSER_DECLARATOR = 1, TEST_T_PARSER_E = 2
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
typedef struct _TestContextDeclarator TestContextDeclarator; 
typedef struct _TestContextE TestContextE; 

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

TestContextDeclarator *test_context_s_rule_get_declarator(TestContextS* self);
AntlrTerminalNode *test_context_s_token_get_eof(TestContextS* self);


TestContextS* test_t_parser_parse_s(TestTParser* self, GError **error);
//----------------- DeclaratorContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_DECLARATOR            (test_context_declarator_get_type())
#define TEST_CONTEXT_DECLARATOR(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_DECLARATOR, TestContextDeclarator))
#define TEST_CONTEXT_DECLARATOR_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_DECLARATOR, TestContextDeclaratorClass))
#define TEST_IS_CONTEXT_DECLARATOR(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_DECLARATOR))
#define TEST_IS_CONTEXT_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_DECLARATOR))
#define TEST_CONTEXT_DECLARATOR_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_DECLARATOR, TestContextDeclaratorClass))


//typedef struct _TestContextDeclarator      TestContextDeclarator;
typedef struct _TestContextDeclaratorClass TestContextDeclaratorClass;

struct _TestContextDeclarator {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextDeclaratorClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_declarator_get_type(void) G_GNUC_CONST;
TestContextDeclarator *test_context_declarator_new(AntlrParserRuleContext *parent, gint invokingState);

TestContextDeclarator *test_context_declarator_rule_get_declarator(TestContextDeclarator* self);
AntlrTerminalNode *test_context_declarator_token_get_id(TestContextDeclarator* self);
TestContextE *test_context_declarator_rule_get_e(TestContextDeclarator* self);



TestContextDeclarator* test_t_parser_parse_declarator(TestTParser* self, GError **error);
TestContextDeclarator* test_t_parser_parse_declarator_with_precedence(TestTParser* self, gint precedence, GError **error);

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

AntlrTerminalNode *test_context_e_token_get_int(TestContextE* self);


TestContextE* test_t_parser_parse_e(TestTParser* self, GError **error);

//gboolean test_t_parser_sempred(TestTParser *self, AntlrRuleContext *local_context, size_t ruleIndex, size_t predicateIndex);
gboolean test_t_parser_sempred_declarator(TestTParser* self, AntlrRuleContext *local_context, size_t predicateIndex);



G_END_DECLS

#endif /* __TEST_T_PARSER_H__ */

