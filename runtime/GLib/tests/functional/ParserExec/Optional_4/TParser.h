
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
  TEST_T_PARSER_WS = 4
};

enum _TestTParserRules {
    TEST_T_PARSER_STAT = 0, TEST_T_PARSER_IFSTAT = 1
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


typedef struct _TestContextStat TestContextStat; 
typedef struct _TestContextIfstat TestContextIfstat; 

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

TestContextIfstat *test_context_stat_rule_get_ifstat(TestContextStat* self);


TestContextStat* test_t_parser_parse_stat(TestTParser* self, GError **error);
//----------------- IfstatContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_IFSTAT            (test_context_ifstat_get_type())
#define TEST_CONTEXT_IFSTAT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_IFSTAT, TestContextIfstat))
#define TEST_CONTEXT_IFSTAT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_IFSTAT, TestContextIfstatClass))
#define TEST_IS_CONTEXT_IFSTAT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_IFSTAT))
#define TEST_IS_CONTEXT_IFSTAT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_IFSTAT))
#define TEST_CONTEXT_IFSTAT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_IFSTAT, TestContextIfstatClass))


//typedef struct _TestContextIfstat      TestContextIfstat;
typedef struct _TestContextIfstatClass TestContextIfstatClass;

struct _TestContextIfstat {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextIfstatClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_ifstat_get_type(void) G_GNUC_CONST;
TestContextIfstat *test_context_ifstat_new(AntlrParserRuleContext *parent, size_t invokingState);

GList* test_context_ifstat_rule_get_stat(TestContextIfstat* self);// of TestContextStat
TestContextStat* test_context_ifstat_at_rule_get_stat(TestContextIfstat* self, size_t i);


TestContextIfstat* test_t_parser_parse_ifstat(TestTParser* self, GError **error);



G_END_DECLS

#endif /* __TEST_T_PARSER_H__ */

