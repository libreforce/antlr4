// Generated from PositionAdjustingLexer.g4 by ANTLR 4.6


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




#include "PositionAdjustingLexer.h"


//-----------------------------------------------------------------------------

static void test_position_adjusting_lexer_atn_simulator_class_init(TestPositionAdjustingLexerATNSimulatorClass *klass);
static void test_position_adjusting_lexer_atn_simulator_init(TestPositionAdjustingLexerATNSimulator *gobject);

G_DEFINE_TYPE (TestPositionAdjustingLexerATNSimulator, test_position_adjusting_lexer_atn_simulator, ANTLR_TYPE_LEXER_ATN_SIMULATOR)

void test_position_adjusting_lexer_atn_simulator_reset_accept_position(
        TestPositionAdjustingLexerATNSimulator *self,
        AntlrCharStream *input, int index, int line, int charPositionInLine)
{
    antlr_int_stream_seek(input, index);
    ANTLR_LEXER_ATN_SIMULATOR(self)->line = line;
    ANTLR_LEXER_ATN_SIMULATOR(self)->char_position_in_line = charPositionInLine;
    antlr_lexer_atn_simulator_consume(ANTLR_LEXER_ATN_SIMULATOR(self), input);
}

static void
test_position_adjusting_lexer_atn_simulator_class_init(TestPositionAdjustingLexerATNSimulatorClass *klass)
{
//    AntlrLexerATNSimulatorClass *antlrlexeratnsimulator_class;
//    antlrlexeratnsimulator_class = (AntlrLexerATNSimulatorClass *) klass;
}

static void
test_position_adjusting_lexer_atn_simulator_init (TestPositionAdjustingLexerATNSimulator *object)
{
}

TestPositionAdjustingLexerATNSimulator *
test_position_adjusting_lexer_atn_simulator_new (void)
{
    return g_object_new (test_position_adjusting_lexer_atn_simulator_get_type (),
                         NULL);
}

TestPositionAdjustingLexerATNSimulator *
position_adjusting_lexer_atn_simulator_new_from_lexer (AntlrLexer *recog,
                                                       AntlrATN *atn,
                                                       GPtrArray *decision_to_dfa,
                                                       AntlrPredictionContextCache *shared_context_cache)
{
    TestPositionAdjustingLexerATNSimulator *simulator=
            g_object_new (TEST_TYPE_POSITION_ADJUSTING_LEXER_ATN_SIMULATOR, NULL);
    antlr_lexer_atn_simulator_super (simulator, recog, atn, decision_to_dfa, shared_context_cache);

    return simulator;
}


//-----------------------------------------------------------------------------

// We own the ATN which in turn owns the ATN states.
static AntlrATN *test_position_adjusting_lexer_atn = NULL;// AntlrATN * || GArray *
static GPtrArray   *test_position_adjusting_lexer_decision_to_dfa = NULL;// of AntlrDFA*
static AntlrPredictionContextCache *test_position_adjusting_lexer_shared_context_cache = NULL;
static AntlrPredictionContextCache*
test_position_adjusting_lexer_get_shared_context_cache ()
{
    if (!test_position_adjusting_lexer_shared_context_cache) {
        test_position_adjusting_lexer_shared_context_cache = antlr_prediction_context_cache_new();
    }
    return test_position_adjusting_lexer_shared_context_cache;
}

