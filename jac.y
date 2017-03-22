/************************************************************************************
* Ficheiro "jac.y"																	*
* Analisador Sintático da linguagem Ja - Sub-conjunto de Java						*
* Cadeira de Compiladores - 2017 - Licenciatura em Engenharia Informática			*
* Manuel Madeira Amado - 2006131282													*
* Xavier Silva - 2013153577															*
* Versão 0.10																		*
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
	node* aux2;
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

%type <no> Program InitDeclaration FieldDecl CommaID MethodDecl MethodHeader MethodBody MethodParams FormalParams CommaTypeID VarDecl Type Statement Assignment MethodInvocation CommaExpr ParseArgs Expr ParamDecl

%%

/*********************************************************************
* Program → CLASS ID OBRACE { FieldDecl | MethodDecl | SEMI } CBRACE *
**********************************************************************/
Program: CLASS ID OBRACE CBRACE	{
									if(contaErros == 0){
										$$ = createNode(OTHER_node ,"Program", VAR);
										aux = createNode(ID_node,"Id",$2);
										addChild($$,aux);
										addBrother(aux, aux2);
										root = $$;
									}
			
								}
		| CLASS ID OBRACE InitDeclaration CBRACE	{
														if(contaErros == 0){
															$$ = createNode(OTHER_node ,"Program", VAR);
															aux = createNode(ID_node,"Id",$2);
															addChild($$, aux);
															addBrother(aux,$4);													
															root = $$;
														}
													}
		;

InitDeclaration: FieldDecl						{
													$$ = createNode(OTHER_node, "FieldDecl", VAR);			
													addChild($$,$1);
												}
			| MethodDecl						{
													$$ = createNode(OTHER_node, "MethodDecl", VAR);			
													addChild($$,$1);								
												}
			| SEMI								{;}		
			| InitDeclaration FieldDecl			{;}
			| InitDeclaration MethodDecl		{
													;
												}
			| InitDeclaration SEMI				{;}
			;

/*********************************************************************
* FieldDecl → PUBLIC STATIC Type ID { COMMA ID } SEMI				 *
*********************************************************************/
FieldDecl: PUBLIC STATIC Type ID SEMI				{if (contaErros == 0){;}}
			| PUBLIC STATIC Type ID CommaID SEMI	{if (contaErros == 0){;}}
			| error SEMI							{;}
			;

CommaID: COMMA ID 						{
											if (contaErros == 0){
												

											}
										}
			| CommaID COMMA ID 			{if (contaErros == 0){;}}
			;


/*********************************************************************
* MethodDecl → PUBLIC STATIC MethodHeader MethodBody				 *
*********************************************************************/
MethodDecl: PUBLIC STATIC MethodHeader MethodBody		{
															if (contaErros == 0){ 
																$$ = createNode(OTHER_node, "MethodHeader", VAR);
																aux2 = createNode(OTHER_node, "MethodBody", VAR);
																addChild($$,$3);
																addBrother($$, aux2);
																addChild(aux2,$4);
															}
														}
														;


/*********************************************************************
* MethodHeader → ( Type | VOID ) ID OCURV [ FormalParams ] CCURV	 *
*********************************************************************/
MethodHeader: Type ID OCURV FormalParams CCURV		{
														if (contaErros == 0){
															$$ = $1;
															aux = createNode(ID_node, "Id", $2);
															addBrother($$,aux);
															aux2 = createNode(OTHER_node, "MethodParams", VAR);
															addChild(aux2,$4);
															addBrother(aux,aux2);
														}
													}
			| Type ID OCURV CCURV					{
														if (contaErros == 0){
															$$ = $1;
															aux = createNode(ID_node, "Id", $2);
															addBrother($$,aux);
														}
													}
			| VOID ID OCURV FormalParams CCURV		{
														if (contaErros == 0){
															$$ = createNode(OTHER_node, "Void", VAR);
															aux = createNode(ID_node, "Id", $2);
															addBrother($$,aux);
															aux2 = createNode(OTHER_node, "MethodParams", VAR);
															addChild(aux2,$4);
															addBrother(aux,aux2);
														}
													}
			| VOID ID OCURV CCURV					{
														if (contaErros == 0){
															$$ = createNode(OTHER_node, "Void", VAR);
															aux = createNode(ID_node, "Id", $2);
															addBrother($$,aux);
														}
													}
			;


/*********************************************************************
* MethodBody → OBRACE { VarDecl | Statement } CBRACE				 *
*********************************************************************/
MethodBody: OBRACE CBRACE							{if (contaErros == 0){;}}
			| OBRACE MethodParams CBRACE			{
														if (contaErros == 0){
															$$ = $2;
														}
													}
			;

