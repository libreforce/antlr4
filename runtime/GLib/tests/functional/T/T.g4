grammar T;
s
@init {
<BuildParseTrees()>
}
@after {
<ToStringTree("$r.ctx"):writeln()>
}
  : r=a ;
a : 'x' 'y'
  ;
Z : 'z'
  ;
