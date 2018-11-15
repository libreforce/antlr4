
// Generated from T.g4 by ANTLR 4.6


//#include "TListener.h"
//

//#include "TParser.h"



#include <glib-object.h>
#include <stdlib.h> // atoi

#include "antlr-runtime/types.h"

#include "antlr-runtime/misc/object.h"
#include "antlr-runtime/vocabulary.h"
#include "antlr-runtime/vocabulary-impl.h"
#include "antlr-runtime/misc/int-iset.h"
#include "antlr-runtime/misc/interval.h"
#include "antlr-runtime/misc/interval-set.h"
#include "antlr-runtime/misc/bit-set.h"
#include "antlr-runtime/misc/double-key-map.h"
#include "antlr-runtime/atn/transition.h"
#include "antlr-runtime/atn/lexer-action.h"
#include "antlr-runtime/atn/atn-state.h"
#include "antlr-runtime/atn/rule-stop-state.h"
#include "antlr-runtime/atn/rule-start-state.h"
#include "antlr-runtime/atn/atn.h"
#include "antlr-runtime/atn/prediction-context.h"
#include "antlr-runtime/atn/prediction-context-cache.h"
#include "antlr-runtime/atn/semantic-context.h"
#include "antlr-runtime/atn/config.h"
#include "antlr-runtime/atn/config-set.h"
#include "antlr-runtime/dfa/dfa-state.h"
#include "antlr-runtime/dfa/dfa.h"
#include "antlr-runtime/atn/prediction-mode.h"
#include "antlr-runtime/atn/atn-simulator.h"
#include "antlr-runtime/atn/parser-atn-simulator.h"

#include "antlr-runtime/int-stream.h"
#include "antlr-runtime/tree/tree.h"
#include "antlr-runtime/tree/syntax-tree.h"
#include "antlr-runtime/tree/parse-tree.h"
#include "antlr-runtime/tree/terminal-node.h"
#include "antlr-runtime/tree/error-node.h"
#include "antlr-runtime/tree/parse-tree-listener.h"
#include "antlr-runtime/rule-node.h"
#include "antlr-runtime/rule-context.h"
#include "antlr-runtime/parser-rule-context.h"
#include "antlr-runtime/recognizer.h"
#include "antlr-runtime/parser.h"

#include "antlr-runtime/misc/integer-list.h"
#include "antlr-runtime/misc/integer-stack.h"
#include "antlr-runtime/recognizer.h"
#include "antlr-runtime/int-stream.h"
#include "antlr-runtime/token-factory.h"
#include "antlr-runtime/lexer.h"

#include "antlr-runtime/rule-context.h"
#include "antlr-runtime/tree/tree.h"
#include "antlr-runtime/tree/syntax-tree.h"
#include "antlr-runtime/tree/parse-tree.h"
#include "antlr-runtime/tree/error-node.h"
#include "antlr-runtime/tree/terminal-node.h"
#include "antlr-runtime/tree/parse-tree-listener.h"

#include "antlr-runtime/token-stream.h"
#include "antlr-runtime/buffered-token-stream.h"
#include "antlr-runtime/common-token-stream.h"
#include "antlr-runtime/atn/atn-deserialization-options.h"
#include "antlr-runtime/atn/atn-deserializer.h"

#include "antlr-runtime/dfa/dfa.h"
#include "antlr-runtime/atn/decision-state.h"

#include "antlr-runtime/error-strategy.h"
#include "antlr-runtime/int-stream.h"
#include "antlr-runtime/token-stream.h"
#include "antlr-runtime/token.h"

#include "antlr-runtime/parser-rule-context.h"

#include "TLexer.h"

#include "TParser.h"

#include "TListener.h"


static AntlrATN *test_t_parser_atn = NULL;// AntlrATN * || GArray *
static GArray   *test_t_parser_decision_to_dfa = NULL;// of AntlrDFA*
static AntlrPredictionContextCache *test_t_parser_shared_context_cache = NULL;
static AntlrPredictionContextCache*
test_t_parser_get_shared_context_cache ()
{
    if (!test_t_parser_shared_context_cache) {
        test_t_parser_shared_context_cache = antlr_prediction_context_cache_new();
    }
    return test_t_parser_shared_context_cache;
}

