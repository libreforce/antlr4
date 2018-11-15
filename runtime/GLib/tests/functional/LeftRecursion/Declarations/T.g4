grammar T;
s @after {
  gchar *str = antlr_tree_to_string_tree(ANTLR_TREE(local_context), antlr_recognizer_get_rule_names(ANTLR_RECOGNIZER(self)));
  g_print("%s\n", str);
  g_free(str);
} : declarator EOF ; // must indicate EOF can follow
declarator
	: declarator '[' e ']'
	| declarator '[' ']'
	| declarator '(' ')'
	| '*' declarator // binds less tight than suffixes
	| '(' declarator ')'
	| ID
	;
e : INT ;
ID : 'a'..'z'+ ;
INT : '0'..'9'+ ;
WS : (' '|'\n') -> skip ;
