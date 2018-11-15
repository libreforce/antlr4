
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
  0x03, 0x0430, 0xD6D1, 0x8206, 0xAD2D, 0x4417, 0xAEF1, 0x8D80, 0xAADD, 0x03, 0x0D, 0x2A, 0x04, 0x02, 0x09, 0x02, 0x04, 0x03, 0x09, 0x03, 0x04, 0x04, 0x09, 0x04, 0x03, 0x02, 0x03, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x05, 0x03, 0x14, 0x0A, 0x03, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x05, 0x04, 0x1D, 0x0A, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x07, 0x04, 0x25, 0x0A, 0x04, 0x0C, 0x04, 0x0E, 0x04, 0x28, 0x0B, 0x04, 0x03, 0x04, 0x02, 0x03, 0x06, 0x05, 0x02, 0x04, 0x06, 0x02, 0x04, 0x03, 0x02, 0x06, 0x07, 0x03, 0x02, 0x08, 0x09, 0x2C, 0x02, 0x08, 0x03, 0x02, 0x02, 0x02, 0x04, 0x13, 0x03, 0x02, 0x02, 0x02, 0x06, 0x1C, 0x03, 0x02, 0x02, 0x02, 0x08, 0x09, 0x05, 0x04, 0x03, 0x02, 0x09, 0x03, 0x03, 0x02, 0x02, 0x02, 0x0A, 0x0B, 0x05, 0x06, 0x04, 0x02, 0x0B, 0x0C, 0x07, 0x0C, 0x02, 0x02, 0x0C, 0x14, 0x03, 0x02, 0x02, 0x02, 0x0D, 0x0E, 0x07, 0x0A, 0x02, 0x02, 0x0E, 0x0F, 0x07, 0x03, 0x02, 0x02, 0x0F, 0x10, 0x05, 0x06, 0x04, 0x02, 0x10, 0x11, 0x07, 0x0C, 0x02, 0x02, 0x11, 0x14, 0x03, 0x02, 0x02, 0x02, 0x12, 0x14, 0x07, 0x0C, 0x02, 0x02, 0x13, 0x0A, 0x03, 0x02, 0x02, 0x02, 0x13, 0x0D, 0x03, 0x02, 0x02, 0x02, 0x13, 0x12, 0x03, 0x02, 0x02, 0x02, 0x14, 0x05, 0x03, 0x02, 0x02, 0x02, 0x15, 0x16, 0x08, 0x04, 0x01, 0x02, 0x16, 0x1D, 0x07, 0x0B, 0x02, 0x02, 0x17, 0x1D, 0x07, 0x0A, 0x02, 0x02, 0x18, 0x19, 0x07, 0x04, 0x02, 0x02, 0x19, 0x1A, 0x05, 0x06, 0x04, 0x02, 0x1A, 0x1B, 0x07, 0x05, 0x02, 0x02, 0x1B, 0x1D, 0x03, 0x02, 0x02, 0x02, 0x1C, 0x15, 0x03, 0x02, 0x02, 0x02, 0x1C, 0x17, 0x03, 0x02, 0x02, 0x02, 0x1C, 0x18, 0x03, 0x02, 0x02, 0x02, 0x1D, 0x26, 0x03, 0x02, 0x02, 0x02, 0x1E, 0x1F, 0x0C, 0x07, 0x02, 0x02, 0x1F, 0x20, 0x09, 0x02, 0x02, 0x02, 0x20, 0x25, 0x05, 0x06, 0x04, 0x08, 0x21, 0x22, 0x0C, 0x06, 0x02, 0x02, 0x22, 0x23, 0x09, 0x03, 0x02, 0x02, 0x23, 0x25, 0x05, 0x06, 0x04, 0x07, 0x24, 0x1E, 0x03, 0x02, 0x02, 0x02, 0x24, 0x21, 0x03, 0x02, 0x02, 0x02, 0x25, 0x28, 0x03, 0x02, 0x02, 0x02, 0x26, 0x24, 0x03, 0x02, 0x02, 0x02, 0x26, 0x27, 0x03, 0x02, 0x02, 0x02, 0x27, 0x07, 0x03, 0x02, 0x02, 0x02, 0x28, 0x26, 0x03, 0x02, 0x02, 0x02, 0x06, 0x13, 0x1C, 0x24, 0x26
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
  "prog", "stat", "expr"
};
static gchar* test_t_parser__LITERAL_NAMES[] = {
  "", "'='", "'('", "')'", "'*'", "'/'", "'+'", "'-'"
};
static gchar* test_t_parser__SYMBOLIC_NAMES[] = {
  "", "", "", "", "MUL", "DIV", "ADD", "SUB", "ID", "INT", "NEWLINE", "WS"
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



//----------------- ProgContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_prog_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_PROG;
}

