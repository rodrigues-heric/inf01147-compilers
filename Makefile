run-lex:
	lex scanner.l; gcc lex.yy.c; ./a.out < a.out;