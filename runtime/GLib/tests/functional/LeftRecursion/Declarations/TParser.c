
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
  0x03, 0x0430, 0xD6D1, 0x8206, 0xAD2D, 0x4417, 0xAEF1, 0x8D80, 0xAADD, 0x03, 0x0A, 0x28, 0x04, 0x02, 0x09, 0x02, 0x04, 0x03, 0x09, 0x03, 0x04, 0x04, 0x09, 0x04, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x05, 0x03, 0x14, 0x0A, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x03, 0x21, 0x0A, 0x03, 0x0C, 0x03, 0x0E, 0x03, 0x24, 0x0B, 0x03, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x02, 0x03, 0x04, 0x05, 0x02, 0x04, 0x06, 0x02, 0x02, 0x29, 0x02, 0x08, 0x03, 0x02, 0x02, 0x02, 0x04, 0x13, 0x03, 0x02, 0x02, 0x02, 0x06, 0x25, 0x03, 0x02, 0x02, 0x02, 0x08, 0x09, 0x05, 0x04, 0x03, 0x02, 0x09, 0x0A, 0x07, 0x02, 0x02, 0x03, 0x0A, 0x03, 0x03, 0x02, 0x02, 0x02, 0x0B, 0x0C, 0x08, 0x03, 0x01, 0x02, 0x0C, 0x0D, 0x07, 0x07, 0x02, 0x02, 0x0D, 0x14, 0x05, 0x04, 0x03, 0x05, 0x0E, 0x0F, 0x07, 0x05, 0x02, 0x02, 0x0F, 0x10, 0x05, 0x04, 0x03, 0x02, 0x10, 0x11, 0x07, 0x06, 0x02, 0x02, 0x11, 0x14, 0x03, 0x02, 0x02, 0x02, 0x12, 0x14, 0x07, 0x08, 0x02, 0x02, 0x13, 0x0B, 0x03, 0x02, 0x02, 0x02, 0x13, 0x0E, 0x03, 0x02, 0x02, 0x02, 0x13, 0x12, 0x03, 0x02, 0x02, 0x02, 0x14, 0x22, 0x03, 0x02, 0x02, 0x02, 0x15, 0x16, 0x0C, 0x08, 0x02, 0x02, 0x16, 0x17, 0x07, 0x03, 0x02, 0x02, 0x17, 0x18, 0x05, 0x06, 0x04, 0x02, 0x18, 0x19, 0x07, 0x04, 0x02, 0x02, 0x19, 0x21, 0x03, 0x02, 0x02, 0x02, 0x1A, 0x1B, 0x0C, 0x07, 0x02, 0x02, 0x1B, 0x1C, 0x07, 0x03, 0x02, 0x02, 0x1C, 0x21, 0x07, 0x04, 0x02, 0x02, 0x1D, 0x1E, 0x0C, 0x06, 0x02, 0x02, 0x1E, 0x1F, 0x07, 0x05, 0x02, 0x02, 0x1F, 0x21, 0x07, 0x06, 0x02, 0x02, 0x20, 0x15, 0x03, 0x02, 0x02, 0x02, 0x20, 0x1A, 0x03, 0x02, 0x02, 0x02, 0x20, 0x1D, 0x03, 0x02, 0x02, 0x02, 0x21, 0x24, 0x03, 0x02, 0x02, 0x02, 0x22, 0x20, 0x03, 0x02, 0x02, 0x02, 0x22, 0x23, 0x03, 0x02, 0x02, 0x02, 0x23, 0x05, 0x03, 0x02, 0x02, 0x02, 0x24, 0x22, 0x03, 0x02, 0x02, 0x02, 0x25, 0x26, 0x07, 0x09, 0x02, 0x02, 0x26, 0x07, 0x03, 0x02, 0x02, 0x02, 0x05, 0x13, 0x20, 0x22
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
  "s", "declarator", "e"
};
static gchar* test_t_parser__LITERAL_NAMES[] = {
  "", "'['", "']'", "'('", "')'", "'*'"
};
static gchar* test_t_parser__SYMBOLIC_NAMES[] = {
  "", "", "", "", "", "", "ID", "INT", "WS"
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



//----------------- SContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_s_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_S;
}

/* virtual AntlrParserRuleContext */
static void test_context_s_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_s(TEST_T_LISTENER(listener), TEST_CONTEXT_S(self));
}

static void test_context_s_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_s(TEST_T_LISTENER(listener), TEST_CONTEXT_S(self));
}

