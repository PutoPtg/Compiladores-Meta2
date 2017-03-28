/************************************************************************************
* Ficheiro "jac.y"																	*
* Analisador Sintático da linguagem Ja - Sub-conjunto de Java						*
* Cadeira de Compiladores - 2017 - Licenciatura em Engenharia Informática			*
* Manuel Madeira Amado - 2006131282													*
* Xavier Silva - 2013153577															*
* Versão 0.16																	*
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
	int yyerror(const char *s);

	extern long long int contaLinha;
	extern long long int contaColuna;
	extern char* yytext;

	int valor1=0;
	int valorT=0;
	int valorNull=0;
	int valorL=0;
	int contaErros = 0;

	node* root;
	node* aux;
	node* aux2;
	node* aux3;

	char* auxType;
%}

%union{
    char* val;
    struct node* no;
};

%token PRECEDENCE
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
%right PRECEDENCE
%left OBRACE OCURV OSQUARE CBRACE CCURV CSQUARE

%type <no> Program InitDeclaration FieldDecl CommaID MethodDecl MethodHeader MethodBody MethodParams FormalParams CommaTypeID VarDecl VarBody Type Statement Assignment MethodInvocation CommaExpr ParseArgs Expr ParamDecl StatementList ExprAux

%%

/*********************************************************************
* Program → CLASS ID OBRACE { FieldDecl | MethodDecl | SEMI } CBRACE *
**********************************************************************/
Program: CLASS ID OBRACE CBRACE	{
										if(contaErros == 0 && valorT == 1){
											$$ = createNode(OTHER_node, "Program", "");
											aux = createNode(ID_node, "Id", $2);
											addChild($$,aux);
											root = $$;
										}			
	
								}
		| CLASS ID OBRACE InitDeclaration CBRACE	{
														if(contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "Program", "");
															aux = createNode(ID_node, "Id", $2);
															addChild($$,aux);
															addBrother(aux,$4);
															root = $$;
														}
													}
		;

InitDeclaration: FieldDecl						{
													if(contaErros == 0 && valorT == 1){
														$$ = $1;
													}
												}
			| MethodDecl						{
													if(contaErros == 0 && valorT == 1){
														$$ = $1;
													}
												}
			| SEMI								{;}
			| InitDeclaration FieldDecl			{
													if(contaErros == 0 && valorT == 1){
														$$ = $1;
														addBrother($$,$2);
													}

												}
			| InitDeclaration MethodDecl		{
													if(contaErros == 0 && valorT == 1){
														$$ = $1;
														addBrother($$,$2);
													}
												}
			| InitDeclaration SEMI				{;}
			;

/*********************************************************************
* FieldDecl → PUBLIC STATIC Type ID { COMMA ID } SEMI				 *
*********************************************************************/
FieldDecl: PUBLIC STATIC Type ID SEMI				{
														if(contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "FieldDecl", "");
															addChild($$,$3);
															aux = createNode(ID_node, "Id", $4);
															addBrother($3,aux);
														}
													}
			| PUBLIC STATIC Type ID CommaID SEMI	{
														if(contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "FieldDecl", "");
															addChild($$,$3);
															aux = createNode(ID_node, "Id", $4);
															addBrother($3,aux);
															addBrother($$,$5);
														}
													}
			| error SEMI							{;}
			;

CommaID: COMMA ID 						{
											if(contaErros == 0 && valorT == 1){
												$$ = createNode(OTHER_node, "FieldDecl", "");
												aux = createNode(OTHER_node, auxType, "");
												aux2 = createNode(ID_node, "Id", $2);
												addChild($$,aux);
												addBrother(aux,aux2);
											}
										}
			| COMMA ID CommaID			{
											if (contaErros == 0 && valorT == 1){
												$$ = createNode(OTHER_node, "FieldDecl", "");
												aux = createNode(OTHER_node, auxType, "");
												aux2 = createNode(ID_node, "Id", $2);
												addChild($$,aux);
												addBrother(aux,aux2);
												addBrother($$,$3);
											}
										}
			;


