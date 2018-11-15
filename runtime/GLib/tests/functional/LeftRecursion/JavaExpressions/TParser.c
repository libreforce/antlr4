
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
  0x03, 0x0430, 0xD6D1, 0x8206, 0xAD2D, 0x4417, 0xAEF1, 0x8D80, 0xAADD, 0x03, 0x36, 0x9C, 0x04, 0x02, 0x09, 0x02, 0x04, 0x03, 0x09, 0x03, 0x04, 0x04, 0x09, 0x04, 0x04, 0x05, 0x09, 0x05, 0x03, 0x02, 0x03, 0x02, 0x03, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x03, 0x11, 0x0A, 0x03, 0x0C, 0x03, 0x0E, 0x03, 0x14, 0x0B, 0x03, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x05, 0x04, 0x27, 0x0A, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x06, 0x04, 0x2E, 0x0A, 0x04, 0x0D, 0x04, 0x0E, 0x04, 0x2F, 0x05, 0x04, 0x32, 0x0A, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x05, 0x04, 0x3D, 0x0A, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x05, 0x04, 0x74, 0x0A, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x05, 0x04, 0x7D, 0x0A, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x03, 0x04, 0x05, 0x04, 0x8A, 0x0A, 0x04, 0x03, 0x04, 0x07, 0x04, 0x8D, 0x0A, 0x04, 0x0C, 0x04, 0x0E, 0x04, 0x90, 0x0B, 0x04, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x05, 0x05, 0x9A, 0x0A, 0x05, 0x03, 0x05, 0x02, 0x03, 0x06, 0x06, 0x02, 0x04, 0x06, 0x08, 0x02, 0x0B, 0x03, 0x02, 0x0D, 0x10, 0x03, 0x02, 0x11, 0x12, 0x03, 0x02, 0x13, 0x15, 0x03, 0x02, 0x0F, 0x10, 0x03, 0x02, 0x16, 0x18, 0x03, 0x02, 0x19, 0x1C, 0x03, 0x02, 0x1E, 0x1F, 0x03, 0x02, 0x27, 0x32, 0x03, 0x02, 0x0D, 0x0E, 0xBE, 0x02, 0x0A, 0x03, 0x02, 0x02, 0x02, 0x04, 0x0D, 0x03, 0x02, 0x02, 0x02, 0x06, 0x3C, 0x03, 0x02, 0x02, 0x02, 0x08, 0x99, 0x03, 0x02, 0x02, 0x02, 0x0A, 0x0B, 0x05, 0x06, 0x04, 0x02, 0x0B, 0x0C, 0x07, 0x02, 0x02, 0x03, 0x0C, 0x03, 0x03, 0x02, 0x02, 0x02, 0x0D, 0x12, 0x05, 0x06, 0x04, 0x02, 0x0E, 0x0F, 0x07, 0x03, 0x02, 0x02, 0x0F, 0x11, 0x05, 0x06, 0x04, 0x02, 0x10, 0x0E, 0x03, 0x02, 0x02, 0x02, 0x11, 0x14, 0x03, 0x02, 0x02, 0x02, 0x12, 0x10, 0x03, 0x02, 0x02, 0x02, 0x12, 0x13, 0x03, 0x02, 0x02, 0x02, 0x13, 0x05, 0x03, 0x02, 0x02, 0x02, 0x14, 0x12, 0x03, 0x02, 0x02, 0x02, 0x15, 0x16, 0x08, 0x04, 0x01, 0x02, 0x16, 0x17, 0x07, 0x04, 0x02, 0x02, 0x17, 0x18, 0x05, 0x06, 0x04, 0x02, 0x18, 0x19, 0x07, 0x05, 0x02, 0x02, 0x19, 0x3D, 0x03, 0x02, 0x02, 0x02, 0x1A, 0x3D, 0x07, 0x06, 0x02, 0x02, 0x1B, 0x3D, 0x07, 0x07, 0x02, 0x02, 0x1C, 0x3D, 0x07, 0x35, 0x02, 0x02, 0x1D, 0x3D, 0x07, 0x34, 0x02, 0x02, 0x1E, 0x1F, 0x05, 0x08, 0x05, 0x02, 0x1F, 0x20, 0x07, 0x08, 0x02, 0x02, 0x20, 0x21, 0x07, 0x09, 0x02, 0x02, 0x21, 0x3D, 0x03, 0x02, 0x02, 0x02, 0x22, 0x23, 0x07, 0x0A, 0x02, 0x02, 0x23, 0x31, 0x05, 0x08, 0x05, 0x02, 0x24, 0x26, 0x07, 0x04, 0x02, 0x02, 0x25, 0x27, 0x05, 0x04, 0x03, 0x02, 0x26, 0x25, 0x03, 0x02, 0x02, 0x02, 0x26, 0x27, 0x03, 0x02, 0x02, 0x02, 0x27, 0x28, 0x03, 0x02, 0x02, 0x02, 0x28, 0x32, 0x07, 0x05, 0x02, 0x02, 0x29, 0x2A, 0x07, 0x0B, 0x02, 0x02, 0x2A, 0x2B, 0x05, 0x06, 0x04, 0x02, 0x2B, 0x2C, 0x07, 0x0C, 0x02, 0x02, 0x2C, 0x2E, 0x03, 0x02, 0x02, 0x02, 0x2D, 0x29, 0x03, 0x02, 0x02, 0x02, 0x2E, 0x2F, 0x03, 0x02, 0x02, 0x02, 0x2F, 0x2D, 0x03, 0x02, 0x02, 0x02, 0x2F, 0x30, 0x03, 0x02, 0x02, 0x02, 0x30, 0x32, 0x03, 0x02, 0x02, 0x02, 0x31, 0x24, 0x03, 0x02, 0x02, 0x02, 0x31, 0x2D, 0x03, 0x02, 0x02, 0x02, 0x32, 0x3D, 0x03, 0x02, 0x02, 0x02, 0x33, 0x34, 0x07, 0x04, 0x02, 0x02, 0x34, 0x35, 0x05, 0x08, 0x05, 0x02, 0x35, 0x36, 0x07, 0x05, 0x02, 0x02, 0x36, 0x37, 0x05, 0x06, 0x04, 0x14, 0x37, 0x3D, 0x03, 0x02, 0x02, 0x02, 0x38, 0x39, 0x09, 0x02, 0x02, 0x02, 0x39, 0x3D, 0x05, 0x06, 0x04, 0x11, 0x3A, 0x3B, 0x09, 0x03, 0x02, 0x02, 0x3B, 0x3D, 0x05, 0x06, 0x04, 0x10, 0x3C, 0x15, 0x03, 0x02, 0x02, 0x02, 0x3C, 0x1A, 0x03, 0x02, 0x02, 0x02, 0x3C, 0x1B, 0x03, 0x02, 0x02, 0x02, 0x3C, 0x1C, 0x03, 0x02, 0x02, 0x02, 0x3C, 0x1D, 0x03, 0x02, 0x02, 0x02, 0x3C, 0x1E, 0x03, 0x02, 0x02, 0x02, 0x3C, 0x22, 0x03, 0x02, 0x02, 0x02, 0x3C, 0x33, 0x03, 0x02, 0x02, 0x02, 0x3C, 0x38, 0x03, 0x02, 0x02, 0x02, 0x3C, 0x3A, 0x03, 0x02, 0x02, 0x02, 0x3D, 0x8E, 0x03, 0x02, 0x02, 0x02, 0x3E, 0x3F, 0x0C, 0x0F, 0x02, 0x02, 0x3F, 0x40, 0x09, 0x04, 0x02, 0x02, 0x40, 0x8D, 0x05, 0x06, 0x04, 0x10, 0x41, 0x42, 0x0C, 0x0E, 0x02, 0x02, 0x42, 0x43, 0x09, 0x05, 0x02, 0x02, 0x43, 0x8D, 0x05, 0x06, 0x04, 0x0F, 0x44, 0x45, 0x0C, 0x0D, 0x02, 0x02, 0x45, 0x46, 0x09, 0x06, 0x02, 0x02, 0x46, 0x8D, 0x05, 0x06, 0x04, 0x0E, 0x47, 0x48, 0x0C, 0x0C, 0x02, 0x02, 0x48, 0x49, 0x09, 0x07, 0x02, 0x02, 0x49, 0x8D, 0x05, 0x06, 0x04, 0x0D, 0x4A, 0x4B, 0x0C, 0x0B, 0x02, 0x02, 0x4B, 0x4C, 0x07, 0x1D, 0x02, 0x02, 0x4C, 0x8D, 0x05, 0x06, 0x04, 0x0C, 0x4D, 0x4E, 0x0C, 0x0A, 0x02, 0x02, 0x4E, 0x4F, 0x09, 0x08, 0x02, 0x02, 0x4F, 0x8D, 0x05, 0x06, 0x04, 0x0B, 0x50, 0x51, 0x0C, 0x09, 0x02, 0x02, 0x51, 0x52, 0x07, 0x20, 0x02, 0x02, 0x52, 0x8D, 0x05, 0x06, 0x04, 0x0A, 0x53, 0x54, 0x0C, 0x08, 0x02, 0x02, 0x54, 0x55, 0x07, 0x21, 0x02, 0x02, 0x55, 0x8D, 0x05, 0x06, 0x04, 0x08, 0x56, 0x57, 0x0C, 0x07, 0x02, 0x02, 0x57, 0x58, 0x07, 0x22, 0x02, 0x02, 0x58, 0x8D, 0x05, 0x06, 0x04, 0x08, 0x59, 0x5A, 0x0C, 0x06, 0x02, 0x02, 0x5A, 0x5B, 0x07, 0x23, 0x02, 0x02, 0x5B, 0x8D, 0x05, 0x06, 0x04, 0x07, 0x5C, 0x5D, 0x0C, 0x05, 0x02, 0x02, 0x5D, 0x5E, 0x07, 0x24, 0x02, 0x02, 0x5E, 0x8D, 0x05, 0x06, 0x04, 0x06, 0x5F, 0x60, 0x0C, 0x04, 0x02, 0x02, 0x60, 0x61, 0x07, 0x25, 0x02, 0x02, 0x61, 0x62, 0x05, 0x06, 0x04, 0x02, 0x62, 0x63, 0x07, 0x26, 0x02, 0x02, 0x63, 0x64, 0x05, 0x06, 0x04, 0x05, 0x64, 0x8D, 0x03, 0x02, 0x02, 0x02, 0x65, 0x66, 0x0C, 0x03, 0x02, 0x02, 0x66, 0x67, 0x09, 0x09, 0x02, 0x02, 0x67, 0x8D, 0x05, 0x06, 0x04, 0x03, 0x68, 0x69, 0x0C, 0x1A, 0x02, 0x02, 0x69, 0x6A, 0x07, 0x08, 0x02, 0x02, 0x6A, 0x8D, 0x07, 0x34, 0x02, 0x02, 0x6B, 0x6C, 0x0C, 0x19, 0x02, 0x02, 0x6C, 0x6D, 0x07, 0x08, 0x02, 0x02, 0x6D, 0x8D, 0x07, 0x06, 0x02, 0x02, 0x6E, 0x6F, 0x0C, 0x18, 0x02, 0x02, 0x6F, 0x70, 0x07, 0x08, 0x02, 0x02, 0x70, 0x71, 0x07, 0x07, 0x02, 0x02, 0x71, 0x73, 0x07, 0x04, 0x02, 0x02, 0x72, 0x74, 0x05, 0x04, 0x03, 0x02, 0x73, 0x72, 0x03, 0x02, 0x02, 0x02, 0x73, 0x74, 0x03, 0x02, 0x02, 0x02, 0x74, 0x75, 0x03, 0x02, 0x02, 0x02, 0x75, 0x8D, 0x07, 0x05, 0x02, 0x02, 0x76, 0x77, 0x0C, 0x17, 0x02, 0x02, 0x77, 0x78, 0x07, 0x08, 0x02, 0x02, 0x78, 0x79, 0x07, 0x0A, 0x02, 0x02, 0x79, 0x7A, 0x07, 0x34, 0x02, 0x02, 0x7A, 0x7C, 0x07, 0x04, 0x02, 0x02, 0x7B, 0x7D, 0x05, 0x04, 0x03, 0x02, 0x7C, 0x7B, 0x03, 0x02, 0x02, 0x02, 0x7C, 0x7D, 0x03, 0x02, 0x02, 0x02, 0x7D, 0x7E, 0x03, 0x02, 0x02, 0x02, 0x7E, 0x8D, 0x07, 0x05, 0x02, 0x02, 0x7F, 0x80, 0x0C, 0x15, 0x02, 0x02, 0x80, 0x81, 0x07, 0x0B, 0x02, 0x02, 0x81, 0x82, 0x05, 0x06, 0x04, 0x02, 0x82, 0x83, 0x07, 0x0C, 0x02, 0x02, 0x83, 0x8D, 0x03, 0x02, 0x02, 0x02, 0x84, 0x85, 0x0C, 0x13, 0x02, 0x02, 0x85, 0x8D, 0x09, 0x0A, 0x02, 0x02, 0x86, 0x87, 0x0C, 0x12, 0x02, 0x02, 0x87, 0x89, 0x07, 0x04, 0x02, 0x02, 0x88, 0x8A, 0x05, 0x04, 0x03, 0x02, 0x89, 0x88, 0x03, 0x02, 0x02, 0x02, 0x89, 0x8A, 0x03, 0x02, 0x02, 0x02, 0x8A, 0x8B, 0x03, 0x02, 0x02, 0x02, 0x8B, 0x8D, 0x07, 0x05, 0x02, 0x02, 0x8C, 0x3E, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x41, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x44, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x47, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x4A, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x4D, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x50, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x53, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x56, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x59, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x5C, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x5F, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x65, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x68, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x6B, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x6E, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x76, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x7F, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x84, 0x03, 0x02, 0x02, 0x02, 0x8C, 0x86, 0x03, 0x02, 0x02, 0x02, 0x8D, 0x90, 0x03, 0x02, 0x02, 0x02, 0x8E, 0x8C, 0x03, 0x02, 0x02, 0x02, 0x8E, 0x8F, 0x03, 0x02, 0x02, 0x02, 0x8F, 0x07, 0x03, 0x02, 0x02, 0x02, 0x90, 0x8E, 0x03, 0x02, 0x02, 0x02, 0x91, 0x9A, 0x07, 0x34, 0x02, 0x02, 0x92, 0x93, 0x07, 0x34, 0x02, 0x02, 0x93, 0x94, 0x07, 0x0B, 0x02, 0x02, 0x94, 0x9A, 0x07, 0x0C, 0x02, 0x02, 0x95, 0x9A, 0x07, 0x33, 0x02, 0x02, 0x96, 0x97, 0x07, 0x33, 0x02, 0x02, 0x97, 0x98, 0x07, 0x0B, 0x02, 0x02, 0x98, 0x9A, 0x07, 0x0C, 0x02, 0x02, 0x99, 0x91, 0x03, 0x02, 0x02, 0x02, 0x99, 0x92, 0x03, 0x02, 0x02, 0x02, 0x99, 0x95, 0x03, 0x02, 0x02, 0x02, 0x99, 0x96, 0x03, 0x02, 0x02, 0x02, 0x9A, 0x09, 0x03, 0x02, 0x02, 0x02, 0x0D, 0x12, 0x26, 0x2F, 0x31, 0x3C, 0x73, 0x7C, 0x89, 0x8C, 0x8E, 0x99
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
  "s", "expressionList", "e", "typespec"
};
static gchar* test_t_parser__LITERAL_NAMES[] = {
  "", "','", "'('", "')'", "'this'", "'super'", "'.'", "'class'", "'new'", 
  "'['", "']'", "'++'", "'--'", "'+'", "'-'", "'~'", "'!'", "'*'", "'/'", 
  "'%'", "'<<'", "'>>>'", "'>>'", "'<='", "'>='", "'>'", "'<'", "'instanceof'", 
  "'=='", "'!='", "'&'", "'^'", "'|'", "'&&'", "'||'", "'?'", "':'", "'='", 
  "'+='", "'-='", "'*='", "'/='", "'&='", "'|='", "'^='", "'>>='", "'>>>='", 
  "'<<='", "'%='", "'int'"
};
static gchar* test_t_parser__SYMBOLIC_NAMES[] = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "ID", "INT", "WS"
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

