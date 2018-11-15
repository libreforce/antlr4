
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
  0x03, 0x0430, 0xD6D1, 0x8206, 0xAD2D, 0x4417, 0xAEF1, 0x8D80, 0xAADD, 0x03, 0x04, 0x0F, 0x04, 0x02, 0x09, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x07, 0x02, 0x0A, 0x0A, 0x02, 0x0C, 0x02, 0x0E, 0x02, 0x0D, 0x0B, 0x02, 0x03, 0x02, 0x02, 0x03, 0x02, 0x03, 0x02, 0x02, 0x02, 0x0E, 0x02, 0x04, 0x03, 0x02, 0x02, 0x02, 0x04, 0x05, 0x08, 0x02, 0x01, 0x02, 0x05, 0x06, 0x07, 0x03, 0x02, 0x02, 0x06, 0x0B, 0x03, 0x02, 0x02, 0x02, 0x07, 0x08, 0x0C, 0x04, 0x02, 0x02, 0x08, 0x0A, 0x07, 0x03, 0x02, 0x02, 0x09, 0x07, 0x03, 0x02, 0x02, 0x02, 0x0A, 0x0D, 0x03, 0x02, 0x02, 0x02, 0x0B, 0x09, 0x03, 0x02, 0x02, 0x02, 0x0B, 0x0C, 0x03, 0x02, 0x02, 0x02, 0x0C, 0x03, 0x03, 0x02, 0x02, 0x02, 0x0D, 0x0B, 0x03, 0x02, 0x02, 0x02, 0x03, 0x0B
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
  "a"
};
static gchar* test_t_parser__LITERAL_NAMES[] = {
};
static gchar* test_t_parser__SYMBOLIC_NAMES[] = {
  "", "ID", "WS"
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
test_t_parser_class_recognizer_get_rule_names(AntlrRecognizer *recognizer)
{
    TestTParser *parser = TEST_T_PARSER(recognizer);
    if (parser->rule_names==NULL) {
        parser->rule_names = test_t_parser_rule_names_to_array();
    }
    return parser->rule_names;
}

static gboolean test_t_parser_class_recognizer_sempred(AntlrRecognizer *recognizer, AntlrRuleContext *context, gint ruleIndex, gint predicateIndex);

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
    recognizer_class->get_rule_names  = test_t_parser_class_recognizer_get_rule_names;
    recognizer_class->get_atn         = test_t_parser_get_atn;

    recognizer_class->sempred         = test_t_parser_class_recognizer_sempred;

// TODO actions

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



//----------------- AContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_a_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_A;
}

/* virtual AntlrParserRuleContext */
static void test_context_a_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_a(TEST_T_LISTENER(listener), TEST_CONTEXT_A(self));
}

static void test_context_a_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_a(TEST_T_LISTENER(listener), TEST_CONTEXT_A(self));
}

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

TestContextA *test_context_a_new(AntlrParserRuleContext *parent, gint invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_A, parent, invoking_state);
    TestContextA *self = TEST_CONTEXT_A(ctx);
    return self;
}

AntlrTerminalNode *test_context_a_token_get_id(TestContextA* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_ID, 0);
}
TestContextA *test_context_a_rule_get_a(TestContextA* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_A, 0);
    return TEST_CONTEXT_A(context);
}




TestContextA* test_t_parser_parse_a(TestTParser *self, GError **error) {
   return test_t_parser_parse_a_with_precedence(self, 0, error);
}

TestContextA* test_t_parser_parse_a_with_precedence(TestTParser *self, int precedence, GError **error) {
  AntlrRuleContext *ret = NULL;
  AntlrATNInterpreter *interpreter = NULL;
  AntlrParserRuleContext *parentContext = ANTLR_PARSER(self)->ctx;
  gint parentState = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));

  TestContextA *local_context = (TestContextA *)antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_A, ANTLR_PARSER(self)->ctx, parentState);
  TestContextA *previousContext = local_context;
  size_t startState = 0;
  antlr_parser_enter_recursion_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_A, precedence);


//  auto onExit = finally([=] {
//  
//    unrollRecursionContexts(parentContext);
//  });
///  try {
    size_t alt;
    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 3);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_ID);
    ANTLR_PARSER(self)->ctx->stop = antlr_token_stream_LT(ANTLR_TOKEN_STREAM(ANTLR_PARSER(self)->input), -1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 9);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

    interpreter = antlr_recognizer_get_interpreter(ANTLR_RECOGNIZER(self));
    alt = antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 0, ANTLR_PARSER(self)->ctx);
    while (alt != 2 && alt != ANTLR_ATN_INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (g_list_length(ANTLR_PARSER(self)->parse_listeners))
          antlr_parser_trigger_exit_rule_event(ANTLR_PARSER(self));
        previousContext = local_context;
        local_context = (TestContextA *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_A, parentContext, parentState);
        antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_A);

        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 5);

        if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 2))){
            if (error!=NULL) {
                *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 2)");
            }
            return NULL;
        }

        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 6);
        antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_ID); 
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 11);
      antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

      alt = antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 0, ANTLR_PARSER(self)->ctx);
    }
ANTLR_PARSER(self)->ctx->stop = antlr_token_stream_LT(ANTLR_TOKEN_STREAM(ANTLR_PARSER(self)->input), -1);

      gchar *str = antlr_tree_to_string_tree(ANTLR_TREE(local_context), antlr_recognizer_get_rule_names(ANTLR_RECOGNIZER(self)));
      g_print("%s\n", str);
      g_free(str);

///  }
///  catch (RecognitionException &e) {
///    _errHandler->reportError(this, e);
///    _localctx->exception = std::current_exception();
///    _errHandler->recover(this, _localctx->exception);
///  }
  antlr_parser_unroll_recursion_contexts(ANTLR_PARSER(self), parentContext);
  return local_context;
}

static gboolean
test_t_parser_class_recognizer_sempred(AntlrRecognizer *recognizer, AntlrRuleContext *context, gint ruleIndex, gint predicateIndex) {
  TestTParser *self = TEST_T_PARSER(recognizer);
  switch (ruleIndex) {
    case 0: return test_t_parser_sempred_a(self, context, predicateIndex);

  default:
    break;
  }
  return TRUE;
}

gboolean test_t_parser_sempred_a(TestTParser* self, AntlrRuleContext *local_context, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 2);

  default:
    break;
  }
  return TRUE;
}