/*********************************************************************
* MethodDecl → PUBLIC STATIC MethodHeader MethodBody				 *
*********************************************************************/
MethodDecl: PUBLIC STATIC MethodHeader MethodBody		{
															if(contaErros == 0 && valorT == 1){
																$$ = createNode(OTHER_node, "MethodDecl", "");
																aux = createNode(OTHER_node, "MethodHeader", "");
																aux2 = createNode(OTHER_node, "MethodBody", "");
																addChild($$,aux);
																addBrother(aux,aux2);
																addChild(aux,$3);
																addChild(aux2,$4);
															}
														}
														;


/*********************************************************************
* MethodHeader → ( Type | VOID ) ID OCURV [ FormalParams ] CCURV	 *
*********************************************************************/
MethodHeader: Type ID OCURV FormalParams CCURV		{
														if(contaErros == 0 && valorT == 1){
															$$ = $1;
															aux = createNode(ID_node, "Id", $2);
															addBrother($$,aux);
															aux2 = createNode(OTHER_node, "MethodParams", "");
															addBrother(aux,aux2);
															addChild(aux2,$4);
														}
													}
			| Type ID OCURV CCURV					{
														if(contaErros == 0 && valorT == 1){
															$$ = $1;
															aux = createNode(ID_node, "Id", $2);
															addBrother($$,aux);
															aux2 = createNode(OTHER_node, "MethodParams", "");
															addBrother(aux,aux2);
														}
													}
			| VOID ID OCURV FormalParams CCURV		{
														if(contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "Void", "");
															aux = createNode(ID_node, "Id", $2);
															addBrother($$,aux);
															aux2 = createNode(OTHER_node, "MethodParams", "");
															addBrother(aux,aux2);
															addChild(aux2,$4);
														}
													}
			| VOID ID OCURV CCURV					{
														if(contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "Void", "");
															aux = createNode(ID_node, "Id", $2);
															addBrother($$,aux);
															aux2 = createNode(OTHER_node, "MethodParams", "");
															addBrother(aux,aux2);
														}
													}
			;


/*********************************************************************
* MethodBody → OBRACE { VarDecl | Statement } CBRACE				 *
*********************************************************************/
MethodBody: OBRACE CBRACE							{
														if(contaErros == 0 && valorT == 1){
															$$ = NULL;
														}
													}
			| OBRACE MethodParams CBRACE			{
														if(contaErros == 0 && valorT == 1){
															$$ = $2;
														}
													}
			;

MethodParams: VarDecl								{
														if(contaErros == 0 && valorT == 1){
															$$ = $1;
														}
													}
			| Statement								{
														if(contaErros == 0 && valorT == 1){
															$$ = $1;
														}
													}
			| MethodParams VarDecl					{
														if(contaErros == 0 && valorT == 1){
															$$ = $1;
															addBrother($$,$2);
														}
													}
			| MethodParams Statement				{
														if(contaErros == 0 && valorT == 1){
															$$ = $1;
															addBrother($$,$2);
														}
													}
			;


/*********************************************************************
* FormalParams → ParamDecl							                 *
* Limita-se a fazer a ligação entre FormalParams e ParamDecl		 *
*********************************************************************/
FormalParams: ParamDecl					{
											if (contaErros == 0 && valorT == 1){
												$$ = $1;
											}
										}
			;

/*********************************************************************
* FormalParams → Type ID { COMMA Type ID }							 *
* FormalParams → STRING OSQUARE CSQUARE ID							 *
*********************************************************************/
ParamDecl:	Type ID 								{
														if (contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "ParamDecl", NULL);
															addChild($$,$1);
															aux = createNode(ID_node, "Id", $2);
															addBrother($1,aux);
														}
													}
			| Type ID CommaTypeID					{
														if (contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "ParamDecl", NULL);
															addChild($$,$1);
															aux = createNode(ID_node, "Id", $2);
															addBrother($1,aux);
															addBrother($$,$3);
														}
													}
			| STRING OSQUARE CSQUARE ID 			{
														if (contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "StringArray", "");
															aux = createNode(ID_node, "Id", $4);
															addBrother($$,aux);
														}
													}
			;

