lexer grammar L;
A : ["a-z]+ {g_print("A\n");} ;
WS : [ \n\t]+ -> skip ;
