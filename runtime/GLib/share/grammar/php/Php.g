/** Grammar from tour chapter augmented with actions */
grammar Php;

@header {
//package tools;
//import java.util.*;
}

@parser::members {
GHashTable *memory;
}

// Appears in the public part of the parser in the h file.
@parser::declarations {
int eval(int left, int op, int right);
}

// Appears in line with the other class member definitions in the cpp file.
@parser::definitions {
/** "memory" for our calculator; variable/value pairs go here */
//Map<String, Integer> memory = new HashMap<String, Integer>();

int eval(int left, int op, int right) {
    switch ( op ) {
        case PHP_LEXER_SYMBOL_MUL : return left * right;
        case PHP_LEXER_SYMBOL_DIV : return left / right;
        case PHP_LEXER_SYMBOL_ADD : return left + right;
        case PHP_LEXER_SYMBOL_SUB : return left - right;
    }
    return 0;
}
}

script: stat* EOF;

stat:   e NEWLINE           {g_print("v = %d\n", $e.v);}
    |   ID '=' e NEWLINE    {g_hash_table_insert(self->memory, $ID.text, GINT_TO_POINTER($e.v));}
    |   NEWLINE
    ;

e returns [int v]
    : a=e op=('*'|'/') b=e  {$v = eval($a.v, $op.type, $b.v);}
    | a=e op=('+'|'-') b=e  {$v = eval($a.v, $op.type, $b.v);}
    | INT                   {$v = $INT.int;}
    | ID                    {$v = GPOINTER_TO_INT(g_hash_table_lookup(self->memory, (gpointer)$ID.text));}
    | '(' e ')'             {$v = $e.v;}
    ;

MUL : '*' ;
DIV : '/' ;
ADD : '+' ;
SUB : '-' ;

ID  :   [a-zA-Z]+ ;      // match identifiers
INT :   [0-9]+ ;         // match integers
NEWLINE:'\r'? '\n' ;     // return newlines to parser (is end-statement signal)
WS  :   [ \t]+ -> skip ; // toss out whitespace
