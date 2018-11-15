grammar T;
prog : stat EOF;
stat : 'x' ('y' | EOF)*?;
