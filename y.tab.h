/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STRLIT = 258,
    REALLIT = 259,
    DECLIT = 260,
    BOOLLIT = 261,
    ID = 262,
    BOOL = 263,
    INT = 264,
    DOUBLE = 265,
    RESERVED = 266,
    CLASS = 267,
    DO = 268,
    DOTLENGTH = 269,
    ELSE = 270,
    IF = 271,
    PARSEINT = 272,
    PRINT = 273,
    PUBLIC = 274,
    RETURN = 275,
    STATIC = 276,
    STRING = 277,
    VOID = 278,
    WHILE = 279,
    OCURV = 280,
    CCURV = 281,
    OBRACE = 282,
    CBRACE = 283,
    OSQUARE = 284,
    CSQUARE = 285,
    AND = 286,
    OR = 287,
    LT = 288,
    GT = 289,
    EQ = 290,
    NEQ = 291,
    LEQ = 292,
    GEQ = 293,
    PLUS = 294,
    MINUS = 295,
    STAR = 296,
    DIV = 297,
    MOD = 298,
    NOT = 299,
    ASSIGN = 300,
    SEMI = 301,
    COMMA = 302,
    DOTLENGHT = 303,
    LOWER_THAN_ELSE = 304
  };
#endif
/* Tokens.  */
#define STRLIT 258
#define REALLIT 259
#define DECLIT 260
#define BOOLLIT 261
#define ID 262
#define BOOL 263
#define INT 264
#define DOUBLE 265
#define RESERVED 266
#define CLASS 267
#define DO 268
#define DOTLENGTH 269
#define ELSE 270
#define IF 271
#define PARSEINT 272
#define PRINT 273
#define PUBLIC 274
#define RETURN 275
#define STATIC 276
#define STRING 277
#define VOID 278
#define WHILE 279
#define OCURV 280
#define CCURV 281
#define OBRACE 282
#define CBRACE 283
#define OSQUARE 284
#define CSQUARE 285
#define AND 286
#define OR 287
#define LT 288
#define GT 289
#define EQ 290
#define NEQ 291
#define LEQ 292
#define GEQ 293
#define PLUS 294
#define MINUS 295
#define STAR 296
#define DIV 297
#define MOD 298
#define NOT 299
#define ASSIGN 300
#define SEMI 301
#define COMMA 302
#define DOTLENGHT 303
#define LOWER_THAN_ELSE 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 36 "jac.y" /* yacc.c:1909  */

    char* val;
    struct node* no;

#line 157 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