static guint test_t_parser_serialized_atn[] = {
  0x03, 0x0430, 0xD6D1, 0x8206, 0xAD2D, 0x4417, 0xAEF1, 0x8D80, 0xAADD, 0x03, 0x06, 0x18, 0x04, 0x02, 0x09, 0x02, 0x04, 0x03, 0x09, 0x03, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x07, 0x02, 0x0A, 0x0A, 0x02, 0x0C, 0x02, 0x0E, 0x02, 0x0D, 0x0B, 0x02, 0x03, 0x02, 0x05, 0x02, 0x10, 0x0A, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x03, 0x03, 0x03, 0x05, 0x03, 0x16, 0x0A, 0x03, 0x03, 0x03, 0x02, 0x02, 0x04, 0x02, 0x04, 0x02, 0x02, 0x18, 0x02, 0x06, 0x03, 0x02, 0x02, 0x02, 0x04, 0x13, 0x03, 0x02, 0x02, 0x02, 0x06, 0x0B, 0x05, 0x04, 0x03, 0x02, 0x07, 0x08, 0x07, 0x03, 0x02, 0x02, 0x08, 0x0A, 0x05, 0x04, 0x03, 0x02, 0x09, 0x07, 0x03, 0x02, 0x02, 0x02, 0x0A, 0x0D, 0x03, 0x02, 0x02, 0x02, 0x0B, 0x09, 0x03, 0x02, 0x02, 0x02, 0x0B, 0x0C, 0x03, 0x02, 0x02, 0x02, 0x0C, 0x0F, 0x03, 0x02, 0x02, 0x02, 0x0D, 0x0B, 0x03, 0x02, 0x02, 0x02, 0x0E, 0x10, 0x07, 0x03, 0x02, 0x02, 0x0F, 0x0E, 0x03, 0x02, 0x02, 0x02, 0x0F, 0x10, 0x03, 0x02, 0x02, 0x02, 0x10, 0x11, 0x03, 0x02, 0x02, 0x02, 0x11, 0x12, 0x07, 0x02, 0x02, 0x03, 0x12, 0x03, 0x03, 0x02, 0x02, 0x02, 0x13, 0x15, 0x07, 0x04, 0x02, 0x02, 0x14, 0x16, 0x07, 0x05, 0x02, 0x02, 0x15, 0x14, 0x03, 0x02, 0x02, 0x02, 0x15, 0x16, 0x03, 0x02, 0x02, 0x02, 0x16, 0x05, 0x03, 0x02, 0x02, 0x02, 0x05, 0x0B, 0x0F, 0x15
};

static AntlrATN*
test_t_parser_get_atn ()
{
    if (!test_t_parser_atn) {
        AntlrATNDeserializer *deserializer = antlr_atn_deserializer_new_full(NULL);
        test_t_parser_atn = antlr_atn_deserializer_deserialize(deserializer, test_t_parser_serialized_atn, G_N_ELEMENTS(test_t_parser_serialized_atn));
        g_object_unref(deserializer);
    }
    return test_t_parser_atn;
}

///
void
test_t_parser_atn_free ()
{
    if (test_t_parser_atn!=NULL) {
        g_clear_object(&test_t_parser_atn);
    }
}


static void
my_pointer_object_unref(GObject **object)
{
    g_object_unref(*object);
}

void
test_t_parser_decision_to_dfa_free ()
{
    if (test_t_parser_decision_to_dfa!=NULL) {
        g_array_set_clear_func(test_t_parser_decision_to_dfa, (GDestroyNotify)my_pointer_object_unref);
        g_array_free(test_t_parser_decision_to_dfa, TRUE);
    }
    test_t_parser_decision_to_dfa=NULL;
}

