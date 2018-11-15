
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
  0x03, 0x0430, 0xD6D1, 0x8206, 0xAD2D, 0x4417, 0xAEF1, 0x8D80, 0xAADD, 0x03, 0x05, 0x1A, 0x04, 0x02, 0x09, 0x02, 0x04, 0x03, 0x09, 0x03, 0x04, 0x04, 0x09, 0x04, 0x03, 0x02, 0x07, 0x02, 0x0A, 0x0A, 0x02, 0x0C, 0x02, 0x0E, 0x02, 0x0D, 0x0B, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x05, 0x03, 0x16, 0x0A, 0x03, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x02, 0x02, 0x05, 0x02, 0x04, 0x06, 0x02, 0x02, 0x18, 0x02, 0x0B, 0x03, 0x02, 0x02, 0x02, 0x04, 0x15, 0x03, 0x02, 0x02, 0x02, 0x06, 0x17, 0x03, 0x02, 0x02, 0x02, 0x08, 0x0A, 0x05, 0x04, 0x03, 0x02, 0x09, 0x08, 0x03, 0x02, 0x02, 0x02, 0x0A, 0x0D, 0x03, 0x02, 0x02, 0x02, 0x0B, 0x09, 0x03, 0x02, 0x02, 0x02, 0x0B, 0x0C, 0x03, 0x02, 0x02, 0x02, 0x0C, 0x0E, 0x03, 0x02, 0x02, 0x02, 0x0D, 0x0B, 0x03, 0x02, 0x02, 0x02, 0x0E, 0x0F, 0x07, 0x02, 0x02, 0x03, 0x0F, 0x03, 0x03, 0x02, 0x02, 0x02, 0x10, 0x11, 0x05, 0x06, 0x04, 0x02, 0x11, 0x12, 0x08, 0x03, 0x01, 0x02, 0x12, 0x16, 0x03, 0x02, 0x02, 0x02, 0x13, 0x14, 0x07, 0x03, 0x02, 0x02, 0x14, 0x16, 0x08, 0x03, 0x01, 0x02, 0x15, 0x10, 0x03, 0x02, 0x02, 0x02, 0x15, 0x13, 0x03, 0x02, 0x02, 0x02, 0x16, 0x05, 0x03, 0x02, 0x02, 0x02, 0x17, 0x18, 0x07, 0x04, 0x02, 0x02, 0x18, 0x07, 0x03, 0x02, 0x02, 0x02, 0x04, 0x0B, 0x15
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
  "start", "a", "subrule"
};
static gchar* test_t_parser__LITERAL_NAMES[] = {
  "", "'y'", "'x'"
};
static gchar* test_t_parser__SYMBOLIC_NAMES[] = {
  "", "", "", "WS"
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



//----------------- StartContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_start_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_START;
}

/* virtual AntlrParserRuleContext */
static void test_context_start_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_start(TEST_T_LISTENER(listener), TEST_CONTEXT_START(self));
}

static void test_context_start_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_start(TEST_T_LISTENER(listener), TEST_CONTEXT_START(self));
}

/* virtual GObject */
static void test_context_start_class_init(TestContextStartClass *klass);
static void test_context_start_init(TestContextStart *gobject);

G_DEFINE_TYPE (TestContextStart, test_context_start, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_start_class_init(TestContextStartClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    parserrulecontext_class->enter_rule = test_context_start_class_parser_rule_context_enter_rule;
//    parserrulecontext_class->exit_rule = test_context_start_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_start_class_rule_context_get_rule_index;
}

static void
test_context_start_init (TestContextStart *object)
{
}

TestContextStart *test_context_start_new(AntlrParserRuleContext *parent, size_t invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_START, parent, invoking_state);
    TestContextStart *self = TEST_CONTEXT_START(ctx);
    return self;
}

