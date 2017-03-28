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

	extern long long int iTC; //serve para salvar o início da coluna de um token

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
#line 40 "jac.y"
{
    char* val;
    struct node* no;
}
/* Line 193 of yacc.c.  */
#line 229 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 242 "y.tab.c"

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
#define YYLAST   495

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNRULES -- Number of states.  */
#define YYNSTATES  188

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
     234,   237,   241,   249,   254,   256,   258,   260,   264,   268,
     272,   276,   280,   284,   288,   292,   296,   300,   304,   308,
     312,   315,   318,   321,   323,   326,   330,   332,   334,   336
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    12,     7,    27,    28,    -1,    12,     7,
      27,    52,    28,    -1,    53,    -1,    55,    -1,    46,    -1,
      52,    53,    -1,    52,    55,    -1,    52,    46,    -1,    19,
      21,    64,     7,    46,    -1,    19,    21,    64,     7,    54,
      46,    -1,     1,    46,    -1,    47,     7,    -1,    54,    47,
       7,    -1,    19,    21,    56,    57,    -1,    64,     7,    25,
      59,    26,    -1,    64,     7,    25,    26,    -1,    23,     7,
      25,    59,    26,    -1,    23,     7,    25,    26,    -1,    27,
      28,    -1,    27,    58,    28,    -1,    62,    -1,    65,    -1,
      58,    62,    -1,    58,    65,    -1,    60,    -1,    64,     7,
      -1,    64,     7,    61,    -1,    22,    29,    30,     7,    -1,
      47,    64,     7,    -1,    61,    47,    64,     7,    -1,    64,
       7,    63,    46,    -1,    47,     7,    -1,    63,    47,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,    27,    28,    -1,
      27,    66,    28,    -1,    16,    25,    71,    26,    65,    -1,
      16,    25,    71,    26,    65,    15,    65,    -1,    24,    25,
      71,    26,    65,    -1,    13,    65,    24,    25,    71,    26,
      46,    -1,    18,    25,    71,    26,    46,    -1,    18,    25,
       3,    26,    46,    -1,    46,    -1,    67,    46,    -1,    68,
      46,    -1,    70,    46,    -1,    20,    46,    -1,    20,    71,
      46,    -1,     1,    46,    -1,    65,    -1,    66,    65,    -1,
       7,    45,    71,    -1,     7,    25,    26,    -1,     7,    25,
      71,    26,    -1,     7,    25,    71,    69,    26,    -1,     7,
      25,     1,    26,    -1,    47,    71,    -1,    69,    47,    71,
      -1,    17,    25,     7,    29,    71,    30,    26,    -1,    17,
      25,     1,    26,    -1,    67,    -1,    68,    -1,    70,    -1,
      71,    31,    71,    -1,    71,    32,    71,    -1,    71,    35,
      71,    -1,    71,    38,    71,    -1,    71,    34,    71,    -1,
      71,    37,    71,    -1,    71,    33,    71,    -1,    71,    36,
      71,    -1,    71,    39,    71,    -1,    71,    40,    71,    -1,
      71,    41,    71,    -1,    71,    42,    71,    -1,    71,    43,
      71,    -1,    39,    71,    -1,    40,    71,    -1,    44,    71,
      -1,     7,    -1,     7,    14,    -1,    25,    71,    26,    -1,
       6,    -1,     5,    -1,     4,    -1,    25,     1,    26,    -1
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
     531,   532,   539,   547,   561,   567,   572,   578,   585,   592,
     599,   606,   613,   620,   627,   634,   641,   648,   655,   662,
     669,   675,   681,   687,   692,   697,   702,   707,   712,   717
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRLIT", "REALLIT", "DECLIT", "BOOLLIT",
  "ID", "BOOL", "INT", "DOUBLE", "RESERVED", "CLASS", "DO", "DOTLENGTH",
  "ELSE", "IF", "PARSEINT", "PRINT", "PUBLIC", "RETURN", "STATIC",
  "STRING", "VOID", "WHILE", "OCURV", "CCURV", "OBRACE", "CBRACE",
  "OSQUARE", "CSQUARE", "AND", "OR", "LT", "GT", "EQ", "NEQ", "LEQ", "GEQ",
  "PLUS", "MINUS", "STAR", "DIV", "MOD", "NOT", "ASSIGN", "SEMI", "COMMA",
  "DOTLENGHT", "LOWER_THAN_ELSE", "$accept", "Program", "InitDeclaration",
  "FieldDecl", "CommaID", "MethodDecl", "MethodHeader", "MethodBody",
  "MethodParams", "FormalParams", "ParamDecl", "CommaTypeID", "VarDecl",
  "VarBody", "Type", "Statement", "StatementList", "Assignment",
  "MethodInvocation", "CommaExpr", "ParseArgs", "Expr", 0
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
      69,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71
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
       2,     3,     7,     4,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     1,     2,     3,     1,     1,     1,     3
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
       0,     0,     0,     0,    88,    87,    86,    83,     0,     0,
       0,     0,    50,    64,    65,    66,     0,     0,    38,    53,
       0,    21,    24,    25,     0,    47,    48,    49,    17,     0,
      13,    11,     0,     0,    18,    27,     0,    56,     0,    55,
       0,     0,     0,     0,     0,     0,    84,     0,     0,    80,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,    39,    54,     0,
       0,    16,    14,     0,     0,    28,    59,    57,     0,     0,
       0,     0,    63,     0,     0,     0,    89,    85,    67,    68,
      73,    71,    69,    74,    72,    70,    75,    76,    77,    78,
      79,     0,    33,    32,     0,    29,     0,     0,    60,    58,
       0,     0,    40,     0,    45,    44,    42,    34,    30,     0,
      61,     0,     0,     0,    31,    43,    41,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    10,    11,    51,    12,    23,    27,    41,    54,
      55,   135,    42,   130,    43,    44,    80,    73,    74,   139,
      75,    76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -33
