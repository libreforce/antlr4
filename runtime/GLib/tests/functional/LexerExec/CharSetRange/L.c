
// Generated from L.g4 by ANTLR 4.6





#include <glib-object.h>

#include "antlr-runtime/types.h"
//#include "antlr-runtime/char-stream.h"

#include "antlr-runtime/misc/object.h"
#include "antlr-runtime/misc/bit-set.h"
#include "antlr-runtime/misc/int-iset.h"
#include "antlr-runtime/misc/interval.h"
#include "antlr-runtime/vocabulary.h"
#include "antlr-runtime/vocabulary-impl.h"
#include "antlr-runtime/misc/interval-set.h"
#include "antlr-runtime/misc/integer-list.h"
#include "antlr-runtime/misc/integer-stack.h"
#include "antlr-runtime/atn/transition.h"
#include "antlr-runtime/atn/lexer-action.h"
#include "antlr-runtime/atn/atn-state.h"
#include "antlr-runtime/atn/semantic-context.h"
#include "antlr-runtime/atn/config.h"
#include "antlr-runtime/atn/config-set.h"
#include "antlr-runtime/atn/rule-stop-state.h"
#include "antlr-runtime/atn/rule-start-state.h"
#include "antlr-runtime/atn/atn.h"
#include "antlr-runtime/atn/prediction-context.h"
#include "antlr-runtime/atn/prediction-context-cache.h"
#include "antlr-runtime/atn/atn-simulator.h"
#include "antlr-runtime/atn/lexer-action-executor.h"
#include "antlr-runtime/atn/decision-state.h"
#include "antlr-runtime/atn/atn-deserialization-options.h"
#include "antlr-runtime/atn/atn-deserializer.h"
#include "antlr-runtime/atn/lexer-atn-simulator.h"

#include "antlr-runtime/dfa/dfa-state.h"
#include "antlr-runtime/dfa/dfa.h"

#include "antlr-runtime/int-stream.h"
#include "antlr-runtime/recognizer.h"
#include "antlr-runtime/int-stream.h"
#include "antlr-runtime/token-factory.h"
#include "antlr-runtime/lexer.h"




#include "L.h"


// We own the ATN which in turn owns the ATN states.
static AntlrATN *test_l_atn = NULL;// AntlrATN * || GArray *
static GPtrArray   *test_l_decision_to_dfa = NULL;// of AntlrDFA*
static AntlrPredictionContextCache *test_l_shared_context_cache = NULL;
static AntlrPredictionContextCache*
test_l_get_shared_context_cache ()
{
    if (!test_l_shared_context_cache) {
        test_l_shared_context_cache = antlr_prediction_context_cache_new();
    }
    return test_l_shared_context_cache;
}

static guint test_l_serialized_atn[] = {
  0x03, 0x0430, 0xD6D1, 0x8206, 0xAD2D, 0x4417, 0xAEF1, 0x8D80, 0xAADD, 0x02, 0x05, 0x20, 0x08, 0x01, 0x04, 0x02, 0x09, 0x02, 0x04, 0x03, 0x09, 0x03, 0x04, 0x04, 0x09, 0x04, 0x03, 0x02, 0x06, 0x02, 0x0B, 0x0A, 0x02, 0x0D, 0x02, 0x0E, 0x02, 0x0C, 0x03, 0x02, 0x03, 0x02, 0x03, 0x03, 0x03, 0x03, 0x07, 0x03, 0x13, 0x0A, 0x03, 0x0C, 0x03, 0x0E, 0x03, 0x16, 0x0B, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x04, 0x06, 0x04, 0x1B, 0x0A, 0x04, 0x0D, 0x04, 0x0E, 0x04, 0x1C, 0x03, 0x04, 0x03, 0x04, 0x02, 0x02, 0x05, 0x03, 0x03, 0x05, 0x04, 0x07, 0x05, 0x03, 0x02, 0x06, 0x03, 0x02, 0x32, 0x3B, 0x04, 0x02, 0x43, 0x5C, 0x63, 0x7C, 0x05, 0x02, 0x32, 0x3B, 0x43, 0x5C, 0x63, 0x7C, 0x05, 0x02, 0x0B, 0x0C, 0x0F, 0x0F, 0x22, 0x22, 0x22, 0x02, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x05, 0x03, 0x02, 0x02, 0x02, 0x02, 0x07, 0x03, 0x02, 0x02, 0x02, 0x03, 0x0A, 0x03, 0x02, 0x02, 0x02, 0x05, 0x10, 0x03, 0x02, 0x02, 0x02, 0x07, 0x1A, 0x03, 0x02, 0x02, 0x02, 0x09, 0x0B, 0x09, 0x02, 0x02, 0x02, 0x0A, 0x09, 0x03, 0x02, 0x02, 0x02, 0x0B, 0x0C, 0x03, 0x02, 0x02, 0x02, 0x0C, 0x0A, 0x03, 0x02, 0x02, 0x02, 0x0C, 0x0D, 0x03, 0x02, 0x02, 0x02, 0x0D, 0x0E, 0x03, 0x02, 0x02, 0x02, 0x0E, 0x0F, 0x08, 0x02, 0x02, 0x02, 0x0F, 0x04, 0x03, 0x02, 0x02, 0x02, 0x10, 0x14, 0x09, 0x03, 0x02, 0x02, 0x11, 0x13, 0x09, 0x04, 0x02, 0x02, 0x12, 0x11, 0x03, 0x02, 0x02, 0x02, 0x13, 0x16, 0x03, 0x02, 0x02, 0x02, 0x14, 0x12, 0x03, 0x02, 0x02, 0x02, 0x14, 0x15, 0x03, 0x02, 0x02, 0x02, 0x15, 0x17, 0x03, 0x02, 0x02, 0x02, 0x16, 0x14, 0x03, 0x02, 0x02, 0x02, 0x17, 0x18, 0x08, 0x03, 0x03, 0x02, 0x18, 0x06, 0x03, 0x02, 0x02, 0x02, 0x19, 0x1B, 0x09, 0x05, 0x02, 0x02, 0x1A, 0x19, 0x03, 0x02, 0x02, 0x02, 0x1B, 0x1C, 0x03, 0x02, 0x02, 0x02, 0x1C, 0x1A, 0x03, 0x02, 0x02, 0x02, 0x1C, 0x1D, 0x03, 0x02, 0x02, 0x02, 0x1D, 0x1E, 0x03, 0x02, 0x02, 0x02, 0x1E, 0x1F, 0x08, 0x04, 0x04, 0x02, 0x1F, 0x08, 0x03, 0x02, 0x02, 0x02, 0x06, 0x02, 0x0C, 0x14, 0x1C, 0x05, 0x03, 0x02, 0x02, 0x03, 0x03, 0x03, 0x08, 0x02, 0x02
};

