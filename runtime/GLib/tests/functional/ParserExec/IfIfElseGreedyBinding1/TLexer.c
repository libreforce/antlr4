
// Generated from T.g4 by ANTLR 4.6





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




#include "TLexer.h"


// We own the ATN which in turn owns the ATN states.
static AntlrATN *test_t_lexer_atn = NULL;// AntlrATN * || GArray *
static GPtrArray   *test_t_lexer_decision_to_dfa = NULL;// of AntlrDFA*
static AntlrPredictionContextCache *test_t_lexer_shared_context_cache = NULL;
static AntlrPredictionContextCache*
test_t_lexer_get_shared_context_cache ()
{
    if (!test_t_lexer_shared_context_cache) {
        test_t_lexer_shared_context_cache = antlr_prediction_context_cache_new();
    }
    return test_t_lexer_shared_context_cache;
}

static guint test_t_lexer_serialized_atn[] = {
  0x03, 0x0430, 0xD6D1, 0x8206, 0xAD2D, 0x4417, 0xAEF1, 0x8D80, 0xAADD, 0x02, 0x08, 0x24, 0x08, 0x01, 0x04, 0x02, 0x09, 0x02, 0x04, 0x03, 0x09, 0x03, 0x04, 0x04, 0x09, 0x04, 0x04, 0x05, 0x09, 0x05, 0x04, 0x06, 0x09, 0x06, 0x04, 0x07, 0x09, 0x07, 0x03, 0x02, 0x03, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x04, 0x03, 0x04, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x06, 0x06, 0x06, 0x1D, 0x0A, 0x06, 0x0D, 0x06, 0x0E, 0x06, 0x1E, 0x03, 0x07, 0x03, 0x07, 0x03, 0x07, 0x03, 0x07, 0x02, 0x02, 0x08, 0x03, 0x03, 0x05, 0x04, 0x07, 0x05, 0x09, 0x06, 0x0B, 0x07, 0x0D, 0x08, 0x03, 0x02, 0x03, 0x04, 0x02, 0x0C, 0x0C, 0x22, 0x22, 0x24, 0x02, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x05, 0x03, 0x02, 0x02, 0x02, 0x02, 0x07, 0x03, 0x02, 0x02, 0x02, 0x02, 0x09, 0x03, 0x02, 0x02, 0x02, 0x02, 0x0B, 0x03, 0x02, 0x02, 0x02, 0x02, 0x0D, 0x03, 0x02, 0x02, 0x02, 0x03, 0x0F, 0x03, 0x02, 0x02, 0x02, 0x05, 0x11, 0x03, 0x02, 0x02, 0x02, 0x07, 0x14, 0x03, 0x02, 0x02, 0x02, 0x09, 0x16, 0x03, 0x02, 0x02, 0x02, 0x0B, 0x1C, 0x03, 0x02, 0x02, 0x02, 0x0D, 0x20, 0x03, 0x02, 0x02, 0x02, 0x0F, 0x10, 0x07, 0x7A, 0x02, 0x02, 0x10, 0x04, 0x03, 0x02, 0x02, 0x02, 0x11, 0x12, 0x07, 0x6B, 0x02, 0x02, 0x12, 0x13, 0x07, 0x68, 0x02, 0x02, 0x13, 0x06, 0x03, 0x02, 0x02, 0x02, 0x14, 0x15, 0x07, 0x7B, 0x02, 0x02, 0x15, 0x08, 0x03, 0x02, 0x02, 0x02, 0x16, 0x17, 0x07, 0x67, 0x02, 0x02, 0x17, 0x18, 0x07, 0x6E, 0x02, 0x02, 0x18, 0x19, 0x07, 0x75, 0x02, 0x02, 0x19, 0x1A, 0x07, 0x67, 0x02, 0x02, 0x1A, 0x0A, 0x03, 0x02, 0x02, 0x02, 0x1B, 0x1D, 0x04, 0x63, 0x7C, 0x02, 0x1C, 0x1B, 0x03, 0x02, 0x02, 0x02, 0x1D, 0x1E, 0x03, 0x02, 0x02, 0x02, 0x1E, 0x1C, 0x03, 0x02, 0x02, 0x02, 0x1E, 0x1F, 0x03, 0x02, 0x02, 0x02, 0x1F, 0x0C, 0x03, 0x02, 0x02, 0x02, 0x20, 0x21, 0x09, 0x02, 0x02, 0x02, 0x21, 0x22, 0x03, 0x02, 0x02, 0x02, 0x22, 0x23, 0x08, 0x07, 0x02, 0x02, 0x23, 0x0E, 0x03, 0x02, 0x02, 0x02, 0x04, 0x02, 0x1E, 0x03, 0x02, 0x03, 0x02
};

