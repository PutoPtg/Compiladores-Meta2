/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PRECEDENCE = 258,
     STRLIT = 259,
     REALLIT = 260,
     DECLIT = 261,
     BOOLLIT = 262,
     ID = 263,
     BOOL = 264,
     INT = 265,
     DOUBLE = 266,
     RESERVED = 267,
     CLASS = 268,
     DO = 269,
     DOTLENGTH = 270,
     ELSE = 271,
     IF = 272,
     PARSEINT = 273,
     PRINT = 274,
     PUBLIC = 275,
     RETURN = 276,
     STATIC = 277,
     STRING = 278,
     VOID = 279,
     WHILE = 280,
     OCURV = 281,
     CCURV = 282,
     OBRACE = 283,
     CBRACE = 284,
     OSQUARE = 285,
     CSQUARE = 286,
     AND = 287,
     OR = 288,
     LT = 289,
     GT = 290,
     EQ = 291,
     NEQ = 292,
     LEQ = 293,
     GEQ = 294,
     PLUS = 295,
     MINUS = 296,
     STAR = 297,
     DIV = 298,
     MOD = 299,
     NOT = 300,
     ASSIGN = 301,
     SEMI = 302,
     COMMA = 303,
     LOWER_THAN_ELSE = 304
   };
#endif
/* Tokens.  */
#define PRECEDENCE 258
#define STRLIT 259
#define REALLIT 260
#define DECLIT 261
#define BOOLLIT 262
#define ID 263
#define BOOL 264
#define INT 265
#define DOUBLE 266
#define RESERVED 267
#define CLASS 268
#define DO 269
#define DOTLENGTH 270
#define ELSE 271
#define IF 272
#define PARSEINT 273
#define PRINT 274
#define PUBLIC 275
#define RETURN 276
#define STATIC 277
#define STRING 278
#define VOID 279
#define WHILE 280
#define OCURV 281
#define CCURV 282
#define OBRACE 283
#define CBRACE 284
#define OSQUARE 285
#define CSQUARE 286
#define AND 287
#define OR 288
#define LT 289
#define GT 290
#define EQ 291
#define NEQ 292
#define LEQ 293
#define GEQ 294
#define PLUS 295
#define MINUS 296
#define STAR 297
#define DIV 298
#define MOD 299
#define NOT 300
#define ASSIGN 301
#define SEMI 302
#define COMMA 303
#define LOWER_THAN_ELSE 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 38 "jac.y"
{
    char* val;
    struct node* no;
}
/* Line 1529 of yacc.c.  */
#line 152 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

