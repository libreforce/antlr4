lexer grammar L;
I : (~[ab \n]|'a')  {g_print("I\n");} ;
WS : [ \n\u000D]+ -> skip ;
