/***********************************************************************************
*Ficheiro "jac.y"
*Analisador Sintático da linguagem Ja - Sub-conjunto de Java
*Cadeira de Compiladores - 2017 - Licenciatura em Engenharia Informática
*Manuel Madeira Amado - 2006131282
*Xavier Silva - 2013153577
*Versão 0.02
************************************************************************************/

%{
    #include <stdio.h>
    #include <string.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	int yylex(void);
    void yyerror (const char *s);
%}

%token STRLIT
%token REALLIT
%token DECLIT
%token RESERVED
%token BOOL
%token BOOLLIT
%token CLASS
%token DO
%token DOTLENGTH
%token DOUBLE
%token ELSE
%token IF
%token INT
%token PARSEINT
%token PRINT
%token PUBLIC
%token RETURN
%token STATIC
%token STRING
%token VOID
%token WHILE
%token OCURV
%token CCURV
%token OBRACE
%token CBRACE
%token OSQUARE
%token CSQUARE
%token AND
%token OR
%token LT
%token GT
%token EQ
%token NEQ
%token LEQ
%token GEQ
%token PLUS
%token MINUS
%token STAR
%token DIV
%token MOD
%token NOT
%token ASSIGN
%token SEMI
%token COMMA
%token ID

%%

jac: expression                        {printf("%d\n", $1);}

expression: ID                          {$$=$1;}

%%


