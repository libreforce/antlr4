grammar T;
a : (ID|INT{
})+ {
g_print("%s\n", $text);
};
ID : 'a'..'z'+ ;
INT : '0'..'9'+;
WS : (' '|'\n') -> skip ;