TestContextE *test_context_s_rule_get_e(TestContextS* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_E, 0);
    return TEST_CONTEXT_E(context);
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
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 8);
    ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 0, error);
    if (ret==NULL || (error && *error)) {
        return NULL;
    }
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 9);
    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_EOF);
    ANTLR_PARSER(self)->ctx->stop = antlr_token_stream_LT(ANTLR_TOKEN_STREAM(ANTLR_PARSER(self)->input), -1);

    //System.out.println(local_context.toString(this));
    gchar *str = antlr_tree_to_string_tree(ANTLR_TREE(local_context), antlr_recognizer_get_rule_names(ANTLR_RECOGNIZER(self)));
    g_print("%s\n", str);
    g_free(str);


    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}


//----------------- ExpressionListContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_expression_list_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_EXPRESSION_LIST;
}

/* virtual AntlrParserRuleContext */
static void test_context_expression_list_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_expression_list(TEST_T_LISTENER(listener), TEST_CONTEXT_EXPRESSION_LIST(self));
}

static void test_context_expression_list_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_expression_list(TEST_T_LISTENER(listener), TEST_CONTEXT_EXPRESSION_LIST(self));
}

/* virtual GObject */
static void test_context_expression_list_class_init(TestContextExpressionListClass *klass);
static void test_context_expression_list_init(TestContextExpressionList *gobject);