/* virtual GObject */
static void test_context_s_class_init(TestContextSClass *klass);
static void test_context_s_init(TestContextS *gobject);

G_DEFINE_TYPE (TestContextS, test_context_s, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_s_class_init(TestContextSClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    parserrulecontext_class->enter_rule = test_context_s_class_parser_rule_context_enter_rule;
//    parserrulecontext_class->exit_rule = test_context_s_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_s_class_rule_context_get_rule_index;
}

static void
test_context_s_init (TestContextS *object)
{
}

TestContextS *test_context_s_new(AntlrParserRuleContext *parent, gint invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_S, parent, invoking_state);
    TestContextS *self = TEST_CONTEXT_S(ctx);
    return self;
}

TestContextDeclarator *test_context_s_rule_get_declarator(TestContextS* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_DECLARATOR, 0);
    return TEST_CONTEXT_DECLARATOR(context);
}
AntlrTerminalNode *test_context_s_token_get_eof(TestContextS* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_EOF, 0);
}




TestContextS* test_t_parser_parse_s(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;
    AntlrATNInterpreter *interpreter = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextS *local_context = test_context_s_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_S);

    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 6);
    ret = (AntlrRuleContext*)test_t_parser_parse_declarator_with_precedence(self, 0, error);
    if (ret==NULL || (error && *error)) {
        return NULL;
    }
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 7);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_EOF);
    ANTLR_PARSER(self)->ctx->stop = antlr_token_stream_LT(ANTLR_TOKEN_STREAM(ANTLR_PARSER(self)->input), -1);

      gchar *str = antlr_tree_to_string_tree(ANTLR_TREE(local_context), antlr_recognizer_get_rule_names(ANTLR_RECOGNIZER(self)));
      g_print("%s\n", str);
      g_free(str);


    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}


//----------------- DeclaratorContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_declarator_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_DECLARATOR;
}

/* virtual AntlrParserRuleContext */
static void test_context_declarator_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_declarator(TEST_T_LISTENER(listener), TEST_CONTEXT_DECLARATOR(self));
}

static void test_context_declarator_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_declarator(TEST_T_LISTENER(listener), TEST_CONTEXT_DECLARATOR(self));
}

/* virtual GObject */
static void test_context_declarator_class_init(TestContextDeclaratorClass *klass);
static void test_context_declarator_init(TestContextDeclarator *gobject);

G_DEFINE_TYPE (TestContextDeclarator, test_context_declarator, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_declarator_class_init(TestContextDeclaratorClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    parserrulecontext_class->enter_rule = test_context_declarator_class_parser_rule_context_enter_rule;
//    parserrulecontext_class->exit_rule = test_context_declarator_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_declarator_class_rule_context_get_rule_index;
}

static void
test_context_declarator_init (TestContextDeclarator *object)
{
}

TestContextDeclarator *test_context_declarator_new(AntlrParserRuleContext *parent, gint invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_DECLARATOR, parent, invoking_state);
    TestContextDeclarator *self = TEST_CONTEXT_DECLARATOR(ctx);
    return self;
}

TestContextDeclarator *test_context_declarator_rule_get_declarator(TestContextDeclarator* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_DECLARATOR, 0);
    return TEST_CONTEXT_DECLARATOR(context);
}
AntlrTerminalNode *test_context_declarator_token_get_id(TestContextDeclarator* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_ID, 0);
}
TestContextE *test_context_declarator_rule_get_e(TestContextDeclarator* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_E, 0);
    return TEST_CONTEXT_E(context);
}




TestContextDeclarator* test_t_parser_parse_declarator(TestTParser *self, GError **error) {
   return test_t_parser_parse_declarator_with_precedence(self, 0, error);
}

TestContextDeclarator* test_t_parser_parse_declarator_with_precedence(TestTParser *self, int precedence, GError **error) {
  AntlrRuleContext *ret = NULL;
  AntlrATNInterpreter *interpreter = NULL;
  AntlrParserRuleContext *parentContext = ANTLR_PARSER(self)->ctx;
  gint parentState = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));

  TestContextDeclarator *local_context = (TestContextDeclarator *)antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_DECLARATOR, ANTLR_PARSER(self)->ctx, parentState);
  TestContextDeclarator *previousContext = local_context;
  size_t startState = 2;
  antlr_parser_enter_recursion_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 2, TEST_T_PARSER_DECLARATOR, precedence);


