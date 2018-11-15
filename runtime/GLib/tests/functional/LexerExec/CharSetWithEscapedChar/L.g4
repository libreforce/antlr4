lexer grammar L;
DASHBRACK : [\-\]]+ {g_print("DASHBRACK\n");} ;
WS : [ \n]+ -> skip ;
