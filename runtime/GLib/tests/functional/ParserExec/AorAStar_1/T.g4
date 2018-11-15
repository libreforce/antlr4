grammar T;
a : (ID|ID)* {
g_print("%s\n", $text);
};
ID : 'a'..'z'+;
WS : (' '|'\n') -> skip;