G_DEFINE_TYPE (TestContextExpressionList, test_context_expression_list, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_expression_list_class_init(TestContextExpressionListClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    parserrulecontext_class->enter_rule = test_context_expression_list_class_parser_rule_context_enter_rule;
//    parserrulecontext_class->exit_rule = test_context_expression_list_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_expression_list_class_rule_context_get_rule_index;
}

static void
test_context_expression_list_init (TestContextExpressionList *object)
{
}

TestContextExpressionList *test_context_expression_list_new(AntlrParserRuleContext *parent, gint invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_EXPRESSION_LIST, parent, invoking_state);
    TestContextExpressionList *self = TEST_CONTEXT_EXPRESSION_LIST(ctx);
    return self;
}

GList* test_context_expression_list_rule_get_e(TestContextExpressionList* self) {
    return antlr_parser_rule_context_get_rule_contexts(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_E);
}
TestContextE* test_context_expression_list_at_rule_get_e(TestContextExpressionList* self, size_t i) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_E, i);
    return TEST_CONTEXT_E(context);
}




TestContextExpressionList* test_t_parser_parse_expression_list(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;
    AntlrATNInterpreter *interpreter = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextExpressionList *local_context = test_context_expression_list_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_EXPRESSION_LIST);
    size_t _la = 0;

    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 11);
    ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 0, error);
    if (ret==NULL || (error && *error)) {
        return NULL;
    }
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 16);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
    _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
    while (_la == TEST_T_PARSER_T__0) {
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 12);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__0);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 13);
      ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 0, error);
      if (ret==NULL || (error && *error)) {
          return NULL;
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 18);
      antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
      _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
    }

    antlr_parser_exit_rule(ANTLR_PARSER(self));

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

