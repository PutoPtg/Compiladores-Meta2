/***********************************************************************************
*Ficheiro "jac.y"
*Analisador Sintático da linguagem Ja - Sub-conjunto de Java
*Cadeira de Compiladores - 2017 - Licenciatura em Engenharia Informática
*Manuel Madeira Amado - 2006131282
*Xavier Silva - 2013153577
*Versão 0.06
************************************************************************************/

%{
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"

	int yylex(void);
	int yyerror(char *s);

	extern long long int contalinha;
	extern long long int contacoluna;
	extern char* yytext;

	int valor1=0;
	int valorNull=0;
	int valorL=0;
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
%token DOTLENGHT

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%left COMMA
%right ASSIGN
%left OR
%left AND
%left EQ NEQ
%left GEQ GT LT LEQ
%left PLUS MINUS
%left STAR DIV MOD
%right NOT
%right OBRACE OCURV OSQUARE
%left CBRACE CCURV CSQUARE


%%

/*********************************************************************
* Program → CLASS ID OBRACE { FieldDecl | MethodDecl | SEMI } CBRACE *
**********************************************************************/
Program: CLASS ID OBRACE CBRACE
			| CLASS ID OBRACE InitDeclaration CBRACE;

InitDeclaration: FieldDecl
			| MethodDecl
			| SEMI
			| InitDeclaration FieldDecl
			| InitDeclaration MethodDecl
			| InitDeclaration SEMI;


/*********************************************************************
* FieldDecl → PUBLIC STATIC Type ID { COMMA ID } SEMI				 *
*********************************************************************/
FieldDecl: PUBLIC STATIC Type ID SEMI;
			| PUBLIC STATIC Type ID CommaID SEMI;

CommaID: COMMA ID
			| CommaID COMMA ID;


/*********************************************************************
* MethodDecl → PUBLIC STATIC MethodHeader MethodBody				 *
*********************************************************************/
MethodDecl: PUBLIC STATIC MethodHeader MethodBody;


/*********************************************************************
* MethodHeader → ( Type | VOID ) ID OCURV [ FormalParams ] CCURV	 *
*********************************************************************/
MethodHeader: Type ID OCURV FormalParams CCURV
			| Type ID OCURV CCURV
			| VOID ID OCURV FormalParams CCURV
			| VOID ID OCURV CCURV;


/*********************************************************************
* MethodBody → OBRACE { VarDecl | Statement } CBRACE				 *
*********************************************************************/
MethodBody: OBRACE CBRACE
			| OBRACE MethodParams CBRACE;

MethodParams: VarDecl
			| Statement
			| MethodParams VarDecl
			| MethodParams Statement;


/*********************************************************************
* FormalParams → Type ID { COMMA Type ID }							 *
* FormalParams → STRING OSQUARE CSQUARE ID							 *
*********************************************************************/
FormalParams: Type ID
			| Type ID CommaTypeID
			| STRING OSQUARE CSQUARE ID;

CommaTypeID: COMMA Type ID
			| CommaTypeID COMMA Type ID;


/*********************************************************************
* VarDecl → Type ID { COMMA ID } SEMI 								 *
*********************************************************************/
VarDecl: Type ID CommaID SEMI;


/*********************************************************************
* Type → BOOL | INT | DOUBLE										 *
*********************************************************************/
Type: BOOL
	| INT
	| DOUBLE;


/*********************************************************************
* Statement → OBRACE { Statement } CBRACE							 *
* Statement → IF OCURV Expr CCURV Statement [ ELSE Statement ]		 *
* Statement → WHILE OCURV Expr CCURV Statement						 *
* Statement → DO Statement WHILE OCURV Expr CCURV SEMI				 *
* Statement → PRINT OCURV ( Expr | STRLIT ) CCURV SEMI				 *
* Statement → [ ( Assignment | MethodInvocation | ParseArgs ) ] SEMI *
* Statement → RETURN [ Expr ] SEMI									 *
*********************************************************************/
Statement: OBRACE CBRACE
		| OBRACE Statement CBRACE
		| IF OCURV Expr CCURV Statement %prec LOWER_THAN_ELSE
		| IF OCURV Expr CCURV Statement ELSE Statement
		| WHILE OCURV Expr CCURV Statement
		| DO Statement WHILE OCURV Expr CCURV SEMI
		| PRINT OCURV Expr CCURV SEMI
		| PRINT OCURV STRLIT CCURV SEMI
		| SEMI
		| Assignment SEMI
		| MethodInvocation SEMI
		| ParseArgs SEMI
		| RETURN SEMI
		| RETURN Expr SEMI;


/*********************************************************************
* Assignment → ID ASSIGN Expr										 *
*********************************************************************/
Assignment: ID ASSIGN Expr:


/*********************************************************************
* MethodInvocation → ID OCURV [ Expr { COMMA Expr } ] CCURV 		 *
*********************************************************************/
MethodInvocation: ID OCURV CCURV
				| ID OCURV Expr CCURV
				| ID OCURV Expr CommaExpr CCURV;

CommaExpr: COMMA Expr
		| CommaExpr COMMA Expr;


/*********************************************************************
* ParseArgs → PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV			 *
*********************************************************************/
ParseArgs: PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV;


/*********************************************************************
* Expr → Assignment | MethodInvocation | ParseArgs					 *
* Expr → Expr ( AND | OR ) Expr										 *
* Expr → Expr ( EQ | GEQ | GT | LEQ | LT | NEQ ) Expr				 *
* Expr → Expr ( PLUS | MINUS | STAR | DIV | MOD ) Expr				 *
* Expr → ( PLUS | MINUS | NOT ) Expr								 *
* Expr → ID [ DOTLENGTH ]											 *
* Expr → OCURV Expr CCURV											 *
* Expr → BOOLLIT | DECLIT | REALLIT									 *
*********************************************************************/
Expr: Assignment
		| MethodInvocation
		| ParseArgs
		| Expr AND Expr
		| Expr OR Expr
		| Expr EQ Expr
		| Expr GEQ Expr
		| Expr GT Expr
		| Expr LEQ Expr
		| Expr LT Expr
		| Expr NEQ Expr
		| Expr PLUS Expr
		| Expr MINUS Expr
		| Expr STAR Expr
		| Expr DIV Expr
		| Expr MOD Expr
		| PLUS Expr
		| MINUS Expr
		| NOT Expr
		| ID
		| ID DOTLENGTH
		| OCURV Expr CCURV
		| BOOLLIT
		| DECLIT
		| REALLIT;

// O PLUS está a reduzir e deve fazer shift
// O MINUS está a reduzir e deve fazer shift
// O SEMI está a fazer shift e deve reduzir

%%

/* Função de erros */
int yyerror(char *s){
    return 0;
}

int main(int argc, char *argv[])
{
    if(argv[1] != NULL){
        /*flag de compilação*/
        if(strcmp(argv[1], "-1") == 0) {
            valor1 = 1;
            yylex();
        }
        else if(strcmp(argv[1], "-l") == 0) {
            valorL=1;
            yylex();
        }
    }
    else if(argv[1] == NULL){
            valorNull = 1;
            yyparse();
    }

    return 0;
}