/* virtual AntlrParserRuleContext */
static void test_context_prog_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_prog(TEST_T_LISTENER(listener), TEST_CONTEXT_PROG(self));
}

static void test_context_prog_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_prog(TEST_T_LISTENER(listener), TEST_CONTEXT_PROG(self));
}

/* virtual GObject */
static void test_context_prog_class_init(TestContextProgClass *klass);
static void test_context_prog_init(TestContextProg *gobject);

G_DEFINE_TYPE (TestContextProg, test_context_prog, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_prog_class_init(TestContextProgClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    parserrulecontext_class->enter_rule = test_context_prog_class_parser_rule_context_enter_rule;
//    parserrulecontext_class->exit_rule = test_context_prog_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_prog_class_rule_context_get_rule_index;
}

static void
test_context_prog_init (TestContextProg *object)
{
}

TestContextProg *test_context_prog_new(AntlrParserRuleContext *parent, gint invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_PROG, parent, invoking_state);
    TestContextProg *self = TEST_CONTEXT_PROG(ctx);
    return self;
}

TestContextStat *test_context_prog_rule_get_stat(TestContextProg* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_STAT, 0);
    return TEST_CONTEXT_STAT(context);
}




TestContextProg* test_t_parser_parse_prog(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;
    AntlrATNInterpreter *interpreter = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextProg *local_context = test_context_prog_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_PROG);

    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 6);
    ret = (AntlrRuleContext*)test_t_parser_parse_stat(self, error);
    if (ret==NULL || (error && *error)) {
        return NULL;
    }

    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}


//----------------- StatContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_stat_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_STAT;
}

/* virtual AntlrParserRuleContext */

/* virtual GObject */
static void test_context_stat_class_init(TestContextStatClass *klass);
static void test_context_stat_init(TestContextStat *gobject);

G_DEFINE_TYPE (TestContextStat, test_context_stat, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_stat_class_init(TestContextStatClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    parserrulecontext_class->enter_rule = test_context_stat_class_parser_rule_context_enter_rule;
//    parserrulecontext_class->exit_rule = test_context_stat_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_stat_class_rule_context_get_rule_index;
}

static void
test_context_stat_init (TestContextStat *object)
{
}

TestContextStat *test_context_stat_new(AntlrParserRuleContext *parent, gint invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_STAT, parent, invoking_state);
    TestContextStat *self = TEST_CONTEXT_STAT(ctx);
    return self;
}



//void TParser::StatContext::copyFrom(StatContext *ctx) {
//  ParserRuleContext::copyFrom(ctx);
//  
//}

static void
test_context_stat_copy_from(TestContextStat*self, TestContextStat *ctx)
{
    antlr_parser_rule_context_copy_from(ANTLR_PARSER_RULE_CONTEXT(self), ANTLR_PARSER_RULE_CONTEXT(ctx));
}


//----------------- BlankContext ------------------------------------------------------------------

AntlrTerminalNode *test_context_blank_token_get_newline(TestContextBlank* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_NEWLINE, 0);
}
//TParser::BlankContext::BlankContext(StatContext *ctx) { copyFrom(ctx); }

static void test_context_blank_class_init(TestContextBlankClass *klass);
static void test_context_blank_init(TestContextBlank *gobject);

static void test_context_blank_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_blank(TEST_T_LISTENER(listener), TEST_CONTEXT_BLANK(self));
}
static void test_context_blank_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_blank(TEST_T_LISTENER(listener), TEST_CONTEXT_BLANK(self));
}

G_DEFINE_TYPE (TestContextBlank, test_context_blank, TEST_TYPE_CONTEXT_STAT)

