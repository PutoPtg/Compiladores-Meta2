/************************************************************************************
* Ficheiro "jac.y"																	*
* Analisador Sintático da linguagem Ja - Sub-conjunto de Java						*
* Cadeira de Compiladores - 2017 - Licenciatura em Engenharia Informática			*
* Manuel Madeira Amado - 2006131282													*
* Xavier Silva - 2013153577															*
* Versão 0.09																		*
************************************************************************************/

%{
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"

	#include "tree.h"
	#define VAR (char*)calloc(1,sizeof(char))

	int yylex(void);
	int yyerror(char *s);

	extern long long int contaLinha;
	extern long long int contaColuna;
	extern char* yytext;

	int valor1=0;
	int valorNull=0;
	int valorL=0;
	int contaErros = 0;

	node* root;
	node* aux;
%}

%union{
    char* val;
    struct node* no;
};

%token <val> STRLIT REALLIT DECLIT BOOLLIT ID
%token BOOL
%token INT
%token DOUBLE
%token RESERVED
%token CLASS
%token DO
%token DOTLENGTH
%token ELSE
%token IF
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
%left CBRACE CCURV CSQUARE OBRACE OCURV OSQUARE

%type <no> Program InitDeclaration FieldDecl CommaID MethodDecl MethodHeader MethodBody MethodParams FormalParams CommaTypeID VarDecl Type Statement Assignment MethodInvocation CommaExpr ParseArgs Expr

%%

/*********************************************************************
* Program → CLASS ID OBRACE { FieldDecl | MethodDecl | SEMI } CBRACE *
**********************************************************************/
Program: CLASS ID OBRACE InitDeclaration CBRACE {
													if (contaErros == 0){
														$$ = createNode(OTHER_node ,"Program", VAR);
														aux = createNode(OTHER_node,"InitDeclaration",VAR);
														addChild(aux,$4);
														addChild($$,aux);
														root = $$;
													}
												}


InitDeclaration: /*empty*/						{if (contaErros == 0){;}}
			| InitDeclaration FieldDecl			{if (contaErros == 0){;}}
			| InitDeclaration MethodDecl		{if (contaErros == 0){;}}
			| InitDeclaration SEMI				{if (contaErros == 0){;}}
			;


/*********************************************************************
* FieldDecl → PUBLIC STATIC Type ID { COMMA ID } SEMI				 *
*********************************************************************/
FieldDecl: PUBLIC STATIC Type ID SEMI				{if (contaErros == 0){;}}
			| PUBLIC STATIC Type ID CommaID SEMI	{if (contaErros == 0){;}}
			| error SEMI							{$$ = NULL;
													 if (contaErros == 0){
													 	clearTree(root);
													 	contaErros++;
													 }
													}
			;

CommaID: COMMA ID 						{if (contaErros == 0){;}}
			| CommaID COMMA ID 			{if (contaErros == 0){;}}
			;


/*********************************************************************
* MethodDecl → PUBLIC STATIC MethodHeader MethodBody				 *
*********************************************************************/
MethodDecl: PUBLIC STATIC MethodHeader MethodBody		{if (contaErros == 0){;}}


/*********************************************************************
* MethodHeader → ( Type | VOID ) ID OCURV [ FormalParams ] CCURV	 *
*********************************************************************/
MethodHeader: Type ID OCURV FormalParams CCURV		{if (contaErros == 0){;}}
			| Type ID OCURV CCURV					{if (contaErros == 0){;}}
			| VOID ID OCURV FormalParams CCURV		{if (contaErros == 0){;}}
			| VOID ID OCURV CCURV					{if (contaErros == 0){;}}
			;


/*********************************************************************
* MethodBody → OBRACE { VarDecl | Statement } CBRACE				 *
*********************************************************************/
MethodBody: OBRACE CBRACE							{if (contaErros == 0){;}}
			| OBRACE MethodParams CBRACE			{if (contaErros == 0){;}}
			;

MethodParams: VarDecl								{if (contaErros == 0){;}}
			| Statement								{if (contaErros == 0){;}}
			| MethodParams VarDecl					{if (contaErros == 0){;}}
			| MethodParams Statement				{if (contaErros == 0){;}}
			;


/*********************************************************************
* FormalParams → Type ID { COMMA Type ID }							 *
* FormalParams → STRING OSQUARE CSQUARE ID							 *
*********************************************************************/
FormalParams: Type ID 								{if (contaErros == 0){;}}
			| Type ID CommaTypeID					{if (contaErros == 0){;}}
			| STRING OSQUARE CSQUARE ID 			{if (contaErros == 0){;}}
			;

CommaTypeID: COMMA Type ID 							{if (contaErros == 0){;}}
			| CommaTypeID COMMA Type ID 			{if (contaErros == 0){;}}
			;


/*********************************************************************
* VarDecl → Type ID { COMMA ID } SEMI 								 *
*********************************************************************/
VarDecl: Type ID CommaID SEMI						{if (contaErros == 0){;}}


/*********************************************************************
* Type → BOOL | INT | DOUBLE										 *
*********************************************************************/
Type: BOOL 											{if (contaErros == 0){;}}
	| INT 											{if (contaErros == 0){;}}
	| DOUBLE 										{if (contaErros == 0){;}}
	;