static guint test_position_adjusting_lexer_serialized_atn[] = {
  0x03, 0x0430, 0xD6D1, 0x8206, 0xAD2D, 0x4417, 0xAEF1, 0x8D80, 0xAADD, 0x02, 0x0A, 0x48, 0x08, 0x01, 0x04, 0x02, 0x09, 0x02, 0x04, 0x03, 0x09, 0x03, 0x04, 0x04, 0x09, 0x04, 0x04, 0x05, 0x09, 0x05, 0x04, 0x06, 0x09, 0x06, 0x04, 0x07, 0x09, 0x07, 0x04, 0x08, 0x09, 0x08, 0x04, 0x09, 0x09, 0x09, 0x04, 0x0A, 0x09, 0x0A, 0x03, 0x02, 0x03, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x04, 0x03, 0x04, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x06, 0x03, 0x06, 0x03, 0x06, 0x05, 0x06, 0x2A, 0x0A, 0x06, 0x03, 0x06, 0x03, 0x06, 0x03, 0x07, 0x03, 0x07, 0x07, 0x07, 0x30, 0x0A, 0x07, 0x0C, 0x07, 0x0E, 0x07, 0x33, 0x0B, 0x07, 0x03, 0x08, 0x07, 0x08, 0x36, 0x0A, 0x08, 0x0C, 0x08, 0x0E, 0x08, 0x39, 0x0B, 0x08, 0x03, 0x09, 0x06, 0x09, 0x3C, 0x0A, 0x09, 0x0D, 0x09, 0x0E, 0x09, 0x3D, 0x03, 0x09, 0x03, 0x09, 0x03, 0x0A, 0x06, 0x0A, 0x43, 0x0A, 0x0A, 0x0D, 0x0A, 0x0E, 0x0A, 0x44, 0x03, 0x0A, 0x03, 0x0A, 0x02, 0x02, 0x0B, 0x03, 0x03, 0x05, 0x04, 0x07, 0x05, 0x09, 0x06, 0x0B, 0x07, 0x0D, 0x08, 0x0F, 0x02, 0x11, 0x09, 0x13, 0x0A, 0x03, 0x02, 0x07, 0x05, 0x02, 0x43, 0x5C, 0x61, 0x61, 0x63, 0x7C, 0x06, 0x02, 0x32, 0x3B, 0x43, 0x5C, 0x61, 0x61, 0x63, 0x7C, 0x05, 0x02, 0x0B, 0x0C, 0x0F, 0x0F, 0x22, 0x22, 0x04, 0x02, 0x0C, 0x0C, 0x0F, 0x0F, 0x04, 0x02, 0x0B, 0x0B, 0x22, 0x22, 0x4B, 0x02, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x05, 0x03, 0x02, 0x02, 0x02, 0x02, 0x07, 0x03, 0x02, 0x02, 0x02, 0x02, 0x09, 0x03, 0x02, 0x02, 0x02, 0x02, 0x0B, 0x03, 0x02, 0x02, 0x02, 0x02, 0x0D, 0x03, 0x02, 0x02, 0x02, 0x02, 0x11, 0x03, 0x02, 0x02, 0x02, 0x02, 0x13, 0x03, 0x02, 0x02, 0x02, 0x03, 0x15, 0x03, 0x02, 0x02, 0x02, 0x05, 0x17, 0x03, 0x02, 0x02, 0x02, 0x07, 0x1A, 0x03, 0x02, 0x02, 0x02, 0x09, 0x1C, 0x03, 0x02, 0x02, 0x02, 0x0B, 0x26, 0x03, 0x02, 0x02, 0x02, 0x0D, 0x2D, 0x03, 0x02, 0x02, 0x02, 0x0F, 0x37, 0x03, 0x02, 0x02, 0x02, 0x11, 0x3B, 0x03, 0x02, 0x02, 0x02, 0x13, 0x42, 0x03, 0x02, 0x02, 0x02, 0x15, 0x16, 0x07, 0x3F, 0x02, 0x02, 0x16, 0x04, 0x03, 0x02, 0x02, 0x02, 0x17, 0x18, 0x07, 0x2D, 0x02, 0x02, 0x18, 0x19, 0x07, 0x3F, 0x02, 0x02, 0x19, 0x06, 0x03, 0x02, 0x02, 0x02, 0x1A, 0x1B, 0x07, 0x7D, 0x02, 0x02, 0x1B, 0x08, 0x03, 0x02, 0x02, 0x02, 0x1C, 0x1D, 0x07, 0x76, 0x02, 0x02, 0x1D, 0x1E, 0x07, 0x71, 0x02, 0x02, 0x1E, 0x1F, 0x07, 0x6D, 0x02, 0x02, 0x1F, 0x20, 0x07, 0x67, 0x02, 0x02, 0x20, 0x21, 0x07, 0x70, 0x02, 0x02, 0x21, 0x22, 0x07, 0x75, 0x02, 0x02, 0x22, 0x23, 0x03, 0x02, 0x02, 0x02, 0x23, 0x24, 0x05, 0x0F, 0x08, 0x02, 0x24, 0x25, 0x07, 0x7D, 0x02, 0x02, 0x25, 0x0A, 0x03, 0x02, 0x02, 0x02, 0x26, 0x27, 0x05, 0x0D, 0x07, 0x02, 0x27, 0x29, 0x05, 0x0F, 0x08, 0x02, 0x28, 0x2A, 0x07, 0x2D, 0x02, 0x02, 0x29, 0x28, 0x03, 0x02, 0x02, 0x02, 0x29, 0x2A, 0x03, 0x02, 0x02, 0x02, 0x2A, 0x2B, 0x03, 0x02, 0x02, 0x02, 0x2B, 0x2C, 0x07, 0x3F, 0x02, 0x02, 0x2C, 0x0C, 0x03, 0x02, 0x02, 0x02, 0x2D, 0x31, 0x09, 0x02, 0x02, 0x02, 0x2E, 0x30, 0x09, 0x03, 0x02, 0x02, 0x2F, 0x2E, 0x03, 0x02, 0x02, 0x02, 0x30, 0x33, 0x03, 0x02, 0x02, 0x02, 0x31, 0x2F, 0x03, 0x02, 0x02, 0x02, 0x31, 0x32, 0x03, 0x02, 0x02, 0x02, 0x32, 0x0E, 0x03, 0x02, 0x02, 0x02, 0x33, 0x31, 0x03, 0x02, 0x02, 0x02, 0x34, 0x36, 0x09, 0x04, 0x02, 0x02, 0x35, 0x34, 0x03, 0x02, 0x02, 0x02, 0x36, 0x39, 0x03, 0x02, 0x02, 0x02, 0x37, 0x35, 0x03, 0x02, 0x02, 0x02, 0x37, 0x38, 0x03, 0x02, 0x02, 0x02, 0x38, 0x10, 0x03, 0x02, 0x02, 0x02, 0x39, 0x37, 0x03, 0x02, 0x02, 0x02, 0x3A, 0x3C, 0x09, 0x05, 0x02, 0x02, 0x3B, 0x3A, 0x03, 0x02, 0x02, 0x02, 0x3C, 0x3D, 0x03, 0x02, 0x02, 0x02, 0x3D, 0x3B, 0x03, 0x02, 0x02, 0x02, 0x3D, 0x3E, 0x03, 0x02, 0x02, 0x02, 0x3E, 0x3F, 0x03, 0x02, 0x02, 0x02, 0x3F, 0x40, 0x08, 0x09, 0x02, 0x02, 0x40, 0x12, 0x03, 0x02, 0x02, 0x02, 0x41, 0x43, 0x09, 0x06, 0x02, 0x02, 0x42, 0x41, 0x03, 0x02, 0x02, 0x02, 0x43, 0x44, 0x03, 0x02, 0x02, 0x02, 0x44, 0x42, 0x03, 0x02, 0x02, 0x02, 0x44, 0x45, 0x03, 0x02, 0x02, 0x02, 0x45, 0x46, 0x03, 0x02, 0x02, 0x02, 0x46, 0x47, 0x08, 0x0A, 0x02, 0x02, 0x47, 0x14, 0x03, 0x02, 0x02, 0x02, 0x08, 0x02, 0x29, 0x31, 0x37, 0x3D, 0x44, 0x03, 0x08, 0x02, 0x02
};

