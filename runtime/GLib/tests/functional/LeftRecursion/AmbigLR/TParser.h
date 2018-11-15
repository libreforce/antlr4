
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
  TEST_T_PARSER_MUL = 4, TEST_T_PARSER_DIV = 5, TEST_T_PARSER_ADD = 6, TEST_T_PARSER_SUB = 7, 
  TEST_T_PARSER_ID = 8, TEST_T_PARSER_INT = 9, TEST_T_PARSER_NEWLINE = 10, 
  TEST_T_PARSER_WS = 11
};

enum _TestTParserRules {
    TEST_T_PARSER_PROG = 0, TEST_T_PARSER_STAT = 1, TEST_T_PARSER_EXPR = 2
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


typedef struct _TestContextProg TestContextProg; 
typedef struct _TestContextStat TestContextStat; 
typedef struct _TestContextExpr TestContextExpr; 

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
TestContextProg *test_context_prog_new(AntlrParserRuleContext *parent, gint invokingState);

TestContextStat *test_context_prog_rule_get_stat(TestContextProg* self);


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
TestContextStat *test_context_stat_new(AntlrParserRuleContext *parent, gint invokingState);



#define TEST_TYPE_CONTEXT_BLANK            (test_context_blank_get_type())
#define TEST_CONTEXT_BLANK(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_BLANK, TestContextBlank))
#define TEST_CONTEXT_BLANK_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_BLANK, TestContextBlankClass))
#define TEST_IS_CONTEXT_BLANK(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_BLANK))
#define TEST_IS_CONTEXT_BLANK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_BLANK))
#define TEST_CONTEXT_BLANK_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_BLANK, TestContextBlankClass))


typedef struct _TestContextBlank      TestContextBlank;
typedef struct _TestContextBlankClass TestContextBlankClass;

struct _TestContextBlank {
    /*< private >*/
    TestContextStat parent_instance;

    /*< public >*/
};

struct _TestContextBlankClass {
    /*< private >*/
    TestContextStatClass parent_class;
};

GType test_context_blank_get_type(void) G_GNUC_CONST;
TestContextBlank *test_context_blank_new(TestContextStat *ctx);

AntlrTerminalNode *test_context_blank_token_get_newline(TestContextBlank* self);



#define TEST_TYPE_CONTEXT_PRINT_EXPR            (test_context_print_expr_get_type())
#define TEST_CONTEXT_PRINT_EXPR(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_PRINT_EXPR, TestContextPrintExpr))
#define TEST_CONTEXT_PRINT_EXPR_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_PRINT_EXPR, TestContextPrintExprClass))
#define TEST_IS_CONTEXT_PRINT_EXPR(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_PRINT_EXPR))
#define TEST_IS_CONTEXT_PRINT_EXPR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_PRINT_EXPR))
#define TEST_CONTEXT_PRINT_EXPR_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_PRINT_EXPR, TestContextPrintExprClass))


typedef struct _TestContextPrintExpr      TestContextPrintExpr;
typedef struct _TestContextPrintExprClass TestContextPrintExprClass;

struct _TestContextPrintExpr {
    /*< private >*/
    TestContextStat parent_instance;

    /*< public >*/
};

struct _TestContextPrintExprClass {
    /*< private >*/
    TestContextStatClass parent_class;
};

GType test_context_print_expr_get_type(void) G_GNUC_CONST;
TestContextPrintExpr *test_context_print_expr_new(TestContextStat *ctx);

TestContextExpr *test_context_print_expr_rule_get_expr(TestContextPrintExpr* self);
AntlrTerminalNode *test_context_print_expr_token_get_newline(TestContextPrintExpr* self);



#define TEST_TYPE_CONTEXT_ASSIGN            (test_context_assign_get_type())
#define TEST_CONTEXT_ASSIGN(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_ASSIGN, TestContextAssign))
#define TEST_CONTEXT_ASSIGN_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_ASSIGN, TestContextAssignClass))
#define TEST_IS_CONTEXT_ASSIGN(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_ASSIGN))
#define TEST_IS_CONTEXT_ASSIGN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_ASSIGN))
#define TEST_CONTEXT_ASSIGN_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_ASSIGN, TestContextAssignClass))


typedef struct _TestContextAssign      TestContextAssign;
typedef struct _TestContextAssignClass TestContextAssignClass;

struct _TestContextAssign {
    /*< private >*/
    TestContextStat parent_instance;

