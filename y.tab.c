/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 10 "jac.y"

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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 38 "jac.y"
{
    char* val;
    struct node* no;
}
/* Line 193 of yacc.c.  */
#line 227 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 240 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   389

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNRULES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    14,    16,    18,    20,    23,    26,
      29,    35,    42,    45,    48,    52,    57,    63,    68,    74,
      79,    82,    86,    88,    90,    93,    96,    98,   101,   105,
     110,   114,   119,   124,   127,   131,   133,   135,   137,   140,
     144,   150,   158,   164,   172,   178,   184,   186,   189,   192,
     195,   198,   202,   205,   207,   210,   214,   218,   223,   229,
     234,   237,   241,   249,   254,   256,   258,   260,   262,   266,
     270,   274,   278,   282,   286,   290,   294,   298,   302,   306,
     310,   314,   317,   320,   323,   325,   328,   332,   334,   336,
     338
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    13,     8,    28,    29,    -1,    13,     8,
      28,    52,    29,    -1,    53,    -1,    55,    -1,    47,    -1,
      52,    53,    -1,    52,    55,    -1,    52,    47,    -1,    20,
      22,    64,     8,    47,    -1,    20,    22,    64,     8,    54,
      47,    -1,     1,    47,    -1,    48,     8,    -1,    54,    48,
       8,    -1,    20,    22,    56,    57,    -1,    64,     8,    26,
      59,    27,    -1,    64,     8,    26,    27,    -1,    24,     8,
      26,    59,    27,    -1,    24,     8,    26,    27,    -1,    28,
      29,    -1,    28,    58,    29,    -1,    62,    -1,    65,    -1,
      58,    62,    -1,    58,    65,    -1,    60,    -1,    64,     8,
      -1,    64,     8,    61,    -1,    23,    30,    31,     8,    -1,
      48,    64,     8,    -1,    61,    48,    64,     8,    -1,    64,
       8,    63,    47,    -1,    48,     8,    -1,    63,    48,     8,
      -1,     9,    -1,    10,    -1,    11,    -1,    28,    29,    -1,
      28,    66,    29,    -1,    17,    26,    71,    27,    65,    -1,
      17,    26,    71,    27,    65,    16,    65,    -1,    25,    26,
      71,    27,    65,    -1,    14,    65,    25,    26,    71,    27,
      47,    -1,    19,    26,    71,    27,    47,    -1,    19,    26,
       4,    27,    47,    -1,    47,    -1,    67,    47,    -1,    68,
      47,    -1,    70,    47,    -1,    21,    47,    -1,    21,    71,
      47,    -1,     1,    47,    -1,    65,    -1,    66,    65,    -1,
       8,    46,    71,    -1,     8,    26,    27,    -1,     8,    26,
      71,    27,    -1,     8,    26,    71,    69,    27,    -1,     8,
      26,     1,    27,    -1,    48,    71,    -1,    69,    48,    71,
      -1,    18,    26,     8,    30,    71,    31,    27,    -1,    18,
      26,     1,    27,    -1,    67,    -1,    72,    -1,    68,    -1,
      70,    -1,    72,    32,    72,    -1,    72,    33,    72,    -1,
      72,    36,    72,    -1,    72,    39,    72,    -1,    72,    35,
      72,    -1,    72,    38,    72,    -1,    72,    34,    72,    -1,
      72,    37,    72,    -1,    72,    40,    72,    -1,    72,    41,
      72,    -1,    72,    42,    72,    -1,    72,    43,    72,    -1,
      72,    44,    72,    -1,    40,    72,    -1,    41,    72,    -1,
      45,    72,    -1,     8,    -1,     8,    15,    -1,    26,    71,
      27,    -1,     7,    -1,     6,    -1,     5,    -1,    26,     1,
      27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   118,   129,   135,   141,   142,   149,   156,
     162,   169,   178,   181,   186,   199,   214,   224,   231,   241,
     254,   255,   262,   268,   273,   280,   293,   305,   312,   320,
     329,   336,   349,   359,   367,   381,   386,   391,   408,   409,
     414,   421,   429,   436,   443,   449,   456,   457,   462,   463,
     468,   469,   474,   477,   483,   497,   510,   515,   521,   528,
     531,   532,   539,   547,   562,   563,   566,   571,   577,   584,
     591,   598,   605,   612,   619,   626,   633,   640,   647,   654,
     661,   668,   674,   680,   686,   691,   696,   701,   706,   711,
     716
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRECEDENCE", "STRLIT", "REALLIT",
  "DECLIT", "BOOLLIT", "ID", "BOOL", "INT", "DOUBLE", "RESERVED", "CLASS",
  "DO", "DOTLENGTH", "ELSE", "IF", "PARSEINT", "PRINT", "PUBLIC", "RETURN",
  "STATIC", "STRING", "VOID", "WHILE", "OCURV", "CCURV", "OBRACE",
  "CBRACE", "OSQUARE", "CSQUARE", "AND", "OR", "LT", "GT", "EQ", "NEQ",
  "LEQ", "GEQ", "PLUS", "MINUS", "STAR", "DIV", "MOD", "NOT", "ASSIGN",
  "SEMI", "COMMA", "LOWER_THAN_ELSE", "$accept", "Program",
  "InitDeclaration", "FieldDecl", "CommaID", "MethodDecl", "MethodHeader",
  "MethodBody", "MethodParams", "FormalParams", "ParamDecl", "CommaTypeID",
  "VarDecl", "VarBody", "Type", "Statement", "StatementList", "Assignment",
  "MethodInvocation", "CommaExpr", "ParseArgs", "Expr", "ExprAux", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      53,    53,    53,    54,    54,    55,    56,    56,    56,    56,
      57,    57,    58,    58,    58,    58,    59,    60,    60,    60,
      61,    61,    62,    63,    63,    64,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    66,    66,    67,    68,    68,    68,    68,
      69,    69,    70,    70,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     1,     1,     1,     2,     2,     2,
       5,     6,     2,     2,     3,     4,     5,     4,     5,     4,
       2,     3,     1,     1,     2,     2,     1,     2,     3,     4,
       3,     4,     4,     2,     3,     1,     1,     1,     2,     3,
       5,     7,     5,     7,     5,     5,     1,     2,     2,     2,
       2,     3,     2,     1,     2,     3,     3,     4,     5,     4,
       2,     3,     7,     4,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     1,     2,     3,     1,     1,     1,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     2,     6,
       0,     4,     5,    12,     0,     3,     9,     7,     8,    35,
      36,    37,     0,     0,     0,     0,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
      46,     0,    22,     0,    23,     0,     0,     0,     0,    10,
       0,     0,     0,    19,     0,    26,     0,    52,     0,     0,
       0,     0,     0,     0,    89,    88,    87,    84,     0,     0,
       0,     0,    50,    64,    66,    67,     0,    65,     0,    38,
      53,     0,    21,    24,    25,     0,    47,    48,    49,    17,
       0,    13,    11,     0,     0,    18,    27,     0,    56,     0,
      55,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      84,    81,    82,    83,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      54,     0,     0,    16,    14,     0,     0,    28,    59,    57,
       0,     0,     0,     0,    63,     0,     0,     0,    90,    86,
      68,    69,    74,    72,    70,    75,    73,    71,    76,    77,
      78,    79,    80,     0,    33,    32,     0,    29,     0,     0,
      60,    58,     0,     0,    40,     0,    45,    44,    42,    34,
      30,     0,    61,     0,     0,     0,    31,    43,    41,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    10,    11,    51,    12,    23,    27,    41,    54,
      55,   137,    42,   132,    43,    44,    81,    73,    74,   141,
      75,    76,    77
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -44
static const yytype_int16 yypact[] =
{
      -3,    10,    35,    13,   -44,    19,     0,    32,   -44,   -44,
      20,   -44,   -44,   -44,    88,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,    62,    49,   106,    66,   164,   -44,    12,    84,
      68,   -23,   108,    70,    94,    95,   261,    97,    44,   -44,
     -44,   187,   -44,   116,   -44,    81,    85,    87,   134,   -44,
     127,   -43,   111,   -44,   115,   -44,   141,   -44,   217,   286,
     126,   286,    36,   270,   -44,   -44,   -44,    -4,   245,   311,
     311,   311,   -44,   -44,   -44,   -44,   105,   306,   286,   -44,
     -44,   212,   -44,   -44,   -44,   114,   -44,   -44,   -44,   -44,
     129,   -44,   -44,   145,   123,   -44,   118,   136,   -44,     3,
     -44,   142,   140,   143,   139,   149,   150,   -44,   152,   153,
      38,   -44,   -44,   -44,   -44,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   157,   -44,
     -44,   178,    58,   -44,   -44,   179,    65,   146,   -44,   -44,
     286,    23,   286,   108,   -44,   286,   144,   155,   -44,   -44,
     334,   323,    60,    60,   345,   345,    60,    60,   104,   104,
     -44,   -44,   -44,   108,   -44,   -44,   182,   -44,   191,    65,
     -44,   -44,   286,   173,   193,   172,   -44,   -44,   -44,   -44,
     -44,   199,   -44,   163,   108,   190,   -44,   -44,   -44,   -44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -44,   -44,   -44,   204,   -44,   209,   -44,   -44,   -44,   180,
     -44,   -44,   186,   -44,    -5,   -13,   -44,   -26,   -25,   -44,
     -24,   -32,   -37
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      45,    46,    47,    58,    92,    93,    45,    46,    47,    24,
       1,   107,    45,    46,    47,    45,    46,    47,     3,    60,
       6,     6,    58,    59,    56,    80,    99,   100,    84,   102,
     139,   106,   111,   112,   113,     4,   109,   103,    48,     7,
       7,     5,    59,    56,   104,    30,   128,    13,     8,    15,
     171,   140,    31,   107,    14,    45,    46,    47,    32,    49,
      50,    33,    34,    35,    58,    36,     9,    16,   130,    37,
      25,   172,    38,    79,    19,    20,    21,    26,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    40,    29,    19,    20,    21,    61,    19,    20,    21,
     123,   124,   125,   126,   127,   165,   166,    52,   170,    30,
     173,    53,    22,   175,    28,    57,    31,    45,    46,    47,
      62,    63,    32,    78,    85,    33,    34,    35,    86,    36,
     174,   168,    87,    37,    88,    91,    38,    45,    46,    47,
     182,    94,    95,    19,    20,    21,   125,   126,   127,    96,
     178,   101,   114,   134,   135,    40,   133,    52,    45,    46,
      47,    89,   131,   138,   181,    30,   136,   143,   142,   145,
     144,   188,    31,    19,    20,    21,   146,   147,    32,   148,
     149,    33,    34,    35,   163,    36,   164,   167,    30,    37,
     179,   176,    38,    39,   169,    31,    19,    20,    21,   180,
     183,    32,   177,   185,    33,    34,    35,   186,    36,   184,
     187,    40,    37,    30,    17,    38,    82,   189,    97,    18,
      31,     0,    64,    65,    66,    67,    32,    83,    90,    33,
      34,    35,     0,    36,    40,    34,     0,    37,     0,     0,
      38,   129,     0,    68,    98,     0,   108,     0,     0,     0,
      64,    65,    66,    67,     0,     0,     0,    69,    70,    40,
       0,     0,    71,    34,     0,     0,    64,    65,    66,    67,
       0,    68,     0,     0,   105,    64,    65,    66,    67,    34,
       0,     0,     0,     0,     0,    69,    70,    68,    34,     0,
      71,    64,    65,    66,    67,     0,    68,     0,     0,     0,
       0,    69,    70,     0,    34,     0,    71,     0,    72,     0,
      69,    70,    68,     0,     0,    71,    64,    65,    66,   110,
       0,     0,     0,     0,     0,     0,    69,    70,     0,    34,
       0,    71,     0,     0,     0,     0,     0,    68,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,    69,    70,     0,     0,   115,    71,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   117,
     118,     0,     0,   121,   122,   123,   124,   125,   126,   127
};