GList* test_context_e_rule_get_e(TestContextE* self) {
    return antlr_parser_rule_context_get_rule_contexts(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_E);
}
TestContextE* test_context_e_at_rule_get_e(TestContextE* self, size_t i) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_E, i);
    return TEST_CONTEXT_E(context);
}
AntlrTerminalNode *test_context_e_token_get_int(TestContextE* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_INT, 0);
}
AntlrTerminalNode *test_context_e_token_get_id(TestContextE* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_ID, 0);
}
TestContextTypespec *test_context_e_rule_get_typespec(TestContextE* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_TYPESPEC, 0);
    return TEST_CONTEXT_TYPESPEC(context);
}
TestContextExpressionList *test_context_e_rule_get_expression_list(TestContextE* self) {
    AntlrParserRuleContext *context = antlr_parser_rule_context_get_rule_context(ANTLR_PARSER_RULE_CONTEXT(self), TEST_TYPE_CONTEXT_EXPRESSION_LIST, 0);
    return TEST_CONTEXT_EXPRESSION_LIST(context);
}




TestContextE* test_t_parser_parse_e(TestTParser *self, GError **error) {
   return test_t_parser_parse_e_with_precedence(self, 0, error);
}

TestContextE* test_t_parser_parse_e_with_precedence(TestTParser *self, int precedence, GError **error) {
  AntlrRuleContext *ret = NULL;
  AntlrATNInterpreter *interpreter = NULL;
  AntlrParserRuleContext *parentContext = ANTLR_PARSER(self)->ctx;
  gint parentState = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));

  TestContextE *local_context = (TestContextE *)antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, ANTLR_PARSER(self)->ctx, parentState);
  TestContextE *previousContext = local_context;
  size_t startState = 4;
  antlr_parser_enter_recursion_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 4, TEST_T_PARSER_E, precedence);

  size_t _la = 0;

