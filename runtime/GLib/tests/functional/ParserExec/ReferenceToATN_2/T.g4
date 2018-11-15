grammar T;
a : (ID|ATN)* ATN? {g_print("%s\n", $text);} ;
ID : 'a'..'z'+ ;
ATN : '0'..'9'+;
WS : (' '|'\n') -> skip ;