    /*< public >*/
};

struct _TestContextAssignClass {
    /*< private >*/
    TestContextStatClass parent_class;
};

GType test_context_assign_get_type(void) G_GNUC_CONST;
TestContextAssign *test_context_assign_new(TestContextStat *ctx);

AntlrTerminalNode *test_context_assign_token_get_id(TestContextAssign* self);
TestContextExpr *test_context_assign_rule_get_expr(TestContextAssign* self);
AntlrTerminalNode *test_context_assign_token_get_newline(TestContextAssign* self);


TestContextStat* test_t_parser_parse_stat(TestTParser* self, GError **error);
//----------------- ExprContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_EXPR            (test_context_expr_get_type())
#define TEST_CONTEXT_EXPR(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_EXPR, TestContextExpr))
#define TEST_CONTEXT_EXPR_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_EXPR, TestContextExprClass))
#define TEST_IS_CONTEXT_EXPR(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_EXPR))
#define TEST_IS_CONTEXT_EXPR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_EXPR))
#define TEST_CONTEXT_EXPR_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_EXPR, TestContextExprClass))


//typedef struct _TestContextExpr      TestContextExpr;
typedef struct _TestContextExprClass TestContextExprClass;

struct _TestContextExpr {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextExprClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_expr_get_type(void) G_GNUC_CONST;
TestContextExpr *test_context_expr_new(AntlrParserRuleContext *parent, gint invokingState);



#define TEST_TYPE_CONTEXT_PARENS            (test_context_parens_get_type())
#define TEST_CONTEXT_PARENS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_PARENS, TestContextParens))
#define TEST_CONTEXT_PARENS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_PARENS, TestContextParensClass))
#define TEST_IS_CONTEXT_PARENS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_PARENS))
#define TEST_IS_CONTEXT_PARENS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_PARENS))
#define TEST_CONTEXT_PARENS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_PARENS, TestContextParensClass))


typedef struct _TestContextParens      TestContextParens;
typedef struct _TestContextParensClass TestContextParensClass;

struct _TestContextParens {
    /*< private >*/
    TestContextExpr parent_instance;

    /*< public >*/
};

struct _TestContextParensClass {
    /*< private >*/
    TestContextExprClass parent_class;
};

GType test_context_parens_get_type(void) G_GNUC_CONST;
TestContextParens *test_context_parens_new(TestContextExpr *ctx);

TestContextExpr *test_context_parens_rule_get_expr(TestContextParens* self);



#define TEST_TYPE_CONTEXT_MUL_DIV            (test_context_mul_div_get_type())
#define TEST_CONTEXT_MUL_DIV(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_MUL_DIV, TestContextMulDiv))
#define TEST_CONTEXT_MUL_DIV_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_MUL_DIV, TestContextMulDivClass))
#define TEST_IS_CONTEXT_MUL_DIV(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_MUL_DIV))
#define TEST_IS_CONTEXT_MUL_DIV_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_MUL_DIV))
#define TEST_CONTEXT_MUL_DIV_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_MUL_DIV, TestContextMulDivClass))


typedef struct _TestContextMulDiv      TestContextMulDiv;
typedef struct _TestContextMulDivClass TestContextMulDivClass;

struct _TestContextMulDiv {
    /*< private >*/
    TestContextExpr parent_instance;