static AntlrATN*
test_position_adjusting_lexer_get_atn ()
{
    if (!test_position_adjusting_lexer_atn) {
        AntlrATNDeserializer *deserializer = antlr_atn_deserializer_new_full(NULL);
        test_position_adjusting_lexer_atn = antlr_atn_deserializer_deserialize(deserializer, test_position_adjusting_lexer_serialized_atn, G_N_ELEMENTS(test_position_adjusting_lexer_serialized_atn));
        g_object_unref(deserializer);
    }
    return test_position_adjusting_lexer_atn;
}

void
test_position_adjusting_lexer_atn_free ()
{
    if (test_position_adjusting_lexer_atn!=NULL) {
        g_clear_object(&test_position_adjusting_lexer_atn);
    }
}


void
test_position_adjusting_lexer_decision_to_dfa_free ()
{
    if (test_position_adjusting_lexer_decision_to_dfa!=NULL) {
        g_ptr_array_set_free_func(test_position_adjusting_lexer_decision_to_dfa, (GDestroyNotify)g_object_unref);
        g_ptr_array_free(test_position_adjusting_lexer_decision_to_dfa, TRUE);
    }
    test_position_adjusting_lexer_decision_to_dfa=NULL;
}

static GPtrArray*
test_position_adjusting_lexer_get_decision_to_dfa (TestPositionAdjustingLexer *lexer)
{
    if (!test_position_adjusting_lexer_decision_to_dfa) {
        AntlrATN *atn = test_position_adjusting_lexer_get_atn();
        gint size = antlr_atn_get_number_of_decisions(atn);
        test_position_adjusting_lexer_decision_to_dfa = g_ptr_array_sized_new(size);
        int i;
        for (i = 0; i < size; i++) {
            AntlrDFA *v = antlr_dfa_new_with_decision_state_and_decision(antlr_atn_get_decision_state(atn, i), i);
            g_ptr_array_insert(test_position_adjusting_lexer_decision_to_dfa, i, v);
        }
    }
    return test_position_adjusting_lexer_decision_to_dfa;
}



