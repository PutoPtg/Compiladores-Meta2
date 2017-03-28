lex jac.l
yacc -d -v jac.y
gcc -g -o jac y.tab.c lex.yy.c tree.c -ll -ly
valgrind --leak-check=full --show-leak-kinds=all ./jac -t <TestFiles/CompTestEnunc.ja

