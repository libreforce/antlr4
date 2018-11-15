grammar T;
start : a* EOF;
a
  : label=subrule {g_print("%s\n", $label.text);} #One
  | label='y' {g_print("%s\n", $label.text);} #Two
  ;
subrule : 'x';
WS : (' '|'\n') -> skip ;
