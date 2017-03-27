/***********************************************************************************
*Ficheiro "jac.l"
*Analisador Lexical da linguagem Ja - Sub-conjunto de Java
*Cadeira de Compiladores - 2017 - Licenciatura em Engenharia Informática
*Manuel Madeira Amado - 2006131282
*Xavier Silva - 2013153577
*Versão 1.8
************************************************************************************/

%X COMMENT
%X JAVACOMMENT
%X STR

%{
	#include <string.h>
	#include <stdlib.h>
	#include <ctype.h>
	#include <string.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "tree.h"
	void yyerror(const char *s);

	extern int valorL;
	extern int valor1;
	extern int valorNull;
	extern int valorT;
	long long int contaLinha = 1;
	long long int contaColuna = 1;
	long long int commentPos[2];
	long long int stringPos[2];

	long long int iTC = 0; //serve para salvar o início da coluna de um token

	int goodSTR = 0;
	char* auxStr;
%}

digito		[0-9]|[0-9]+[0-9_]*[0-9]+
reserved	"++"|"--"|Integer|System|abstract|continue|for|new|switch|assert|default|package|synchronized|goto|private|this|break|implements|protected|throw|byte|import|throws|case|enum|instanceof|transient|catch|extends|short|try|char|final|interface|finally|long|strictfp|volatile|const|float|native|super|null
seqEscape	\\n|\\t|\\r|\\\\|\\\"|\\f
seqEscInv	"\\."
expoente 	("e"|"E")("+"|"-")?{digito}+


%%

"/*"								{BEGIN COMMENT; iTC = contaColuna; commentPos[0] = contaLinha; commentPos[1] = contaColuna; contaColuna+=yyleng;}
<COMMENT><<EOF>>					{if(valorT==0){printf("Line %lld, col %lld: unterminated comment\n", commentPos[0], commentPos[1]);} contaColuna+=yyleng; BEGIN 0; } /*erro de unterminated comment*/
<COMMENT>"*/"						{contaColuna+=yyleng;BEGIN 0;} /*Comentário*/
<COMMENT>\n|\r|\r\n 				{contaLinha++;contaColuna=1;}	/*incrementa linha*/
<COMMENT>.							{contaColuna+=yyleng;}	/*incrementa coluna*/

"//"								{BEGIN JAVACOMMENT; iTC = contaColuna; contaColuna+=yyleng;}
<JAVACOMMENT>\n|\r|\r\n 			{contaLinha++;contaColuna=1;BEGIN 0;}
<JAVACOMMENT>.						{contaColuna+=yyleng;}

"\""								{BEGIN STR; iTC = contaColuna; stringPos[0] = contaLinha; stringPos[1] = contaColuna; contaColuna+=yyleng; goodSTR = 1; auxStr = yytext;}
<STR>{seqEscape}					{contaColuna+=yyleng;}
<STR>\\.|\\							{if(valorT==0){printf("Line %lld, col %lld: invalid escape sequence (%s)\n",contaLinha,contaColuna,yytext);} contaColuna+=yyleng; goodSTR=0;}
<STR><<EOF>>						{contaColuna+=yyleng; if(valorT==0){printf("Line %lld, col %lld: unterminated string literal\n",stringPos[0],stringPos[0]);} BEGIN 0;}
<STR>"\""							{contaColuna+=yyleng;if(valorL==1 && goodSTR==1){printf("STRLIT(%s)\n", auxStr);} if(valorNull==1 || valorT==1){yylval.val = (char*)calloc(1+yyleng,sizeof(char)); strncpy(yylval.val,auxStr,strlen(auxStr)); yytext = auxStr; return STRLIT;} BEGIN 0;}
<STR>\n|\r|\r\n 					{contaLinha++; contaColuna=1; if(valorT==0){printf("Line %lld, col %lld: unterminated string literal\n",stringPos[0],stringPos[1]);} BEGIN 0;}
<STR>.								{contaColuna+=yyleng;}

{digito}"."{digito}{expoente}		{if(valorL==1){printf("REALLIT(%s)\n", yytext);} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ yylval.val = (char*)calloc(1+yyleng,sizeof(char)); strncpy(yylval.val,yytext,yyleng); return REALLIT;}}
{digito}"."({digito}|{expoente})?	{if(valorL==1){printf("REALLIT(%s)\n", yytext);} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ yylval.val = (char*)calloc(1+yyleng,sizeof(char)); strncpy(yylval.val,yytext,yyleng); return REALLIT;}}
"."{digito}{expoente}?				{if(valorL==1){printf("REALLIT(%s)\n", yytext);} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ yylval.val = (char*)calloc(1+yyleng,sizeof(char)); strncpy(yylval.val,yytext,yyleng); return REALLIT;}}
{digito}{expoente}					{if(valorL==1){printf("REALLIT(%s)\n", yytext);} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ yylval.val = (char*)calloc(1+yyleng,sizeof(char)); strncpy(yylval.val,yytext,yyleng); return REALLIT;}}