static void
test_context_blank_class_init(TestContextBlankClass *klass)
{
//    AntlrParserRuleContextClass *parserrulecontext_class;
//    AntlrRuleContextClass *rulecontext_class;

//    rulecontext_class = (AntlrRuleContextClass *) klass;
//    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    rulecontext_class->get_rule_index = test_context_one_class_rule_context_get_rule_index;
}
static void
test_context_blank_init (TestContextBlank *object)
{
}

TestContextBlank*
test_context_blank_new(TestContextStat *ctx)
{
    TestContextBlank*self = g_object_new(TEST_TYPE_CONTEXT_BLANK, NULL);
    test_context_stat_copy_from(TEST_CONTEXT_STAT(self), ctx);
    return self;
}

//----------------- PrintExprContext ------------------------------------------------------------------

TestContextExpr *test_context_print_expr_rule_get_expr(TestContextPrintExpr* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_EXPR, 0);
    return TEST_CONTEXT_EXPR(context);
}
AntlrTerminalNode *test_context_print_expr_token_get_newline(TestContextPrintExpr* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_NEWLINE, 0);
}
//TParser::PrintExprContext::PrintExprContext(StatContext *ctx) { copyFrom(ctx); }

static void test_context_print_expr_class_init(TestContextPrintExprClass *klass);
static void test_context_print_expr_init(TestContextPrintExpr *gobject);

static void test_context_print_expr_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_print_expr(TEST_T_LISTENER(listener), TEST_CONTEXT_PRINT_EXPR(self));
}
static void test_context_print_expr_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_print_expr(TEST_T_LISTENER(listener), TEST_CONTEXT_PRINT_EXPR(self));
}

G_DEFINE_TYPE (TestContextPrintExpr, test_context_print_expr, TEST_TYPE_CONTEXT_STAT)

static void
test_context_print_expr_class_init(TestContextPrintExprClass *klass)
{
//    AntlrParserRuleContextClass *parserrulecontext_class;
//    AntlrRuleContextClass *rulecontext_class;

//    rulecontext_class = (AntlrRuleContextClass *) klass;
//    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    rulecontext_class->get_rule_index = test_context_one_class_rule_context_get_rule_index;
}
static void
test_context_print_expr_init (TestContextPrintExpr *object)
{
}

TestContextPrintExpr*
test_context_print_expr_new(TestContextStat *ctx)
{
    TestContextPrintExpr*self = g_object_new(TEST_TYPE_CONTEXT_PRINT_EXPR, NULL);
    test_context_stat_copy_from(TEST_CONTEXT_STAT(self), ctx);
    return self;
}

//----------------- AssignContext ------------------------------------------------------------------

AntlrTerminalNode *test_context_assign_token_get_id(TestContextAssign* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_ID, 0);
}
TestContextExpr *test_context_assign_rule_get_expr(TestContextAssign* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_EXPR, 0);
    return TEST_CONTEXT_EXPR(context);
}
AntlrTerminalNode *test_context_assign_token_get_newline(TestContextAssign* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_NEWLINE, 0);
}
//TParser::AssignContext::AssignContext(StatContext *ctx) { copyFrom(ctx); }

static void test_context_assign_class_init(TestContextAssignClass *klass);
static void test_context_assign_init(TestContextAssign *gobject);

static void test_context_assign_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_assign(TEST_T_LISTENER(listener), TEST_CONTEXT_ASSIGN(self));
}
static void test_context_assign_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_assign(TEST_T_LISTENER(listener), TEST_CONTEXT_ASSIGN(self));
}

G_DEFINE_TYPE (TestContextAssign, test_context_assign, TEST_TYPE_CONTEXT_STAT)

static void
test_context_assign_class_init(TestContextAssignClass *klass)
{
//    AntlrParserRuleContextClass *parserrulecontext_class;
//    AntlrRuleContextClass *rulecontext_class;

//    rulecontext_class = (AntlrRuleContextClass *) klass;
//    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    rulecontext_class->get_rule_index = test_context_one_class_rule_context_get_rule_index;
}
static void
test_context_assign_init (TestContextAssign *object)
{
}

