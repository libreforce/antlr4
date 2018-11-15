
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
  0x03, 0x0430, 0xD6D1, 0x8206, 0xAD2D, 0x4417, 0xAEF1, 0x8D80, 0xAADD, 0x03, 0x07, 0x34, 0x04, 0x02, 0x09, 0x02, 0x04, 0x03, 0x09, 0x03, 0x04, 0x04, 0x09, 0x04, 0x04, 0x05, 0x09, 0x05, 0x04, 0x06, 0x09, 0x06, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x07, 0x02, 0x11, 0x0A, 0x02, 0x0C, 0x02, 0x0E, 0x02, 0x14, 0x0B, 0x02, 0x03, 0x02, 0x07, 0x02, 0x17, 0x0A, 0x02, 0x0C, 0x02, 0x0E, 0x02, 0x1A, 0x0B, 0x02, 0x03, 0x02, 0x05, 0x02, 0x1D, 0x0A, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x05, 0x02, 0x22, 0x0A, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x03, 0x29, 0x0A, 0x03, 0x0C, 0x03, 0x0E, 0x03, 0x2C, 0x0B, 0x03, 0x03, 0x04, 0x03, 0x04, 0x03, 0x05, 0x03, 0x05, 0x03, 0x06, 0x03, 0x06, 0x03, 0x06, 0x02, 0x02, 0x07, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x02, 0x02, 0x33, 0x02, 0x0C, 0x03, 0x02, 0x02, 0x02, 0x04, 0x23, 0x03, 0x02, 0x02, 0x02, 0x06, 0x2D, 0x03, 0x02, 0x02, 0x02, 0x08, 0x2F, 0x03, 0x02, 0x02, 0x02, 0x0A, 0x31, 0x03, 0x02, 0x02, 0x02, 0x0C, 0x0D, 0x07, 0x03, 0x02, 0x02, 0x0D, 0x21, 0x05, 0x06, 0x04, 0x02, 0x0E, 0x12, 0x07, 0x04, 0x02, 0x02, 0x0F, 0x11, 0x05, 0x08, 0x05, 0x02, 0x10, 0x0F, 0x03, 0x02, 0x02, 0x02, 0x11, 0x14, 0x03, 0x02, 0x02, 0x02, 0x12, 0x10, 0x03, 0x02, 0x02, 0x02, 0x12, 0x13, 0x03, 0x02, 0x02, 0x02, 0x13, 0x18, 0x03, 0x02, 0x02, 0x02, 0x14, 0x12, 0x03, 0x02, 0x02, 0x02, 0x15, 0x17, 0x05, 0x04, 0x03, 0x02, 0x16, 0x15, 0x03, 0x02, 0x02, 0x02, 0x17, 0x1A, 0x03, 0x02, 0x02, 0x02, 0x18, 0x16, 0x03, 0x02, 0x02, 0x02, 0x18, 0x19, 0x03, 0x02, 0x02, 0x02, 0x19, 0x1C, 0x03, 0x02, 0x02, 0x02, 0x1A, 0x18, 0x03, 0x02, 0x02, 0x02, 0x1B, 0x1D, 0x05, 0x0A, 0x06, 0x02, 0x1C, 0x1B, 0x03, 0x02, 0x02, 0x02, 0x1C, 0x1D, 0x03, 0x02, 0x02, 0x02, 0x1D, 0x1E, 0x03, 0x02, 0x02, 0x02, 0x1E, 0x1F, 0x07, 0x05, 0x02, 0x02, 0x1F, 0x22, 0x07, 0x03, 0x02, 0x02, 0x20, 0x22, 0x05, 0x08, 0x05, 0x02, 0x21, 0x0E, 0x03, 0x02, 0x02, 0x02, 0x21, 0x20, 0x03, 0x02, 0x02, 0x02, 0x22, 0x03, 0x03, 0x02, 0x02, 0x02, 0x23, 0x24, 0x07, 0x06, 0x02, 0x02, 0x24, 0x25, 0x07, 0x03, 0x02, 0x02, 0x25, 0x26, 0x05, 0x06, 0x04, 0x02, 0x26, 0x2A, 0x07, 0x04, 0x02, 0x02, 0x27, 0x29, 0x05, 0x08, 0x05, 0x02, 0x28, 0x27, 0x03, 0x02, 0x02, 0x02, 0x29, 0x2C, 0x03, 0x02, 0x02, 0x02, 0x2A, 0x28, 0x03, 0x02, 0x02, 0x02, 0x2A, 0x2B, 0x03, 0x02, 0x02, 0x02, 0x2B, 0x05, 0x03, 0x02, 0x02, 0x02, 0x2C, 0x2A, 0x03, 0x02, 0x02, 0x02, 0x2D, 0x2E, 0x07, 0x07, 0x02, 0x02, 0x2E, 0x07, 0x03, 0x02, 0x02, 0x02, 0x2F, 0x30, 0x07, 0x07, 0x02, 0x02, 0x30, 0x09, 0x03, 0x02, 0x02, 0x02, 0x31, 0x32, 0x07, 0x07, 0x02, 0x02, 0x32, 0x0B, 0x03, 0x02, 0x02, 0x02, 0x07, 0x12, 0x18, 0x1C, 0x21, 0x2A
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
  "ifStatement", "elseIfStatement", "expression", "executableStatement", 
  "elseStatement"
};
static gchar* test_t_parser__LITERAL_NAMES[] = {
  "", "'if'", "'then'", "'end'", "'else'", "'a'"
};
static gchar* test_t_parser__SYMBOLIC_NAMES[] = {
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
    /* TODO: Add initialization code here */
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



//----------------- IfStatementContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_if_statement_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_IF_STATEMENT;
}