static gchar* test_position_adjusting_lexer__RULE_NAMES[] = {
    "ASSIGN", "PLUS_ASSIGN", "LCURLY", "TOKENS", "LABEL", "IDENTIFIER", 
    "IGNORED", "NEWLINE", "WS"
};

static gchar* test_position_adjusting_lexer__MODE_NAMES[] = {
    "DEFAULT_MODE"
};

static gchar* test_position_adjusting_lexer__LITERAL_NAMES[] = {
    "", "'='", "'+='", "'{'"
};

static gchar* test_position_adjusting_lexer__SYMBOLIC_NAMES[] = {
    "", "ASSIGN", "PLUS_ASSIGN", "LCURLY", "TOKENS", "LABEL", "IDENTIFIER", 
    "NEWLINE", "WS"
};



/* private functions */

static GArray*
test_position_adjusting_lexer_symbolic_names_to_array () {
    GArray *array = g_array_new(FALSE, FALSE, sizeof(GString*));

    int i;
    for (i=0; i<G_N_ELEMENTS(test_position_adjusting_lexer__SYMBOLIC_NAMES); i++) {
        GString * s = g_string_new( test_position_adjusting_lexer__SYMBOLIC_NAMES[i] );
        g_array_append_val(array, s);
    }

    return array;
}

static GArray*
test_position_adjusting_lexer_literal_names_to_array () {
    GArray *array = g_array_new(FALSE, FALSE, sizeof(GString*));

    int i;
    for (i=0; i<G_N_ELEMENTS(test_position_adjusting_lexer__LITERAL_NAMES); i++) {
        GString * s = g_string_new( test_position_adjusting_lexer__LITERAL_NAMES[i] );
        g_array_append_val(array, s);
    }

    return array;
}


/* virtual AntlrRecognizer */

static AntlrVocabulary *test_position_adjusting_lexer_vocabulary = NULL;

static AntlrVocabulary*
test_position_adjusting_lexer_get_vocabulary(TestPositionAdjustingLexer *lexer)
{
    if (!test_position_adjusting_lexer_vocabulary) {
        test_position_adjusting_lexer_vocabulary = antlr_vocabulary_new(test_position_adjusting_lexer_literal_names_to_array (), test_position_adjusting_lexer_symbolic_names_to_array (), NULL);
    }
    return test_position_adjusting_lexer_vocabulary;
}

static GArray* test_position_adjusting_lexer_token_names = NULL;

static GArray*
test_position_adjusting_lexer_class_recognizer_get_token_names(AntlrRecognizer *recognizer)
{
    if (!test_position_adjusting_lexer_token_names) {
        AntlrVocabulary *vocabulary = test_position_adjusting_lexer_get_vocabulary(TEST_POSITION_ADJUSTING_LEXER(recognizer));
        AntlrIVocabulary *ivocabulary = ANTLR_IVOCABULARY(vocabulary);
        gint length = G_N_ELEMENTS(test_position_adjusting_lexer__SYMBOLIC_NAMES);
        test_position_adjusting_lexer_token_names = g_array_sized_new(FALSE, FALSE, sizeof(GString*), length);
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
            g_array_append_val(test_position_adjusting_lexer_token_names, s);
        }
    }
    return test_position_adjusting_lexer_token_names;
}


static void
test_position_adjusting_lexer_g_string_free(gpointer *object) {
    GString *str = *object;
    if(str)
        g_string_free(str, TRUE);
}

void
test_position_adjusting_lexer_token_names_free()
{
    if (test_position_adjusting_lexer_token_names) {
        g_array_set_clear_func(test_position_adjusting_lexer_token_names, (GDestroyNotify)test_position_adjusting_lexer_g_string_free);
        g_array_free(test_position_adjusting_lexer_token_names, TRUE);
    }
    test_position_adjusting_lexer_token_names = NULL;
}

static GArray* test_position_adjusting_lexer_rule_names = NULL;

