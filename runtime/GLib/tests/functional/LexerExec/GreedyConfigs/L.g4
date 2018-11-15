lexer grammar L;
I : ('a' | 'ab') {g_print("%s\n", antlr_lexer_atn_simulator_get_text(ANTLR_LEXER_ATN_SIMULATOR(ANTLR_RECOGNIZER(self)->interp), ANTLR_LEXER(self)->input));} ;
WS : (' '|'\n') -> skip ;
J : .;