TestContextAssign*
test_context_assign_new(TestContextStat *ctx)
{
    TestContextAssign*self = g_object_new(TEST_TYPE_CONTEXT_ASSIGN, NULL);
    test_context_stat_copy_from(TEST_CONTEXT_STAT(self), ctx);
    return self;
}


TestContextStat* test_t_parser_parse_stat(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;
    AntlrATNInterpreter *interpreter = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextStat *local_context = test_context_stat_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_STAT);

    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 17);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
    interpreter = antlr_recognizer_get_interpreter(ANTLR_RECOGNIZER(self));
    switch (antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 0, ANTLR_PARSER(self)->ctx)) {
    case 1: {
      local_context = test_context_print_expr_new(local_context);
      antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 8);
      ret = (AntlrRuleContext*)test_t_parser_parse_expr_with_precedence(self, 0, error);
      if (ret==NULL || (error && *error)) {
          return NULL;
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 9);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_NEWLINE);
      break;
    }

    case 2: {
      local_context = test_context_assign_new(local_context);
      antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  2);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 11);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_ID);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 12);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__0);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 13);
      ret = (AntlrRuleContext*)test_t_parser_parse_expr_with_precedence(self, 0, error);
      if (ret==NULL || (error && *error)) {
          return NULL;
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 14);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_NEWLINE);
      break;
    }

    case 3: {
      local_context = test_context_blank_new(local_context);
      antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  3);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 16);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_NEWLINE);
      break;
    }

    }

    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}


//----------------- ExprContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_expr_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_EXPR;
}

/* virtual AntlrParserRuleContext */

/* virtual GObject */
static void test_context_expr_class_init(TestContextExprClass *klass);
static void test_context_expr_init(TestContextExpr *gobject);

G_DEFINE_TYPE (TestContextExpr, test_context_expr, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_expr_class_init(TestContextExprClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    parserrulecontext_class->enter_rule = test_context_expr_class_parser_rule_context_enter_rule;
//    parserrulecontext_class->exit_rule = test_context_expr_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_expr_class_rule_context_get_rule_index;
}

static void
test_context_expr_init (TestContextExpr *object)
{
}

TestContextExpr *test_context_expr_new(AntlrParserRuleContext *parent, gint invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_EXPR, parent, invoking_state);
    TestContextExpr *self = TEST_CONTEXT_EXPR(ctx);
    return self;
}



//void TParser::ExprContext::copyFrom(ExprContext *ctx) {
//  ParserRuleContext::copyFrom(ctx);
//  
//}

static void
test_context_expr_copy_from(TestContextExpr*self, TestContextExpr *ctx)
{
    antlr_parser_rule_context_copy_from(ANTLR_PARSER_RULE_CONTEXT(self), ANTLR_PARSER_RULE_CONTEXT(ctx));
}


//----------------- ParensContext ------------------------------------------------------------------

TestContextExpr *test_context_parens_rule_get_expr(TestContextParens* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_EXPR, 0);
    return TEST_CONTEXT_EXPR(context);
}
//TParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }

static void test_context_parens_class_init(TestContextParensClass *klass);
static void test_context_parens_init(TestContextParens *gobject);

static void test_context_parens_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_parens(TEST_T_LISTENER(listener), TEST_CONTEXT_PARENS(self));
}
static void test_context_parens_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_parens(TEST_T_LISTENER(listener), TEST_CONTEXT_PARENS(self));
}

G_DEFINE_TYPE (TestContextParens, test_context_parens, TEST_TYPE_CONTEXT_EXPR)

static void
test_context_parens_class_init(TestContextParensClass *klass)
{
//    AntlrParserRuleContextClass *parserrulecontext_class;
//    AntlrRuleContextClass *rulecontext_class;

//    rulecontext_class = (AntlrRuleContextClass *) klass;
//    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    rulecontext_class->get_rule_index = test_context_one_class_rule_context_get_rule_index;
}
static void
test_context_parens_init (TestContextParens *object)
{
}

TestContextParens*
test_context_parens_new(TestContextExpr *ctx)
{
    TestContextParens*self = g_object_new(TEST_TYPE_CONTEXT_PARENS, NULL);
    test_context_expr_copy_from(TEST_CONTEXT_EXPR(self), ctx);
    return self;
}

//----------------- MulDivContext ------------------------------------------------------------------