/* virtual AntlrParserRuleContext */
void test_context_if_statement_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_if_statement(TEST_T_LISTENER(listener), TEST_CONTEXT_IF_STATEMENT(self));
}

void test_context_if_statement_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_if_statement(TEST_T_LISTENER(listener), TEST_CONTEXT_IF_STATEMENT(self));
}

/* virtual GObject */
static void test_context_if_statement_class_init(TestContextIfStatementClass *klass);
static void test_context_if_statement_init(TestContextIfStatement *gobject);

G_DEFINE_TYPE (TestContextIfStatement, test_context_if_statement, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_if_statement_class_init(TestContextIfStatementClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

    parserrulecontext_class->enter_rule = test_context_if_statement_class_parser_rule_context_enter_rule;
    parserrulecontext_class->exit_rule = test_context_if_statement_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_if_statement_class_rule_context_get_rule_index;
}

static void
test_context_if_statement_init (TestContextIfStatement *object)
{
}

TestContextIfStatement *test_context_if_statement_new(AntlrParserRuleContext *parent, size_t invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_IF_STATEMENT, parent, invoking_state);
    TestContextIfStatement *self = TEST_CONTEXT_IF_STATEMENT(ctx);
    return self;
}

TestContextExpression *test_context_if_statement_rule_get_expression(TestContextIfStatement* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_EXPRESSION, 0);
    return TEST_CONTEXT_EXPRESSION(context);
}
GList* test_context_if_statement_rule_get_executable_statement(TestContextIfStatement* self) {
    return antlr_parser_rule_context_get_rule_contexts(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_EXECUTABLE_STATEMENT);
}
TestContextExecutableStatement* test_context_if_statement_at_rule_get_executable_statement(TestContextIfStatement* self, size_t i) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_EXECUTABLE_STATEMENT, i);
    return TEST_CONTEXT_EXECUTABLE_STATEMENT(context);
}
GList* test_context_if_statement_rule_get_else_if_statement(TestContextIfStatement* self) {
    return antlr_parser_rule_context_get_rule_contexts(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_ELSE_IF_STATEMENT);
}
TestContextElseIfStatement* test_context_if_statement_at_rule_get_else_if_statement(TestContextIfStatement* self, size_t i) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_ELSE_IF_STATEMENT, i);
    return TEST_CONTEXT_ELSE_IF_STATEMENT(context);
}
TestContextElseStatement *test_context_if_statement_rule_get_else_statement(TestContextIfStatement* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_ELSE_STATEMENT, 0);
    return TEST_CONTEXT_ELSE_STATEMENT(context);
}