static GArray*
test_position_adjusting_lexer_class_recognizer_get_rule_names(AntlrRecognizer *recognizer)
{
    if (!test_position_adjusting_lexer_rule_names) {
        gint capacity = G_N_ELEMENTS(test_position_adjusting_lexer__RULE_NAMES);
        GArray *test_position_adjusting_lexer_rule_names = g_array_sized_new(FALSE, FALSE, sizeof(GString*), capacity);
        gint i;
        for (i=0; i<capacity; i++) {
            GString *s = g_string_new(test_position_adjusting_lexer__RULE_NAMES[i]);
            g_array_append_val(test_position_adjusting_lexer_rule_names, s);
        }
    }
    return test_position_adjusting_lexer_rule_names;
}

/* virtual GObject */

static void test_position_adjusting_lexer_class_init(TestPositionAdjustingLexerClass *klass);
static void test_position_adjusting_lexer_init(TestPositionAdjustingLexer *gobject);

//G_DEFINE_TYPE (TestPositionAdjustingLexer, test_position_adjusting_lexer, antlr_lexer_get_type())

#include "antlr-runtime/token-source.h"
#include "antlr-runtime/token-stream.h"
static void test_position_adjusting_lexer_interface_token_source_init(AntlrTokenSourceInterface *iface);
static void test_position_adjusting_lexer_interface_int_stream_init(AntlrIntStreamInterface *iface);
static void test_position_adjusting_lexer_interface_token_stream_init(AntlrTokenStreamInterface *iface);

static AntlrTokenSourceInterface *test_position_adjusting_lexer_parent_interface = NULL;

G_DEFINE_TYPE_WITH_CODE (TestPositionAdjustingLexer, test_position_adjusting_lexer, ANTLR_TYPE_LEXER,
                         G_IMPLEMENT_INTERFACE (ANTLR_TYPE_INT_STREAM,
                                                test_position_adjusting_lexer_interface_int_stream_init)
                         G_IMPLEMENT_INTERFACE (ANTLR_TYPE_TOKEN_STREAM,
                                                test_position_adjusting_lexer_interface_token_stream_init)
                         G_IMPLEMENT_INTERFACE (ANTLR_TYPE_TOKEN_SOURCE,
                                                test_position_adjusting_lexer_interface_token_source_init)
                         )


static AntlrToken*
test_position_adjusting_lexer_interface_token_source_next_token(AntlrTokenSource *token_source)
{
    AntlrLexer *lexer = ANTLR_LEXER(token_source);
    AntlrRecognizer *recognizer = ANTLR_RECOGNIZER(lexer);
    if (!TEST_IS_POSITION_ADJUSTING_LEXER_ATN_SIMULATOR(recognizer->interp)) {
        recognizer->interp = (AntlrATNInterpreter*)
                position_adjusting_lexer_atn_simulator_new_from_lexer(
                    lexer,
                    test_position_adjusting_lexer_get_atn(),
                    test_position_adjusting_lexer_get_decision_to_dfa(lexer),
                    test_position_adjusting_lexer_get_shared_context_cache()
                 );
    }

    return test_position_adjusting_lexer_parent_interface->next_token (token_source);
}

static void test_position_adjusting_lexer_interface_int_stream_init(AntlrIntStreamInterface *iface)
{

}

static void test_position_adjusting_lexer_interface_token_stream_init(AntlrTokenStreamInterface *iface)
{

}

static void
test_position_adjusting_lexer_interface_token_source_init(AntlrTokenSourceInterface *iface)
{
    test_position_adjusting_lexer_parent_interface = g_type_interface_peek_parent (iface);

    iface->next_token = test_position_adjusting_lexer_interface_token_source_next_token;
}

#include <string.h>
#include "antlr-runtime/int-stream.h"
#include "antlr-runtime/char-stream.h"

static gboolean
test_position_adjusting_lexer_is_identifier_char(TestPositionAdjustingLexer*self, gchar c) {
    return g_ascii_isalnum(c) || c == '_';
}