0|[1-9]+|[1-9]+[0-9_]*[0-9]+		{if(valorL==1){printf("DECLIT(%s)\n", yytext);} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ yylval.val = (char*)calloc(1+yyleng,sizeof(char)); strncpy(yylval.val,yytext,yyleng); return DECLIT;}}

{reserved}							{if(valorL==1){printf("RESERVED(%s)\n", yytext);} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){return RESERVED;}}
"boolean"							{if(valorL==1){printf("BOOL\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){return BOOL;}}
"true"|"false"						{if(valorL==1){printf("BOOLLIT(%s)\n",yytext);} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ yylval.val = (char*)calloc(1+yyleng,sizeof(char)); strncpy(yylval.val,yytext,yyleng); return BOOLLIT;}}
"class"								{if(valorL==1){printf("CLASS\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){return CLASS;}}
"do"								{if(valorL==1){printf("DO\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){return DO;}}
".length"							{if(valorL==1){printf("DOTLENGTH\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){return DOTLENGTH;}}
"double"							{if(valorL==1){printf("DOUBLE\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){return DOUBLE;}}
"else"								{if(valorL==1){printf("ELSE\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return ELSE;}}
"if"								{if(valorL==1){printf("IF\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return IF;}}
"int"								{if(valorL==1){printf("INT\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){return INT;}}
"Integer.parseInt"					{if(valorL==1){printf("PARSEINT\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return PARSEINT;}}
"System.out.println"				{if(valorL==1){printf("PRINT\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return PRINT;}}
"public"							{if(valorL==1){printf("PUBLIC\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return PUBLIC;}}
"return"							{if(valorL==1){printf("RETURN\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return RETURN;}}
"static"							{if(valorL==1){printf("STATIC\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return STATIC;}}
"String"							{if(valorL==1){printf("STRING\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return STRING;}}
"void"								{if(valorL==1){printf("VOID\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return VOID;}}
"while"								{if(valorL==1){printf("WHILE\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return WHILE;}}
"("									{if(valorL==1){printf("OCURV\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return OCURV;}}
")"									{if(valorL==1){printf("CCURV\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return CCURV;}}
"{"									{if(valorL==1){printf("OBRACE\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){return OBRACE;}}
"}"									{if(valorL==1){printf("CBRACE\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return CBRACE;}}
"["									{if(valorL==1){printf("OSQUARE\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return OSQUARE;}}
"]"									{if(valorL==1){printf("CSQUARE\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return CSQUARE;}}
"&&"								{if(valorL==1){printf("AND\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return AND;}}
"||"								{if(valorL==1){printf("OR\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return OR;}}
"<"									{if(valorL==1){printf("LT\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return LT;}}
">"									{if(valorL==1){printf("GT\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return GT;}}
"=="								{if(valorL==1){printf("EQ\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return EQ;}}
"!="								{if(valorL==1){printf("NEQ\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return NEQ;}}
"<="								{if(valorL==1){printf("LEQ\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return LEQ;}}
">="								{if(valorL==1){printf("GEQ\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return GEQ;}}
"+"									{if(valorL==1){printf("PLUS\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return PLUS;}}
"-"									{if(valorL==1){printf("MINUS\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return MINUS;}}
"*"									{if(valorL==1){printf("STAR\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return STAR;}}
"/"									{if(valorL==1){printf("DIV\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return DIV;}}
"%"									{if(valorL==1){printf("MOD\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return MOD;}}
"!"									{if(valorL==1){printf("NOT\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return NOT;}}
"="									{if(valorL==1){printf("ASSIGN\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return ASSIGN;}}
";"									{if(valorL==1){printf("SEMI\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return SEMI;}}
","									{if(valorL==1){printf("COMMA\n");} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ return COMMA;}}
[a-zA-Z_$][a-zA-Z0-9_$]*			{if(valorL==1){printf("ID(%s)\n", yytext);} iTC = contaColuna; contaColuna+=yyleng; if(valorNull==1 || valorT==1){ yylval.val = (char*)calloc(1+yyleng,sizeof(char)); strncpy(yylval.val,yytext,yyleng); return ID;}}
"\n"								{contaLinha++; contaColuna=1; iTC = contaColuna;}
"\r"								{contaLinha++;contaColuna=1; iTC = contaColuna;}
"\r\n"								{contaLinha++;contaColuna=1; iTC = contaColuna;}
" "									{contaColuna+=1; iTC = contaColuna;}
"\t"								{contaColuna+=1; iTC = contaColuna;}
"\f"								{contaColuna+=1; iTC = contaColuna;}
.									{iTC = contaColuna; contaColuna++;if(valorT==0){printf("Line %lld, col %lld: illegal character (%s)\n",contaLinha,contaColuna-yyleng,yytext);} }


%%


int yywrap()
{
return 1;
}