TestContextIfStatement* test_t_parser_parse_if_statement(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextIfStatement *local_context = test_context_if_statement_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_IF_STATEMENT);
    size_t _la = 0;

    size_t alt;
    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 10);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__0);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 11);
    ret = (AntlrRuleContext*)test_t_parser_parse_expression(self, error);
    if (ret==NULL || (error && *error)) {
        return NULL;
    }
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 31);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
    // TODO: untested LL1AltBlock
    switch (antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1)) {
      case TEST_T_PARSER_T__1: {
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 12);
        antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__1);
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 16);
        antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

        AntlrATNInterpreter *interpreter = antlr_recognizer_get_interpreter(ANTLR_RECOGNIZER(self));
        alt = antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 0, ANTLR_PARSER(self)->ctx);
        while (alt != 2 && alt != ANTLR_ATN_INVALID_ALT_NUMBER) {
          if (alt == 1) {
            antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 13);
            ret = (AntlrRuleContext*)test_t_parser_parse_executable_statement(self, error);
            if (ret==NULL || (error && *error)) {
                return NULL;
            } 
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 18);
          antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

          alt = antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 0, ANTLR_PARSER(self)->ctx);
        }
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 22);
        antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
        _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
        while (_la == TEST_T_PARSER_T__3) {
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 19);
          ret = (AntlrRuleContext*)test_t_parser_parse_else_if_statement(self, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 24);
          antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
        }
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 26);
        antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
        _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);// TODO: untested LL1OptionalBlockSingleAlt
        if (_la == TEST_T_PARSER_T__4) {
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 25);
          ret = (AntlrRuleContext*)test_t_parser_parse_else_statement(self, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
        }
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 28);
        antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__2);
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 29);
        antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__0);
        break;
      }

      case TEST_T_PARSER_T__4: {
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 30);
        ret = (AntlrRuleContext*)test_t_parser_parse_executable_statement(self, error);
        if (ret==NULL || (error && *error)) {
            return NULL;
        }
        break;
      }

    default:
      if (error!=NULL) {
          *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "NoViableAlt for rule '%s' in file '%s'", "ifStatement", g_path_get_basename("T.g4") );
      }
      return NULL;
    }
    ANTLR_PARSER(self)->ctx->stop = antlr_token_stream_LT(ANTLR_TOKEN_STREAM(ANTLR_PARSER(self)->input), -1);


    //g_assert(_localctx->elseIfStatement().size() >= 0);


    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}


//----------------- ElseIfStatementContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_else_if_statement_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_ELSE_IF_STATEMENT;
}

/* virtual AntlrParserRuleContext */
void test_context_else_if_statement_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_else_if_statement(TEST_T_LISTENER(listener), TEST_CONTEXT_ELSE_IF_STATEMENT(self));
}

void test_context_else_if_statement_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_else_if_statement(TEST_T_LISTENER(listener), TEST_CONTEXT_ELSE_IF_STATEMENT(self));
}

/* virtual GObject */
static void test_context_else_if_statement_class_init(TestContextElseIfStatementClass *klass);
static void test_context_else_if_statement_init(TestContextElseIfStatement *gobject);

G_DEFINE_TYPE (TestContextElseIfStatement, test_context_else_if_statement, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_else_if_statement_class_init(TestContextElseIfStatementClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

    parserrulecontext_class->enter_rule = test_context_else_if_statement_class_parser_rule_context_enter_rule;
    parserrulecontext_class->exit_rule = test_context_else_if_statement_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_else_if_statement_class_rule_context_get_rule_index;
}

static void
test_context_else_if_statement_init (TestContextElseIfStatement *object)
{
}

TestContextElseIfStatement *test_context_else_if_statement_new(AntlrParserRuleContext *parent, size_t invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_ELSE_IF_STATEMENT, parent, invoking_state);
    TestContextElseIfStatement *self = TEST_CONTEXT_ELSE_IF_STATEMENT(ctx);
    return self;
}

TestContextExpression *test_context_else_if_statement_rule_get_expression(TestContextElseIfStatement* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_EXPRESSION, 0);
    return TEST_CONTEXT_EXPRESSION(context);
}
GList* test_context_else_if_statement_rule_get_executable_statement(TestContextElseIfStatement* self) {
    return antlr_parser_rule_context_get_rule_contexts(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_EXECUTABLE_STATEMENT);
}
TestContextExecutableStatement* test_context_else_if_statement_at_rule_get_executable_statement(TestContextElseIfStatement* self, size_t i) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_EXECUTABLE_STATEMENT, i);
    return TEST_CONTEXT_EXECUTABLE_STATEMENT(context);
}




TestContextElseIfStatement* test_t_parser_parse_else_if_statement(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextElseIfStatement *local_context = test_context_else_if_statement_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_ELSE_IF_STATEMENT);

    size_t alt;
    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 33);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__3);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 34);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__0);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 35);
    ret = (AntlrRuleContext*)test_t_parser_parse_expression(self, error);
    if (ret==NULL || (error && *error)) {
        return NULL;
    }
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 36);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 40);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

    AntlrATNInterpreter *interpreter = antlr_recognizer_get_interpreter(ANTLR_RECOGNIZER(self));
    alt = antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 4, ANTLR_PARSER(self)->ctx);
    while (alt != 2 && alt != ANTLR_ATN_INVALID_ALT_NUMBER) {
      if (alt == 1) {
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 37);
        ret = (AntlrRuleContext*)test_t_parser_parse_executable_statement(self, error);
        if (ret==NULL || (error && *error)) {
            return NULL;
        } 
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 42);
      antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

      alt = antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 4, ANTLR_PARSER(self)->ctx);
    }

    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}


