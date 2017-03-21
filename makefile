all: jac.zip jac

clean:
	@-rm tree.o y.* lex.* jac jac.zip

mccompiler.zip: jac.l jac.y tree.h tree.c
	zip -u jac.zip jac.l jac.y tree.h tree.c

mccompiler: lex.yy.c y.tab.c tree.c
	gcc -g -o jac y.tab.c lex.yy.c tree.c -ll -ly

lex.yy.c: jac.l
	lex jac.l

y.tab.c: jac.y
	yacc -d jac.y
