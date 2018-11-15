lexer grammar L;
I : ~[ab \n] ~[ \ncd]* {g_print("I\n");} ;
WS : [ \n\u000D]+ -> skip ;
