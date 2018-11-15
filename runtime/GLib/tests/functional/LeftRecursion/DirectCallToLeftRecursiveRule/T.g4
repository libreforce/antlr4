grammar T;
a @after {
  // System.out.println($ctx.toString(this));
  gchar *str = antlr_tree_to_string_tree(ANTLR_TREE($ctx), antlr_recognizer_get_rule_names(ANTLR_RECOGNIZER(self)));
  g_print("%s\n", str);
  g_free(str);
} : a ID
  | ID
  ;
ID : 'a'..'z'+ ;
WS : (' '|'\n') -> skip ;
