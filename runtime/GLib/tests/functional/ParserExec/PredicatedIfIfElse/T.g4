grammar T;
s : stmt EOF ;
stmt : ifStmt | ID;
ifStmt : 'if' ID stmt ('else' stmt | { antlr_int_stream_LA(ANTLR_INT_STREAM(ANTLR_PARSER(self)->input), 1) != TEST_T_PARSER_ELSE }?);
ELSE : 'else';
ID : [a-zA-Z]+;
WS : [ \n\t]+ -> skip;