static AntlrATN*
test_t_lexer_get_atn ()
{
    if (!test_t_lexer_atn) {
        AntlrATNDeserializer *deserializer = antlr_atn_deserializer_new_full(NULL);
        test_t_lexer_atn = antlr_atn_deserializer_deserialize(deserializer, test_t_lexer_serialized_atn, G_N_ELEMENTS(test_t_lexer_serialized_atn));
        g_object_unref(deserializer);
    }
    return test_t_lexer_atn;
}

void
test_t_lexer_atn_free ()
{
    if (test_t_lexer_atn!=NULL) {
        g_clear_object(&test_t_lexer_atn);
    }
}


void
test_t_lexer_decision_to_dfa_free ()
{
    if (test_t_lexer_decision_to_dfa!=NULL) {
        g_ptr_array_set_free_func(test_t_lexer_decision_to_dfa, (GDestroyNotify)g_object_unref);
        g_ptr_array_free(test_t_lexer_decision_to_dfa, TRUE);
    }
    test_t_lexer_decision_to_dfa=NULL;
}

static GPtrArray*
test_t_lexer_get_decision_to_dfa (TestTLexer *lexer)
{
    if (!test_t_lexer_decision_to_dfa) {
        AntlrATN *atn = test_t_lexer_get_atn();
        gint size = antlr_atn_get_number_of_decisions(atn);
        test_t_lexer_decision_to_dfa = g_ptr_array_sized_new(size);
        int i;
        for (i = 0; i < size; i++) {
            AntlrDFA *v = antlr_dfa_new_with_decision_state_and_decision(antlr_atn_get_decision_state(atn, i), i);
            g_ptr_array_insert(test_t_lexer_decision_to_dfa, i, v);
        }
    }
    return test_t_lexer_decision_to_dfa;
}



static gchar* test_t_lexer__RULE_NAMES[] = {
    "T__0", "T__1", "T__2", "T__3", "ID", "WS"
};

static gchar* test_t_lexer__MODE_NAMES[] = {
    "DEFAULT_MODE"
};

static gchar* test_t_lexer__LITERAL_NAMES[] = {
    "", "'x'", "'if'", "'y'", "'else'"
};

static gchar* test_t_lexer__SYMBOLIC_NAMES[] = {
    "", "", "", "", "", "ID", "WS"
};



/* private functions */

static GArray*
test_t_lexer_symbolic_names_to_array () {
    GArray *array = g_array_new(FALSE, FALSE, sizeof(GString*));

    int i;
    for (i=0; i<G_N_ELEMENTS(test_t_lexer__SYMBOLIC_NAMES); i++) {
        GString * s = g_string_new( test_t_lexer__SYMBOLIC_NAMES[i] );
        g_array_append_val(array, s);
    }

    return array;
}

static GArray*
test_t_lexer_literal_names_to_array () {
    GArray *array = g_array_new(FALSE, FALSE, sizeof(GString*));

    int i;
    for (i=0; i<G_N_ELEMENTS(test_t_lexer__LITERAL_NAMES); i++) {
        GString * s = g_string_new( test_t_lexer__LITERAL_NAMES[i] );
        g_array_append_val(array, s);
    }

    return array;
}


/* virtual AntlrRecognizer */

