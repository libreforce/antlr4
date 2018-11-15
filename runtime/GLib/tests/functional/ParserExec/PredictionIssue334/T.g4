grammar T;
file_ @init{
_errHandler = std::make_shared<BailErrorStrategy>();
}
@after {
std::cout << $ctx->toStringTree(this) << std::endl;
}
  :   item (SEMICOLON item)* SEMICOLON? EOF ;
item : A B?;
SEMICOLON: ';';
A : 'a'|'A';
B : 'b'|'B';
WS      : [ \r\t\n]+ -> skip;