CommaTypeID: COMMA Type ID 							{
														if (contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "ParamDecl", NULL);
															addChild($$,$2);
															aux = createNode(ID_node, "Id", $3);
															addBrother($2,aux);
														}
													}
			| COMMA Type ID CommaTypeID				{
														if (contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "ParamDecl", NULL);
															addChild($$,$2);
															aux = createNode(ID_node, "Id", $3);
															addBrother($2,aux);
															addBrother($$,$4);
														}
													}
			;


/*********************************************************************
* VarDecl → Type ID { COMMA ID } SEMI 								 *
*********************************************************************/
VarDecl:  Type ID SEMI								{
														if (contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "VarDecl", "");
															addChild($$,$1);
															aux = createNode(ID_node, "Id", $2);
															addBrother($1,aux);
														}
													}

		| Type ID VarBody SEMI						{
														if (contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "VarDecl", "");
															addChild($$,$1);
															aux = createNode(ID_node, "Id", $2);
															addBrother($1,aux);
															addBrother($$,$3);
														}
													}
		;

VarBody: COMMA ID 								{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "VarDecl", "");
														aux = createNode(OTHER_node, auxType, "");
														aux2 = createNode(ID_node, "Id", $2);
														addChild($$,aux);
														addBrother(aux,aux2);
													}
												}

		| COMMA ID VarBody						{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "VarDecl", "");
														aux = createNode(OTHER_node, auxType, "");
														aux2 = createNode(ID_node, "Id", $2);
														addChild($$,aux);
														addBrother(aux,aux2);
														addBrother($$,$3);
													}
												}
		;


/*********************************************************************
* Type → BOOL | INT | DOUBLE										 *
*********************************************************************/
Type: BOOL 											{
														if (contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "Bool", NULL);
															auxType = (char*)calloc(10,sizeof(char));
															strncpy(auxType, "Bool", strlen("Bool"));
														}
													}
	| INT 											{
														if (contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "Int", NULL);
															auxType = (char*)calloc(10,sizeof(char));
															strncpy(auxType, "Int", strlen("Int"));
														}
													}
	| DOUBLE 										{
														if (contaErros == 0 && valorT == 1){
															$$ = createNode(OTHER_node, "Double", NULL);
															auxType = (char*)calloc(10,sizeof(char));
															strncpy(auxType, "Double", strlen("Double"));
														}
													}
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
Statement: OBRACE CBRACE											{
																		if (contaErros == 0 && valorT == 1){
																			$$ = NULL;
																		}
																	}
		| OBRACE StatementList CBRACE								{
																		;
																	}
		| IF OCURV Expr CCURV Statement %prec LOWER_THAN_ELSE 		{
																		;
																	}
		| IF OCURV Expr CCURV Statement ELSE Statement 				{
																		;
																	}
		| WHILE OCURV Expr CCURV Statement 							{
																		;
																	}
		| DO Statement WHILE OCURV Expr CCURV SEMI 					{
																		;
																	}
		| PRINT OCURV Expr CCURV SEMI 								{
																		;
																	}
		| PRINT OCURV STRLIT CCURV SEMI 							{
																		;
																	}
		| SEMI														{if (contaErros == 0 && valorT == 1){;}}
		| Assignment SEMI											{
																		;
																	}
		| MethodInvocation SEMI										{if (contaErros == 0 && valorT == 1){;}}
		| ParseArgs SEMI											{
																		;
																	}
		| RETURN SEMI												{if (contaErros == 0 && valorT == 1){;}}
		| RETURN Expr SEMI											{
																		;
																	}
		| error SEMI												{;}
		;

StatementList: 	Statement 					{
												;
											}
		|		StatementList Statement   	{
												;
											}
		;


/*********************************************************************
* Assignment → ID ASSIGN Expr										 *
*********************************************************************/
Assignment: ID ASSIGN Expr 									{
																if (contaErros == 0 && valorT == 1){
																	$$ = createNode(OTHER_node, "Assign", "");
																	aux = createNode(ID_node, "Id", $1);
																	addChild($$,aux);
																	addBrother(aux,$3);
																}
															}


