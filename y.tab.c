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

#line 97 "y.tab.c" /* yacc.c:339  */

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
#line 41 "jac.y" /* yacc.c:355  */

    char* val;
    struct node* no;

#line 240 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 257 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   368

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

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
       0,   111,   111,   121,   133,   138,   143,   148,   155,   161,
     171,   180,   190,   193,   202,   218,   235,   246,   256,   267,
     283,   288,   295,   300,   305,   311,   324,   335,   344,   354,
     366,   375,   391,   401,   413,   424,   441,   448,   455,   474,
     479,   484,   507,   543,   564,   585,   591,   599,   605,   610,
     615,   620,   625,   631,   634,   639,   651,   665,   673,   682,
     692,   695,   700,   712,   721,   736,   741,   748,   753,   758,
     765,   772,   779,   786,   793,   800,   807,   814,   821,   828,
     835,   842,   849,   855,   861,   867,   873,   881,   886,   892,
     898,   904
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

#define YYPACT_NINF -39

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-39)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      23,    45,    54,    32,   -39,     2,    24,    48,   -39,   -39,
      46,   -39,   -39,   -39,   104,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,    66,    62,    68,    77,   133,   -39,     3,   100,
      58,    22,   212,    80,    86,    94,   261,    95,    44,   -39,
     -39,   164,   -39,    84,   -39,    75,    78,    89,   238,   -39,
     116,    93,   103,   -39,   118,   -39,   138,   -39,   217,   270,
     123,   270,    36,    90,   -39,   -39,   -39,    13,   245,   286,
     286,   286,   -39,   -39,   -39,   -39,   106,   300,   270,   -39,
     -39,   187,   -39,   -39,   -39,    -6,   -39,   -39,   -39,   -39,
     132,   112,   -39,   135,   -39,   115,   137,   -39,   -22,   -39,
     142,   143,   144,   139,   149,   150,   -39,   152,   157,    20,
     -39,   -39,   -39,   -39,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   159,   -39,   -39,
     -39,   179,   147,   -39,   -39,   182,     0,   -39,   -39,   -39,
     270,    16,   270,   212,   -39,   270,   155,   160,   -39,   -39,
     324,   313,   156,   156,   279,   279,   156,   156,    57,    57,
     -39,   -39,   -39,   212,   161,   -39,   -39,   183,   -39,   -39,
     270,   176,   194,   186,   -39,   -39,   -39,   -39,   115,   -39,
     167,   212,   192,   -39,   -39,   -39,   -39
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     2,     6,
       0,     4,     5,    12,     0,     3,     9,     7,     8,    36,
      37,    38,     0,     0,     0,     0,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
      47,     0,    22,     0,    23,     0,     0,     0,     0,    10,
       0,     0,     0,    19,     0,    26,     0,    53,     0,     0,
       0,     0,     0,     0,    90,    89,    88,    85,     0,     0,
       0,     0,    51,    65,    67,    68,     0,    66,     0,    39,
      54,     0,    21,    24,    25,     0,    48,    49,    50,    17,
       0,    13,    11,     0,    18,    27,     0,    57,     0,    56,
       0,     0,     0,     0,     0,     0,    86,     0,     0,    85,
      82,    83,    84,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    55,
      32,     0,     0,    16,    14,     0,     0,    28,    60,    58,
       0,     0,     0,     0,    64,     0,     0,     0,    91,    87,
      69,    70,    75,    73,    71,    76,    74,    72,    77,    78,
      79,    80,    81,     0,    34,    33,    29,     0,    61,    59,
       0,     0,    41,     0,    46,    45,    43,    35,    30,    62,
       0,     0,     0,    31,    44,    42,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -39,   -39,   -39,   211,   136,   218,   -39,   -39,   -39,   184,
     -39,    60,   195,    81,   -10,   -14,   -39,   -26,   -25,   -39,
     -24,   -38,   -37
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
      45,    46,    47,     6,    24,   139,    45,    46,    47,    19,
      20,    21,    45,    46,    47,    45,    46,    47,    60,    56,
      98,    99,     7,   101,    80,   105,   140,    84,   106,    48,
     108,     8,   110,   111,   112,   106,     1,   102,    56,    58,
     127,   130,   131,   169,   103,    30,    58,     6,    58,     9,
      49,    50,    31,     3,     4,    45,    46,    47,    32,    59,
       5,    33,    34,    35,   170,    36,     7,   129,    59,    37,
      14,    13,    38,    79,    25,    15,    28,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
      26,    40,    85,    16,   104,    64,    65,    66,    67,   124,
     125,   126,   168,    29,   171,    57,    61,   173,    34,    19,
      20,    21,    62,    19,    20,    21,    68,    45,    46,    47,
      63,    78,    86,    52,    91,    87,   167,    53,    22,   172,
      69,    70,   179,    93,    30,    71,    88,    45,    46,    47,
      92,    31,    19,    20,    21,    94,    95,    32,   100,   176,
      33,    34,    35,   113,    36,    45,    46,    47,    37,   133,
      50,    38,    39,   136,   138,    30,   135,   185,   142,   145,
     143,   144,    31,    19,    20,    21,   146,   147,    32,   148,
      40,    33,    34,    35,   149,    36,   163,   164,    30,    37,
     166,   178,    38,    82,   165,    31,   122,   123,   124,   125,
     126,    32,   174,   180,    33,    34,    35,   175,    36,   131,
     181,    40,    37,    30,   184,    38,   128,   182,    96,   186,
      31,    17,    64,    65,    66,    67,    32,   134,    18,    33,
      34,    35,    90,    36,    40,    34,    83,    37,   183,     0,
      38,     0,     0,    68,    97,   177,   107,    19,    20,    21,
      64,    65,    66,    67,     0,     0,     0,    69,    70,    40,
       0,    52,    71,    34,     0,    89,    64,    65,    66,    67,
       0,    68,     0,     0,     0,    64,    65,    66,    67,    34,
       0,     0,     0,     0,     0,    69,    70,    68,    34,     0,
      71,    64,    65,    66,   109,     0,    68,     0,     0,     0,
       0,    69,    70,     0,    34,     0,    71,     0,    72,     0,
      69,    70,    68,   116,   117,    71,     0,   120,   121,   122,
     123,   124,   125,   126,     0,     0,    69,    70,     0,     0,
       0,    71,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   114,     0,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126
};

