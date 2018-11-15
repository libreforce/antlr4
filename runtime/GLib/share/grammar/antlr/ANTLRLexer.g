lexer grammar ANTLRLexer;


options {

	// Target language is Java, which is the default but being specific
	// here as this grammar is also meant as a good example grammar for
	// for users.
	//
	//language      = Java;

	// The super class that this lexer should expect to inherit from, and
	// which contains any and all support routines for the lexer. This is
	// commented out in this baseline (definitive or normative grammar)
	// - see the ANTLR tool implementation for hints on how to use the super
	//   class
	//
	//superclass    = AbstractA3Lexer;
}

tokens {
    SEMPRED,
    TOKEN_REF,
    RULE_REF,
    LEXER_CHAR_SET,
    ARG_ACTION
}

// --------
// Comments
//
// ANTLR comments can be multi or single line and we don't care
// which particularly. However we also accept Javadoc style comments
// of the form: /** ... */ and we do take care to distinguish those
// from ordinary multi-line comments
// Note how we guide the lexical PATH because we want to issue a decriptive
// error message in case of a standalone '/' character, which makes no
// sense in ANTLR source code. We alo trap unterminated multi-line comments
//
fragment DOC_COMMENT : ;
COMMENT
    :
      '//'
    ;

/** Allow unicode rule/token names */
ID  :[a-z]+
    ;
