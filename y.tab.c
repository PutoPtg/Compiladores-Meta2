/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 10 "jac.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"

	#include "tree.h"
	//#define VAR (char*)calloc(1,sizeof(char))

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

#line 94 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 38 "jac.y" /* yacc.c:355  */

    char* val;
    struct node* no;

#line 237 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 254 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   119,   131,   137,   143,   144,   151,   158,
     164,   172,   182,   185,   191,   205,   220,   231,   239,   250,
     264,   265,   272,   278,   283,   290,   303,   315,   323,   332,
     342,   350,   364,   375,   384,   399,   404,   409,   426,   427,
     432,   439,   447,   454,   461,   467,   475,   476,   481,   482,
     487,   488,   493,   496,   502,   516,   530,   536,   543,   551,
     554,   555,   562,   571,   586,   587,   590,   595,   601,   608,
     615,   622,   629,   636,   643,   650,   657,   664,   671,   678,
     685,   692,   698,   704,   710,   716,   722,   727,   733,   739,
     745
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "MethodInvocation", "CommaExpr", "ParseArgs", "Expr", "ExprAux", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -44

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-44)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -44,   -44,   -44,   204,   -44,   209,   -44,   -44,   -44,   180,
     -44,   -44,   186,   -44,    -5,   -13,   -44,   -26,   -25,   -44,
     -24,   -32,   -37
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    10,    11,    51,    12,    23,    27,    41,    54,
      55,   137,    42,   132,    43,    44,    81,    73,    74,   141,
      75,    76,    77
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 108 "jac.y" /* yacc.c:1646  */
    {
									if(contaErros == 0 && valorT == 1){
										(yyval.no) = createNode(OTHER_node ,"Program", NULL);
										aux = createNode(ID_node,"Id",(yyvsp[-2].val));
										free ((yyvsp[-2].val));
										addChild((yyval.no),aux);
										addBrother(aux, aux2);
										root = (yyval.no);
									}

								}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 119 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node ,"Program", NULL);
															aux = createNode(ID_node,"Id",(yyvsp[-3].val));
															free ((yyvsp[-3].val));
															addChild((yyval.no), aux);
															addBrother(aux,(yyvsp[-1].no));
															root = (yyval.no);
														}
													}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 131 "jac.y" /* yacc.c:1646  */
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "FieldDecl", NULL);
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 137 "jac.y" /* yacc.c:1646  */
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "MethodDecl", NULL);
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 143 "jac.y" /* yacc.c:1646  */
    {;}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 144 "jac.y" /* yacc.c:1646  */
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[-1].no);
														aux = createNode(OTHER_node, "FieldDecl", NULL);
														addChild(aux,(yyvsp[0].no));
													}
												}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 151 "jac.y" /* yacc.c:1646  */
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[-1].no);
														aux = createNode(OTHER_node, "MethodDecl", NULL);
														addChild(aux,(yyvsp[0].no));
													}
												}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 158 "jac.y" /* yacc.c:1646  */
    {;}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 164 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-2].no);
															aux = createNode(ID_node, "Id", (yyvsp[-1].val));
															free ((yyvsp[-1].val));
															addBrother((yyval.no),aux);
														}
													}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 172 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-3].no);
															aux = createNode(ID_node, "Id", (yyvsp[-2].val));
															free ((yyvsp[-2].val));
															addBrother((yyval.no),aux);
															addBrother(aux,(yyvsp[-1].no));

														}
													}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 182 "jac.y" /* yacc.c:1646  */
    {;}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 185 "jac.y" /* yacc.c:1646  */
    {
											if (contaErros == 0 && valorT == 1){
												(yyval.no) = createNode(ID_node, "Id", (yyvsp[0].val));
												free ((yyvsp[0].val));
										}
										}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 191 "jac.y" /* yacc.c:1646  */
    {
											if (contaErros == 0 && valorT == 1){
												(yyval.no) = (yyvsp[-2].no);
												aux = createNode(ID_node, "Id", (yyvsp[0].val));
												free ((yyvsp[0].val));
												addBrother((yyval.no),aux);
											}
										}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 205 "jac.y" /* yacc.c:1646  */
    {
															if (contaErros == 0 && valorT == 1){
																(yyval.no) = createNode(OTHER_node, "MethodHeader", NULL);
																aux2 = createNode(OTHER_node, "MethodBody", NULL);
																addChild((yyval.no),(yyvsp[-1].no));
																addBrother((yyval.no), aux2);
																addChild(aux2,(yyvsp[0].no));
															}
														}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 220 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-4].no);
															aux = createNode(ID_node, "Id", (yyvsp[-3].val));
															free ((yyvsp[-3].val));
															addBrother((yyval.no),aux);
															aux2 = createNode(OTHER_node, "MethodParams", NULL);
															addChild(aux2,(yyvsp[-1].no));
															addBrother(aux,aux2);
														}
													}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 231 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-3].no);
															aux = createNode(ID_node, "Id", (yyvsp[-2].val));
															free ((yyvsp[-2].val));
															addBrother((yyval.no),aux);
														}
													}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 239 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Void", NULL);
															aux = createNode(ID_node, "Id", (yyvsp[-3].val));
															free ((yyvsp[-3].val));
															addBrother((yyval.no),aux);
															aux2 = createNode(OTHER_node, "MethodParams", NULL);
															addChild(aux2,(yyvsp[-1].no));
															addBrother(aux,aux2);
														}
													}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 250 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Void", NULL);
															aux = createNode(ID_node, "Id", (yyvsp[-2].val));
															free ((yyvsp[-2].val));
															addBrother((yyval.no),aux);
														}
													}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 264 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1){;}}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 265 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
														}
													}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 272 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "VarDecl", NULL);
															addChild((yyval.no),(yyvsp[0].no));
														}
													}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 278 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[0].no);
														}
													}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 283 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
															aux = createNode(OTHER_node, "VarDecl", NULL);
															addChild(aux,(yyvsp[0].no));
														}
													}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 290 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
															addChild((yyval.no),(yyvsp[0].no));
														}
													}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 303 "jac.y" /* yacc.c:1646  */
    {
											if (contaErros == 0 && valorT == 1){
												(yyval.no) = createNode(OTHER_node, "ParamDecl", NULL);
												addChild((yyval.no),(yyvsp[0].no));
											}
										}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 315 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
															aux = createNode(ID_node, "Id", (yyvsp[0].val));
															free ((yyvsp[0].val));
															addBrother((yyval.no),aux);
														}
													}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 323 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-2].no);
															aux = createNode(ID_node, "Id", (yyvsp[-1].val));
															free ((yyvsp[-1].val));
															addBrother((yyval.no),aux);
															addBrother(aux,(yyvsp[0].no));
														}
													}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 332 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "StringArray", NULL);
															aux = createNode(ID_node, "Id", (yyvsp[0].val));
															free ((yyvsp[0].val));
															addBrother((yyval.no),aux);
														}
													}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 342 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
															aux = createNode(ID_node, "Id", (yyvsp[0].val));
															free ((yyvsp[0].val));
															addBrother((yyval.no),aux);
														}
													}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 350 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
															aux = createNode(ID_node, "Id", (yyvsp[0].val));
															free ((yyvsp[0].val));
															addBrother((yyval.no),aux);
														}
													}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 364 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-3].no);
															aux = createNode(ID_node, "Id", (yyvsp[-2].val));
															free ((yyvsp[-2].val));
															addBrother((yyval.no),aux);
															addBrother(aux,(yyvsp[-1].no));
														}
													}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 375 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "VarDecl", NULL);
														aux = createNode(ID_node, "Id", (yyvsp[0].val));
														free ((yyvsp[0].val));
														addChild((yyval.no),aux);
													}
												}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 384 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-2].no);
															aux = createNode(ID_node, "Id", (yyvsp[0].val));
															free ((yyvsp[0].val));
															addBrother((yyval.no),aux);

														}
													}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 399 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Bool", NULL);
														}
													}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 404 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Int", NULL);
														}
													}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 409 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Double", NULL);
														}
													}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 426 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1){;}}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 427 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[-1].no);
																		}
																	}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 432 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "If", NULL);
																			addChild((yyval.no),(yyvsp[-2].no));
																			addBrother((yyvsp[-2].no),(yyvsp[0].no));
																		}
																	}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 439 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "If", NULL);
																			addChild((yyval.no),(yyvsp[-4].no));
																			addBrother((yyvsp[-4].no),(yyvsp[-2].no));
																			addBrother((yyvsp[-2].no),(yyvsp[0].no));
																		}
																	}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 447 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "While", NULL);
																			addChild((yyval.no),(yyvsp[-2].no));
																			addBrother((yyvsp[-2].no),(yyvsp[0].no));
																		}
																	}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 454 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "DoWhile", NULL);
																			addChild((yyval.no),(yyvsp[-5].no));
																			addBrother((yyvsp[-5].no),(yyvsp[-2].no));
																		}
																	}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 461 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "Print", NULL);
																			addChild((yyval.no),(yyvsp[-2].no));
																		}
																	}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 467 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "Print", NULL);
																			aux = createNode(STRLIT_node, "StrLit", (yyvsp[-2].val));
																			free ((yyvsp[-2].val));
																			addBrother((yyval.no),aux);
																		}
																	}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 475 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1){;}}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 476 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[-1].no);
																		}
																	}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 481 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1){;}}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 482 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[-1].no);
																		}
																	}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 487 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1){;}}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 488 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[-1].no);
																		}
																	}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 493 "jac.y" /* yacc.c:1646  */
    {;}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 496 "jac.y" /* yacc.c:1646  */
    {
												if (contaErros == 0 && valorT == 1){
													(yyval.no) = createNode(OTHER_node, "Block", NULL);
													addChild((yyval.no),(yyvsp[0].no));
												}
											}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 502 "jac.y" /* yacc.c:1646  */
    {
												if (contaErros == 0 && valorT == 1){
													(yyval.no) = (yyvsp[-1].no);
													aux = createNode(OTHER_node, "Block", NULL);
													addChild(aux,(yyvsp[0].no));
													addBrother((yyval.no),(yyvsp[0].no));
												}
											}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 516 "jac.y" /* yacc.c:1646  */
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(OTHER_node, "Assign", NULL);
																	aux = createNode(ID_node, "Id", (yyvsp[-2].val));
																	free ((yyvsp[-2].val));
																	addChild((yyval.no),aux);
																	addBrother(aux,(yyvsp[0].no));
																}
															}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 530 "jac.y" /* yacc.c:1646  */
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(ID_node, "Id", (yyvsp[-2].val));
																	free((yyvsp[-2].val));
																}
															}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 536 "jac.y" /* yacc.c:1646  */
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(ID_node, "Id", (yyvsp[-3].val));
																	free((yyvsp[-3].val));
																	addBrother((yyval.no),(yyvsp[-1].no));
																}
															}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 543 "jac.y" /* yacc.c:1646  */
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(ID_node, "Id", (yyvsp[-4].val));
																	free((yyvsp[-4].val));
																	addBrother((yyval.no),(yyvsp[-2].no));
																	addBrother((yyvsp[-2].no),(yyvsp[-1].no));
																}
															}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 551 "jac.y" /* yacc.c:1646  */
    {;}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 554 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1){;}}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 555 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1){;}}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 562 "jac.y" /* yacc.c:1646  */
    {
																	if (contaErros == 0 && valorT == 1){
																		(yyval.no) = createNode(OTHER_node, "ParseArgs", NULL);
																		aux = createNode(ID_node, "Id", (yyvsp[-4].val));
																		free ((yyvsp[-4].val));
																		addChild((yyval.no),aux);
																		addBrother(aux,(yyvsp[-2].no));
																	}
																}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 571 "jac.y" /* yacc.c:1646  */
    {;}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 586 "jac.y" /* yacc.c:1646  */
    {;}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 587 "jac.y" /* yacc.c:1646  */
    {;}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 590 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[0].no);
													}
												}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 595 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[0].no);
													}

												}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 601 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "And", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 608 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Or", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 615 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Eq", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 622 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Geq", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 629 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Gt", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 636 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Leq", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 643 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Lt", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 650 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Neq", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 657 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Add", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 664 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Sub", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 671 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Mul", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 678 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Div", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 685 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Mod", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 692 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Plus",NULL);
														addChild((yyval.no), (yyvsp[0].no));
													}
												}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 698 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Minus",NULL);
														addChild((yyval.no), (yyvsp[0].no));
													}
												}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 704 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Not",NULL);
														addChild((yyval.no), (yyvsp[0].no));
													}
												}
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 710 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(ID_node, "Id",(yyvsp[0].val));
														free((yyvsp[0].val));
													}
												}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 716 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(ID_node, "Id",(yyvsp[-1].val));
														free((yyvsp[-1].val));
													}
												}
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 722 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[-1].no);
													}
												}
#line 2428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 727 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(BOOLLIT_node, "BoolLit",(yyvsp[0].val));
														free ((yyvsp[0].val));
													}
												}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 733 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(DECLIT_node, "DecLit",(yyvsp[0].val));
														free ((yyvsp[0].val));
													}
												}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 739 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(REALLIT_node, "RealLit",(yyvsp[0].val));
														free ((yyvsp[0].val));
													}
												}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 745 "jac.y" /* yacc.c:1646  */
    {;}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2471 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 748 "jac.y" /* yacc.c:1906  */


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