GList* test_context_mul_div_rule_get_expr(TestContextMulDiv* self) {
    return antlr_parser_rule_context_get_rule_contexts(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_EXPR);
}
TestContextExpr* test_context_mul_div_at_rule_get_expr(TestContextMulDiv* self, size_t i) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_EXPR, i);
    return TEST_CONTEXT_EXPR(context);
}
//TParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }

static void test_context_mul_div_class_init(TestContextMulDivClass *klass);
static void test_context_mul_div_init(TestContextMulDiv *gobject);

static void test_context_mul_div_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_mul_div(TEST_T_LISTENER(listener), TEST_CONTEXT_MUL_DIV(self));
}
static void test_context_mul_div_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_mul_div(TEST_T_LISTENER(listener), TEST_CONTEXT_MUL_DIV(self));
}

G_DEFINE_TYPE (TestContextMulDiv, test_context_mul_div, TEST_TYPE_CONTEXT_EXPR)

static void
test_context_mul_div_class_init(TestContextMulDivClass *klass)
{
//    AntlrParserRuleContextClass *parserrulecontext_class;
//    AntlrRuleContextClass *rulecontext_class;

//    rulecontext_class = (AntlrRuleContextClass *) klass;
//    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    rulecontext_class->get_rule_index = test_context_one_class_rule_context_get_rule_index;
}
static void
test_context_mul_div_init (TestContextMulDiv *object)
{
}

TestContextMulDiv*
test_context_mul_div_new(TestContextExpr *ctx)
{
    TestContextMulDiv*self = g_object_new(TEST_TYPE_CONTEXT_MUL_DIV, NULL);
    test_context_expr_copy_from(TEST_CONTEXT_EXPR(self), ctx);
    return self;
}

//----------------- AddSubContext ------------------------------------------------------------------

GList* test_context_add_sub_rule_get_expr(TestContextAddSub* self) {
    return antlr_parser_rule_context_get_rule_contexts(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_EXPR);
}
TestContextExpr* test_context_add_sub_at_rule_get_expr(TestContextAddSub* self, size_t i) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_EXPR, i);
    return TEST_CONTEXT_EXPR(context);
}
//TParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }

static void test_context_add_sub_class_init(TestContextAddSubClass *klass);
static void test_context_add_sub_init(TestContextAddSub *gobject);

static void test_context_add_sub_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_add_sub(TEST_T_LISTENER(listener), TEST_CONTEXT_ADD_SUB(self));
}
static void test_context_add_sub_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_add_sub(TEST_T_LISTENER(listener), TEST_CONTEXT_ADD_SUB(self));
}

G_DEFINE_TYPE (TestContextAddSub, test_context_add_sub, TEST_TYPE_CONTEXT_EXPR)

static void
test_context_add_sub_class_init(TestContextAddSubClass *klass)
{
//    AntlrParserRuleContextClass *parserrulecontext_class;
//    AntlrRuleContextClass *rulecontext_class;

//    rulecontext_class = (AntlrRuleContextClass *) klass;
//    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    rulecontext_class->get_rule_index = test_context_one_class_rule_context_get_rule_index;
}
static void
test_context_add_sub_init (TestContextAddSub *object)
{
}

TestContextAddSub*
test_context_add_sub_new(TestContextExpr *ctx)
{
    TestContextAddSub*self = g_object_new(TEST_TYPE_CONTEXT_ADD_SUB, NULL);
    test_context_expr_copy_from(TEST_CONTEXT_EXPR(self), ctx);
    return self;
}

//----------------- IdContext ------------------------------------------------------------------

AntlrTerminalNode *test_context_id_token_get_id(TestContextId* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_ID, 0);
}
//TParser::IdContext::IdContext(ExprContext *ctx) { copyFrom(ctx); }

static void test_context_id_class_init(TestContextIdClass *klass);
static void test_context_id_init(TestContextId *gobject);

static void test_context_id_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_id(TEST_T_LISTENER(listener), TEST_CONTEXT_ID(self));
}
static void test_context_id_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_id(TEST_T_LISTENER(listener), TEST_CONTEXT_ID(self));
}

G_DEFINE_TYPE (TestContextId, test_context_id, TEST_TYPE_CONTEXT_EXPR)