static gboolean
test_position_adjusting_lexer_handle_accept_position_for_identifier(TestPositionAdjustingLexer *self) {
    AntlrLexer *lexer = ANTLR_LEXER(self);
    gchar *tokenText = antlr_lexer_get_text(lexer);
    int identifierLength = 0;
    gsize tokenTextLength = strlen(tokenText);
    while (identifierLength < tokenTextLength
           && test_position_adjusting_lexer_is_identifier_char(self, tokenText[identifierLength])) {
      identifierLength++;
    }
    AntlrIntStream *stream = antlr_token_source_get_input_stream(ANTLR_RECOGNIZER(self));
    //AntlrIntStream *stream = antlr_recognizer_get_input_stream(ANTLR_RECOGNIZER(self));
    if (antlr_int_stream_index(stream) > (lexer->token_start_char_index + identifierLength)) {
        int offset = identifierLength - 1;
        test_position_adjusting_lexer_atn_simulator_reset_accept_position(ANTLR_RECOGNIZER(self)->interp,
                                                                          ANTLR_CHAR_STREAM(stream),
                                                                          lexer->token_start_char_index + offset,
                                                                          lexer->token_start_line,
                                                                          lexer->token_start_char_position_in_line + offset
                                                                          );
        return TRUE;
    }
    return FALSE;
}

static gboolean
test_position_adjusting_lexer_handle_accept_position_for_keyword(TestPositionAdjustingLexer *self,
                                                                 gchar *keyword) {
    AntlrLexer *lexer = ANTLR_LEXER(self);
    gsize keywordLength = strlen(keyword);
    AntlrIntStream *stream = antlr_token_source_get_input_stream(ANTLR_RECOGNIZER(self));
    //AntlrIntStream *stream = antlr_recognizer_get_input_stream(ANTLR_RECOGNIZER(self));
    if (antlr_int_stream_index(stream) > (lexer->token_start_char_index + keywordLength)) {
        int offset = keywordLength - 1;
        test_position_adjusting_lexer_atn_simulator_reset_accept_position(ANTLR_RECOGNIZER(self)->interp,
                                                                          ANTLR_CHAR_STREAM(stream),
                                                                          lexer->token_start_char_index + offset,
                                                                          lexer->token_start_line,
                                                                          lexer->token_start_char_position_in_line + offset
                                                                          );
        return TRUE;
    }
    return FALSE;
}

static AntlrToken*
test_position_adjusting_lexer_class_lexer_emit(AntlrLexer *self)
{
    AntlrLexer *lexer = ANTLR_LEXER(self);
    switch (lexer->type) {
    case TEST_POSITION_ADJUSTING_LEXER_SYMBOL_TOKENS:
        test_position_adjusting_lexer_handle_accept_position_for_keyword(self, "tokens");
        break;
    case TEST_POSITION_ADJUSTING_LEXER_SYMBOL_LABEL:
        test_position_adjusting_lexer_handle_accept_position_for_identifier(self);
        break;
    default:
        break;
    }

    return ANTLR_LEXER_CLASS(test_position_adjusting_lexer_parent_class)->lexer_emit(lexer);
}

static void
test_position_adjusting_lexer_class_init(TestPositionAdjustingLexerClass *klass)
{
        ANTLR_RECOGNIZER_CLASS(klass)->get_rule_names = test_position_adjusting_lexer_class_recognizer_get_rule_names;
        ANTLR_RECOGNIZER_CLASS(klass)->get_token_names = test_position_adjusting_lexer_class_recognizer_get_token_names;
        ANTLR_LEXER_CLASS(klass)->lexer_emit = test_position_adjusting_lexer_class_lexer_emit;
}

static void
test_position_adjusting_lexer_init (TestPositionAdjustingLexer *object)
{
}

TestPositionAdjustingLexer*
test_position_adjusting_lexer_new (void)
{
        return g_object_new (test_position_adjusting_lexer_get_type (),
                             NULL);
}

TestPositionAdjustingLexer*
test_position_adjusting_lexer_new_with_char_stream (AntlrCharStream *char_stream)
{
    AntlrLexer *antlr_lexer = antlr_lexer_super_with_char_stream(TEST_TYPE_POSITION_ADJUSTING_LEXER, char_stream);
    TestPositionAdjustingLexer *lexer = TEST_POSITION_ADJUSTING_LEXER(antlr_lexer);

    ANTLR_LEXER(lexer)->input = char_stream;

    //_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
    ANTLR_RECOGNIZER(lexer)->interp = (AntlrATNInterpreter*)
            antlr_lexer_atn_simulator_new_from_lexer(
                ANTLR_LEXER(lexer),
                test_position_adjusting_lexer_get_atn(),
                test_position_adjusting_lexer_get_decision_to_dfa(lexer),
                test_position_adjusting_lexer_get_shared_context_cache()
             );

    return lexer;
}