//  auto onExit = finally([=] {
//  
//    unrollRecursionContexts(parentContext);
//  });
///  try {
    size_t alt;
    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 17);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
    // TODO: untested LL1AltBlock
    switch (antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1)) {
      case TEST_T_PARSER_T__4: {
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 10);
        antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__4);
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 11);
        ret = (AntlrRuleContext*)test_t_parser_parse_declarator_with_precedence(self, 3, error);
        if (ret==NULL || (error && *error)) {
            return NULL;
        }
        break;
      }

      case TEST_T_PARSER_T__2: {
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 12);
        antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__2);
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 13);
        ret = (AntlrRuleContext*)test_t_parser_parse_declarator_with_precedence(self, 0, error);
        if (ret==NULL || (error && *error)) {
            return NULL;
        }
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 14);
        antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__3);
        break;
      }

      case TEST_T_PARSER_ID: {
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 16);
        antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_ID);
        break;
      }

    default:
      if (error!=NULL) {
          *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "NoViableAlt for rule '%s' in file '%s'", "declarator", g_path_get_basename("T.g4") );
      }
      return NULL;
    }
    ANTLR_PARSER(self)->ctx->stop = antlr_token_stream_LT(ANTLR_TOKEN_STREAM(ANTLR_PARSER(self)->input), -1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 32);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

    interpreter = antlr_recognizer_get_interpreter(ANTLR_RECOGNIZER(self));
    alt = antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 2, ANTLR_PARSER(self)->ctx);
    while (alt != 2 && alt != ANTLR_ATN_INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (g_list_length(ANTLR_PARSER(self)->parse_listeners))
          antlr_parser_trigger_exit_rule_event(ANTLR_PARSER(self));
        previousContext = local_context;
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 30);
        antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
        interpreter = antlr_recognizer_get_interpreter(ANTLR_RECOGNIZER(self));
        switch (antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 1, ANTLR_PARSER(self)->ctx)) {
        case 1: {
          local_context = (TestContextDeclarator *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_DECLARATOR, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_DECLARATOR);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 19);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 6))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 6)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 20);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__0);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 21);
          ret = (AntlrRuleContext*)test_t_parser_parse_e(self, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 22);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__1);
          break;
        }

        case 2: {
          local_context = (TestContextDeclarator *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_DECLARATOR, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_DECLARATOR);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 24);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 5))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 5)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 25);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__0);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 26);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__1);
          break;
        }

        case 3: {
          local_context = (TestContextDeclarator *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_DECLARATOR, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_DECLARATOR);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 27);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 4))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 4)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 28);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__2);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 29);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__3);
          break;
        }

        } 
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 34);
      antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

      alt = antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 2, ANTLR_PARSER(self)->ctx);
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

//----------------- EContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_e_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_E;
}

/* virtual AntlrParserRuleContext */
static void test_context_e_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_e(TEST_T_LISTENER(listener), TEST_CONTEXT_E(self));
}

static void test_context_e_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_e(TEST_T_LISTENER(listener), TEST_CONTEXT_E(self));
}

/* virtual GObject */
static void test_context_e_class_init(TestContextEClass *klass);
static void test_context_e_init(TestContextE *gobject);

G_DEFINE_TYPE (TestContextE, test_context_e, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_e_class_init(TestContextEClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    parserrulecontext_class->enter_rule = test_context_e_class_parser_rule_context_enter_rule;
//    parserrulecontext_class->exit_rule = test_context_e_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_e_class_rule_context_get_rule_index;
}

static void
test_context_e_init (TestContextE *object)
{
}

TestContextE *test_context_e_new(AntlrParserRuleContext *parent, gint invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parent, invoking_state);
    TestContextE *self = TEST_CONTEXT_E(ctx);
    return self;
}

AntlrTerminalNode *test_context_e_token_get_int(TestContextE* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_INT, 0);
}




TestContextE* test_t_parser_parse_e(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;
    AntlrATNInterpreter *interpreter = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextE *local_context = test_context_e_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_E);

    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 35);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_INT);

    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}


static gboolean
test_t_parser_class_recognizer_sempred(AntlrRecognizer *recognizer, AntlrRuleContext *context, gint ruleIndex, gint predicateIndex) {
  TestTParser *self = TEST_T_PARSER(recognizer);
  switch (ruleIndex) {
    case 1: return test_t_parser_sempred_declarator(self, context, predicateIndex);

  default:
    break;
  }
  return TRUE;
}

gboolean test_t_parser_sempred_declarator(TestTParser* self, AntlrRuleContext *local_context, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 6);
    case 1: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 5);
    case 2: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 4);

  default:
    break;
  }
  return TRUE;
}