///
static GArray*
test_t_parser_get_decision_to_dfa (TestTParser *lexer)
{
    if (!test_t_parser_decision_to_dfa) {
        AntlrATN *atn = test_t_parser_get_atn();
        gint size = antlr_atn_get_number_of_decisions(atn);
        test_t_parser_decision_to_dfa = g_array_sized_new(FALSE, FALSE, sizeof(AntlrDFA *), size);
        int i;
        for (i = 0; i < size; i++) {
            AntlrDFA *v = antlr_dfa_new_with_decision_state_and_decision(antlr_atn_get_decision_state(atn, i), i);
            g_array_insert_val(test_t_parser_decision_to_dfa, i, v);
        }
    }
    return test_t_parser_decision_to_dfa;
}


static gchar* test_t_parser__RULE_NAMES[] = {
  "file_", "item"
};
static gchar* test_t_parser__LITERAL_NAMES[] = {
  "", "';'"
};
static gchar* test_t_parser__SYMBOLIC_NAMES[] = {
  "", "SEMICOLON", "A", "B", "WS"
};

static GArray*
test_t_parser_symbolic_names_to_array () {
    GArray *array = g_array_new(FALSE, FALSE, sizeof(GString*));
    // TODO sized_new

    int i;
    for (i=0; i<G_N_ELEMENTS(test_t_parser__SYMBOLIC_NAMES); i++) {
        GString * s = g_string_new( test_t_parser__SYMBOLIC_NAMES[i] );
        g_array_append_val(array, s);
    }

    return array;
}

static GArray*
test_t_parser_literal_names_to_array () {
    GArray *array = g_array_new(FALSE, FALSE, sizeof(GString*));
    // TODO sized_new

    int i;
    for (i=0; i<G_N_ELEMENTS(test_t_parser__LITERAL_NAMES); i++) {
        GString * s = g_string_new( test_t_parser__LITERAL_NAMES[i] );
        g_array_append_val(array, s);
    }

    return array;
}

static GArray*
test_t_parser_rule_names_to_array () {
    GArray *array = g_array_sized_new(FALSE, FALSE, sizeof(GString*), G_N_ELEMENTS(test_t_parser__RULE_NAMES));

    int i;
    for (i=0; i<G_N_ELEMENTS(test_t_parser__RULE_NAMES); i++) {
        GString * s = g_string_new( test_t_parser__RULE_NAMES[i] );
        g_array_append_val(array, s);
    }

    return array;
}


static AntlrVocabulary *test_t_parser_vocabulary = NULL;

static AntlrVocabulary*
test_t_parser_get_vocabulary(TestTParser *parser)
{
    if (!test_t_parser_vocabulary) {
        test_t_parser_vocabulary = antlr_vocabulary_new(test_t_parser_literal_names_to_array(), test_t_parser_symbolic_names_to_array(), NULL);
    }
    return test_t_parser_vocabulary;
}

static GArray* test_t_parser_token_names = NULL;

static GArray*
test_t_parser_get_token_names(AntlrRecognizer *recognizer)
{
    TestTParser *parser = TEST_T_PARSER(recognizer);

    if (!test_t_parser_token_names) {
        AntlrVocabulary *vocabulary = test_t_parser_get_vocabulary(parser);
        AntlrIVocabulary *i_vocabulary = ANTLR_IVOCABULARY(vocabulary);

        gint length = G_N_ELEMENTS(test_t_parser__SYMBOLIC_NAMES);
        test_t_parser_token_names = g_array_sized_new(FALSE, FALSE, sizeof(GString*), length);
        gint i;
        for (i=0; i<length; i++) {
            gchar *token_name = antlr_ivocabulary_get_literal_name(i_vocabulary, i);
            if (token_name == NULL) {
                token_name = antlr_ivocabulary_get_symbolic_name(i_vocabulary, i);
            } else if (token_name[0] == '\0') {
                g_free(token_name);
                token_name = antlr_ivocabulary_get_symbolic_name(i_vocabulary, i);
            }

            if (token_name == NULL) {
                token_name = g_strdup("<INVALID>");
            } else if (token_name[0] == '\0') {
                g_free(token_name);
                token_name = g_strdup("<INVALID>");
            }


            GString *v = g_string_new(token_name);
            g_free(token_name);
            g_array_append_val(test_t_parser_token_names, v);
        }
    }

    return test_t_parser_token_names;
}