static AntlrATN*
test_l_get_atn ()
{
    if (!test_l_atn) {
        AntlrATNDeserializer *deserializer = antlr_atn_deserializer_new_full(NULL);
        test_l_atn = antlr_atn_deserializer_deserialize(deserializer, test_l_serialized_atn, G_N_ELEMENTS(test_l_serialized_atn));
        g_object_unref(deserializer);
    }
    return test_l_atn;
}

void
test_l_atn_free ()
{
    if (test_l_atn!=NULL) {
        g_clear_object(&test_l_atn);
    }
}


void
test_l_decision_to_dfa_free ()
{
    if (test_l_decision_to_dfa!=NULL) {
        g_ptr_array_set_free_func(test_l_decision_to_dfa, (GDestroyNotify)g_object_unref);
        g_ptr_array_free(test_l_decision_to_dfa, TRUE);
    }
    test_l_decision_to_dfa=NULL;
}

static GPtrArray*
test_l_get_decision_to_dfa (TestL *lexer)
{
    if (!test_l_decision_to_dfa) {
        AntlrATN *atn = test_l_get_atn();
        gint size = antlr_atn_get_number_of_decisions(atn);
        test_l_decision_to_dfa = g_ptr_array_sized_new(size);
        int i;
        for (i = 0; i < size; i++) {
            AntlrDFA *v = antlr_dfa_new_with_decision_state_and_decision(antlr_atn_get_decision_state(atn, i), i);
            g_ptr_array_insert(test_l_decision_to_dfa, i, v);
        }
    }
    return test_l_decision_to_dfa;
}



static gchar* test_l__RULE_NAMES[] = {
    "I", "ID", "WS"
};

static gchar* test_l__MODE_NAMES[] = {
    "DEFAULT_MODE"
};

static gchar* test_l__LITERAL_NAMES[] = {
};

static gchar* test_l__SYMBOLIC_NAMES[] = {
    "", "I", "ID", "WS"
};



/* private functions */

static GArray*
test_l_symbolic_names_to_array () {
    GArray *array = g_array_new(FALSE, FALSE, sizeof(GString*));

    int i;
    for (i=0; i<G_N_ELEMENTS(test_l__SYMBOLIC_NAMES); i++) {
        GString * s = g_string_new( test_l__SYMBOLIC_NAMES[i] );
        g_array_append_val(array, s);
    }

    return array;
}

static GArray*
test_l_literal_names_to_array () {
    GArray *array = g_array_new(FALSE, FALSE, sizeof(GString*));

    int i;
    for (i=0; i<G_N_ELEMENTS(test_l__LITERAL_NAMES); i++) {
        GString * s = g_string_new( test_l__LITERAL_NAMES[i] );
        g_array_append_val(array, s);
    }

    return array;
}


