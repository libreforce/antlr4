grammar T;
s @after {
//<ToStringTree("$ctx"):writeln()>
// System.out.println($ctx.toString(this));
gchar *str = antlr_tree_to_string_tree(ANTLR_TREE($ctx), antlr_recognizer_get_rule_names(ANTLR_RECOGNIZER(self)));
g_print("%s\n", str);
g_free(str);
} : e EOF ; // must indicate EOF can follow
e : e '.' ID
  | e '.' 'this'
  | '-' e
  | e '*' e
  | e ('+'|'-') e
  | INT
  | ID
  ;
ID : 'a'..'z'+ ;
INT : '0'..'9'+ ;
WS : (' '|'\n') -> skip ;
