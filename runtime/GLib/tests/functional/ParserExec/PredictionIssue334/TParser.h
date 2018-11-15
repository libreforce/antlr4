
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
  TEST_T_PARSER_SEMICOLON = 1, TEST_T_PARSER_A = 2, TEST_T_PARSER_B = 3, 
  TEST_T_PARSER_WS = 4
};

enum _TestTParserRules {
    TEST_T_PARSER_FILE_ = 0, TEST_T_PARSER_ITEM = 1
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


typedef struct _TestContextFile TestContextFile; 
typedef struct _TestContextItem TestContextItem; 

//----------------- File_Context ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_FILE_            (test_context_file__get_type())
#define TEST_CONTEXT_FILE_(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_FILE_, TestContextFile))
#define TEST_CONTEXT_FILE__CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_FILE_, TestContextFileClass))
#define TEST_IS_CONTEXT_FILE_(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_FILE_))
#define TEST_IS_CONTEXT_FILE__CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_FILE_))
#define TEST_CONTEXT_FILE__GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_FILE_, TestContextFileClass))


//typedef struct _TestContextFile      TestContextFile;
typedef struct _TestContextFileClass TestContextFileClass;

struct _TestContextFile {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextFileClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_file__get_type(void) G_GNUC_CONST;
TestContextFile *test_context_file__new(AntlrParserRuleContext *parent, size_t invokingState);

GList* test_context_file__rule_get_item(TestContextFile* self);// of TestContextItem
TestContextItem* test_context_file__at_rule_get_item(TestContextFile* self, size_t i);
AntlrTerminalNode *test_context_file__token_get_eof(TestContextFile* self);
GList* test_context_file__token_get_semicolon(TestContextFile* self);// of AntlrTerminalNode*
AntlrTerminalNode *test_context_file__at_token_get_semicolon(TestContextFile* self, size_t i);


TestContextFile* test_t_parser_parse_file_(TestTParser* self, GError **error);
//----------------- ItemContext ------------------------------------------------------------------

#define TEST_TYPE_CONTEXT_ITEM            (test_context_item_get_type())
#define TEST_CONTEXT_ITEM(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_CONTEXT_ITEM, TestContextItem))
#define TEST_CONTEXT_ITEM_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_CONTEXT_ITEM, TestContextItemClass))
#define TEST_IS_CONTEXT_ITEM(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_CONTEXT_ITEM))
#define TEST_IS_CONTEXT_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_CONTEXT_ITEM))
#define TEST_CONTEXT_ITEM_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_CONTEXT_ITEM, TestContextItemClass))


//typedef struct _TestContextItem      TestContextItem;
typedef struct _TestContextItemClass TestContextItemClass;

struct _TestContextItem {
    /*< private >*/
    AntlrParserRuleContext parent_instance;

    /*< public >*/
};

struct _TestContextItemClass {
    /*< private >*/
    AntlrParserRuleContextClass parent_class;
};

GType test_context_item_get_type(void) G_GNUC_CONST;
TestContextItem *test_context_item_new(AntlrParserRuleContext *parent, size_t invokingState);

AntlrTerminalNode *test_context_item_token_get_a(TestContextItem* self);
AntlrTerminalNode *test_context_item_token_get_b(TestContextItem* self);


TestContextItem* test_t_parser_parse_item(TestTParser* self, GError **error);



G_END_DECLS

#endif /* __TEST_T_PARSER_H__ */

