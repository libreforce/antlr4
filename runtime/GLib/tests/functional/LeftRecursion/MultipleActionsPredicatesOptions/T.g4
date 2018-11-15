grammar T;
s @after {
// System.out.println($ctx.toString(this));
gchar *str = antlr_tree_to_string_tree(ANTLR_TREE($ctx), antlr_recognizer_get_rule_names(ANTLR_RECOGNIZER(self)));
g_print("%s\n", str);
g_free(str);
} : e ;
e : a=e op=('*'|'/') b=e  {}{TRUE}?
  | a=e op=('+'|'-') b=e  {}{precedence=3;} {TRUE}? {g_print("<fail='Message'>");}
  | INT {}{}
  | '(' x=e ')' {}{}
  ;
INT : '0'..'9'+ ;
WS : (' '|'\n') -> skip;