static void
test_t_parser_g_string_free(gpointer *object) {
    GString *str = *object;
    if(str)
        g_string_free(str, TRUE);
}

void
test_t_parser_token_names_free()
{
    if (test_t_parser_token_names) {
        g_array_set_clear_func(test_t_parser_token_names, (GDestroyNotify)test_t_parser_g_string_free);
        g_array_free(test_t_parser_token_names, TRUE);
    }
    test_t_parser_token_names = NULL;
}

static GArray*
test_t_parser_get_rule_names(AntlrRecognizer *recognizer)
{
    TestTParser *parser = TEST_T_PARSER(recognizer);
    if (parser->rule_names==NULL) {
        parser->rule_names = test_t_parser_rule_names_to_array();
    }
    return parser->rule_names;
}

G_DEFINE_TYPE (TestTParser, test_t_parser, antlr_parser_get_type())


static void
test_t_parser_init (TestTParser *parser)
{
    parser->rule_names = NULL;

}

static void
test_t_parser_class_init (TestTParserClass *klass)
{
    GObjectClass* object_class = G_OBJECT_CLASS (klass);
    AntlrRecognizerClass* recognizer_class = ANTLR_RECOGNIZER_CLASS (klass);

    //g_type_class_add_private (klass, sizeof (SqlParserRules));

    //object_class->finalize = sql_parser_finalize;
    //parser_class->enter_rule

    recognizer_class->get_token_names = test_t_parser_get_token_names;
    recognizer_class->get_rule_names  = test_t_parser_get_rule_names;
    recognizer_class->get_atn         = test_t_parser_get_atn;

    // build token_names
}


TestTParser*
test_t_parser_new_with_token_stream (AntlrTokenStream *input)
{
    TestTParser *parser;
    parser = g_object_new(TEST_TYPE_T_PARSER, NULL);
    //AntlrATN *atn = test_t_parser_get_atn(ANTLR_RECOGNIZER(parser));

    ANTLR_PARSER(parser)->input = input;
    ANTLR_RECOGNIZER(parser)->interp = (AntlrATNInterpreter*)antlr_parser_atn_simulator_new_full(
                ANTLR_PARSER(parser),
                test_t_parser_get_atn(/*ANTLR_RECOGNIZER(parser)*/),
                test_t_parser_get_decision_to_dfa(parser),
                NULL//test_t_parser_get_shared_context_cache()
    );
    return parser;
}



//----------------- File_Context ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_file__class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_FILE_;
}

/* virtual AntlrParserRuleContext */
void test_context_file__class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_file_(TEST_T_LISTENER(listener), TEST_CONTEXT_FILE_(self));
}

void test_context_file__class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_file_(TEST_T_LISTENER(listener), TEST_CONTEXT_FILE_(self));
}

/* virtual GObject */
static void test_context_file__class_init(TestContextFileClass *klass);
static void test_context_file__init(TestContextFile *gobject);

G_DEFINE_TYPE (TestContextFile, test_context_file_, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_file__class_init(TestContextFileClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

    parserrulecontext_class->enter_rule = test_context_file__class_parser_rule_context_enter_rule;
    parserrulecontext_class->exit_rule = test_context_file__class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_file__class_rule_context_get_rule_index;
}

static void
test_context_file__init (TestContextFile *object)
{
}

TestContextFile *test_context_file__new(AntlrParserRuleContext *parent, size_t invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_FILE_, parent, invoking_state);
    TestContextFile *self = TEST_CONTEXT_FILE_(ctx);
    return self;
}

