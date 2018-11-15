lexer grammar L;

@lexer::definitions {
    #define getText() ""
}

I : ({g_print("stuff fail: %s\n", getText());} 'a'
| {g_print("stuff0:" + getText());}
       'a' {g_print("stuff1: %s\n", getText());}
       'b' {g_print("stuff2: %s\n", getText());})
       {g_print("%s\n", getText());} ;
WS : (' '|'\n') -> skip ;
J : .;
