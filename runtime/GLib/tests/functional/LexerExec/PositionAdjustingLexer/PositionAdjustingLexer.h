// Generated from PositionAdjustingLexer.g4 by ANTLR 4.6



#ifndef __TEST_POSITION_ADJUSTING_LEXER_H__
#define __TEST_POSITION_ADJUSTING_LEXER_H__

#include <glib-object.h>

G_BEGIN_DECLS

//-------------------------------------------------------------------------------------

#define TEST_TYPE_POSITION_ADJUSTING_LEXER_ATN_SIMULATOR            (test_position_adjusting_lexer_atn_simulator_get_type())
#define TEST_POSITION_ADJUSTING_LEXER_ATN_SIMULATOR(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_POSITION_ADJUSTING_LEXER_ATN_SIMULATOR, TestPositionAdjustingLexerATNSimulator))
#define TEST_POSITION_ADJUSTING_LEXER_ATN_SIMULATOR_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), TEST_TYPE_POSITION_ADJUSTING_LEXER_ATN_SIMULATOR, TestPositionAdjustingLexerATNSimulatorClass))
#define TEST_IS_POSITION_ADJUSTING_LEXER_ATN_SIMULATOR(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_POSITION_ADJUSTING_LEXER_ATN_SIMULATOR))
#define TEST_IS_POSITION_ADJUSTING_LEXER_ATN_SIMULATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TEST_TYPE_POSITION_ADJUSTING_LEXER_ATN_SIMULATOR))
#define TEST_POSITION_ADJUSTING_LEXER_ATN_SIMULATOR_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), TEST_TYPE_POSITION_ADJUSTING_LEXER_ATN_SIMULATOR, TestPositionAdjustingLexerATNSimulatorClass))

typedef struct _TestPositionAdjustingLexerATNSimulator TestPositionAdjustingLexerATNSimulator;
typedef struct _TestPositionAdjustingLexerATNSimulatorClass TestPositionAdjustingLexerATNSimulatorClass;

struct _TestPositionAdjustingLexerATNSimulator {
    AntlrLexerATNSimulator parent_instance;
};

struct _TestPositionAdjustingLexerATNSimulatorClass {
    AntlrLexerATNSimulatorClass parent_class;
};

GType test_position_adjusting_lexer_atn_simulator_get_type();
TestPositionAdjustingLexerATNSimulator *position_adjusting_lexer_atn_simulator_new();
TestPositionAdjustingLexerATNSimulator *
position_adjusting_lexer_atn_simulator_new_from_lexer (AntlrLexer *recog,
                                                       AntlrATN *atn,
                                                       GPtrArray *decision_to_dfa,
                                                       AntlrPredictionContextCache *shared_context_cache);
void test_position_adjusting_lexer_atn_simulator_reset_accept_position(
        TestPositionAdjustingLexerATNSimulator *self,
        AntlrCharStream *input, int index, int line, int charPositionInLine);

//-------------------------------------------------------------------------------------


typedef enum _TestPositionAdjustingLexerSymbols  TestPositionAdjustingLexerSymbols;

enum _TestPositionAdjustingLexerSymbols {
  TEST_POSITION_ADJUSTING_LEXER_SYMBOL_ASSIGN = 1, TEST_POSITION_ADJUSTING_LEXER_SYMBOL_PLUS_ASSIGN = 2, 
  TEST_POSITION_ADJUSTING_LEXER_SYMBOL_LCURLY = 3, TEST_POSITION_ADJUSTING_LEXER_SYMBOL_TOKENS = 4, 
  TEST_POSITION_ADJUSTING_LEXER_SYMBOL_LABEL = 5, TEST_POSITION_ADJUSTING_LEXER_SYMBOL_IDENTIFIER = 6, 
  TEST_POSITION_ADJUSTING_LEXER_SYMBOL_NEWLINE = 7, TEST_POSITION_ADJUSTING_LEXER_SYMBOL_WS = 8
};



#define TEST_TYPE_POSITION_ADJUSTING_LEXER            (test_position_adjusting_lexer_get_type())
#define TEST_POSITION_ADJUSTING_LEXER(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_POSITION_ADJUSTING_LEXER, TestPositionAdjustingLexer))
#define TEST_POSITION_ADJUSTING_LEXER_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  TEST_TYPE_POSITION_ADJUSTING_LEXER, TestPositionAdjustingLexerClass))
#define TEST_IS_POSITION_ADJUSTING_LEXER(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_POSITION_ADJUSTING_LEXER))
#define TEST_IS_POSITION_ADJUSTING_LEXER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  TEST_TYPE_POSITION_ADJUSTING_LEXER))
#define TEST_POSITION_ADJUSTING_LEXER_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  TEST_TYPE_POSITION_ADJUSTING_LEXER, TestPositionAdjustingLexerClass))

typedef struct _TestPositionAdjustingLexer      TestPositionAdjustingLexer;
typedef struct _TestPositionAdjustingLexerClass TestPositionAdjustingLexerClass;

struct _TestPositionAdjustingLexer {
    /*< private >*/
    AntlrLexer parent_instance;

    /*< public >*/
};

struct _TestPositionAdjustingLexerClass {
    /*< private >*/
    AntlrLexerClass parent_class;
};

GType test_position_adjusting_lexer_get_type(void) G_GNUC_CONST;
TestPositionAdjustingLexer *test_position_adjusting_lexer_new();

TestPositionAdjustingLexer *test_position_adjusting_lexer_new_with_char_stream (AntlrCharStream *char_stream);

void test_position_adjusting_lexer_atn_free ();
void test_position_adjusting_lexer_decision_to_dfa_free ();
void test_position_adjusting_lexer_token_names_free();



// Individual action functions triggered by action() above.

// Individual semantic predicate functions triggered by sempred() above.


G_END_DECLS

#endif /* __TEST_POSITION_ADJUSTING_LEXER_H__ */