static const yytype_int16 yycheck[] =
{
      26,    26,    26,    26,    47,    48,    32,    32,    32,    14,
      13,    15,    38,    38,    38,    41,    41,    41,     8,    32,
       1,     1,    26,    46,    29,    38,    58,    59,    41,    61,
      27,    63,    69,    70,    71,     0,    68,     1,    26,    20,
      20,    28,    46,    48,     8,     1,    78,    47,    29,    29,
      27,    48,     8,    15,    22,    81,    81,    81,    14,    47,
      48,    17,    18,    19,    26,    21,    47,    47,    81,    25,
       8,    48,    28,    29,     9,    10,    11,    28,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,    47,    26,     9,    10,    11,    26,     9,    10,    11,
      40,    41,    42,    43,    44,    47,    48,    23,   140,     1,
     142,    27,    24,   145,     8,    47,     8,   143,   143,   143,
      26,    26,    14,    26,     8,    17,    18,    19,    47,    21,
     143,   136,    47,    25,    47,     8,    28,   163,   163,   163,
     172,    30,    27,     9,    10,    11,    42,    43,    44,     8,
     163,    25,    47,     8,    31,    47,    27,    23,   184,   184,
     184,    27,    48,    27,   169,     1,    48,    27,    26,    30,
      27,   184,     8,     9,    10,    11,    27,    27,    14,    27,
      27,    17,    18,    19,    27,    21,     8,     8,     1,    25,
       8,    47,    28,    29,    48,     8,     9,    10,    11,     8,
      27,    14,    47,    31,    17,    18,    19,     8,    21,    16,
      47,    47,    25,     1,    10,    28,    29,    27,     1,    10,
       8,    -1,     5,     6,     7,     8,    14,    41,    48,    17,
      18,    19,    -1,    21,    47,    18,    -1,    25,    -1,    -1,
      28,    29,    -1,    26,    27,    -1,     1,    -1,    -1,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    40,    41,    47,
      -1,    -1,    45,    18,    -1,    -1,     5,     6,     7,     8,
      -1,    26,    -1,    -1,     4,     5,     6,     7,     8,    18,
      -1,    -1,    -1,    -1,    -1,    40,    41,    26,    18,    -1,
      45,     5,     6,     7,     8,    -1,    26,    -1,    -1,    -1,
      -1,    40,    41,    -1,    18,    -1,    45,    -1,    47,    -1,
      40,    41,    26,    -1,    -1,    45,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    18,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    26,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    40,    41,    -1,    -1,    32,    45,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    34,
      35,    -1,    -1,    38,    39,    40,    41,    42,    43,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    51,     8,     0,    28,     1,    20,    29,    47,
      52,    53,    55,    47,    22,    29,    47,    53,    55,     9,
      10,    11,    24,    56,    64,     8,    28,    57,     8,    26,
       1,     8,    14,    17,    18,    19,    21,    25,    28,    29,
      47,    58,    62,    64,    65,    67,    68,    70,    26,    47,
      48,    54,    23,    27,    59,    60,    64,    47,    26,    46,
      65,    26,    26,    26,     5,     6,     7,     8,    26,    40,
      41,    45,    47,    67,    68,    70,    71,    72,    26,    29,
      65,    66,    29,    62,    65,     8,    47,    47,    47,    27,
      59,     8,    47,    48,    30,    27,     8,     1,    27,    71,
      71,    25,    71,     1,     8,     4,    71,    15,     1,    71,
       8,    72,    72,    72,    47,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    71,    29,
      65,    48,    63,    27,     8,    31,    48,    61,    27,    27,
      48,    69,    26,    27,    27,    30,    27,    27,    27,    27,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    27,     8,    47,    48,     8,    64,    48,
      71,    27,    48,    71,    65,    71,    47,    47,    65,     8,
       8,    64,    71,    27,    16,    31,     8,    47,    65,    27
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 108 "jac.y"
    {
									if(contaErros == 0 && valorT == 1){
										(yyval.no) = createNode(OTHER_node ,"Program", NULL);
										aux = createNode(ID_node,"Id",(yyvsp[(2) - (4)].val));
										addChild((yyval.no),aux);
										addBrother(aux, aux2);
										root = (yyval.no);
									}

								}
    break;

  case 3:
#line 118 "jac.y"
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node ,"Program", NULL);
															aux = createNode(ID_node,"Id",(yyvsp[(2) - (5)].val));
															addChild((yyval.no), aux);
															addBrother(aux,(yyvsp[(4) - (5)].no));
															root = (yyval.no);
														}
													}
    break;

  case 4:
#line 129 "jac.y"
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "FieldDecl", NULL);
														addChild((yyval.no),(yyvsp[(1) - (1)].no));
													}
												}
    break;

  case 5:
#line 135 "jac.y"
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "MethodDecl", NULL);
														addChild((yyval.no),(yyvsp[(1) - (1)].no));
													}
												}
    break;

  case 6:
#line 141 "jac.y"
    {;}
    break;

  case 7:
#line 142 "jac.y"
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[(1) - (2)].no);
														aux = createNode(OTHER_node, "FieldDecl", NULL);
														addChild(aux,(yyvsp[(2) - (2)].no));
													}
												}
    break;

  case 8:
#line 149 "jac.y"
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[(1) - (2)].no);
														aux = createNode(OTHER_node, "MethodDecl", NULL);
														addChild(aux,(yyvsp[(2) - (2)].no));
													}
												}
    break;

  case 9:
#line 156 "jac.y"
    {;}
    break;

  case 10:
#line 162 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[(3) - (5)].no);
															aux = createNode(ID_node, "Id", (yyvsp[(4) - (5)].val));
															addBrother((yyval.no),aux);
														}
													}
    break;

  case 11:
#line 169 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[(3) - (6)].no);
															aux = createNode(ID_node, "Id", (yyvsp[(4) - (6)].val));
															addBrother((yyval.no),aux);
															addBrother(aux,(yyvsp[(5) - (6)].no));

														}
													}
    break;

  case 12:
#line 178 "jac.y"
    {;}
    break;

  case 13:
#line 181 "jac.y"
    {
											if (contaErros == 0 && valorT == 1){
												(yyval.no) = createNode(ID_node, "Id", (yyvsp[(2) - (2)].val));
										}
										}
    break;

  case 14:
#line 186 "jac.y"
    {
											if (contaErros == 0 && valorT == 1){
												(yyval.no) = (yyvsp[(1) - (3)].no);
												aux = createNode(ID_node, "Id", (yyvsp[(3) - (3)].val));
												addBrother((yyval.no),aux);
											}
										}
    break;

  case 15:
#line 199 "jac.y"
    {
															if (contaErros == 0 && valorT == 1){
																(yyval.no) = createNode(OTHER_node, "MethodHeader", NULL);
																aux2 = createNode(OTHER_node, "MethodBody", NULL);
																addChild((yyval.no),(yyvsp[(3) - (4)].no));
																addBrother((yyval.no), aux2);
																addChild(aux2,(yyvsp[(4) - (4)].no));
															}
														}
    break;

  case 16:
#line 214 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[(1) - (5)].no);
															aux = createNode(ID_node, "Id", (yyvsp[(2) - (5)].val));
															addBrother((yyval.no),aux);
															aux2 = createNode(OTHER_node, "MethodParams", NULL);
															addChild(aux2,(yyvsp[(4) - (5)].no));
															addBrother(aux,aux2);
														}
													}
    break;

  case 17:
#line 224 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[(1) - (4)].no);
															aux = createNode(ID_node, "Id", (yyvsp[(2) - (4)].val));
															addBrother((yyval.no),aux);
														}
													}
    break;

  case 18:
#line 231 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Void", NULL);
															aux = createNode(ID_node, "Id", (yyvsp[(2) - (5)].val));
															addBrother((yyval.no),aux);
															aux2 = createNode(OTHER_node, "MethodParams", NULL);
															addChild(aux2,(yyvsp[(4) - (5)].no));
															addBrother(aux,aux2);
														}
													}
    break;

  case 19:
#line 241 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Void", NULL);
															aux = createNode(ID_node, "Id", (yyvsp[(2) - (4)].val));
															addBrother((yyval.no),aux);
														}
													}
    break;

  case 20:
#line 254 "jac.y"
    {if (contaErros == 0 && valorT == 1){;}}
    break;

  case 21:
#line 255 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[(2) - (3)].no);
														}
													}
    break;

  case 22:
#line 262 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "VarDecl", NULL);
															addChild((yyval.no),(yyvsp[(1) - (1)].no));
														}
													}
    break;

  case 23:
#line 268 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[(1) - (1)].no);
														}
													}
    break;

  case 24:
#line 273 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[(1) - (2)].no);
															aux = createNode(OTHER_node, "VarDecl", NULL);
															addChild(aux,(yyvsp[(2) - (2)].no));
														}
													}
    break;

  case 25:
#line 280 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[(1) - (2)].no);
															addChild((yyval.no),(yyvsp[(2) - (2)].no));
														}
													}
    break;

  case 26:
#line 293 "jac.y"
    {
											if (contaErros == 0 && valorT == 1){
												(yyval.no) = createNode(OTHER_node, "ParamDecl", NULL);
												addChild((yyval.no),(yyvsp[(1) - (1)].no));
											}
										}
    break;

  case 27:
#line 305 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[(1) - (2)].no);
															aux = createNode(ID_node, "Id", (yyvsp[(2) - (2)].val));
															addBrother((yyval.no),aux);
														}
													}
    break;

  case 28:
#line 312 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[(1) - (3)].no);
															aux = createNode(ID_node, "Id", (yyvsp[(2) - (3)].val));
															addBrother((yyval.no),aux);
															addBrother(aux,(yyvsp[(3) - (3)].no));
														}
													}
    break;

  case 29:
#line 320 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "StringArray", NULL);
															aux = createNode(ID_node, "Id", (yyvsp[(4) - (4)].val));
															addBrother((yyval.no),aux);
														}
													}
    break;

  case 30:
#line 329 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[(2) - (3)].no);
															aux = createNode(ID_node, "Id", (yyvsp[(3) - (3)].val));
															addBrother((yyval.no),aux);
														}
													}
    break;

  case 31:
#line 336 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[(3) - (4)].no);
															aux = createNode(ID_node, "Id", (yyvsp[(4) - (4)].val));
															addBrother((yyval.no),aux);
														}
													}
    break;

  case 32:
#line 349 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[(1) - (4)].no);
															aux = createNode(ID_node, "Id", (yyvsp[(2) - (4)].val));
															addBrother((yyval.no),aux);
															addBrother(aux,(yyvsp[(3) - (4)].no));
														}
													}
    break;

  case 33:
#line 359 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "VarDecl", VAR);
														aux = createNode(ID_node, "Id", (yyvsp[(2) - (2)].val));
														addChild((yyval.no),aux);
													}
												}
    break;

  case 34:
#line 367 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[(1) - (3)].no);
															aux = createNode(ID_node, "Id", (yyvsp[(3) - (3)].val));
															addBrother((yyval.no),aux);

														}
													}
    break;

  case 35:
#line 381 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Bool", NULL);
														}
													}
    break;

  case 36:
#line 386 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Int", NULL);
														}
													}
    break;

  case 37:
#line 391 "jac.y"
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Double", NULL);
														}
													}
    break;

  case 38:
#line 408 "jac.y"
    {if (contaErros == 0 && valorT == 1){;}}
    break;

  case 39:
#line 409 "jac.y"
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[(2) - (3)].no);
																		}
																	}
    break;

  case 40:
#line 414 "jac.y"
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "If", NULL);
																			addChild((yyval.no),(yyvsp[(3) - (5)].no));
																			addBrother((yyvsp[(3) - (5)].no),(yyvsp[(5) - (5)].no));
																		}
																	}
    break;

  case 41:
#line 421 "jac.y"
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "If", NULL);
																			addChild((yyval.no),(yyvsp[(3) - (7)].no));
																			addBrother((yyvsp[(3) - (7)].no),(yyvsp[(5) - (7)].no));
																			addBrother((yyvsp[(5) - (7)].no),(yyvsp[(7) - (7)].no));
																		}
																	}
    break;

  case 42:
#line 429 "jac.y"
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "While", NULL);
																			addChild((yyval.no),(yyvsp[(3) - (5)].no));
																			addBrother((yyvsp[(3) - (5)].no),(yyvsp[(5) - (5)].no));
																		}
																	}
    break;

  case 43:
#line 436 "jac.y"
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "DoWhile", NULL);
																			addChild((yyval.no),(yyvsp[(2) - (7)].no));
																			addBrother((yyvsp[(2) - (7)].no),(yyvsp[(5) - (7)].no));
																		}
																	}
    break;

  case 44:
#line 443 "jac.y"
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "Print", NULL);
																			addChild((yyval.no),(yyvsp[(3) - (5)].no));
																		}
																	}
    break;

  case 45:
#line 449 "jac.y"
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "Print", NULL);
																			aux = createNode(STRLIT_node, "StrLit", (yyvsp[(3) - (5)].val));
																			addBrother((yyval.no),aux);
																		}
																	}
    break;

  case 46:
#line 456 "jac.y"
    {if (contaErros == 0 && valorT == 1){;}}
    break;

  case 47:
#line 457 "jac.y"
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[(1) - (2)].no);
																		}
																	}
    break;

  case 48:
#line 462 "jac.y"
    {if (contaErros == 0 && valorT == 1){;}}
    break;

  case 49:
#line 463 "jac.y"
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[(1) - (2)].no);
																		}
																	}
    break;

  case 50:
#line 468 "jac.y"
    {if (contaErros == 0 && valorT == 1){;}}
    break;

  case 51:
#line 469 "jac.y"
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[(2) - (3)].no);
																		}
																	}
    break;

  case 52:
#line 474 "jac.y"
    {;}
    break;

  case 53:
#line 477 "jac.y"
    {
												if (contaErros == 0 && valorT == 1){
													(yyval.no) = createNode(OTHER_node, "Block", NULL);
													addChild((yyval.no),(yyvsp[(1) - (1)].no));
												}
											}
    break;

  case 54:
#line 483 "jac.y"
    {
												if (contaErros == 0 && valorT == 1){
													(yyval.no) = (yyvsp[(1) - (2)].no);
													aux = createNode(OTHER_node, "Block", NULL);
													addChild(aux,(yyvsp[(2) - (2)].no));
													addBrother((yyval.no),(yyvsp[(2) - (2)].no));
												}
											}
    break;

  case 55:
#line 497 "jac.y"
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(OTHER_node, "Assign", NULL);
																	aux = createNode(ID_node, "Id", (yyvsp[(1) - (3)].val));
																	addChild((yyval.no),aux);
																	addBrother(aux,(yyvsp[(3) - (3)].no));
																}
															}
    break;

  case 56:
#line 510 "jac.y"
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(ID_node, "Id", (yyvsp[(1) - (3)].val));
																}
															}
    break;

  case 57:
#line 515 "jac.y"
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(ID_node, "Id", (yyvsp[(1) - (4)].val));
																	addBrother((yyval.no),(yyvsp[(3) - (4)].no));
																}
															}
    break;

  case 58:
#line 521 "jac.y"
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(ID_node, "Id", (yyvsp[(1) - (5)].val));
																	addBrother((yyval.no),(yyvsp[(3) - (5)].no));
																	addBrother((yyvsp[(3) - (5)].no),(yyvsp[(4) - (5)].no));
																}
															}
    break;

  case 59:
#line 528 "jac.y"
    {;}
    break;

  case 60:
#line 531 "jac.y"
    {if (contaErros == 0 && valorT == 1){;}}
    break;

  case 61:
#line 532 "jac.y"
    {if (contaErros == 0 && valorT == 1){;}}
    break;

  case 62:
#line 539 "jac.y"
    {
																	if (contaErros == 0 && valorT == 1){
																		(yyval.no) = createNode(OTHER_node, "ParseArgs", NULL);
																		aux = createNode(ID_node, "Id", (yyvsp[(3) - (7)].val));
																		addChild((yyval.no),aux);
																		addBrother(aux,(yyvsp[(5) - (7)].no));
																	}
																}
    break;

  case 63:
#line 547 "jac.y"
    {;}
    break;

  case 64:
#line 562 "jac.y"
    {;}
    break;

  case 65:
#line 563 "jac.y"
    {;}
    break;

  case 66:
#line 566 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[(1) - (1)].no);
													}
												}
    break;

  case 67:
#line 571 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[(1) - (1)].no);
													}

												}
    break;

  case 68:
#line 577 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "And", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 69:
#line 584 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Or", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 70:
#line 591 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Eq", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 71:
#line 598 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Geq", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 72:
#line 605 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Gt", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 73:
#line 612 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Leq", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 74:
#line 619 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Lt", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 75:
#line 626 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Neq", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 76:
#line 633 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Add", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 77:
#line 640 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Sub", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 78:
#line 647 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Mul", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 79:
#line 654 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Div", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 80:
#line 661 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Mod", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 81:
#line 668 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Plus",NULL);
														addChild((yyval.no), (yyvsp[(2) - (2)].no));
													}
												}
    break;

  case 82:
#line 674 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Minus",NULL);
														addChild((yyval.no), (yyvsp[(2) - (2)].no));
													}
												}
    break;

  case 83:
#line 680 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Not",NULL);
														addChild((yyval.no), (yyvsp[(2) - (2)].no));
													}
												}
    break;

  case 84:
#line 686 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(ID_node, "Id",(yyvsp[(1) - (1)].val));
													}
												}
    break;

  case 85:
#line 691 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(ID_node, "Id",(yyvsp[(1) - (2)].val));
													}
												}
    break;

  case 86:
#line 696 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[(2) - (3)].no);
													}
												}
    break;

  case 87:
#line 701 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(BOOLLIT_node, "BoolLit",(yyvsp[(1) - (1)].val));
													}
												}
    break;

  case 88:
#line 706 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(DECLIT_node, "DecLit",(yyvsp[(1) - (1)].val));
													}
												}
    break;

  case 89:
#line 711 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(REALLIT_node, "RealLit",(yyvsp[(1) - (1)].val));
													}
												}
    break;

  case 90:
#line 716 "jac.y"
    {;}
    break;


/* Line 1267 of yacc.c.  */
#line 2498 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 719 "jac.y"


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