//----------------- ExpressionContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_expression_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_EXPRESSION;
}

/* virtual AntlrParserRuleContext */
void test_context_expression_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_expression(TEST_T_LISTENER(listener), TEST_CONTEXT_EXPRESSION(self));
}

void test_context_expression_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_expression(TEST_T_LISTENER(listener), TEST_CONTEXT_EXPRESSION(self));
}

/* virtual GObject */
static void test_context_expression_class_init(TestContextExpressionClass *klass);
static void test_context_expression_init(TestContextExpression *gobject);

G_DEFINE_TYPE (TestContextExpression, test_context_expression, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_expression_class_init(TestContextExpressionClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

    parserrulecontext_class->enter_rule = test_context_expression_class_parser_rule_context_enter_rule;
    parserrulecontext_class->exit_rule = test_context_expression_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_expression_class_rule_context_get_rule_index;
}

static void
test_context_expression_init (TestContextExpression *object)
{
}

TestContextExpression *test_context_expression_new(AntlrParserRuleContext *parent, size_t invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_EXPRESSION, parent, invoking_state);
    TestContextExpression *self = TEST_CONTEXT_EXPRESSION(ctx);
    return self;
}





TestContextExpression* test_t_parser_parse_expression(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextExpression *local_context = test_context_expression_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_EXPRESSION);

    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 43);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__4);

    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}


//----------------- ExecutableStatementContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_executable_statement_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_EXECUTABLE_STATEMENT;
}

/* virtual AntlrParserRuleContext */
void test_context_executable_statement_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_executable_statement(TEST_T_LISTENER(listener), TEST_CONTEXT_EXECUTABLE_STATEMENT(self));
}

void test_context_executable_statement_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_executable_statement(TEST_T_LISTENER(listener), TEST_CONTEXT_EXECUTABLE_STATEMENT(self));
}

/* virtual GObject */
static void test_context_executable_statement_class_init(TestContextExecutableStatementClass *klass);
static void test_context_executable_statement_init(TestContextExecutableStatement *gobject);

G_DEFINE_TYPE (TestContextExecutableStatement, test_context_executable_statement, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_executable_statement_class_init(TestContextExecutableStatementClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

    parserrulecontext_class->enter_rule = test_context_executable_statement_class_parser_rule_context_enter_rule;
    parserrulecontext_class->exit_rule = test_context_executable_statement_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_executable_statement_class_rule_context_get_rule_index;
}

static void
test_context_executable_statement_init (TestContextExecutableStatement *object)
{
}

TestContextExecutableStatement *test_context_executable_statement_new(AntlrParserRuleContext *parent, size_t invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_EXECUTABLE_STATEMENT, parent, invoking_state);
    TestContextExecutableStatement *self = TEST_CONTEXT_EXECUTABLE_STATEMENT(ctx);
    return self;
}





TestContextExecutableStatement* test_t_parser_parse_executable_statement(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextExecutableStatement *local_context = test_context_executable_statement_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_EXECUTABLE_STATEMENT);

    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 45);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__4);

    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}


//----------------- ElseStatementContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_else_statement_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_ELSE_STATEMENT;
}

/* virtual AntlrParserRuleContext */
void test_context_else_statement_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_else_statement(TEST_T_LISTENER(listener), TEST_CONTEXT_ELSE_STATEMENT(self));
}

void test_context_else_statement_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_else_statement(TEST_T_LISTENER(listener), TEST_CONTEXT_ELSE_STATEMENT(self));
}

/* virtual GObject */
static void test_context_else_statement_class_init(TestContextElseStatementClass *klass);
static void test_context_else_statement_init(TestContextElseStatement *gobject);

G_DEFINE_TYPE (TestContextElseStatement, test_context_else_statement, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_else_statement_class_init(TestContextElseStatementClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

    parserrulecontext_class->enter_rule = test_context_else_statement_class_parser_rule_context_enter_rule;
    parserrulecontext_class->exit_rule = test_context_else_statement_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_else_statement_class_rule_context_get_rule_index;
}

static void
test_context_else_statement_init (TestContextElseStatement *object)
{
}

TestContextElseStatement *test_context_else_statement_new(AntlrParserRuleContext *parent, size_t invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_ELSE_STATEMENT, parent, invoking_state);
    TestContextElseStatement *self = TEST_CONTEXT_ELSE_STATEMENT(ctx);
    return self;
}





TestContextElseStatement* test_t_parser_parse_else_statement(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextElseStatement *local_context = test_context_else_statement_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_ELSE_STATEMENT);

    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 47);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__4);

    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}



