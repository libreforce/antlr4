lexer grammar L;
A : ["\\ab]+ {g_print("A\n");} ;
WS : [ \n\t]+ -> skip ;
