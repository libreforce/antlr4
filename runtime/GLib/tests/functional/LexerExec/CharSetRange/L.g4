lexer grammar L;
I : [0-9]+ {g_print("I\n");} ;
ID : [a-zA-Z] [a-zA-Z0-9]* {g_print("ID\n");} ;
WS : [ \n\u0009\r]+ -> skip ;
