grammar T;
a : ID* {
g_print("%s\n", $text);
};
ID : 'a'..'z'+;
WS : (' '|'\n') -> skip;
