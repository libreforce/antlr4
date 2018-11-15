grammar T;
a : ID {
g_print("alt 1\n");
} | INT {
g_print("alt 2\n");
};
ID : 'a'..'z'+ ;
INT : '0'..'9'+;
WS : (' '|'\n') -> skip ;
