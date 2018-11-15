lexer grammar L;
I : .*? ('a' | 'ab') {g_print("%s\n", getText());} ;
WS : (' '|'\n') -> skip ;
J : . {g_print("%s\n", getText());};