//  auto onExit = finally([=] {
//  
//    unrollRecursionContexts(parentContext);
//  });
///  try {
    size_t alt;
    antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 58);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
    interpreter = antlr_recognizer_get_interpreter(ANTLR_RECOGNIZER(self));
    switch (antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 4, ANTLR_PARSER(self)->ctx)) {
    case 1: {
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 20);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__1);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 21);
      ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 0, error);
      if (ret==NULL || (error && *error)) {
          return NULL;
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 22);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__2);
      break;
    }

    case 2: {
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 24);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__3);
      break;
    }

    case 3: {
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 25);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__4);
      break;
    }

    case 4: {
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 26);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_INT);
      break;
    }

    case 5: {
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 27);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_ID);
      break;
    }

    case 6: {
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 28);
      ret = (AntlrRuleContext*)test_t_parser_parse_typespec(self, error);
      if (ret==NULL || (error && *error)) {
          return NULL;
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 29);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__5);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 30);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__6);
      break;
    }

    case 7: {
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 32);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__7);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 33);
      ret = (AntlrRuleContext*)test_t_parser_parse_typespec(self, error);
      if (ret==NULL || (error && *error)) {
          return NULL;
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 47);
      antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
      // TODO: untested LL1AltBlock
      switch (antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1)) {
        case TEST_T_PARSER_T__1: {
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 34);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__1);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 36);
          antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);// TODO: untested LL1OptionalBlockSingleAlt
          if (((((_la) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la)) & ((1ULL << (TEST_T_PARSER_T__1))
            | (1ULL << (TEST_T_PARSER_T__3))
            | (1ULL << (TEST_T_PARSER_T__4))
            | (1ULL << (TEST_T_PARSER_T__7))
            | (1ULL << (TEST_T_PARSER_T__10))
            | (1ULL << (TEST_T_PARSER_T__11))
            | (1ULL << (TEST_T_PARSER_T__12))
            | (1ULL << (TEST_T_PARSER_T__13))
            | (1ULL << (TEST_T_PARSER_T__14))
            | (1ULL << (TEST_T_PARSER_T__15))
            | (1ULL << (TEST_T_PARSER_T__48))
            | (1ULL << (TEST_T_PARSER_ID))
            | (1ULL << (TEST_T_PARSER_INT)))) != 0)) {
            antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 35);
            ret = (AntlrRuleContext*)test_t_parser_parse_expression_list(self, error);
            if (ret==NULL || (error && *error)) {
                return NULL;
            }
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 38);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__2);
          break;
        }

        case TEST_T_PARSER_T__8: {
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 43);
          antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          alt = 1;
          do {
            switch (alt) {
              case 1: {
                    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 39);
                    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__8);
                    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 40);
                    ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 0, error);
                    if (ret==NULL || (error && *error)) {
                        return NULL;
                    }
                    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 41);
                    antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__9);
                    break;
                  }

            default:
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "NoViableAlt for rule '%s' in file '%s'", "e", g_path_get_basename("T.g4") );
              }
              return NULL;
            }
            antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 45);
            antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

            interpreter = antlr_recognizer_get_interpreter(ANTLR_RECOGNIZER(self));
            alt = antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 2, ANTLR_PARSER(self)->ctx);
          } while (alt != 2 && alt != ANTLR_ATN_INVALID_ALT_NUMBER);
          break;
        }

      default:
        if (error!=NULL) {
            *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "NoViableAlt for rule '%s' in file '%s'", "e", g_path_get_basename("T.g4") );
        }
        return NULL;
      }
      break;
    }

    case 8: {
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 49);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__1);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 50);
      ret = (AntlrRuleContext*)test_t_parser_parse_typespec(self, error);
      if (ret==NULL || (error && *error)) {
          return NULL;
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 51);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__2);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 52);
      ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 18, error);
      if (ret==NULL || (error && *error)) {
          return NULL;
      }
      break;
    }

    case 9: {
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 54);
      _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
      if (!(((((_la) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la)) & ((1ULL << (TEST_T_PARSER_T__10))
        | (1ULL << (TEST_T_PARSER_T__11))
        | (1ULL << (TEST_T_PARSER_T__12))
        | (1ULL << (TEST_T_PARSER_T__13)))) != 0))) {
      antlr_error_strategy_recover_inline(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
      } else {
        antlr_parser_consume(ANTLR_PARSER(self));
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 55);
      ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 15, error);
      if (ret==NULL || (error && *error)) {
          return NULL;
      }
      break;
    }

    case 10: {
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 56);
      _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
      if (!(_la == TEST_T_PARSER_T__14

      || _la == TEST_T_PARSER_T__15)) {
      antlr_error_strategy_recover_inline(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
      } else {
        antlr_parser_consume(ANTLR_PARSER(self));
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 57);
      ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 14, error);
      if (ret==NULL || (error && *error)) {
          return NULL;
      }
      break;
    }

    }
    ANTLR_PARSER(self)->ctx->stop = antlr_token_stream_LT(ANTLR_TOKEN_STREAM(ANTLR_PARSER(self)->input), -1);
    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 140);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

    interpreter = antlr_recognizer_get_interpreter(ANTLR_RECOGNIZER(self));
    alt = antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 9, ANTLR_PARSER(self)->ctx);
    while (alt != 2 && alt != ANTLR_ATN_INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (g_list_length(ANTLR_PARSER(self)->parse_listeners))
          antlr_parser_trigger_exit_rule_event(ANTLR_PARSER(self));
        previousContext = local_context;
        antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 138);
        antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
        interpreter = antlr_recognizer_get_interpreter(ANTLR_RECOGNIZER(self));
        switch (antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 8, ANTLR_PARSER(self)->ctx)) {
        case 1: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 60);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 13))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 13)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 61);
          _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
          if (!(((((_la) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la)) & ((1ULL << (TEST_T_PARSER_T__16))
            | (1ULL << (TEST_T_PARSER_T__17))
            | (1ULL << (TEST_T_PARSER_T__18)))) != 0))) {
          antlr_error_strategy_recover_inline(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          } else {
            antlr_parser_consume(ANTLR_PARSER(self));
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 62);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 14, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        case 2: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 63);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 12))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 12)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 64);
          _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
          if (!(_la == TEST_T_PARSER_T__12

          || _la == TEST_T_PARSER_T__13)) {
          antlr_error_strategy_recover_inline(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          } else {
            antlr_parser_consume(ANTLR_PARSER(self));
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 65);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 13, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        case 3: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 66);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 11))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 11)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 67);
          _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
          if (!(((((_la) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la)) & ((1ULL << (TEST_T_PARSER_T__19))
            | (1ULL << (TEST_T_PARSER_T__20))
            | (1ULL << (TEST_T_PARSER_T__21)))) != 0))) {
          antlr_error_strategy_recover_inline(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          } else {
            antlr_parser_consume(ANTLR_PARSER(self));
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 68);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 12, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        case 4: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 69);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 10))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 10)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 70);
          _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
          if (!(((((_la) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la)) & ((1ULL << (TEST_T_PARSER_T__22))
            | (1ULL << (TEST_T_PARSER_T__23))
            | (1ULL << (TEST_T_PARSER_T__24))
            | (1ULL << (TEST_T_PARSER_T__25)))) != 0))) {
          antlr_error_strategy_recover_inline(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          } else {
            antlr_parser_consume(ANTLR_PARSER(self));
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 71);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 11, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        case 5: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 72);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 9))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 9)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 73);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__26);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 74);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 10, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        case 6: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 75);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 8))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 8)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 76);
          _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
          if (!(_la == TEST_T_PARSER_T__27

          || _la == TEST_T_PARSER_T__28)) {
          antlr_error_strategy_recover_inline(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          } else {
            antlr_parser_consume(ANTLR_PARSER(self));
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 77);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 9, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        case 7: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 78);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 7))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 7)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 79);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__29);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 80);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 8, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        case 8: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 81);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 6))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 6)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 82);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__30);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 83);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 6, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        case 9: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 84);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 5))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 5)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 85);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__31);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 86);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 6, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        case 10: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 87);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 4))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 4)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 88);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__32);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 89);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 5, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        case 11: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 90);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 3))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 3)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 91);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__33);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 92);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 4, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        case 12: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 93);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 2))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 2)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 94);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__34);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 95);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 0, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 96);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__35);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 97);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 3, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        case 13: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 99);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 1))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 1)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 100);
          _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
          if (!(((((_la) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la)) & ((1ULL << (TEST_T_PARSER_T__36))
            | (1ULL << (TEST_T_PARSER_T__37))
            | (1ULL << (TEST_T_PARSER_T__38))
            | (1ULL << (TEST_T_PARSER_T__39))
            | (1ULL << (TEST_T_PARSER_T__40))
            | (1ULL << (TEST_T_PARSER_T__41))
            | (1ULL << (TEST_T_PARSER_T__42))
            | (1ULL << (TEST_T_PARSER_T__43))
            | (1ULL << (TEST_T_PARSER_T__44))
            | (1ULL << (TEST_T_PARSER_T__45))
            | (1ULL << (TEST_T_PARSER_T__46))
            | (1ULL << (TEST_T_PARSER_T__47)))) != 0))) {
          antlr_error_strategy_recover_inline(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          } else {
            antlr_parser_consume(ANTLR_PARSER(self));
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 101);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 1, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          break;
        }

        case 14: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 102);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 24))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 24)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 103);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__5);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 104);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_ID);
          break;
        }

        case 15: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 105);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 23))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 23)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 106);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__5);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 107);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__3);
          break;
        }

        case 16: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 108);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 22))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 22)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 109);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__5);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 110);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__4);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 111);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__1);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 113);
          antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);// TODO: untested LL1OptionalBlockSingleAlt
          if (((((_la) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la)) & ((1ULL << (TEST_T_PARSER_T__1))
            | (1ULL << (TEST_T_PARSER_T__3))
            | (1ULL << (TEST_T_PARSER_T__4))
            | (1ULL << (TEST_T_PARSER_T__7))
            | (1ULL << (TEST_T_PARSER_T__10))
            | (1ULL << (TEST_T_PARSER_T__11))
            | (1ULL << (TEST_T_PARSER_T__12))
            | (1ULL << (TEST_T_PARSER_T__13))
            | (1ULL << (TEST_T_PARSER_T__14))
            | (1ULL << (TEST_T_PARSER_T__15))
            | (1ULL << (TEST_T_PARSER_T__48))
            | (1ULL << (TEST_T_PARSER_ID))
            | (1ULL << (TEST_T_PARSER_INT)))) != 0)) {
            antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 112);
            ret = (AntlrRuleContext*)test_t_parser_parse_expression_list(self, error);
            if (ret==NULL || (error && *error)) {
                return NULL;
            }
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 115);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__2);
          break;
        }

        case 17: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 116);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 21))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 21)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 117);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__5);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 118);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__7);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 119);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_ID);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 120);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__1);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 122);
          antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);// TODO: untested LL1OptionalBlockSingleAlt
          if (((((_la) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la)) & ((1ULL << (TEST_T_PARSER_T__1))
            | (1ULL << (TEST_T_PARSER_T__3))
            | (1ULL << (TEST_T_PARSER_T__4))
            | (1ULL << (TEST_T_PARSER_T__7))
            | (1ULL << (TEST_T_PARSER_T__10))
            | (1ULL << (TEST_T_PARSER_T__11))
            | (1ULL << (TEST_T_PARSER_T__12))
            | (1ULL << (TEST_T_PARSER_T__13))
            | (1ULL << (TEST_T_PARSER_T__14))
            | (1ULL << (TEST_T_PARSER_T__15))
            | (1ULL << (TEST_T_PARSER_T__48))
            | (1ULL << (TEST_T_PARSER_ID))
            | (1ULL << (TEST_T_PARSER_INT)))) != 0)) {
            antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 121);
            ret = (AntlrRuleContext*)test_t_parser_parse_expression_list(self, error);
            if (ret==NULL || (error && *error)) {
                return NULL;
            }
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 124);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__2);
          break;
        }

        case 18: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 125);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 19))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 19)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 126);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__8);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 127);
          ret = (AntlrRuleContext*)test_t_parser_parse_e_with_precedence(self, 0, error);
          if (ret==NULL || (error && *error)) {
              return NULL;
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 128);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__9);
          break;
        }

        case 19: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 130);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 17))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 17)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 131);
          _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);
          if (!(_la == TEST_T_PARSER_T__10

          || _la == TEST_T_PARSER_T__11)) {
          antlr_error_strategy_recover_inline(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          } else {
            antlr_parser_consume(ANTLR_PARSER(self));
          }
          break;
        }

        case 20: {
          local_context = (TestContextE *) antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_E, parentContext, parentState);
          antlr_parser_push_new_recursion_context(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), startState, TEST_T_PARSER_E);

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 132);

          if (!(antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 16))){
              if (error!=NULL) {
                  *error = g_error_new(g_quark_from_static_string("ANTLR"), 200, "FailedPredicate: %s", "antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 16)");
              }
              return NULL;
          }

          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 133);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__1);
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 135);
          antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
          _la = antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1);// TODO: untested LL1OptionalBlockSingleAlt
          if (((((_la) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la)) & ((1ULL << (TEST_T_PARSER_T__1))
            | (1ULL << (TEST_T_PARSER_T__3))
            | (1ULL << (TEST_T_PARSER_T__4))
            | (1ULL << (TEST_T_PARSER_T__7))
            | (1ULL << (TEST_T_PARSER_T__10))
            | (1ULL << (TEST_T_PARSER_T__11))
            | (1ULL << (TEST_T_PARSER_T__12))
            | (1ULL << (TEST_T_PARSER_T__13))
            | (1ULL << (TEST_T_PARSER_T__14))
            | (1ULL << (TEST_T_PARSER_T__15))
            | (1ULL << (TEST_T_PARSER_T__48))
            | (1ULL << (TEST_T_PARSER_ID))
            | (1ULL << (TEST_T_PARSER_INT)))) != 0)) {
            antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 134);
            ret = (AntlrRuleContext*)test_t_parser_parse_expression_list(self, error);
            if (ret==NULL || (error && *error)) {
                return NULL;
            }
          }
          antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 137);
          antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__2);
          break;
        }

        } 
      }
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 142);
      antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));

      alt = antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 9, ANTLR_PARSER(self)->ctx);
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