AntlrTerminalNode *test_context_start_token_get_eof(TestContextStart* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_EOF, 0);
}
GList* test_context_start_rule_get_a(TestContextStart* self) {
    return antlr_parser_rule_context_get_rule_contexts(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_A);
}
TestContextA* test_context_start_at_rule_get_a(TestContextStart* self, size_t i) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_A, i);
    return TEST_CONTEXT_A(context);
}




TestContextStart* test_t_parser_parse_start(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextStart *local_context = test_context_start_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_START);
    size_t _la = 0;

    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 9);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
    _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
    while (_la == TEST_T_PARSER_T__0

    || _la == TEST_T_PARSER_T__1) {
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 6);
      ret = (AntlrRuleContext*)test_t_parser_parse_a(self, error);
      if (ret==NULL || (error && *error)) {
          return NULL;
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 11);
      antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
      _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
    }
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 12);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_EOF);

    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}


//----------------- AContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_a_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_A;
}

/* virtual AntlrParserRuleContext */

/* virtual GObject */
static void test_context_a_class_init(TestContextAClass *klass);
static void test_context_a_init(TestContextA *gobject);

G_DEFINE_TYPE (TestContextA, test_context_a, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_a_class_init(TestContextAClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    parserrulecontext_class->enter_rule = test_context_a_class_parser_rule_context_enter_rule;
//    parserrulecontext_class->exit_rule = test_context_a_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_a_class_rule_context_get_rule_index;
}

static void
test_context_a_init (TestContextA *object)
{
}

TestContextA *test_context_a_new(AntlrParserRuleContext *parent, size_t invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_A, parent, invoking_state);
    TestContextA *self = TEST_CONTEXT_A(ctx);
    return self;
}



//void TParser::AContext::copyFrom(AContext *ctx) {
//  ParserRuleContext::copyFrom(ctx);
//  
//}

static void
test_context_a_copy_from(TestContextA*self, TestContextA *ctx)
{
    antlr_parser_rule_context_copy_from(ANTLR_PARSER_RULE_CONTEXT(self), ANTLR_PARSER_RULE_CONTEXT(ctx));
}


//----------------- OneContext ------------------------------------------------------------------

TestContextSubrule *test_context_one_rule_get_subrule(TestContextOne* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_SUBRULE, 0);
    return TEST_CONTEXT_SUBRULE(context);
}
//TParser::OneContext::OneContext(AContext *ctx) { copyFrom(ctx); }

static void test_context_one_class_init(TestContextOneClass *klass);
static void test_context_one_init(TestContextOne *gobject);

static void test_context_one_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_one(TEST_T_LISTENER(listener), TEST_CONTEXT_ONE(self));
}
static void test_context_one_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_one(TEST_T_LISTENER(listener), TEST_CONTEXT_ONE(self));
}

G_DEFINE_TYPE (TestContextOne, test_context_one, TEST_TYPE_CONTEXT_A)

static void
test_context_one_class_init(TestContextOneClass *klass)
{
//    AntlrParserRuleContextClass *parserrulecontext_class;
//    AntlrRuleContextClass *rulecontext_class;

//    rulecontext_class = (AntlrRuleContextClass *) klass;
//    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    rulecontext_class->get_rule_index = test_context_one_class_rule_context_get_rule_index;
}
static void
test_context_one_init (TestContextOne *object)
{
}

TestContextOne*
test_context_one_new(TestContextA *ctx)
{
    TestContextOne*self = g_object_new(TEST_TYPE_CONTEXT_ONE, NULL);
    test_context_a_copy_from(TEST_CONTEXT_A(self), ctx);
    return self;
}

//----------------- TwoContext ------------------------------------------------------------------

//TParser::TwoContext::TwoContext(AContext *ctx) { copyFrom(ctx); }

static void test_context_two_class_init(TestContextTwoClass *klass);
static void test_context_two_init(TestContextTwo *gobject);

static void test_context_two_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_two(TEST_T_LISTENER(listener), TEST_CONTEXT_TWO(self));
}
static void test_context_two_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_two(TEST_T_LISTENER(listener), TEST_CONTEXT_TWO(self));
}

