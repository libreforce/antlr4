grammar T;
s @after {
//System.out.println($ctx.toString(this));
gchar *str = antlr_tree_to_string_tree(ANTLR_TREE($ctx), antlr_recognizer_get_rule_names(ANTLR_RECOGNIZER(self)));
g_print("%s\n", str);
g_free(str);
} : e EOF ; // must indicate EOF can follow
expressionList
    :   e (',' e)*
    ;
e   :   '(' e ')'
    |   'this'
    |   'super'
    |   INT
    |   ID
    |   typespec '.' 'class'
    |   e '.' ID
    |   e '.' 'this'
    |   e '.' 'super' '(' expressionList? ')'
    |   e '.' 'new' ID '(' expressionList? ')'
        |   'new' typespec ( '(' expressionList? ')' | ('[' e ']')+)
    |   e '[' e ']'
    |   '(' typespec ')' e
    |   e ('++' | '--')
    |   e '(' expressionList? ')'
    |   ('+'|'-'|'++'|'--') e
    |   ('~'|'!') e
    |   e ('*'|'/'|'%') e
    |   e ('+'|'-') e
    |   e ('<<' | '>>>' | '>>') e
    |   e ('<=' | '>=' | '>' | '<') e
    |   e 'instanceof' e
    |   e ('==' | '!=') e
    |   e '&' e
    |<assoc=right> e '^' e
    |   e '|' e
    |   e '&&' e
    |   e '||' e
    |   e '?' e ':' e
    |<assoc=right>
        e ('='
          |'+='
          |'-='
          |'*='
          |'/='
          |'&='
          |'|='
          |'^='
          |'>>='
          |'>>>='
          |'<<='
          |'%=') e
    ;
typespec
    : ID
    | ID '[' ']'
    | 'int'
        | 'int' '[' ']'
    ;
ID  : ('a'..'z'|'A'..'Z'|'_'|'$')+;
INT : '0'..'9'+ ;
WS  : (' '|'\n') -> skip ;