/*********************************************************************
* Statement → OBRACE { Statement } CBRACE							 *
* Statement → IF OCURV Expr CCURV Statement [ ELSE Statement ]		 *
* Statement → WHILE OCURV Expr CCURV Statement						 *
* Statement → DO Statement WHILE OCURV Expr CCURV SEMI				 *
* Statement → PRINT OCURV ( Expr | STRLIT ) CCURV SEMI				 *
* Statement → [ ( Assignment | MethodInvocation | ParseArgs ) ] SEMI *
* Statement → RETURN [ Expr ] SEMI									 *
*********************************************************************/
Statement: OBRACE CBRACE											{if (contaErros == 0){;}}
		| OBRACE Statement CBRACE									{if (contaErros == 0){;}}
		| IF OCURV Expr CCURV Statement %prec LOWER_THAN_ELSE 		{if (contaErros == 0){;}}
		| IF OCURV Expr CCURV Statement ELSE Statement 				{if (contaErros == 0){;}}
		| WHILE OCURV Expr CCURV Statement 							{if (contaErros == 0){;}}
		| DO Statement WHILE OCURV Expr CCURV SEMI 					{if (contaErros == 0){;}}
		| PRINT OCURV Expr CCURV SEMI 								{if (contaErros == 0){;}}
		| PRINT OCURV STRLIT CCURV SEMI 							{if (contaErros == 0){;}}
		| SEMI														{if (contaErros == 0){;}}
		| Assignment SEMI											{if (contaErros == 0){;}}
		| MethodInvocation SEMI										{if (contaErros == 0){;}}
		| ParseArgs SEMI											{if (contaErros == 0){;}}
		| RETURN SEMI												{if (contaErros == 0){;}}
		| RETURN Expr SEMI											{if (contaErros == 0){;}}
		| error SEMI												{$$ = NULL;
													 				 if (contaErros == 0){
													 					clearTree(root);
													 					contaErros++;
													 				 }
																	}
		;


/*********************************************************************
* Assignment → ID ASSIGN Expr										 *
*********************************************************************/
Assignment: ID ASSIGN Expr 									{if (contaErros == 0){;}}


/*********************************************************************
* MethodInvocation → ID OCURV [ Expr { COMMA Expr } ] CCURV 		 *
*********************************************************************/
MethodInvocation: ID OCURV CCURV							{if (contaErros == 0){;}}
				| ID OCURV Expr CCURV						{if (contaErros == 0){;}}
				| ID OCURV Expr CommaExpr CCURV				{if (contaErros == 0){;}}
				| ID OCURV error CCURV						{$$ = NULL;
															 if (contaErros == 0){
													 			clearTree(root);
													 			contaErros++;
													 		 }
															}
				;

CommaExpr: COMMA Expr 									{if (contaErros == 0){;}}
		| CommaExpr COMMA Expr 							{if (contaErros == 0){;}}
		;


/*********************************************************************
* ParseArgs → PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV			 *
*********************************************************************/
ParseArgs: PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV			{if (contaErros == 0){;}}
		| PARSEINT OCURV error CCURV							{$$ = NULL;
																 if (contaErros == 0){
													 				clearTree(root);
													 				contaErros++;
																 }
																}
		;


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
Expr: Assignment								{if (contaErros == 0){;}}
		| MethodInvocation						{if (contaErros == 0){;}}
		| ParseArgs								{if (contaErros == 0){;}}
		| Expr AND Expr 						{if (contaErros == 0){;}}
		| Expr OR Expr 							{if (contaErros == 0){;}}
		| Expr EQ Expr 							{if (contaErros == 0){;}}
		| Expr GEQ Expr 						{if (contaErros == 0){;}}
		| Expr GT Expr 							{if (contaErros == 0){;}}
		| Expr LEQ Expr 						{if (contaErros == 0){;}}
		| Expr LT Expr 							{if (contaErros == 0){;}}
		| Expr NEQ Expr 						{if (contaErros == 0){;}}
		| Expr PLUS Expr 						{if (contaErros == 0){;}}
		| Expr MINUS Expr 						{if (contaErros == 0){;}}
		| Expr STAR Expr 						{if (contaErros == 0){;}}
		| Expr DIV Expr 						{if (contaErros == 0){;}}
		| Expr MOD Expr 						{if (contaErros == 0){;}}
		| PLUS Expr  							{if (contaErros == 0){;}}
		| MINUS Expr  							{if (contaErros == 0){;}}
		| NOT Expr  							{if (contaErros == 0){;}}
		| ID 									{if (contaErros == 0){;}}
		| ID DOTLENGTH 							{if (contaErros == 0){;}}
		| OCURV Expr CCURV 						{if (contaErros == 0){;}}
		| BOOLLIT 								{if (contaErros == 0){;}}
		| DECLIT 								{if (contaErros == 0){;}}
		| REALLIT								{if (contaErros == 0){;}}
		| OCURV error CCURV						{$$ = NULL;
												 if (contaErros == 0){
												 	clearTree(root);
												 	contaErros++;
												 }
												}
		;

%%

/* Função de erros */
int yyerror(char *s){
    printf("Line %lld, col %lld: %s: %s\n", contaLinha, contaColuna, s, yytext);
    contaErros++;
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

    if(contaErros == 0){
    	//Imprime árvore
    }

    //limpa memória
    if (contaErros == 0){
    	clearTree(root);
    }

    return 0;
}


