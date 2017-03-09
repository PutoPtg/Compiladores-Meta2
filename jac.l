/***********************************************************************************
*Ficheiro "jac.l"
*Analisador Lexical da linguagem Ja - Sub-conjunto de Java
*Cadeira de Compiladores - 2017 - Licenciatura em Engenharia Informática
*Manuel Madeira Amado - 2006131282
*Xavier Silva - 2013153577
*Versão 1.0
************************************************************************************/

%X COMMENT
%X JAVACOMMENT
%X STR

%{
	#include <string.h>
	#include <stdlib.h>
	#include <stdio.h>

	int valorL = 0;
	long long int contaLinha = 1;
	long long int contaColuna = 1;
	long long int commentPos[2];
	long long int stringPos[2];
	int goodSTR = 0;
	char* auxStr;
%}

digito		[0-9]|[0-9]+[0-9_]*[0-9]+
reserved	"++"|"--"|Integer|System|abstract|continue|for|new|switch|assert|default|package|synchronized|goto|private|this|break|implements|protected|throw|byte|import|throws|case|enum|instanceof|transient|catch|extends|short|try|char|final|interface|finally|long|strictfp|volatile|const|float|native|super|null
seqEscape	\\n|\\t|\\r|\\\\|\\\"|\\f
seqEscInv	"\\."
expoente 	("e"|"E")("+"|"-")?{digito}+


%%

"/*"								{BEGIN COMMENT; commentPos[0] = contaLinha; commentPos[1] = contaColuna; contaColuna+=yyleng;}
<COMMENT><<EOF>>					{printf("Line %lld, col %lld: unterminated comment\n", commentPos[0], commentPos[1]); contaColuna+=yyleng; BEGIN 0; } /*erro de unterminated comment*/
<COMMENT>"*/"						{contaColuna+=yyleng;BEGIN 0;} /*Comentário*/
<COMMENT>\n|\r|\r\n 				{contaLinha++;contaColuna=1;}	/*incrementa linha*/
<COMMENT>.							{contaColuna+=yyleng;}	/*incrementa coluna*/

"//"								{BEGIN JAVACOMMENT; contaColuna+=yyleng;}
<JAVACOMMENT>\n|\r|\r\n 			{contaLinha++;contaColuna=1;BEGIN 0;}
<JAVACOMMENT>.						{contaColuna+=yyleng;}

"\""								{BEGIN STR; stringPos[0] = contaLinha; stringPos[1] = contaColuna; contaColuna+=yyleng; goodSTR = 1; auxStr = yytext;}
<STR>{seqEscape}					{contaColuna+=yyleng;}
<STR>\\.|\\							{printf("Line %lld, col %lld: invalid escape sequence (%s)\n",contaLinha,contaColuna,yytext);contaColuna+=yyleng; goodSTR=0;}
<STR><<EOF>>						{contaColuna+=yyleng;printf("Line %lld, col %lld: unterminated string literal\n",stringPos[0],stringPos[0]);BEGIN 0;}
<STR>"\""							{contaColuna+=yyleng;if(valorL==1 && goodSTR==1)printf("STRLIT(%s)\n", auxStr);BEGIN 0;}
<STR>\n|\r|\r\n 					{contaLinha++; contaColuna=1;printf("Line %lld, col %lld: unterminated string literal\n",stringPos[0],stringPos[1]);BEGIN 0;}
<STR>.								{contaColuna+=yyleng;}

{digito}"."{digito}{expoente}		{if(valorL==1){printf("REALLIT(%s)\n", yytext);}contaColuna+=yyleng;}
{digito}"."({digito}|{expoente})?	{if(valorL==1){printf("REALLIT(%s)\n", yytext);}contaColuna+=yyleng;}
"."{digito}{expoente}?				{if(valorL==1){printf("REALLIT(%s)\n", yytext);}contaColuna+=yyleng;}
{digito}{expoente}					{if(valorL==1){printf("REALLIT(%s)\n", yytext);}contaColuna+=yyleng;}

0|[1-9]+|[1-9]+[0-9_]*[0-9]+		{if(valorL==1){printf("DECLIT(%s)\n", yytext);}contaColuna+=yyleng;}

