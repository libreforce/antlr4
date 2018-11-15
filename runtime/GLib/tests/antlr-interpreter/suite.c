#include "suite.h"

#include <antlr-runtime/runtime.h>
#include "antlr-interpreter/attribute-i-resolver.h"
#include "antlr-interpreter/grammar.h"
#include "antlr-interpreter/grammar-lexer.h"

// @see: file:///home/gaulouis/local/src/tmp/antlr4.6/doc/interpreters.md

void
test_antlr_interpreter_test1(void) {
    //g_test_message("Not implemented");
    /* Add asserts */

    gchar *grm = "lexer grammar L;\n"
                 "A : 'a' ;\n"
                 "B : 'b' ;\n"
                 "C : 'c' ;\n";
    GapGrammarLexer *lg = gap_grammar_lexer_new();

}

void
test_antlr_interpreter_test2(void) {

}

GTestSuite*
test_antlr_interpreter_create_suite(void) {
    GTestSuite *suite = g_test_create_suite("libantlrinterpreter");

    g_test_suite_add (suite, TESTCASE (test_antlr_interpreter_test1, NULL));
    g_test_suite_add (suite, TESTCASE (test_antlr_interpreter_test2, NULL));

    return suite;
}