static const yytype_int16 yycheck[] =
{
      26,    26,    26,     1,    14,    27,    32,    32,    32,     9,
      10,    11,    38,    38,    38,    41,    41,    41,    32,    29,
      58,    59,    20,    61,    38,    63,    48,    41,    15,    26,
      68,    29,    69,    70,    71,    15,    13,     1,    48,    26,
      78,    47,    48,    27,     8,     1,    26,     1,    26,    47,
      47,    48,     8,     8,     0,    81,    81,    81,    14,    46,
      28,    17,    18,    19,    48,    21,    20,    81,    46,    25,
      22,    47,    28,    29,     8,    29,     8,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      28,    47,     8,    47,     4,     5,     6,     7,     8,    42,
      43,    44,   140,    26,   142,    47,    26,   145,    18,     9,
      10,    11,    26,     9,    10,    11,    26,   143,   143,   143,
      26,    26,    47,    23,     8,    47,   136,    27,    24,   143,
      40,    41,   170,    30,     1,    45,    47,   163,   163,   163,
      47,     8,     9,    10,    11,    27,     8,    14,    25,   163,
      17,    18,    19,    47,    21,   181,   181,   181,    25,    27,
      48,    28,    29,    48,    27,     1,    31,   181,    26,    30,
      27,    27,     8,     9,    10,    11,    27,    27,    14,    27,
      47,    17,    18,    19,    27,    21,    27,     8,     1,    25,
       8,     8,    28,    29,    47,     8,    40,    41,    42,    43,
      44,    14,    47,    27,    17,    18,    19,    47,    21,    48,
      16,    47,    25,     1,    47,    28,    29,    31,     1,    27,
       8,    10,     5,     6,     7,     8,    14,    91,    10,    17,
      18,    19,    48,    21,    47,    18,    41,    25,   178,    -1,
      28,    -1,    -1,    26,    27,   164,     1,     9,    10,    11,
       5,     6,     7,     8,    -1,    -1,    -1,    40,    41,    47,
      -1,    23,    45,    18,    -1,    27,     5,     6,     7,     8,
      -1,    26,    -1,    -1,    -1,     5,     6,     7,     8,    18,
      -1,    -1,    -1,    -1,    -1,    40,    41,    26,    18,    -1,
      45,     5,     6,     7,     8,    -1,    26,    -1,    -1,    -1,
      -1,    40,    41,    -1,    18,    -1,    45,    -1,    47,    -1,
      40,    41,    26,    34,    35,    45,    -1,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    40,    41,    -1,    -1,
      -1,    45,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44
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
      59,     8,    47,    30,    27,     8,     1,    27,    71,    71,
      25,    71,     1,     8,     4,    71,    15,     1,    71,     8,
      72,    72,    72,    47,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    71,    29,    65,
      47,    48,    63,    27,    54,    31,    48,    61,    27,    27,
      48,    69,    26,    27,    27,    30,    27,    27,    27,    27,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    27,     8,    47,     8,    64,    71,    27,
      48,    71,    65,    71,    47,    47,    65,    63,     8,    71,
      27,    16,    31,    61,    47,    65,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      53,    53,    53,    54,    54,    55,    56,    56,    56,    56,
      57,    57,    58,    58,    58,    58,    59,    60,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    67,    68,    68,    68,
      68,    69,    69,    70,    70,    71,    71,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     1,     1,     1,     2,     2,     2,
       5,     6,     2,     2,     3,     4,     5,     4,     5,     4,
       2,     3,     1,     1,     2,     2,     1,     2,     3,     4,
       3,     4,     3,     4,     2,     3,     1,     1,     1,     2,
       3,     5,     7,     5,     7,     5,     5,     1,     2,     2,
       2,     2,     3,     2,     1,     2,     3,     3,     4,     5,
       4,     2,     3,     7,     4,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     1,     2,     3,     1,     1,
       1,     3
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
#line 111 "jac.y" /* yacc.c:1646  */
    {
										if(contaErros == 0 && valorT == 1){
											(yyval.no) = createNode(OTHER_node, "Program", "");
											aux = createNode(ID_node, "Id", (yyvsp[-2].val));
											addChild((yyval.no),aux);
											root = (yyval.no);
										}
										free((yyvsp[-2].val));

								}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 121 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Program", "");
															aux = createNode(ID_node, "Id", (yyvsp[-3].val));
															addChild((yyval.no),aux);
															addBrother(aux,(yyvsp[-1].no));
															root = (yyval.no);
														}
														free((yyvsp[-3].val));
													}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 133 "jac.y" /* yacc.c:1646  */
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[0].no);
													}
												}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 138 "jac.y" /* yacc.c:1646  */
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[0].no);
													}
												}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 143 "jac.y" /* yacc.c:1646  */
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = NULL;
													}
												}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 148 "jac.y" /* yacc.c:1646  */
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[-1].no);
														addBrother((yyval.no),(yyvsp[0].no));
													}

												}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 155 "jac.y" /* yacc.c:1646  */
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[-1].no);
														addBrother((yyval.no),(yyvsp[0].no));
													}
												}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 161 "jac.y" /* yacc.c:1646  */
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[-1].no);
													}
												}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 171 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "FieldDecl", "");
															addChild((yyval.no),(yyvsp[-2].no));
															aux = createNode(ID_node, "Id", (yyvsp[-1].val));
															addBrother((yyvsp[-2].no),aux);
														}
														free((yyvsp[-1].val));
													}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 180 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "FieldDecl", "");
															addChild((yyval.no),(yyvsp[-3].no));
															aux = createNode(ID_node, "Id", (yyvsp[-2].val));
															addChild((yyval.no),aux);
															addBrother((yyval.no),(yyvsp[-1].no));
														}
														free((yyvsp[-2].val));
													}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 190 "jac.y" /* yacc.c:1646  */
    {(yyval.no) = NULL; if (contaErros == 0 && valorT == 1) {clearTree(root);}}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 193 "jac.y" /* yacc.c:1646  */
    {
											if(contaErros == 0 && valorT == 1){
												(yyval.no) = createNode(OTHER_node, "FieldDecl", "");
												aux = createNode(OTHER_node, auxType, "");
												aux2 = createNode(ID_node, "Id", (yyvsp[0].val));
												addChild((yyval.no),aux);
												addBrother(aux,aux2);
											}
										}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 202 "jac.y" /* yacc.c:1646  */
    {
											if (contaErros == 0 && valorT == 1){
												(yyval.no) = createNode(OTHER_node, "FieldDecl", "");
												aux = createNode(OTHER_node, auxType, "");
												aux2 = createNode(ID_node, "Id", (yyvsp[-1].val));
												addChild((yyval.no),aux);
												addBrother(aux,aux2);
												addBrother((yyval.no),(yyvsp[0].no));
											}
										}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 218 "jac.y" /* yacc.c:1646  */
    {
															if(contaErros == 0 && valorT == 1){
																(yyval.no) = createNode(OTHER_node, "MethodDecl", "");
																aux = createNode(OTHER_node, "MethodHeader", "");
																aux2 = createNode(OTHER_node, "MethodBody", "");
																addChild((yyval.no),aux);
																addBrother(aux,aux2);
																addChild(aux,(yyvsp[-1].no));
																addChild(aux2,(yyvsp[0].no));
															}
														}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 235 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-4].no);
															aux = createNode(ID_node, "Id", (yyvsp[-3].val));
															addBrother((yyval.no),aux);
															aux2 = createNode(OTHER_node, "MethodParams", "");
															addBrother(aux,aux2);
															addChild(aux2,(yyvsp[-1].no));
														}
														free((yyvsp[-3].val));
													}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 246 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-3].no);
															aux = createNode(ID_node, "Id", (yyvsp[-2].val));
															addBrother((yyval.no),aux);
															aux2 = createNode(OTHER_node, "MethodParams", "");
															addBrother(aux,aux2);
														}
														free((yyvsp[-2].val));
													}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 256 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Void", "");
															aux = createNode(ID_node, "Id", (yyvsp[-3].val));
															addBrother((yyval.no),aux);
															aux2 = createNode(OTHER_node, "MethodParams", "");
															addBrother(aux,aux2);
															addChild(aux2,(yyvsp[-1].no));
														}
														free((yyvsp[-3].val));
													}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 267 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Void", "");
															aux = createNode(ID_node, "Id", (yyvsp[-2].val));
															addBrother((yyval.no),aux);
															aux2 = createNode(OTHER_node, "MethodParams", "");
															addBrother(aux,aux2);
														}
														free((yyvsp[-2].val));
													}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 283 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = NULL;
														}
													}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 288 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
														}
													}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 295 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[0].no);
														}
													}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 300 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[0].no);
														}
													}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 305 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
															addBrother((yyval.no),(yyvsp[0].no));
														}
													}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 311 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
															addBrother((yyval.no),(yyvsp[0].no));
														}
													}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 324 "jac.y" /* yacc.c:1646  */
    {
											if (contaErros == 0 && valorT == 1){
												(yyval.no) = (yyvsp[0].no);
											}
										}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 335 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "ParamDecl", "");
															addChild((yyval.no),(yyvsp[-1].no));
															aux = createNode(ID_node, "Id", (yyvsp[0].val));
															addBrother((yyvsp[-1].no),aux);
														}
														free((yyvsp[0].val));
													}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 344 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "ParamDecl", "");
															addChild((yyval.no),(yyvsp[-2].no));
															aux = createNode(ID_node, "Id", (yyvsp[-1].val));
															addBrother((yyvsp[-2].no),aux);
															addBrother((yyval.no),(yyvsp[0].no));
														}
														free((yyvsp[-1].val));
													}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 354 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "ParamDecl", "");
															aux = createNode(OTHER_node, "StringArray", "");
															aux2 = createNode(ID_node, "Id", (yyvsp[0].val));
															addChild((yyval.no),aux);
															addChild((yyval.no),aux2);
														}
														free((yyvsp[0].val));
													}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 366 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "ParamDecl", "");
															addChild((yyval.no),(yyvsp[-1].no));
															aux = createNode(ID_node, "Id", (yyvsp[0].val));
															addBrother((yyvsp[-1].no),aux);
														}
														free((yyvsp[0].val));
													}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 375 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "ParamDecl", "");
															addChild((yyval.no),(yyvsp[-2].no));
															aux = createNode(ID_node, "Id", (yyvsp[-1].val));
															addBrother((yyvsp[-2].no),aux);
															addBrother((yyval.no),(yyvsp[0].no));
														}
														free((yyvsp[-1].val));
													}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 391 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "VarDecl", "");
															addChild((yyval.no),(yyvsp[-2].no));
															aux = createNode(ID_node, "Id", (yyvsp[-1].val));
															addBrother((yyvsp[-2].no),aux);
														}
														free((yyvsp[-1].val));
													}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 401 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "VarDecl", "");
															addChild((yyval.no),(yyvsp[-3].no));
															aux = createNode(ID_node, "Id", (yyvsp[-2].val));
															addBrother((yyvsp[-3].no),aux);
															addBrother((yyval.no),(yyvsp[-1].no));
														}
														free((yyvsp[-2].val));
													}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 413 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "VarDecl", "");
														aux = createNode(OTHER_node, auxType, "");
														aux2 = createNode(ID_node, "Id", (yyvsp[0].val));
														addChild((yyval.no),aux);
														addBrother(aux,aux2);
													}
													free((yyvsp[0].val));
												}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 424 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "VarDecl", "");
														aux = createNode(OTHER_node, auxType, "");
														aux2 = createNode(ID_node, "Id", (yyvsp[-1].val));
														addChild((yyval.no),aux);
														addBrother(aux,aux2);
														addBrother((yyval.no),(yyvsp[0].no));
													}
													free((yyvsp[-1].val));
												}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 441 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Bool", "");
															auxType = (char*)calloc(10,sizeof(char));
															strncpy(auxType, "Bool", strlen("Bool"));
														}
													}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 448 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Int", "");
															auxType = (char*)calloc(10,sizeof(char));
															strncpy(auxType, "Int", strlen("Int"));
														}
													}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 455 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Double", "");
															auxType = (char*)calloc(10,sizeof(char));
															strncpy(auxType, "Double", strlen("Double"));
														}
													}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 474 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = NULL;
																		}
																	}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 479 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[-1].no);
																		}
																	}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 484 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "If", "");
																			addChild((yyval.no),(yyvsp[-2].no));

																			if((yyvsp[0].no) != NULL && (yyvsp[0].no)->right != NULL){
																				aux = createNode(OTHER_node, "Block", "");
																				addChild((yyval.no),aux);
																				addChild(aux,(yyvsp[0].no));
																			}
																			else{
																				addChild((yyval.no),(yyvsp[0].no));
																			}

																			if((yyvsp[0].no) == NULL){
																				aux = createNode(OTHER_node, "Block", "");
																				addChild((yyval.no),aux);
																			}

																			aux = createNode(OTHER_node, "Block", "");
																			addChild((yyval.no),aux);
																		}
																	}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 507 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "If", "");
																			addChild((yyval.no),(yyvsp[-4].no));

																			if((yyvsp[-2].no) != NULL && (yyvsp[-2].no)->right != NULL){
																				aux = createNode(OTHER_node, "Block", "");
																				addChild((yyval.no),aux);
																				addChild(aux,(yyvsp[-2].no));
																			}
																			else{
																				addChild((yyval.no),(yyvsp[-2].no));
																			}

																			if((yyvsp[-2].no) == NULL){
																				aux = createNode(OTHER_node, "Block", "");
																				addChild((yyval.no),aux);
																			}


																			if((yyvsp[0].no) != NULL && (yyvsp[0].no)->right != NULL){
																				aux = createNode(OTHER_node, "Block", "");
																				addChild((yyval.no),aux);
																				addChild(aux,(yyvsp[0].no));
																			}
																			else{
																				addChild((yyval.no),(yyvsp[0].no));
																			}

																			if((yyvsp[0].no) == NULL){
																				aux = createNode(OTHER_node, "Block", "");
																				addChild((yyval.no),aux);
																			}

																		}
																	}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 543 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "While", "");
																			addChild((yyval.no),(yyvsp[-2].no));

																			if((yyvsp[0].no) != NULL && (yyvsp[0].no)->right != NULL){
																				aux = createNode(OTHER_node, "Block", "");
																				addChild((yyval.no),aux);
																				addChild(aux,(yyvsp[0].no));
																			}
																			else{
																				addChild((yyval.no),(yyvsp[0].no));
																			}

																			if((yyvsp[0].no) == NULL){
																				aux = createNode(OTHER_node, "Block", "");
																				addChild((yyval.no),aux);
																			}

																		}
																	}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 564 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "DoWhile", "");

																			if((yyvsp[-5].no) != NULL && (yyvsp[-5].no)->right != NULL){
																				aux = createNode(OTHER_node, "Block", "");
																				addChild((yyval.no),aux);
																				addChild(aux,(yyvsp[-5].no));
																			}
																			else{
																				addChild((yyval.no),(yyvsp[-5].no));
																			}

																			if((yyvsp[-5].no) == NULL){
																				aux = createNode(OTHER_node, "Block", "");
																				addChild((yyval.no),aux);
																			}

																			addChild((yyval.no),(yyvsp[-2].no));
																		}
																	}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 585 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "Print", "");
																			addChild((yyval.no),(yyvsp[-2].no));
																		}
																	}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 591 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "Print", "");
																			aux = createNode(STRLIT_node, "Strlit", (yyvsp[-2].val));
																			addChild((yyval.no),aux);
																		}
																		free((yyvsp[-2].val));
																	}
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 599 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = NULL;
																		}

																	}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 605 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[-1].no);
																		}
																	}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 610 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[-1].no);
																		}
																	}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 615 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[-1].no);
																		}
																	}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 620 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "Return", "");
																		}
																	}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 625 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "Return", "");
																			addChild((yyval.no),(yyvsp[-1].no));
																		}
																	}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 631 "jac.y" /* yacc.c:1646  */
    {(yyval.no) = NULL; if (contaErros == 0 && valorT == 1) {clearTree(root);}}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 634 "jac.y" /* yacc.c:1646  */
    {
												if (contaErros == 0 && valorT == 1){
													(yyval.no) = (yyvsp[0].no);
												}
											}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 639 "jac.y" /* yacc.c:1646  */
    {
												if (contaErros == 0 && valorT == 1){
													(yyval.no) = (yyvsp[-1].no);
													addBrother((yyval.no),(yyvsp[0].no));
												}
											}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 651 "jac.y" /* yacc.c:1646  */
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(OTHER_node, "Assign", "");
																	aux = createNode(ID_node, "Id", (yyvsp[-2].val));
																	addChild((yyval.no),aux);
																	addChild((yyval.no),(yyvsp[0].no));
																}
																free((yyvsp[-2].val));
															}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 665 "jac.y" /* yacc.c:1646  */
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(OTHER_node, "Call", "");
																	aux = createNode(ID_node, "Id", (yyvsp[-2].val));
																	addChild((yyval.no),aux);
																}
																free((yyvsp[-2].val));
															}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 673 "jac.y" /* yacc.c:1646  */
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(OTHER_node, "Call", "");
																	aux = createNode(ID_node, "Id", (yyvsp[-3].val));
																	addChild((yyval.no),aux);
																	addBrother(aux,(yyvsp[-1].no));
																}
																free((yyvsp[-3].val));
															}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 682 "jac.y" /* yacc.c:1646  */
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(OTHER_node, "Call", "");
																	aux = createNode(ID_node, "Id", (yyvsp[-4].val));
																	addChild((yyval.no),aux);
																	addBrother(aux,(yyvsp[-2].no));
																	addBrother(aux,(yyvsp[-1].no));
																}
																free((yyvsp[-4].val));
															}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 692 "jac.y" /* yacc.c:1646  */
    {(yyval.no) = NULL; if (contaErros == 0 && valorT == 1) {clearTree(root);}}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 695 "jac.y" /* yacc.c:1646  */
    {
															if (contaErros == 0 && valorT == 1){
																(yyval.no) = (yyvsp[0].no);
															}
														}
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 700 "jac.y" /* yacc.c:1646  */
    {
															if (contaErros == 0 && valorT == 1){
																(yyval.no) = (yyvsp[-2].no);
																addBrother((yyval.no),(yyvsp[0].no));
															}
														}
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 712 "jac.y" /* yacc.c:1646  */
    {
																	if (contaErros == 0 && valorT == 1){
																		(yyval.no) = createNode(OTHER_node, "ParseArgs", "");
																		aux = createNode(ID_node, "Id", (yyvsp[-4].val));
																		addChild((yyval.no),aux);
																		addChild((yyval.no),(yyvsp[-2].no));
																	}
																	free((yyvsp[-4].val));
																}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 721 "jac.y" /* yacc.c:1646  */
    {(yyval.no) = NULL; if (contaErros == 0 && valorT == 1) {clearTree(root);}}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 736 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[0].no);
													}
												}
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 741 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[0].no);
													}
												}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 748 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[0].no);
													}
												}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 753 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[0].no);
													}
												}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 758 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "And", "");
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 765 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Or", "");
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 772 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Eq", "");
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 779 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Geq", "");
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 786 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Gt", "");
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 793 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Leq", "");
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 800 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Lt", "");
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 807 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Neq", "");
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 814 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Add", "");
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 821 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Sub", "");
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 828 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Mul", "");
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 835 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Div", "");
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 842 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Mod", "");
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 849 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Plus","");
														addChild((yyval.no), (yyvsp[0].no));
													}
												}
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 855 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Minus","");
														addChild((yyval.no), (yyvsp[0].no));
													}
												}
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 861 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Not","");
														addChild((yyval.no), (yyvsp[0].no));
													}
												}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 867 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(ID_node, "Id",(yyvsp[0].val));
													}
													free((yyvsp[0].val));
												}
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 873 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Length", "");
														aux = createNode(ID_node, "Id",(yyvsp[-1].val));
														addChild((yyval.no),aux);
													}
													free((yyvsp[-1].val));
												}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 881 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[-1].no);
													}
												}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 886 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(BOOLLIT_node, "BoolLit",(yyvsp[0].val));
													}
													free ((yyvsp[0].val));
												}
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 892 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(DECLIT_node, "DecLit",(yyvsp[0].val));
													}
													free ((yyvsp[0].val));
												}
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 898 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(REALLIT_node, "RealLit",(yyvsp[0].val));
													}
													free ((yyvsp[0].val));
												}
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 904 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1) {clearTree(root);}}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2630 "y.tab.c" /* yacc.c:1646  */
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
#line 907 "jac.y" /* yacc.c:1906  */


/* Função de erros */
int yyerror(const char *s){
	printf("Line %lld, col %lld: %s: %s\n", contaLinha, contaColuna-strlen(yytext), s, yytext);
	contaErros++;
	clearTree(root);
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
    free(auxType);

    return 0;
}


