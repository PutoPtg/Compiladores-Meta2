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
     STRLIT = 258,
     REALLIT = 259,
     DECLIT = 260,
     RESERVED = 261,
     BOOL = 262,
     BOOLLIT = 263,
     CLASS = 264,
     DO = 265,
     DOTLENGTH = 266,
     DOUBLE = 267,
     ELSE = 268,
     IF = 269,
     INT = 270,
     PARSEINT = 271,
     PRINT = 272,
     PUBLIC = 273,
     RETURN = 274,
     STATIC = 275,
     STRING = 276,
     VOID = 277,
     WHILE = 278,
     OCURV = 279,
     CCURV = 280,
     OBRACE = 281,
     CBRACE = 282,
     OSQUARE = 283,
     CSQUARE = 284,
     AND = 285,
     OR = 286,
     LT = 287,
     GT = 288,
     EQ = 289,
     NEQ = 290,
     LEQ = 291,
     GEQ = 292,
     PLUS = 293,
     MINUS = 294,
     STAR = 295,
     DIV = 296,
     MOD = 297,
     NOT = 298,
     ASSIGN = 299,
     SEMI = 300,
     COMMA = 301,
     ID = 302,
     DOTLENGHT = 303
   };
#endif
/* Tokens.  */
#define STRLIT 258
#define REALLIT 259
#define DECLIT 260
#define RESERVED 261
#define BOOL 262
#define BOOLLIT 263
#define CLASS 264
#define DO 265
#define DOTLENGTH 266
#define DOUBLE 267
#define ELSE 268
#define IF 269
#define INT 270
#define PARSEINT 271
#define PRINT 272
#define PUBLIC 273
#define RETURN 274
#define STATIC 275
#define STRING 276
#define VOID 277
#define WHILE 278
#define OCURV 279
#define CCURV 280
#define OBRACE 281
#define CBRACE 282
#define OSQUARE 283
#define CSQUARE 284
#define AND 285
#define OR 286
#define LT 287
#define GT 288
#define EQ 289
#define NEQ 290
#define LEQ 291
#define GEQ 292
#define PLUS 293
#define MINUS 294
#define STAR 295
#define DIV 296
#define MOD 297
#define NOT 298
#define ASSIGN 299
#define SEMI 300
#define COMMA 301
#define ID 302
#define DOTLENGHT 303




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