static const yytype_int16 yypact[] =
{
      -7,    11,    20,    -4,   -33,     2,   -11,    26,   -33,   -33,
      74,   -33,   -33,   -33,    95,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,    57,     6,    59,    69,   158,   -33,    16,    88,
      49,     7,   200,    84,    87,    96,   249,   100,    33,   -33,
     -33,   182,   -33,   120,   -33,    85,    86,    93,   171,   -33,
     133,    12,   112,   -33,   116,   -33,   136,   -33,   225,   280,
     121,   280,     3,   274,   -33,   -33,   -33,    -3,   232,   280,
     280,   280,   -33,   -33,   -33,   -33,   398,   280,   -33,   -33,
     106,   -33,   -33,   -33,    97,   -33,   -33,   -33,   -33,   123,
     -33,   -33,   139,   117,   -33,   103,   125,   -33,   295,   428,
     128,   313,   129,   131,   135,   331,   -33,   137,   349,    35,
      35,   -33,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   -33,   367,   -33,   -33,   147,
      27,   -33,   -33,   157,    91,   126,   -33,   -33,   280,    18,
     280,   200,   -33,   280,   124,   138,   -33,   -33,   452,   441,
      29,    29,   269,   269,    29,    29,    35,    35,   -33,   -33,
     -33,   200,   -33,   -33,   165,   -33,   170,    91,   428,   -33,
     280,   385,   172,   415,   -33,   -33,   -33,   -33,   -33,   181,
     428,   148,   200,   177,   -33,   -33,   -33,   -33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -33,   -33,   -33,   186,   -33,   195,   -33,   -33,   -33,   160,
     -33,   -33,   173,   -33,    -5,   -13,   -33,   -26,   -25,   -33,
     -24,   -32
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      45,    46,    47,     6,   102,     1,    45,    46,    47,    24,
     103,   106,    45,    46,    47,    45,    46,    47,     3,    60,
       4,     7,    58,     5,    56,    79,    98,    99,    83,   101,
       8,   105,    58,    26,    30,    13,   108,   109,   110,   111,
      31,    48,    59,    56,   169,   126,    32,    14,     9,    33,
      34,    35,    59,    36,    45,    46,    47,    37,    91,    92,
      38,    78,    49,    50,    25,   170,    28,   128,   120,   121,
     122,   123,   124,   163,   164,     6,   122,   123,   124,    40,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,     7,    29,    57,    19,    20,    21,    19,
      20,    21,    15,    19,    20,    21,   168,    30,   171,    61,
      52,   173,    62,    31,    53,    45,    46,    47,    22,    32,
      16,    63,    33,    34,    35,    77,    36,    84,   172,   166,
      37,    85,    86,    38,   127,    45,    46,    47,   180,    87,
      90,    93,    94,    95,   129,   100,   132,   133,   176,   131,
     134,   136,    40,   140,   162,   142,    45,    46,    47,    30,
     143,   144,   179,   146,   165,    31,    19,    20,    21,   186,
     174,    32,   177,   167,    33,    34,    35,   178,    36,    19,
      20,    21,    37,    30,   175,    38,    39,   182,   184,    31,
      19,    20,    21,    52,   185,    32,    17,    88,    33,    34,
      35,    30,    36,   187,    40,    18,    37,    31,    89,    38,
      81,     0,     0,    32,    82,     0,    33,    34,    35,     0,
      36,     0,     0,     0,    37,     0,    96,    38,    40,    64,
      65,    66,    67,   107,     0,     0,    64,    65,    66,    67,
       0,     0,    34,     0,     0,     0,    40,     0,     0,    34,
      68,    97,     0,    64,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,    69,    70,    34,     0,     0,    71,
       0,    69,    70,     0,    68,     0,    71,   104,    64,    65,
      66,    67,     0,     0,    64,    65,    66,    67,    69,    70,
       0,    34,     0,    71,     0,    72,     0,    34,     0,    68,
       0,     0,   114,   115,     0,    68,   118,   119,   120,   121,
     122,   123,   124,    69,    70,     0,     0,     0,    71,    69,
      70,   137,     0,     0,    71,     0,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   141,
       0,     0,   138,     0,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   145,     0,     0,
       0,     0,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   147,     0,     0,     0,     0,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   161,     0,     0,     0,     0,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   181,     0,     0,     0,     0,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,     0,     0,   125,   183,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   112,     0,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124
};