/*********************************************************************
* MethodInvocation → ID OCURV [ Expr { COMMA Expr } ] CCURV 		 *
*********************************************************************/
MethodInvocation: ID OCURV CCURV							{
																if (contaErros == 0 && valorT == 1){
																	$$ = createNode(ID_node, "Id", $1);
																}
															}
				| ID OCURV Expr CCURV						{
																;
															}
				| ID OCURV Expr CommaExpr CCURV				{
																;
															}
				| ID OCURV error CCURV						{;}
				;

CommaExpr: COMMA Expr 									{if (contaErros == 0 && valorT == 1){;}}
		| CommaExpr COMMA Expr 							{if (contaErros == 0 && valorT == 1){;}}
		;


/*********************************************************************
* ParseArgs → PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV			 *
*********************************************************************/
ParseArgs: PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV			{
																	if (contaErros == 0 && valorT == 1){
																		$$ = createNode(OTHER_node, "ParseArgs", "");
																		aux = createNode(ID_node, "Id", $3);
																		addChild($$,aux);
																		addBrother(aux,$5);
																	}
																}
		| PARSEINT OCURV error CCURV							{;}
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

Expr: Assignment								{
													if (contaErros == 0 && valorT == 1){
														$$ = $1;
													}
												}
	| ExprAux									{
													if (contaErros == 0 && valorT == 1){
														$$ = $1;
													}
												}
	;

ExprAux: MethodInvocation						{
													if (contaErros == 0 && valorT == 1){
														$$ = $1;
													}
												}
		| ParseArgs								{
													if (contaErros == 0 && valorT == 1){
														$$ = $1;
													}
												}
		| ExprAux AND ExprAux 					{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "And", NULL);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| ExprAux OR ExprAux 					{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Or", NULL);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| ExprAux EQ ExprAux 					{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Eq", NULL);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| ExprAux GEQ ExprAux 					{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Geq", NULL);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| ExprAux GT ExprAux					{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Gt", NULL);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| ExprAux LEQ ExprAux 					{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Leq", NULL);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| ExprAux LT ExprAux 					{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Lt", NULL);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| ExprAux NEQ ExprAux 					{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Neq", NULL);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| ExprAux PLUS ExprAux 					{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Add", NULL);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| ExprAux MINUS ExprAux 				{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Sub", NULL);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| ExprAux STAR ExprAux 					{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Mul", NULL);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| ExprAux DIV ExprAux					{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Div", NULL);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| ExprAux MOD ExprAux					{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Mod", NULL);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| PLUS ExprAux %prec PRECEDENCE 		{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Plus",NULL);
														addChild($$, $2);
													}
												}
		| MINUS ExprAux %prec PRECEDENCE 		{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Minus",NULL);
														addChild($$, $2);
													}
												}
		| NOT ExprAux %prec PRECEDENCE 			{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(OTHER_node, "Not",NULL);
														addChild($$, $2);
													}
												}
		| ID 									{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(ID_node, "Id",$1);
														free($1);
													}
												}
		| ID DOTLENGTH 							{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(ID_node, "Id",$1);
														free($1);
													}
												}
		| OCURV Expr CCURV 						{
													if (contaErros == 0 && valorT == 1){
														$$ = $2;
													}
												}
		| BOOLLIT 								{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(BOOLLIT_node, "BoolLit",$1);
														free ($1);
													}
												}
		| DECLIT 								{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(DECLIT_node, "DecLit",$1);
														free ($1);
													}
												}
		| REALLIT								{
													if (contaErros == 0 && valorT == 1){
														$$ = createNode(REALLIT_node, "RealLit",$1);
														free ($1);
													}
												}
		| OCURV error CCURV						{;}
		;

%%

/* Função de erros */
int yyerror(const char *s){
	printf("Line %lld, col %lld: %s: %s\n", contaLinha, contaColuna-strlen(yytext), s, yytext);
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
        else if(strcmp(argv[1], "-t") == 0){
        	valorT = 1;
        	yyparse();
        }
    }
    else if(argv[1] == NULL){
            valorNull = 1;
            yyparse();
    }

    if(contaErros == 0 && valorT == 1){
    	printTree(root, 0);
    }
    clearTree(root);

    return 0;
}


