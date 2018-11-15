
// Generated from T.g4 by ANTLR 4.6


//#include "antlr4-runtime.h"




#ifndef __TEST_T_PARSER_H__
#define __TEST_T_PARSER_H__

#include <glib-object.h>

G_BEGIN_DECLS

typedef enum _TestTParserTokens  TestTParserTokens;
typedef enum _TestTParserRules   TestTParserRules;

enum _TestTParserTokens {
  TEST_T_PARSER_T__0 = 1, TEST_T_PARSER_T__1 = 2
};

enum _TestTParserRules {
    TEST_T_PARSER_PROG = 0, TEST_T_PARSER_STAT = 1
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


typedef struct _TestContextProg TestContextProg; 
typedef struct _TestContextStat TestContextStat; 

//----------------- ProgContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_PROG            (test_context_prog_get_type())
#define TEST_CONTEXT_PROG(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_PROG, TestContextProg))
#define TEST_CONTEXT_PROG_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_PROG, TestContextProgClass))
#define TEST_IS_CONTEXT_PROG(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_PROG))
#define TEST_IS_CONTEXT_PROG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_PROG))
#define TEST_CONTEXT_PROG_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_PROG, TestContextProgClass))


//typedef struct _TestContextProg      TestContextProg;
typedef struct _TestContextProgClass TestContextProgClass;

struct _TestContextProg {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextProgClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_prog_get_type(void) G_GNUC_CONST;
TestContextProg *test_context_prog_new(AntlrParserRuleContext *parent, size_t invokingState);

TestContextStat *test_context_prog_rule_get_stat(TestContextProg* self);
AntlrTerminalNode *test_context_prog_token_get_eof(TestContextProg* self);


TestContextProg* test_t_parser_parse_prog(TestTParser* self, GError **error);
//----------------- StatContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_STAT            (test_context_stat_get_type())
#define TEST_CONTEXT_STAT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_STAT, TestContextStat))
#define TEST_CONTEXT_STAT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_STAT, TestContextStatClass))
#define TEST_IS_CONTEXT_STAT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_STAT))
#define TEST_IS_CONTEXT_STAT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_STAT))
#define TEST_CONTEXT_STAT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_STAT, TestContextStatClass))


//typedef struct _TestContextStat      TestContextStat;
typedef struct _TestContextStatClass TestContextStatClass;

struct _TestContextStat {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextStatClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_stat_get_type(void) G_GNUC_CONST;
TestContextStat *test_context_stat_new(AntlrParserRuleContext *parent, size_t invokingState);

GList* test_context_stat_token_get_eof(TestContextStat* self);// of AntlrTerminalNode*
AntlrTerminalNode *test_context_stat_at_token_get_eof(TestContextStat* self, size_t i);


TestContextStat* test_t_parser_parse_stat(TestTParser* self, GError **error);



G_END_DECLS

#endif /* __TEST_T_PARSER_H__ */

