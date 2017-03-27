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

	extern long long int iTC; //serve para salvar o início da coluna de um token

	int valor1=0;
	int valorT=0;
	int valorNull=0;
	int valorL=0;
	int contaErros = 0;

	node* root;
	node* aux;
	node* aux2;

#line 96 "y.tab.c" /* yacc.c:339  */

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
#line 40 "jac.y" /* yacc.c:355  */

    char* val;
    struct node* no;

#line 239 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 256 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   495

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

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

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "MethodInvocation", "CommaExpr", "ParseArgs", "Expr", YY_NULLPTR
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

#define YYPACT_NINF -33

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-33)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -33,   -33,   -33,   186,   -33,   195,   -33,   -33,   -33,   160,
     -33,   -33,   173,   -33,    -5,   -13,   -33,   -26,   -25,   -33,
     -24,   -32
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    10,    11,    51,    12,    23,    27,    41,    54,
      55,   135,    42,   130,    43,    44,    80,    73,    74,   139,
      75,    76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
										addChild((yyval.no),aux);
										addBrother(aux, aux2);
										root = (yyval.no);
									}

								}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 118 "jac.y" /* yacc.c:1646  */
    {
														if(contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node ,"Program", NULL);
															aux = createNode(ID_node,"Id",(yyvsp[-3].val));
															addChild((yyval.no), aux);
															addBrother(aux,(yyvsp[-1].no));
															root = (yyval.no);
														}
													}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 129 "jac.y" /* yacc.c:1646  */
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "FieldDecl", NULL);
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 135 "jac.y" /* yacc.c:1646  */
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "MethodDecl", NULL);
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 141 "jac.y" /* yacc.c:1646  */
    {;}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 142 "jac.y" /* yacc.c:1646  */
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[-1].no);
														aux = createNode(OTHER_node, "FieldDecl", NULL);
														addChild(aux,(yyvsp[0].no));
													}
												}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 149 "jac.y" /* yacc.c:1646  */
    {
													if(contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[-1].no);
														aux = createNode(OTHER_node, "MethodDecl", NULL);
														addChild(aux,(yyvsp[0].no));
													}
												}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 156 "jac.y" /* yacc.c:1646  */
    {;}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 162 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-2].no);
															aux = createNode(ID_node, "Id", (yyvsp[-1].val));
															addBrother((yyval.no),aux);
														}
													}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 169 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-3].no);
															aux = createNode(ID_node, "Id", (yyvsp[-2].val));
															addBrother((yyval.no),aux);
															addBrother(aux,(yyvsp[-1].no));

														}
													}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 178 "jac.y" /* yacc.c:1646  */
    {;}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 181 "jac.y" /* yacc.c:1646  */
    {
											if (contaErros == 0 && valorT == 1){
												(yyval.no) = createNode(ID_node, "Id", (yyvsp[0].val));
										}
										}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 186 "jac.y" /* yacc.c:1646  */
    {
											if (contaErros == 0 && valorT == 1){
												(yyval.no) = (yyvsp[-2].no);
												aux = createNode(ID_node, "Id", (yyvsp[0].val));
												addBrother((yyval.no),aux);
											}
										}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 199 "jac.y" /* yacc.c:1646  */
    {
															if (contaErros == 0 && valorT == 1){
																(yyval.no) = createNode(OTHER_node, "MethodHeader", NULL);
																aux2 = createNode(OTHER_node, "MethodBody", NULL);
																addChild((yyval.no),(yyvsp[-1].no));
																addBrother((yyval.no), aux2);
																addChild(aux2,(yyvsp[0].no));
															}
														}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 214 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-4].no);
															aux = createNode(ID_node, "Id", (yyvsp[-3].val));
															addBrother((yyval.no),aux);
															aux2 = createNode(OTHER_node, "MethodParams", NULL);
															addChild(aux2,(yyvsp[-1].no));
															addBrother(aux,aux2);
														}
													}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 224 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-3].no);
															aux = createNode(ID_node, "Id", (yyvsp[-2].val));
															addBrother((yyval.no),aux);
														}
													}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 231 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Void", NULL);
															aux = createNode(ID_node, "Id", (yyvsp[-3].val));
															addBrother((yyval.no),aux);
															aux2 = createNode(OTHER_node, "MethodParams", NULL);
															addChild(aux2,(yyvsp[-1].no));
															addBrother(aux,aux2);
														}
													}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 241 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Void", NULL);
															aux = createNode(ID_node, "Id", (yyvsp[-2].val));
															addBrother((yyval.no),aux);
														}
													}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 254 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1){;}}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 255 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
														}
													}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 262 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "VarDecl", NULL);
															addChild((yyval.no),(yyvsp[0].no));
														}
													}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 268 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[0].no);
														}
													}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 273 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
															aux = createNode(OTHER_node, "VarDecl", NULL);
															addChild(aux,(yyvsp[0].no));
														}
													}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 280 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
															addChild((yyval.no),(yyvsp[0].no));
														}
													}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 293 "jac.y" /* yacc.c:1646  */
    {
											if (contaErros == 0 && valorT == 1){
												(yyval.no) = createNode(OTHER_node, "ParamDecl", NULL);
												addChild((yyval.no),(yyvsp[0].no));
											}
										}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 305 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
															aux = createNode(ID_node, "Id", (yyvsp[0].val));
															addBrother((yyval.no),aux);
														}
													}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 312 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-2].no);
															aux = createNode(ID_node, "Id", (yyvsp[-1].val));
															addBrother((yyval.no),aux);
															addBrother(aux,(yyvsp[0].no));
														}
													}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 320 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "StringArray", NULL);
															aux = createNode(ID_node, "Id", (yyvsp[0].val));
															addBrother((yyval.no),aux);
														}
													}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 329 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
															aux = createNode(ID_node, "Id", (yyvsp[0].val));
															addBrother((yyval.no),aux);
														}
													}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 336 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-1].no);
															aux = createNode(ID_node, "Id", (yyvsp[0].val));
															addBrother((yyval.no),aux);
														}
													}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 349 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-3].no);
															aux = createNode(ID_node, "Id", (yyvsp[-2].val));
															addBrother((yyval.no),aux);
															addBrother(aux,(yyvsp[-1].no));
														}
													}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 359 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "VarDecl", VAR);
														aux = createNode(ID_node, "Id", (yyvsp[0].val));
														addChild((yyval.no),aux);
													}
												}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 367 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = (yyvsp[-2].no);
															aux = createNode(ID_node, "Id", (yyvsp[0].val));
															addBrother((yyval.no),aux);

														}
													}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 381 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Bool", NULL);
														}
													}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 386 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Int", NULL);
														}
													}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 391 "jac.y" /* yacc.c:1646  */
    {
														if (contaErros == 0 && valorT == 1){
															(yyval.no) = createNode(OTHER_node, "Double", NULL);
														}
													}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 408 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1){;}}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 409 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[-1].no);
																		}
																	}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 414 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "If", NULL);
																			addChild((yyval.no),(yyvsp[-2].no));
																			addBrother((yyvsp[-2].no),(yyvsp[0].no));
																		}
																	}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 421 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "If", NULL);
																			addChild((yyval.no),(yyvsp[-4].no));
																			addBrother((yyvsp[-4].no),(yyvsp[-2].no));
																			addBrother((yyvsp[-2].no),(yyvsp[0].no));
																		}
																	}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 429 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "While", NULL);
																			addChild((yyval.no),(yyvsp[-2].no));
																			addBrother((yyvsp[-2].no),(yyvsp[0].no));
																		}
																	}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 436 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "DoWhile", NULL);
																			addChild((yyval.no),(yyvsp[-5].no));
																			addBrother((yyvsp[-5].no),(yyvsp[-2].no));
																		}
																	}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 443 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "Print", NULL);
																			addChild((yyval.no),(yyvsp[-2].no));
																		}
																	}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 449 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = createNode(OTHER_node, "Print", NULL);
																			aux = createNode(STRLIT_node, "StrLit", (yyvsp[-2].val));
																			addBrother((yyval.no),aux);
																		}
																	}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 456 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1){;}}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 457 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[-1].no);
																		}
																	}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 462 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1){;}}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 463 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[-1].no);
																		}
																	}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 468 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1){;}}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 469 "jac.y" /* yacc.c:1646  */
    {
																		if (contaErros == 0 && valorT == 1){
																			(yyval.no) = (yyvsp[-1].no);
																		}
																	}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 474 "jac.y" /* yacc.c:1646  */
    {;}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 477 "jac.y" /* yacc.c:1646  */
    {
												if (contaErros == 0 && valorT == 1){
													(yyval.no) = createNode(OTHER_node, "Block", NULL);
													addChild((yyval.no),(yyvsp[0].no));
												}
											}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 483 "jac.y" /* yacc.c:1646  */
    {
												if (contaErros == 0 && valorT == 1){
													(yyval.no) = (yyvsp[-1].no);
													aux = createNode(OTHER_node, "Block", NULL);
													addChild(aux,(yyvsp[0].no));
													addBrother((yyval.no),(yyvsp[0].no));
												}
											}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 497 "jac.y" /* yacc.c:1646  */
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(OTHER_node, "Assign", NULL);
																	aux = createNode(ID_node, "Id", (yyvsp[-2].val));
																	addChild((yyval.no),aux);
																	addBrother(aux,(yyvsp[0].no));
																}
															}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 510 "jac.y" /* yacc.c:1646  */
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(ID_node, "Id", (yyvsp[-2].val));
																}
															}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 515 "jac.y" /* yacc.c:1646  */
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(ID_node, "Id", (yyvsp[-3].val));
																	addBrother((yyval.no),(yyvsp[-1].no));
																}
															}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 521 "jac.y" /* yacc.c:1646  */
    {
																if (contaErros == 0 && valorT == 1){
																	(yyval.no) = createNode(ID_node, "Id", (yyvsp[-4].val));
																	addBrother((yyval.no),(yyvsp[-2].no));
																	addBrother((yyvsp[-2].no),(yyvsp[-1].no));
																}
															}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 528 "jac.y" /* yacc.c:1646  */
    {;}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 531 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1){;}}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 532 "jac.y" /* yacc.c:1646  */
    {if (contaErros == 0 && valorT == 1){;}}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 539 "jac.y" /* yacc.c:1646  */
    {
																	if (contaErros == 0 && valorT == 1){
																		(yyval.no) = createNode(OTHER_node, "ParseArgs", NULL);
																		aux = createNode(ID_node, "Id", (yyvsp[-4].val));
																		addChild((yyval.no),aux);
																		addBrother(aux,(yyvsp[-2].no));
																	}
																}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 547 "jac.y" /* yacc.c:1646  */
    {;}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 561 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[0].no);

													}
												}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 567 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[0].no);
													}
												}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 572 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[0].no);
													}

												}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 578 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "And", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 585 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Or", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 592 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Eq", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 599 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Geq", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 606 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Gt", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 613 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Leq", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 620 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Lt", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 627 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Neq", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 634 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Add", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 641 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Sub", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 648 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Mul", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 655 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Div", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 662 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Mod", NULL);
														addChild((yyval.no),(yyvsp[-2].no));
														addChild((yyval.no),(yyvsp[0].no));
													}
												}
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 669 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Plus",NULL);
														addChild((yyval.no), (yyvsp[0].no));
													}
												}
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 675 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Minus",NULL);
														addChild((yyval.no), (yyvsp[0].no));
													}
												}
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 681 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(OTHER_node, "Not",NULL);
														addChild((yyval.no), (yyvsp[0].no));
													}
												}
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 687 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(ID_node, "Id",(yyvsp[0].val));
													}
												}
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 692 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(ID_node, "Id",(yyvsp[-1].val));
													}
												}
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 697 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = (yyvsp[-1].no);
													}
												}
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 702 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(BOOLLIT_node, "BoolLit",(yyvsp[0].val));
													}
												}
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 707 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(DECLIT_node, "DecLit",(yyvsp[0].val));
													}
												}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 712 "jac.y" /* yacc.c:1646  */
    {
													if (contaErros == 0 && valorT == 1){
														(yyval.no) = createNode(REALLIT_node, "RealLit",(yyvsp[0].val));
													}
												}
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 717 "jac.y" /* yacc.c:1646  */
    {;}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2462 "y.tab.c" /* yacc.c:1646  */
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
#line 720 "jac.y" /* yacc.c:1906  */


/* Função de erros */
int yyerror(const char *s){
	printf("Line %lld, col %lld: %s: %s\n", contaLinha, iTC, s, yytext);
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
            valorT = 1;
            yyparse();
    }

    if(contaErros == 0 && valorT == 1){
    	printTree(root, 0);
    }
    clearTree(root);

    return 0;
}


