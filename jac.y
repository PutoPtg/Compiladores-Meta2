/***********************************************************************************
*Ficheiro "jac.y"
*Analisador Sintático da linguagem Ja - Sub-conjunto de Java
*Cadeira de Compiladores - 2017 - Licenciatura em Engenharia Informática
*Manuel Madeira Amado - 2006131282
*Xavier Silva - 2013153577
*Versão 0.01
************************************************************************************/

%{
    #include <stdio.h>
    #include <string.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	int yylex(void);
    void yyerror (const char *s);

	int valorL = 0;
%}

%token ID

%%

jac: expression                        {printf("%d\n", $1);}

expression: ID                          {$$=$1;}

%%

int main(int argc, char* argv[])
{
  if(argc>1){
  	if(strcmp(argv[1],"-l") == 0)
  		valorL= 1;
  }
  yylex();
  return 0;
}