static const yytype_int16 yycheck[] =
{
      26,    26,    26,     1,     1,    12,    32,    32,    32,    14,
       7,    14,    38,    38,    38,    41,    41,    41,     7,    32,
       0,    19,    25,    27,    29,    38,    58,    59,    41,    61,
      28,    63,    25,    27,     1,    46,    68,    69,    70,    71,
       7,    25,    45,    48,    26,    77,    13,    21,    46,    16,
      17,    18,    45,    20,    80,    80,    80,    24,    46,    47,
      27,    28,    46,    47,     7,    47,     7,    80,    39,    40,
      41,    42,    43,    46,    47,     1,    41,    42,    43,    46,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    19,    25,    46,     8,     9,    10,     8,
       9,    10,    28,     8,     9,    10,   138,     1,   140,    25,
      22,   143,    25,     7,    26,   141,   141,   141,    23,    13,
      46,    25,    16,    17,    18,    25,    20,     7,   141,   134,
      24,    46,    46,    27,    28,   161,   161,   161,   170,    46,
       7,    29,    26,     7,    47,    24,     7,    30,   161,    26,
      47,    26,    46,    25,     7,    26,   182,   182,   182,     1,
      29,    26,   167,    26,     7,     7,     8,     9,    10,   182,
      46,    13,     7,    47,    16,    17,    18,     7,    20,     8,
       9,    10,    24,     1,    46,    27,    28,    15,     7,     7,
       8,     9,    10,    22,    46,    13,    10,    26,    16,    17,
      18,     1,    20,    26,    46,    10,    24,     7,    48,    27,
      28,    -1,    -1,    13,    41,    -1,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    -1,     1,    27,    46,     4,
       5,     6,     7,     1,    -1,    -1,     4,     5,     6,     7,
      -1,    -1,    17,    -1,    -1,    -1,    46,    -1,    -1,    17,
      25,    26,    -1,     4,     5,     6,     7,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    17,    -1,    -1,    44,
      -1,    39,    40,    -1,    25,    -1,    44,     3,     4,     5,
       6,     7,    -1,    -1,     4,     5,     6,     7,    39,    40,
      -1,    17,    -1,    44,    -1,    46,    -1,    17,    -1,    25,
      -1,    -1,    33,    34,    -1,    25,    37,    38,    39,    40,
      41,    42,    43,    39,    40,    -1,    -1,    -1,    44,    39,
      40,    26,    -1,    -1,    44,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    26,
      -1,    -1,    47,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    46,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    31,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    51,     7,     0,    27,     1,    19,    28,    46,
      52,    53,    55,    46,    21,    28,    46,    53,    55,     8,
       9,    10,    23,    56,    64,     7,    27,    57,     7,    25,
       1,     7,    13,    16,    17,    18,    20,    24,    27,    28,
      46,    58,    62,    64,    65,    67,    68,    70,    25,    46,
      47,    54,    22,    26,    59,    60,    64,    46,    25,    45,
      65,    25,    25,    25,     4,     5,     6,     7,    25,    39,
      40,    44,    46,    67,    68,    70,    71,    25,    28,    65,
      66,    28,    62,    65,     7,    46,    46,    46,    26,    59,
       7,    46,    47,    29,    26,     7,     1,    26,    71,    71,
      24,    71,     1,     7,     3,    71,    14,     1,    71,    71,
      71,    71,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    46,    71,    28,    65,    47,
      63,    26,     7,    30,    47,    61,    26,    26,    47,    69,
      25,    26,    26,    29,    26,    26,    26,    26,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    26,     7,    46,    47,     7,    64,    47,    71,    26,
      47,    71,    65,    71,    46,    46,    65,     7,     7,    64,
      71,    26,    15,    30,     7,    46,    65,    26
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
														aux = createNode(OTHER_node, "MethodDecl", NULL);
														addChild(aux,(yyvsp[(1) - (1)].no));
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
#line 561 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[(1) - (1)].no);

													}
												}
    break;

  case 65:
#line 567 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[(1) - (1)].no);
													}
												}
    break;

  case 66:
#line 572 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[(1) - (1)].no);
													}

												}
    break;

  case 67:
#line 578 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "And", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 68:
#line 585 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Or", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 69:
#line 592 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Eq", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 70:
#line 599 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Geq", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 71:
#line 606 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Gt", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 72:
#line 613 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Leq", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 73:
#line 620 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Lt", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 74:
#line 627 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Neq", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 75:
#line 634 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Add", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 76:
#line 641 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Sub", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 77:
#line 648 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Mul", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 78:
#line 655 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Div", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 79:
#line 662 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Mod", NULL);
														addChild((yyval.no),(yyvsp[(1) - (3)].no));
														addChild((yyval.no),(yyvsp[(3) - (3)].no));
													}
												}
    break;

  case 80:
#line 669 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Plus",NULL);
														addChild((yyval.no), (yyvsp[(2) - (2)].no));
													}
												}
    break;

  case 81:
#line 675 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Minus",NULL);
														addChild((yyval.no), (yyvsp[(2) - (2)].no));
													}
												}
    break;

  case 82:
#line 681 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Not",NULL);
														addChild((yyval.no), (yyvsp[(2) - (2)].no));
													}
												}
    break;

  case 83:
#line 687 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(ID_node, "Id",(yyvsp[(1) - (1)].val));
													}
												}
    break;

  case 84:
#line 692 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(ID_node, "Id",(yyvsp[(1) - (2)].val));
													}
												}
    break;

  case 85:
#line 697 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[(2) - (3)].no);
													}
												}
    break;

  case 86:
#line 702 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(BOOLLIT_node, "BoolLit",(yyvsp[(1) - (1)].val));
													}
												}
    break;

  case 87:
#line 707 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(DECLIT_node, "DecLit",(yyvsp[(1) - (1)].val));
													}
												}
    break;

  case 88:
#line 712 "jac.y"
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(REALLIT_node, "RealLit",(yyvsp[(1) - (1)].val));
													}
												}
    break;

  case 89:
#line 717 "jac.y"
    {;}
    break;


/* Line 1267 of yacc.c.  */
#line 2517 "y.tab.c"
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


#line 720 "jac.y"


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