//----------------- TypespecContext ------------------------------------------------------------------

/* virtual AntlrRuleContext */
gint test_context_typespec_class_rule_context_get_rule_index(AntlrRuleContext *self) {
  return TEST_T_PARSER_TYPESPEC;
}

/* virtual AntlrParserRuleContext */
static void test_context_typespec_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_enter_typespec(TEST_T_LISTENER(listener), TEST_CONTEXT_TYPESPEC(self));
}

static void test_context_typespec_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {
    test_t_listener_exit_typespec(TEST_T_LISTENER(listener), TEST_CONTEXT_TYPESPEC(self));
}

/* virtual GObject */
static void test_context_typespec_class_init(TestContextTypespecClass *klass);
static void test_context_typespec_init(TestContextTypespec *gobject);

G_DEFINE_TYPE (TestContextTypespec, test_context_typespec, ANTLR_TYPE_PARSER_RULE_CONTEXT)

static void
test_context_typespec_class_init(TestContextTypespecClass *klass)
{
    AntlrParserRuleContextClass *parserrulecontext_class;
    AntlrRuleContextClass *rulecontext_class;

    rulecontext_class = (AntlrRuleContextClass *) klass;
    parserrulecontext_class = (AntlrParserRuleContextClass *) klass;

//    parserrulecontext_class->enter_rule = test_context_typespec_class_parser_rule_context_enter_rule;
//    parserrulecontext_class->exit_rule = test_context_typespec_class_parser_rule_context_exit_rule;

    rulecontext_class->get_rule_index = test_context_typespec_class_rule_context_get_rule_index;
}

