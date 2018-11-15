grammar T;
@parser::header {
    static gboolean Property(void) {return TRUE;}
}
@members {
}

a : {Property()}? ID {g_print("valid\n");}
  ;
ID : 'a'..'z'+ ;
WS : (' '|'\n') -> skip ;
