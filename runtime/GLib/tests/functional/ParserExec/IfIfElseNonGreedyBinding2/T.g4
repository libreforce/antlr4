grammar T;
start : statement+ ;
statement : 'x' | ifStatement;
ifStatement : 'if' 'y' statement (|'else' statement) {
g_print("%s\n", $text);
};
ID : 'a'..'z'+ ;
WS : (' '|'\n') -> channel(HIDDEN);