static void
test_context_typespec_init (TestContextTypespec *object)
{
}

TestContextTypespec *test_context_typespec_new(AntlrParserRuleContext *parent, gint invoking_state)
{
    AntlrParserRuleContext *ctx = antlr_parser_rule_context_super_with_parent(TEST_TYPE_CONTEXT_TYPESPEC, parent, invoking_state);
    TestContextTypespec *self = TEST_CONTEXT_TYPESPEC(ctx);
    return self;
}

AntlrTerminalNode *test_context_typespec_token_get_id(TestContextTypespec* self) {
    return antlr_parser_rule_context_get_token(ANTLR_PARSER_RULE_CONTEXT(self), TEST_T_PARSER_ID, 0);
}




TestContextTypespec* test_t_parser_parse_typespec(TestTParser* self, GError **error) {
    g_return_val_if_fail (error == NULL || *error == NULL, NULL);
    AntlrRuleContext *ret = NULL;
    AntlrATNInterpreter *interpreter = NULL;

    AntlrParserRuleContext *ctx = ANTLR_PARSER(self)->ctx;
    gint state = antlr_recognizer_get_state(ANTLR_RECOGNIZER(self));
    TestContextTypespec *local_context = test_context_typespec_new(ctx, state);

    antlr_parser_enter_rule(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context), 0, TEST_T_PARSER_TYPESPEC);

    antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 151);
    antlr_error_strategy_sync(ANTLR_PARSER(self)->err_handler, ANTLR_PARSER(self));
    interpreter = antlr_recognizer_get_interpreter(ANTLR_RECOGNIZER(self));
    switch (antlr_parser_atn_simulator_adaptive_predict(ANTLR_PARSER_ATN_SIMULATOR(interpreter), ANTLR_PARSER(self)->input, 10, ANTLR_PARSER(self)->ctx)) {
    case 1: {
      antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  1);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 143);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_ID);
      break;
    }

    case 2: {
      antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  2);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 144);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_ID);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 145);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__8);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 146);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__9);
      break;
    }

    case 3: {
      antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  3);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 147);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__48);
      break;
    }

    case 4: {
      antlr_parser_enter_outer_alt(ANTLR_PARSER(self), ANTLR_PARSER_RULE_CONTEXT(local_context),  4);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 148);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__48);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 149);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__8);
      antlr_recognizer_set_state(ANTLR_RECOGNIZER(self), 150);
      antlr_parser_match(ANTLR_PARSER(self), TEST_T_PARSER_T__9);
      break;
    }

    }

    antlr_parser_exit_rule(ANTLR_PARSER(self));

    return local_context;
}


static gboolean
test_t_parser_class_recognizer_sempred(AntlrRecognizer *recognizer, AntlrRuleContext *context, gint ruleIndex, gint predicateIndex) {
  TestTParser *self = TEST_T_PARSER(recognizer);
  switch (ruleIndex) {
    case 2: return test_t_parser_sempred_e(self, context, predicateIndex);

  default:
    break;
  }
  return TRUE;
}

gboolean test_t_parser_sempred_e(TestTParser* self, AntlrRuleContext *local_context, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 13);
    case 1: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 12);
    case 2: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 11);
    case 3: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 10);
    case 4: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 9);
    case 5: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 8);
    case 6: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 7);
    case 7: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 6);
    case 8: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 5);
    case 9: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 4);
    case 10: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 3);
    case 11: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 2);
    case 12: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 1);
    case 13: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 24);
    case 14: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 23);
    case 15: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 22);
    case 16: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 21);
    case 17: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 19);
    case 18: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 17);
    case 19: return antlr_recognizer_precpred(ANTLR_RECOGNIZER(self), ANTLR_RULE_CONTEXT(ANTLR_PARSER(self)->ctx), 16);

  default:
    break;
  }
  return TRUE;
}


