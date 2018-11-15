lexer grammar L;
I : [0-]+ {g_print("I\n");} ;
WS : [ \n\u000D]+ -> skip ;