static void
test_context_id_class_init(TestContextIdClass *klass)
{
//    AntlrParserRuleContextClass *parserrulecontext_class;
//    AntlrRuleContextClass *rulecontext_class;

//    rulecontext_class = (AntlrRuleContextClass *) klass;
//    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    rulecontext_class->get_rule_index = test_context_one_class_rule_context_get_rule_index;
}
static void
test_context_id_init (TestContextId *object)
{
}

TestContextId*
test_context_id_new(TestContextExpr *ctx)
{
    TestContextId*self = g_object_new(TEST_TYPE_CONTEXT_ID, NULL);
    test_context_expr_copy_from(TEST_CONTEXT_EXPR(self), ctx);
    return self;
}

//----------------- IntContext ------------------------------------------------------------------

AntlrTerminalNode *test_context_int_token_get_int(TestContextInt* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_INT, 0);
}
//TParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }

static void test_context_int_class_init(TestContextIntClass *klass);
static void test_context_int_init(TestContextInt *gobject);

static void test_context_int_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_int(TEST_T_LISTENER(listener), TEST_CONTEXT_INT(self));
}
static void test_context_int_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_int(TEST_T_LISTENER(listener), TEST_CONTEXT_INT(self));
}

G_DEFINE_TYPE (TestContextInt, test_context_int, TEST_TYPE_CONTEXT_EXPR)

static void
test_context_int_class_init(TestContextIntClass *klass)
{
//    AntlrParserRuleContextClass *parserrulecontext_class;
//    AntlrRuleContextClass *rulecontext_class;

//    rulecontext_class = (AntlrRuleContextClass *) klass;
//    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    rulecontext_class->get_rule_index = test_context_one_class_rule_context_get_rule_index;
}
static void
test_context_int_init (TestContextInt *object)
{
}

TestContextInt*
test_context_int_new(TestContextExpr *ctx)
{
    TestContextInt*self = g_object_new(TEST_TYPE_CONTEXT_INT, NULL);
    test_context_expr_copy_from(TEST_CONTEXT_EXPR(self), ctx);
    return self;
}


TestContextExpr* test_t_parser_parse_expr(TestTParser *self, GError **error) {
   return test_t_parser_parse_expr_with_precedence(self, 0, error);
}

TestContextExpr* test_t_parser_parse_expr_with_precedence(TestTParser *self, int precedence, GError **error) {
  AntlrRuleContext *ret = NULL;
  AntlrATNInterpreter *interpreter = NULL;
  AntlrParserRuleContext *parentContext = ANTLR_PARSER(self)->ctx;
  gint parentState = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));

  TestContextExpr *local_context = (TestContextExpr *)antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_EXPR, ANTLR_PARSER(self)->ctx, parentState);
  TestContextExpr *previousContext = local_context;
  size_t startState = 4;
  antlr_parser_enter_recursion_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 4, TEST_T_PARSER_EXPR, precedence);

  size_t _la = 0;