G_DEFINE_TYPE (TestContextTwo, test_context_two, TEST_TYPE_CONTEXT_A)

static void
test_context_two_class_init(TestContextTwoClass *klass)
{
//    AntlrParserRuleContextClass *parserrulecontext_class;
//    AntlrRuleContextClass *rulecontext_class;

//    rulecontext_class = (AntlrRuleContextClass *) klass;
//    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    rulecontext_class->get_rule_index = test_context_one_class_rule_context_get_rule_index;
}
static void
test_context_two_init (TestContextTwo *object)
{
}

TestContextTwo*
test_context_two_new(TestContextA *ctx)
{
    TestContextTwo*self = g_object_new(TEST_TYPE_CONTEXT_TWO, NULL);
    test_context_a_copy_from(TEST_CONTEXT_A(self), ctx);
    return self;
}


TestContextA* test_t_parser_parse_a(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextA *local_context = test_context_a_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_A);

    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 19);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
    // TODO: untested LL1AltBlock
    switch (antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1)) {
      case TEST_T_PARSER_T__1: {
        local_context = test_context_one_new(local_context);
        antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 14);
        ret = (AntlrRuleContext*)test_t_parser_parse_subrule(self, error);
        TEST_CONTEXT_ONE(local_context)->label =  (TestContextSubrule*)ret;
        if (ret==NULL || (error && *error)) {
            return NULL;
        }
        g_print("%s\n", (TEST_CONTEXT_ONE(local_context)->label != NULL ? antlr_token_stream_get_text_from_token(ANTLR_PARSER(self)->input, ANTLR_PARSER_RULE_CONTEXT(TEST_CONTEXT_ONE(local_context)->label)->start, ANTLR_PARSER_RULE_CONTEXT(TEST_CONTEXT_ONE(local_context)->label)->stop) : NULL));
        break;
      }

      case TEST_T_PARSER_T__0: {
        local_context = test_context_two_new(local_context);
        antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  2);
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 17);
        TEST_CONTEXT_TWO(local_context)->label = 
        antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__0);
        g_print("%s\n", (TEST_CONTEXT_TWO(local_context)->label != NULL ? antlr_token_get_text(TEST_CONTEXT_TWO(local_context)->label) : g_strdup("")));
        break;
      }

    default:
      if (error!=NULL) {
          *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "NoViableAlt for rule '%s' in file '%s'", "a", g_path_get_basename("T.g4") );
      }
      return NULL;
    }

    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}


//----------------- SubruleContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_subrule_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_SUBRULE;
}

/* virtual AntlrParserRuleContext */
static void test_context_subrule_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_subrule(TEST_T_LISTENER(listener), TEST_CONTEXT_SUBRULE(self));
}

static void test_context_subrule_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_subrule(TEST_T_LISTENER(listener), TEST_CONTEXT_SUBRULE(self));
}

/* virtual GObject */
static void test_context_subrule_class_init(TestContextSubruleClass *klass);
static void test_context_subrule_init(TestContextSubrule *gobject);

G_DEFINE_TYPE (TestContextSubrule, test_context_subrule, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_subrule_class_init(TestContextSubruleClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    parserrulecontext_class->enter_rule = test_context_subrule_class_parser_rule_context_enter_rule;
//    parserrulecontext_class->exit_rule = test_context_subrule_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_subrule_class_rule_context_get_rule_index;
}

static void
test_context_subrule_init (TestContextSubrule *object)
{
}

TestContextSubrule *test_context_subrule_new(AntlrParserRuleContext *parent, size_t invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_SUBRULE, parent, invoking_state);
    TestContextSubrule *self = TEST_CONTEXT_SUBRULE(ctx);
    return self;
}





TestContextSubrule* test_t_parser_parse_subrule(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextSubrule *local_context = test_context_subrule_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_SUBRULE);

    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 21);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__1);

    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}