MethodParams: VarDecl								{
														if (contaErros == 0){
															$$ = createNode(OTHER_node, "VarDecl", VAR);
															addChild($$,$1);
														}
													}
			| Statement								{
														if (contaErros == 0){
															$$ = $1;
														}
													}
			| MethodParams VarDecl					{
														if (contaErros == 0){
															$$ = $1;
															addBrother($$,$2);
														}
													}
			| MethodParams Statement				{
														if (contaErros == 0){
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
											if (contaErros == 0){
												$$ = createNode(OTHER_node, "ParamDecl", VAR);
												addChild($$,$1);
											}
										}
			;

/*********************************************************************
* FormalParams → Type ID { COMMA Type ID }							 *
* FormalParams → STRING OSQUARE CSQUARE ID							 *
*********************************************************************/
ParamDecl:	Type ID 								{
														if (contaErros == 0){
															$$ = $1;
															aux = createNode(ID_node, "Id", $2);
															addBrother($$,aux);
														}
													}
			| Type ID CommaTypeID					{
														if (contaErros == 0){
															$$ = $1;
															aux = createNode(ID_node, "Id", $2);
															addBrother($$,aux);
															addBrother(aux,$3);
														}
													}
			| STRING OSQUARE CSQUARE ID 			{
														if (contaErros == 0){
															$$ = createNode(OTHER_node, "StringArray", VAR);
															aux = createNode(ID_node, "Id", $4);
															addBrother($$,aux);
														}
													}
			;

CommaTypeID: COMMA Type ID 							{
														if (contaErros == 0){
															$$ = $2;
															aux = createNode(ID_node, "Id", $3);
															addBrother($$,aux);
														}
													}
			| CommaTypeID COMMA Type ID 			{
														if (contaErros == 0){
															$$ = $3;
															aux = createNode(ID_node, "Id", $4);
															addBrother($$,aux);
														}
													}
			;


/*********************************************************************
* VarDecl → Type ID { COMMA ID } SEMI 								 *
*********************************************************************/
VarDecl:  Type ID SEMI 								{
														if (contaErros == 0){
															$$ = $1;
															aux = createNode(ID_node, "Id", $2);
															addBrother($$,aux);
														}
													}

		| Type ID CommaID SEMI						{
														if (contaErros == 0){
															$$ = $1;
															aux = createNode(ID_node, "Id", $2);
															addBrother($$,aux);
															addBrother(aux,$3);
														}	
													}
		;


/*********************************************************************
* Type → BOOL | INT | DOUBLE										 *
*********************************************************************/
Type: BOOL 											{
														if (contaErros == 0){
															$$ = createNode(OTHER_node, "Bool", VAR);
														}
													}
	| INT 											{
														if (contaErros == 0){
															$$ = createNode(OTHER_node, "Int", VAR);
														}
													}
	| DOUBLE 										{
														if (contaErros == 0){
															$$ = createNode(OTHER_node, "Double", VAR);
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
Statement: OBRACE CBRACE											{if (contaErros == 0){;}}
		| OBRACE Statement CBRACE									{
																		if (contaErros == 0){
																			$$ = $2;
																		}
																	}
		| IF OCURV Expr CCURV Statement %prec LOWER_THAN_ELSE 		{
																		if (contaErros == 0){
																			$$ = createNode(OTHER_node, "If", VAR);
																			addChild($$,$3);
																		}
																	}
		| IF OCURV Expr CCURV Statement ELSE Statement 				{
																		if (contaErros == 0){
																			$$ = createNode(OTHER_node, "If", VAR);
																			addChild($$,$3);
																			if($5 != NULL && strcmp($5->nodeTypeName,"Null") != 0){
																				if($5->right != NULL && strcmp($5->right->nodeTypeName,"Null")!=0)
	                                                                        	{
		                                                                            aux = createNode(OTHER_node, "Block", VAR);
		                                                                            addChild(aux, $5);
		                                                                            addChild($$, aux);
	                                                                        	}
	                                                                        	else
		                                                                        {
		                                                                            addChild($$, $5);
		                                                                        }
		                                                                        //TODO acabar isto...
																			}
																		}
																	}
		| WHILE OCURV Expr CCURV Statement 							{if (contaErros == 0){;}}
		| DO Statement WHILE OCURV Expr CCURV SEMI 					{if (contaErros == 0){;}}
		| PRINT OCURV Expr CCURV SEMI 								{
																		if (contaErros == 0){
																			$$ = createNode(OTHER_node, "Print", VAR);
																			addChild($$,$3);
																		}
																	}
		| PRINT OCURV STRLIT CCURV SEMI 							{
																		if (contaErros == 0){
																			$$ = createNode(OTHER_node, "Print", VAR);
																		}
																	}
		| SEMI														{if (contaErros == 0){;}}
		| Assignment SEMI											{
																		if (contaErros == 0){
																			$$ = $1;
																		}
																	}
		| MethodInvocation SEMI										{if (contaErros == 0){;}}
		| ParseArgs SEMI											{
																		if (contaErros == 0){
																			$$ = $1;
																		}
																	}
		| RETURN SEMI												{if (contaErros == 0){;}}
		| RETURN Expr SEMI											{
																		if (contaErros == 0){
																			$$ = $2;
																		}
																	}
		| error SEMI												{;}
		;


/*********************************************************************
* Assignment → ID ASSIGN Expr										 *
*********************************************************************/
Assignment: ID ASSIGN Expr 									{
																if (contaErros == 0){
																	$$ = createNode(OTHER_node, "Assign", VAR);
																	aux = createNode(ID_node, "Id", $1);
																	addChild($$,aux);
																	addBrother(aux,$3);
																}
															}


/*********************************************************************
* MethodInvocation → ID OCURV [ Expr { COMMA Expr } ] CCURV 		 *
*********************************************************************/
MethodInvocation: ID OCURV CCURV							{if (contaErros == 0){;}}
				| ID OCURV Expr CCURV						{if (contaErros == 0){;}}
				| ID OCURV Expr CommaExpr CCURV				{if (contaErros == 0){;}}
				| ID OCURV error CCURV						{;}
				;

CommaExpr: COMMA Expr 									{if (contaErros == 0){;}}
		| CommaExpr COMMA Expr 							{if (contaErros == 0){;}}
		;


/*********************************************************************
* ParseArgs → PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV			 *
*********************************************************************/
ParseArgs: PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV			{
																	if (contaErros == 0){
																		$$ = createNode(OTHER_node, "ParseArgs", VAR);
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
													if (contaErros == 0){
														

													}
												}
		| MethodInvocation						{if (contaErros == 0){;}}
		| ParseArgs								{
													if (contaErros == 0){
														$$ = $1;
													}

												}
		| Expr AND Expr 						{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "And", VAR);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| Expr OR Expr 							{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Or", VAR);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| Expr EQ Expr 							{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Eq", VAR);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| Expr GEQ Expr 						{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Geq", VAR);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| Expr GT Expr 							{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Gt", VAR);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| Expr LEQ Expr 						{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Leq", VAR);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| Expr LT Expr 							{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Lt", VAR);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| Expr NEQ Expr 						{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Neq", VAR);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| Expr PLUS Expr 						{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Add", VAR);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| Expr MINUS Expr 						{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Sub", VAR);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| Expr STAR Expr 						{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Mul", VAR);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| Expr DIV Expr 						{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Div", VAR);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| Expr MOD Expr 						{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Mod", VAR);
														addChild($$,$1);
														addChild($$,$3);
													}
												}
		| PLUS Expr  							{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Plus",VAR); 
														addChild($$, $2);
													}
												}
		| MINUS Expr  							{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Minus",VAR); 
														addChild($$, $2);
													}
												}
		| NOT Expr  							{
													if (contaErros == 0){
														$$ = createNode(OTHER_node, "Not",VAR); 
														addChild($$, $2);
													}
												}
		| ID 									{
													if (contaErros == 0){
														$$ = createNode(ID_node, "Id",$1);
													}
												}
		| ID DOTLENGTH 							{
													if (contaErros == 0){
														$$ = createNode(ID_node, "Id",$1);
													}
												}
		| OCURV Expr CCURV 						{
													if (contaErros == 0){
														$$ = $2;
													}
												}
		| BOOLLIT 								{
													if (contaErros == 0){
														$$ = createNode(BOOLLIT_node, "BoolLit",$1);
													}
												}
		| DECLIT 								{
													if (contaErros == 0){
														$$ = createNode(DECLIT_node, "DecLit",$1);
													}
												}
		| REALLIT								{
													if (contaErros == 0){
														$$ = createNode(REALLIT_node, "RealLit",$1);
													}
												}
		| OCURV error CCURV						{;}
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
    	printTree(root, 0);
    }
    clearTree(root);

    return 0;
}


