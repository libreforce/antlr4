lexer grammar L;
I : [0-9]+ {g_print("I\n");} ;
WS : [ \n]+ -> skip ;