    /*< public >*/
};

struct _TestContextMulDivClass {
    /*< private >*/
    TestContextExprClass parent_class;
};

GType test_context_mul_div_get_type(void) G_GNUC_CONST;
TestContextMulDiv *test_context_mul_div_new(TestContextExpr *ctx);

GList* test_context_mul_div_rule_get_expr(TestContextMulDiv* self);// of TestContextExpr
TestContextExpr* test_context_mul_div_at_rule_get_expr(TestContextMulDiv* self, size_t i);



#define TEST_TYPE_CONTEXT_ADD_SUB            (test_context_add_sub_get_type())
#define TEST_CONTEXT_ADD_SUB(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_ADD_SUB, TestContextAddSub))
#define TEST_CONTEXT_ADD_SUB_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_ADD_SUB, TestContextAddSubClass))
#define TEST_IS_CONTEXT_ADD_SUB(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_ADD_SUB))
#define TEST_IS_CONTEXT_ADD_SUB_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_ADD_SUB))
#define TEST_CONTEXT_ADD_SUB_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_ADD_SUB, TestContextAddSubClass))


typedef struct _TestContextAddSub      TestContextAddSub;
typedef struct _TestContextAddSubClass TestContextAddSubClass;

struct _TestContextAddSub {
    /*< private >*/
    TestContextExpr parent_instance;

    /*< public >*/
};

struct _TestContextAddSubClass {
    /*< private >*/
    TestContextExprClass parent_class;
};

GType test_context_add_sub_get_type(void) G_GNUC_CONST;
TestContextAddSub *test_context_add_sub_new(TestContextExpr *ctx);

GList* test_context_add_sub_rule_get_expr(TestContextAddSub* self);// of TestContextExpr
TestContextExpr* test_context_add_sub_at_rule_get_expr(TestContextAddSub* self, size_t i);



#define TEST_TYPE_CONTEXT_ID            (test_context_id_get_type())
#define TEST_CONTEXT_ID(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_ID, TestContextId))
#define TEST_CONTEXT_ID_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_ID, TestContextIdClass))
#define TEST_IS_CONTEXT_ID(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_ID))
#define TEST_IS_CONTEXT_ID_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_ID))
#define TEST_CONTEXT_ID_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_ID, TestContextIdClass))


typedef struct _TestContextId      TestContextId;
typedef struct _TestContextIdClass TestContextIdClass;

struct _TestContextId {
    /*< private >*/
    TestContextExpr parent_instance;

    /*< public >*/
};

struct _TestContextIdClass {
    /*< private >*/
    TestContextExprClass parent_class;
};

GType test_context_id_get_type(void) G_GNUC_CONST;
TestContextId *test_context_id_new(TestContextExpr *ctx);

AntlrTerminalNode *test_context_id_token_get_id(TestContextId* self);



#define TEST_TYPE_CONTEXT_INT            (test_context_int_get_type())
#define TEST_CONTEXT_INT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_INT, TestContextInt))
#define TEST_CONTEXT_INT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_INT, TestContextIntClass))
#define TEST_IS_CONTEXT_INT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_INT))
#define TEST_IS_CONTEXT_INT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_INT))
#define TEST_CONTEXT_INT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_INT, TestContextIntClass))


typedef struct _TestContextInt      TestContextInt;
typedef struct _TestContextIntClass TestContextIntClass;

struct _TestContextInt {
    /*< private >*/
    TestContextExpr parent_instance;

    /*< public >*/
};

struct _TestContextIntClass {
    /*< private >*/
    TestContextExprClass parent_class;
};

GType test_context_int_get_type(void) G_GNUC_CONST;
TestContextInt *test_context_int_new(TestContextExpr *ctx);

AntlrTerminalNode *test_context_int_token_get_int(TestContextInt* self);



TestContextExpr* test_t_parser_parse_expr(TestTParser* self, GError **error);
TestContextExpr* test_t_parser_parse_expr_with_precedence(TestTParser* self, gint precedence, GError **error);


//gboolean test_t_parser_sempred(TestTParser *self, AntlrRuleContext *local_context, size_t ruleIndex, size_t predicateIndex);
gboolean test_t_parser_sempred_expr(TestTParser* self, AntlrRuleContext *local_context, size_t predicateIndex);



G_END_DECLS

#endif /* __TEST_T_PARSER_H__ */