static AntlrVocabulary *test_t_lexer_vocabulary = NULL;

static AntlrVocabulary*
test_t_lexer_get_vocabulary(TestTLexer *lexer)
{
    if (!test_t_lexer_vocabulary) {
        test_t_lexer_vocabulary = antlr_vocabulary_new(test_t_lexer_literal_names_to_array (), test_t_lexer_symbolic_names_to_array (), NULL);
    }
    return test_t_lexer_vocabulary;
}

static GArray* test_t_lexer_token_names = NULL;

static GArray*
test_t_lexer_class_recognizer_get_token_names(AntlrRecognizer *recognizer)
{
    if (!test_t_lexer_token_names) {
        AntlrVocabulary *vocabulary = test_t_lexer_get_vocabulary(TEST_T_LEXER(recognizer));
        AntlrIVocabulary *ivocabulary = ANTLR_IVOCABULARY(vocabulary);
        gint length = G_N_ELEMENTS(test_t_lexer__SYMBOLIC_NAMES);
        test_t_lexer_token_names = g_array_sized_new(FALSE, FALSE, sizeof(GString*), length);
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
            g_array_append_val(test_t_lexer_token_names, s);
        }
    }
    return test_t_lexer_token_names;
}


static void
test_t_lexer_g_string_free(gpointer *object) {
    GString *str = *object;
    if(str)
        g_string_free(str, TRUE);
}

void
test_t_lexer_token_names_free()
{
    if (test_t_lexer_token_names) {
        g_array_set_clear_func(test_t_lexer_token_names, (GDestroyNotify)test_t_lexer_g_string_free);
        g_array_free(test_t_lexer_token_names, TRUE);
    }
    test_t_lexer_token_names = NULL;
}

static GArray* test_t_lexer_rule_names = NULL;

static GArray*
test_t_lexer_class_recognizer_get_rule_names(AntlrRecognizer *recognizer)
{
    if (!test_t_lexer_rule_names) {
        gint capacity = G_N_ELEMENTS(test_t_lexer__RULE_NAMES);
        GArray *test_t_lexer_rule_names = g_array_sized_new(FALSE, FALSE, sizeof(GString*), capacity);
        gint i;
        for (i=0; i<capacity; i++) {
            GString *s = g_string_new(test_t_lexer__RULE_NAMES[i]);
            g_array_append_val(test_t_lexer_rule_names, s);
        }
    }
    return test_t_lexer_rule_names;
}

/* virtual GObject */

static void test_t_lexer_class_init(TestTLexerClass *klass);
static void test_t_lexer_init(TestTLexer *gobject);

G_DEFINE_TYPE (TestTLexer, test_t_lexer, antlr_lexer_get_type())


static void
test_t_lexer_class_init(TestTLexerClass *klass)
{
        ANTLR_RECOGNIZER_CLASS(klass)->get_rule_names = test_t_lexer_class_recognizer_get_rule_names;
        ANTLR_RECOGNIZER_CLASS(klass)->get_token_names = test_t_lexer_class_recognizer_get_token_names;
}

static void
test_t_lexer_init (TestTLexer *object)
{
}

TestTLexer*
test_t_lexer_new (void)
{
        return g_object_new (test_t_lexer_get_type (),
                             NULL);
}

TestTLexer*
test_t_lexer_new_with_char_stream (AntlrCharStream *char_stream)
{
    AntlrLexer *antlr_lexer = antlr_lexer_super_with_char_stream(TEST_TYPE_T_LEXER, char_stream);
    TestTLexer *lexer = TEST_T_LEXER(antlr_lexer);

    ANTLR_LEXER(lexer)->input = char_stream;

    //_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
    ANTLR_RECOGNIZER(lexer)->interp = (AntlrATNInterpreter*)
            antlr_lexer_atn_simulator_new_from_lexer(
                ANTLR_LEXER(lexer),
                test_t_lexer_get_atn(),
                test_t_lexer_get_decision_to_dfa(lexer),
                test_t_lexer_get_shared_context_cache()
             );

    return lexer;
}