//  auto onExit = finally([=] {
//  
//    unrollRecursionContexts(parentContext);
//  });
///  try {
    size_t alt;
    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 26);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
    // TODO: untested LL1AltBlock
    switch (antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1)) {
      case TEST_T_PARSER_INT: {
        //local_context = _tracker.createInstance<IntContext>(local_context);
        /*
        local_context = antlr_parser_rule_context_copy_from(
          antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_INT, local_context, -1),
          local_context);
        */
        local_context = test_context_int_new(local_context);

        ANTLR_PARSER(self)->ctx = local_context;
        previousContext = local_context;

        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 20);
        antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_INT);
        break;
      }

      case TEST_T_PARSER_ID: {
        //local_context = _tracker.createInstance<IdContext>(local_context);
        /*
        local_context = antlr_parser_rule_context_copy_from(
          antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_ID, local_context, -1),
          local_context);
        */
        local_context = test_context_id_new(local_context);

        ANTLR_PARSER(self)->ctx = local_context;
        previousContext = local_context;
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 21);
        antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_ID);
        break;
      }

      case TEST_T_PARSER_T__1: {
        //local_context = _tracker.createInstance<ParensContext>(local_context);
        /*
        local_context = antlr_parser_rule_context_copy_from(
          antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_PARENS, local_context, -1),
          local_context);
        */
        local_context = test_context_parens_new(local_context);

        ANTLR_PARSER(self)->ctx = local_context;
        previousContext = local_context;
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 22);
        antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__1);
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 23);
        ret = (AntlrRuleContext*)test_t_parser_parse_expr_with_precedence(self, 0, error);
        if (ret==NULL || (error && *error)) {
            return NULL;
        }
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 24);
        antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__2);
        break;
      }

    default:
      if (error!=NULL) {
          *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "NoViableAlt for rule '%s' in file '%s'", "expr", g_path_get_basename("T.g4") );
      }
      return NULL;
    }
    ANTLR_PARSER(self)->ctx->stop = antlr_token_stream_LT(ANTLR_TOKEN_STREAM(ANTLR_PARSER(self)->input), -1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 36);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

    interpreter = antlr_recognizer_get_interpreter(ANTLR_RECOGNIZER(self));
    alt = antlr_parser_atn_simulator_adaptive_predict(
                ANTLR_PARSER_ATN_SIMULATOR(interpreter),
                ANTLR_PARSER(self)->input, 3,
                ANTLR_PARSER(self)->ctx);
    while (alt != 2 && alt != ANTLR_ATN_INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (g_list_length(ANTLR_PARSER(self)->parse_listeners))
          antlr_parser_trigger_exit_rule_event(ANTLR_PARSER(self));
        previousContext = local_context;
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 34);
        antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
        interpreter = antlr_recognizer_get_interpreter(ANTLR_RECOGNIZER(self));
        switch (antlr_parser_atn_simulator_adaptive_predict(
                    ANTLR_PARSER_ATN_SIMULATOR(interpreter),
                    ANTLR_PARSER(self)->input, 2,
                    ANTLR_PARSER(self)->ctx)) {
        case 1: {
          //auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          /*
          AntlrParserRuleContext *
          newContext = antlr_parser_rule_context_copy_from(
          	antlr_parser_rule_context_super_with_parent(
          		TEST_TYPE_CONTEXT_MUL_DIV,
          		antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_EXPR, parentContext, parentState),
          		-1),
          	local_context);
          */
          local_context = test_context_mul_div_new(test_context_expr_new(parentContext, parentState));

          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_EXPR);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 28);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 5))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 5)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 29);
          _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
          if (!(_la == TEST_T_PARSER_MUL

          || _la == TEST_T_PARSER_DIV)) {
          antlr_error_strategy_recover_inline(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          } else {
            antlr_parser_consume(ANTLR_PARSER(self));
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 30);
          ret = (AntlrRuleContext*)test_t_parser_parse_expr_with_precedence(self, 6, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        case 2: {
          //auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          /*
          AntlrParserRuleContext *
          newContext = antlr_parser_rule_context_copy_from(
          	antlr_parser_rule_context_super_with_parent(
          		TEST_TYPE_CONTEXT_ADD_SUB,
          		antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_EXPR, parentContext, parentState),
          		-1),
          	local_context);
          */
          local_context = test_context_add_sub_new(test_context_expr_new(parentContext, parentState));

          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_EXPR);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 31);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 4))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 4)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 32);
          _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
          if (!(_la == TEST_T_PARSER_ADD

          || _la == TEST_T_PARSER_SUB)) {
          antlr_error_strategy_recover_inline(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          } else {
            antlr_parser_consume(ANTLR_PARSER(self));
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 33);
          ret = (AntlrRuleContext*)test_t_parser_parse_expr_with_precedence(self, 5, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        } 
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 38);
      antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

      alt = antlr_parser_atn_simulator_adaptive_predict(
                  ANTLR_PARSER_ATN_SIMULATOR(interpreter),
                  ANTLR_PARSER(self)->input,
                  3,
                  ANTLR_PARSER(self)->ctx);
    }
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
    case 2: return test_t_parser_sempred_expr(self, context, predicateIndex);

  default:
    break;
  }
  return TRUE;
}

gboolean test_t_parser_sempred_expr(TestTParser* self, AntlrRuleContext *local_context, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 5);
    case 1: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 4);

  default:
    break;
  }
  return TRUE;
}