/* virtual AntlrRecognizer */

static AntlrVocabulary *test_l_vocabulary = NULL;

static AntlrVocabulary*
test_l_get_vocabulary(TestL *lexer)
{
    if (!test_l_vocabulary) {
        test_l_vocabulary = antlr_vocabulary_new(test_l_literal_names_to_array (), test_l_symbolic_names_to_array (), NULL);
    }
    return test_l_vocabulary;
}

static GArray* test_l_token_names = NULL;

static GArray*
test_l_class_recognizer_get_token_names(AntlrRecognizer *recognizer)
{
    if (!test_l_token_names) {
        AntlrVocabulary *vocabulary = test_l_get_vocabulary(TEST_L(recognizer));
        AntlrIVocabulary *ivocabulary = ANTLR_IVOCABULARY(vocabulary);
        gint length = G_N_ELEMENTS(test_l__SYMBOLIC_NAMES);
        test_l_token_names = g_array_sized_new(FALSE, FALSE, sizeof(GString*), length);
        gint i;
        for (i=0; i<length; i++) {
            gchar *str = antlr_ivocabulary_get_literal_name(ivocabulary, i);
            if (str == NULL) {
                str = antlr_ivocabulary_get_symbolic_name(ivocabulary, i);
            }

            if (str == NULL) {
                str = g_strdup("<INVALID>");
            }
            GString *s = g_string_new(str);
            g_array_append_val(test_l_token_names, s);
        }
    }
    return test_l_token_names;
}


static void
test_l_g_string_free(gpointer *object) {
    GString *str = *object;
    if(str)
        g_string_free(str, TRUE);
}

void
test_l_token_names_free()
{
    if (test_l_token_names) {
        g_array_set_clear_func(test_l_token_names, (GDestroyNotify)test_l_g_string_free);
        g_array_free(test_l_token_names, TRUE);
    }
    test_l_token_names = NULL;
}

static GArray* test_l_rule_names = NULL;

static GArray*
test_l_class_recognizer_get_rule_names(AntlrRecognizer *recognizer)
{
    if (!test_l_rule_names) {
        gint capacity = G_N_ELEMENTS(test_l__RULE_NAMES);
        GArray *test_l_rule_names = g_array_sized_new(FALSE, FALSE, sizeof(GString*), capacity);
        gint i;
        for (i=0; i<capacity; i++) {
            GString *s = g_string_new(test_l__RULE_NAMES[i]);
            g_array_append_val(test_l_rule_names, s);
        }
    }
    return test_l_rule_names;
}

/* virtual GObject */

static void test_l_class_init(TestLClass *klass);
static void test_l_init(TestL *gobject);

G_DEFINE_TYPE (TestL, test_l, antlr_lexer_get_type())

static void test_l_action(AntlrRecognizer* self, AntlrRuleContext *context, gint ruleIndex, gint actionIndex) {
  switch (ruleIndex) {
    case 0: test_l_action_i(TEST_L(self), context, actionIndex); break;
    case 1: test_l_action_id(TEST_L(self), context, actionIndex); break;

  default:
    break;
  }
}

static void
test_l_class_init(TestLClass *klass)
{
        ANTLR_RECOGNIZER_CLASS(klass)->get_rule_names = test_l_class_recognizer_get_rule_names;
        ANTLR_RECOGNIZER_CLASS(klass)->get_token_names = test_l_class_recognizer_get_token_names;
        ANTLR_RECOGNIZER_CLASS(klass)->action = test_l_action;
}

static void
test_l_init (TestL *object)
{
}

TestL*
test_l_new (void)
{
        return g_object_new (test_l_get_type (),
                             NULL);
}

TestL*
test_l_new_with_char_stream (AntlrCharStream *char_stream)
{
    AntlrLexer *antlr_lexer = antlr_lexer_super_with_char_stream(TEST_TYPE_L, char_stream);
    TestL *lexer = TEST_L(antlr_lexer);

    ANTLR_LEXER(lexer)->input = char_stream;

    //_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
    ANTLR_RECOGNIZER(lexer)->interp = (AntlrATNInterpreter*)
            antlr_lexer_atn_simulator_new_from_lexer(
                ANTLR_LEXER(lexer),
                test_l_get_atn(),
                test_l_get_decision_to_dfa(lexer),
                test_l_get_shared_context_cache()
             );

    return lexer;
}







void test_l_action_i(TestL* self, AntlrRuleContext *context, gint actionIndex) {
  switch (actionIndex) {
    case 0: g_print( "I\n"); break;

  default:
    break;
  }
}

void test_l_action_id(TestL* self, AntlrRuleContext *context, gint actionIndex) {
  switch (actionIndex) {
    case 1: g_print( "ID\n"); break;

  default:
    break;
  }
}