{reserved}							{if(valorL==1){printf("RESERVED(%s)\n", yytext);}contaColuna+=yyleng;}
"boolean"							{if(valorL==1){printf("BOOL\n");}contaColuna+=yyleng;}
"true"|"false"						{if(valorL==1){printf("BOOLLIT(%s)\n",yytext);}contaColuna+=yyleng;}
"class"								{if(valorL==1){printf("CLASS\n");}contaColuna+=yyleng;}
"do"								{if(valorL==1){printf("DO\n");}contaColuna+=yyleng;}
".length"							{if(valorL==1){printf("DOTLENGTH\n");}contaColuna+=yyleng;}
"double"							{if(valorL==1){printf("DOUBLE\n");}contaColuna+=yyleng;}
"else"								{if(valorL==1){printf("ELSE\n");}contaColuna+=yyleng;}
"if"								{if(valorL==1){printf("IF\n");}contaColuna+=yyleng;}
"int"								{if(valorL==1){printf("INT\n");}contaColuna+=yyleng;}
"Integer.parseInt"					{if(valorL==1){printf("PARSEINT\n");}contaColuna+=yyleng;}
"System.out.println"				{if(valorL==1){printf("PRINT\n");}contaColuna+=yyleng;}
"public"							{if(valorL==1){printf("PUBLIC\n");}contaColuna+=yyleng;}
"return"							{if(valorL==1){printf("RETURN\n");}contaColuna+=yyleng;}
"static"							{if(valorL==1){printf("STATIC\n");}contaColuna+=yyleng;}
"String"							{if(valorL==1){printf("STRING\n");}contaColuna+=yyleng;}
"void"								{if(valorL==1){printf("VOID\n");}contaColuna+=yyleng;}
"while"								{if(valorL==1){printf("WHILE\n");}contaColuna+=yyleng;}
"("									{if(valorL==1){printf("OCURV\n");}contaColuna+=yyleng;}
")"									{if(valorL==1){printf("CCURV\n");}contaColuna+=yyleng;}
"{"									{if(valorL==1){printf("OBRACE\n");}contaColuna+=yyleng;}
"}"									{if(valorL==1){printf("CBRACE\n");}contaColuna+=yyleng;}
"["									{if(valorL==1){printf("OSQUARE\n");}contaColuna+=yyleng;}
"]"									{if(valorL==1){printf("CSQUARE\n");}contaColuna+=yyleng;}
"&&"								{if(valorL==1){printf("AND\n");}contaColuna+=yyleng;}
"||"								{if(valorL==1){printf("OR\n");}contaColuna+=yyleng;}
"<"									{if(valorL==1){printf("LT\n");}contaColuna+=yyleng;}
">"									{if(valorL==1){printf("GT\n");}contaColuna+=yyleng;}
"=="								{if(valorL==1){printf("EQ\n");}contaColuna+=yyleng;}
"!="								{if(valorL==1){printf("NEQ\n");}contaColuna+=yyleng;}
"<="								{if(valorL==1){printf("LEQ\n");}contaColuna+=yyleng;}
">="								{if(valorL==1){printf("GEQ\n");}contaColuna+=yyleng;}
"+"									{if(valorL==1){printf("PLUS\n");}contaColuna+=yyleng;}
"-"									{if(valorL==1){printf("MINUS\n");}contaColuna+=yyleng;}
"*"									{if(valorL==1){printf("STAR\n");}contaColuna+=yyleng;}
"/"									{if(valorL==1){printf("DIV\n");}contaColuna+=yyleng;}
"%"									{if(valorL==1){printf("MOD\n");}contaColuna+=yyleng;}
"!"									{if(valorL==1){printf("NOT\n");}contaColuna+=yyleng;}
"="									{if(valorL==1){printf("ASSIGN\n");}contaColuna+=yyleng;}
";"									{if(valorL==1){printf("SEMI\n");}contaColuna+=yyleng;}
","									{if(valorL==1){printf("COMMA\n");}contaColuna+=yyleng;}
[a-zA-Z_$][a-zA-Z0-9_$]*			{if(valorL==1){printf("ID(%s)\n", yytext);}contaColuna+=yyleng;}
"\n"								{contaLinha++;contaColuna=1;}
"\r"								{contaLinha++;contaColuna=1;}
"\r\n"								{contaLinha++;contaColuna=1;}
" "									{contaColuna+=1;}
"\t"								{contaColuna+=1;}
"\f"								{contaColuna+=1;}
.									{printf("Line %lld, col %lld: illegal character (%s)\n",contaLinha,contaColuna,yytext);contaColuna++;}


%%
int main(int argc, char* argv[])
{
  if(argc>1){
  	if(strcmp(argv[1],"-l") == 0 || strcmp(argv[1],"-1") == 0)
  		valorL= 1;
  }
  yylex();
  return 0;
}
int yywrap()
{
return 1;
}