GList* test_context_file__rule_get_item(TestContextFile* self) {
    return antlr_parser_rule_context_get_rule_contexts(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_ITEM);
}
TestContextItem* test_context_file__at_rule_get_item(TestContextFile* self, size_t i) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_ITEM, i);
    return TEST_CONTEXT_ITEM(context);
}
AntlrTerminalNode *test_context_file__token_get_eof(TestContextFile* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_EOF, 0);
}
GList* test_context_file__token_get_semicolon(TestContextFile* self) {
    return antlr_parser_rule_context_get_tokens(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_SEMICOLON);
}
AntlrTerminalNode *test_context_file__at_token_get_semicolon(TestContextFile* self, size_t i) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_SEMICOLON, i);
}




TestContextFile* test_t_parser_parse_file_(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextFile *local_context = test_context_file__new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_FILE_);

    ///_errHandler = std::make_shared<BailErrorStrategy>();

    size_t _la = 0;

    size_t alt;
    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 4);
    ret = (AntlrRuleContext*)test_t_parser_parse_item(self, error);
    if (ret==NULL || (error && *error)) {
        return NULL;
    }
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 9);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

    AntlrATNInterpreter *interpreter = antlr_recognizer_get_interpreter(ANTLR_RECOGNIZER(self));
    alt = antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 0, ANTLR_PARSER(self)->ctx);
    while (alt != 2 && alt != ANTLR_ATN_INVALID_ALT_NUMBER) {
      if (alt == 1) {
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 5);
        antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_SEMICOLON);
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 6);
        ret = (AntlrRuleContext*)test_t_parser_parse_item(self, error);
        if (ret==NULL || (error && *error)) {
            return NULL;
        } 
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 11);
      antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

      alt = antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 0, ANTLR_PARSER(self)->ctx);
    }
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 13);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
    _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);// TODO: untested LL1OptionalBlockSingleAlt
    if (_la == TEST_T_PARSER_SEMICOLON) {
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 12);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_SEMICOLON);
    }
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 15);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_EOF);
    ANTLR_PARSER(self)->ctx->stop = antlr_token_stream_LT(ANTLR_TOKEN_STREAM(ANTLR_PARSER(self)->input), -1);

    //std::cout << _localctx->toStringTree(this) << std::endl;
    gchar *str = antlr_tree_to_string_tree(ANTLR_TREE(local_context), antlr_recognizer_get_rule_names(ANTLR_RECOGNIZER(self)));
    g_print("%s\n", str);
    g_free(str);


    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}


//----------------- ItemContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_item_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_ITEM;
}

/* virtual AntlrParserRuleContext */
void test_context_item_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_item(TEST_T_LISTENER(listener), TEST_CONTEXT_ITEM(self));
}

void test_context_item_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_item(TEST_T_LISTENER(listener), TEST_CONTEXT_ITEM(self));
}

/* virtual GObject */
static void test_context_item_class_init(TestContextItemClass *klass);
static void test_context_item_init(TestContextItem *gobject);

G_DEFINE_TYPE (TestContextItem, test_context_item, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_item_class_init(TestContextItemClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

    parserrulecontext_class->enter_rule = test_context_item_class_parser_rule_context_enter_rule;
    parserrulecontext_class->exit_rule = test_context_item_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_item_class_rule_context_get_rule_index;
}

static void
test_context_item_init (TestContextItem *object)
{
}

TestContextItem *test_context_item_new(AntlrParserRuleContext *parent, size_t invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_ITEM, parent, invoking_state);
    TestContextItem *self = TEST_CONTEXT_ITEM(ctx);
    return self;
}

AntlrTerminalNode *test_context_item_token_get_a(TestContextItem* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_A, 0);
}
AntlrTerminalNode *test_context_item_token_get_b(TestContextItem* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_B, 0);
}




TestContextItem* test_t_parser_parse_item(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextItem *local_context = test_context_item_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_ITEM);
    size_t _la = 0;

    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 17);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_A);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 19);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
    _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);// TODO: untested LL1OptionalBlockSingleAlt
    if (_la == TEST_T_PARSER_B) {
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 18);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_B);
    }

    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}



