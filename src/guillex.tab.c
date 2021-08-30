/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 7 "guillex.y"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

void yyerror(const char* msg) {
  printf("%s\n", msg);
}
int yylex();
extern int yylex_destroy(void);


#line 85 "guillex.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    TYPE = 259,
    ELEMTYPE = 260,
    INTEGER = 261,
    DECIMAL = 262,
    LIST = 263,
    STRING = 264,
    NIL = 265,
    MAIN = 266,
    RETURN = 267,
    ADD = 268,
    SUB = 269,
    MULT = 270,
    DIV = 271,
    OR = 272,
    AND = 273,
    NEG = 274,
    NOT = 275,
    SMALLER = 276,
    GREATER = 277,
    SMALLEQ = 278,
    GREATEQ = 279,
    EQUALS = 280,
    DIFFERENT = 281,
    ASSIGN = 282,
    IF = 283,
    ELSE = 284,
    FOR = 285,
    READ = 286,
    WRITE = 287,
    WRITELN = 288,
    APPEND = 289,
    HEADLIST = 290,
    TAILLIST = 291,
    DESTROYHEAD = 292,
    MAP = 293,
    FILTER = 294,
    SEMIC = 295,
    COMMA = 296,
    STFUNC = 297,
    ENDFUNC = 298,
    PARENL = 299,
    PARENR = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "guillex.y"

  char* str;
  int integer;
  float dec;
  
  struct node *ast;

#line 188 "guillex.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);





#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5623

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  334

#define YYUNDEFTOK  2
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    92,    92,    96,    97,   101,   102,   106,   110,   111,
     115,   119,   123,   124,   128,   132,   136,   137,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   153,   157,   158,
     162,   166,   170,   171,   172,   173,   177,   181,   185,   186,
     190,   194,   198,   199,   203,   208,   212,   213,   214,   215,
     219,   223,   224,   228,   229,   233,   234,   238,   239,   240,
     244,   245,   249,   253,   254,   259,   260,   261,   262,   263,
     264,   268,   269,   273,   274,   278,   279,   280,   284,   285,
     289,   290,   291,   292,   296,   297,   301,   302
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "TYPE", "ELEMTYPE", "INTEGER",
  "DECIMAL", "LIST", "STRING", "NIL", "MAIN", "RETURN", "ADD", "SUB",
  "MULT", "DIV", "OR", "AND", "NEG", "NOT", "SMALLER", "GREATER",
  "SMALLEQ", "GREATEQ", "EQUALS", "DIFFERENT", "ASSIGN", "IF", "ELSE",
  "FOR", "READ", "WRITE", "WRITELN", "APPEND", "HEADLIST", "TAILLIST",
  "DESTROYHEAD", "MAP", "FILTER", "SEMIC", "COMMA", "STFUNC", "ENDFUNC",
  "PARENL", "PARENR", "$accept", "program", "declarationList",
  "declaration", "varDeclaration", "funcDeclaration", "simpleVDeclaration",
  "simpleFDeclaration", "params", "param", "compoundStmt", "stmtList",
  "primitiveStmt", "exprStmt", "condStmt", "iterStmt", "returnStmt",
  "listStmt", "appendOps", "returnListOps", "returnListOp",
  "destroyHeadOps", "mapFilterOps", "expression", "assignExp", "simpleExp",
  "constOp", "inOp", "outOp", "outConst", "binLogicalExp", "binLogicalOp",
  "unLogicalExp", "unLogicalOp", "relationalExp", "relationalOp", "sumExp",
  "sumOp", "mulExp", "mulOp", "factor", "fCall", "callParams", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300
};
# endif

#define YYPACT_NINF (-179)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    12,    31,    26,   100,   149,   177,   233,    -1,    24,
    -179,   262,    25,    19,    35,    33,    37,    40,    48,  3656,
     264,    35,    49,  4582,  4833,  4861,  4889,  4917,   615,    32,
     117,   642,     6,    53,    58,    61,    66,    71,    72,   108,
     665,  2312,  2354,  2396,  2438,  2480,  2522,  2564,  2606,  2648,
    2690,  2732,   109,  2774,  2816,    86,    89,    -7,  4945,  2858,
    2900,   128,   464,   741,  5583,  5505,   432,  4973,  5001,  4721,
     280,   615,   365,    92,    95,  5225,   665,   138,   140,   166,
     166,   116,  3879,   103,   290,  2942,  2984,  3026,   154,    44,
     143,   150,   151,   663,   457,  1096,  1109,  3738,  3747,  3756,
    3765,  3765,  5029,   718,   781,   432,   181,   156,  4749,   256,
     257,  3068,   161,   167,   159,   169,   182,   189,   191,   198,
    3110,  5057,   186,   752,  5529,  5085,  5113,   204,   868,  4777,
    3698,   972,  3152,   210,   225,  3194,  3236,   289,  1050,   245,
    3278,  3320,  3656,   288,  3362,   259,  3656,  3404,   309,  3656,
    3446,  4614,  5245,  5265,  5285,  5305,   665,  5325,   396,   613,
     972,  4626,  5553,   845,  5345,  5365,  4241,  4255,  4280,  4294,
     665,  4319,    41,    97,   665,  4568,  4543,   914,  4333,  4358,
    4372,  4646,  5141,  3780,  3789,  3831,  3912,  3926,  3959,  3973,
     665,  4006,   148,   325,   868,  4688,  4504,  1002,  4020,  4053,
    4067,   385,   759,   318,   615,   278,   283,   320,   321,   338,
     356,  3656,  1135,  1178,  1220,  1262,  1304,  1346,  1388,  1430,
    1472,  1514,   381,  1556,  1598,   284,    55,  1640,  1682,  4805,
    4678,   360,  3488,  3530,   504,   344,   370,   826,  3798,  3798,
    5385,   845,   349,   376,   237,  3807,  3807,  4397,   914,   525,
     553,   355,   382,   402,  3822,  3822,  4100,  1002,  4411,   308,
    1724,   364,   665,   138,   403,   166,   166,   367,  3572,  1766,
    1808,   413,   420,   987,  3614,  5405,   310,  5425,   866,   873,
    5573,  5445,  5465,  4436,   296,   598,  4557,  4450,  4475,  5169,
     315,  4114,   335,  4147,   414,   534,  4518,  4161,  4194,  4489,
    1850,   379,   387,   383,   389,   392,  1892,  1934,   404,   408,
    3864,   405,   409,   421,  5485,  5197,  4208,  3698,   972,  1976,
     418,   428,  2018,  2060,  2102,   435,  2144,  2186,  3698,   288,
    2228,   434,  3698,  2270
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -179,  -179,  -179,   446,     1,  -179,     0,  -179,  -179,   468,
     -12,  -142,   -29,  -117,  -112,  -110,  -109,   -79,   -65,   -57,
     -21,    20,    22,   -22,   -60,     8,   450,    29,    30,   -75,
     871,  -126,    27,   666,   770,  -114,   703,   207,   562,  -153,
     346,    -9,  -178
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    41,     6,   150,     8,    16,    17,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,   118,
      61,    92,    62,    63,    64,   100,    65,    66,    67,   105,
      68,   180,   110
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,     5,    20,     7,     5,   119,    73,   233,     1,    70,
      69,   241,    15,   215,    85,     9,    15,   114,   216,    75,
     217,   218,    18,   259,   -10,   248,    -2,    88,   -10,    13,
       1,    10,   236,   -43,    69,   -73,    74,   -14,   -73,   -73,
     -73,    13,   -73,    12,   -13,   257,   243,   238,    83,   107,
      76,   219,   -10,   -12,   182,   159,   276,   182,    89,    90,
      91,   245,    75,   200,   -57,   220,   252,   173,   -11,   268,
      14,   290,   292,   221,   -38,   -39,   -73,    19,   -14,    74,
     109,   254,    21,   145,   112,   -13,   -45,   117,   117,   271,
      93,   182,   182,   -10,   -12,   -43,   182,    77,   159,   193,
      -4,   138,    78,   173,    -4,    79,   173,   173,   225,   222,
      80,    81,    86,   144,   -56,   -56,   -56,   147,   214,   200,
     -74,   229,    75,   -74,   -74,   -74,    87,   -74,   241,   -42,
     213,   212,   111,    69,   248,   -43,   137,    69,   226,   139,
      69,   113,   -56,   115,   257,    89,    90,    91,   121,    -5,
     223,    75,   224,    -5,    75,   193,   120,   122,   159,   227,
     228,   -74,   -45,   -58,   235,    89,    90,    91,   -45,    82,
     -59,   202,   166,   167,   168,   116,   169,    -6,   242,    29,
      30,    -6,   261,   173,   127,   200,    31,   237,   200,   -45,
     304,   305,   200,   -45,    71,    75,   -44,   173,   251,   131,
     215,   244,    69,   302,    85,   216,   130,   217,   218,   109,
     170,   215,    74,   312,   132,   215,   216,   173,   217,   218,
     216,   253,   217,   218,    69,   200,   135,   -53,   193,    75,
      75,   159,    75,    -7,   -54,   163,   133,    -7,   219,    85,
     200,   200,   109,   134,   136,   200,   200,   177,   200,   219,
     140,   311,   220,   219,   -60,   -60,   -60,   109,   109,    69,
     221,   193,    -3,   220,    -9,   141,    -3,   220,    -9,   331,
     301,   221,   101,   117,   117,   221,   193,   193,   163,   197,
      -8,   313,   -60,   177,    -8,   143,   177,   177,   324,   173,
     -15,   231,   173,   173,   -15,   225,   222,   -87,   128,   330,
     173,   -87,   129,   333,   146,   214,   225,   222,   229,    75,
     225,   222,   232,   -62,   -62,   -62,   214,   213,   212,   229,
     214,   260,   262,   229,   270,   226,   325,   263,   213,   212,
     -86,   101,   213,   212,   -86,   197,   226,   223,   163,   224,
     226,   -62,   -56,   -56,   -56,   159,   227,   228,   223,   128,
     224,   128,   223,   299,   224,   314,   128,   227,   228,   267,
     315,   227,   228,   177,   264,   265,   -56,   163,   185,   239,
     -56,   186,   187,   188,   165,   189,   128,   177,    29,    30,
     316,   177,   266,   246,   269,    31,   179,   273,   185,   277,
     278,   186,   187,   188,   283,   189,   284,   177,    29,    30,
     293,   197,   294,   255,   300,    31,   303,   306,   197,   190,
     108,   163,   102,    89,    90,    91,   308,   165,   199,   -60,
     -60,   -60,   179,   309,   317,   179,   179,   318,   319,   190,
     258,   -62,   -62,   -62,   320,   181,   -45,   321,    24,    25,
      26,   197,    27,   -60,   322,   163,   163,   -60,   323,    11,
     -44,   126,   177,   177,   -42,   -62,   197,   197,   326,   -62,
     -65,   197,   197,   -65,   -65,   -65,   -43,   -65,   327,   177,
     -65,   -65,   177,   177,   199,   329,    40,   165,   157,   332,
     177,   -56,   -56,   -56,    22,     0,     0,   239,     0,     0,
     171,     0,     0,   246,     0,     0,     0,     0,   -56,     0,
       0,   -65,   179,   255,   -56,     0,   165,   185,     0,   240,
     186,   187,   188,     0,   189,     0,   179,    29,    30,     0,
     179,   157,   191,   247,    31,   163,   171,     0,   185,   171,
     171,   186,   187,   188,     0,   189,   179,     0,    29,    30,
     199,     0,     0,   256,     0,    31,     0,   199,   190,   275,
     165,   -55,   -55,   -55,     0,     0,   185,     0,     0,   186,
     187,   188,     0,   189,     0,     0,    29,    30,     0,   190,
     289,     0,     0,    31,     0,   -55,     0,     0,   191,   -55,
     199,   157,     0,     0,   165,   165,     0,   282,     0,     0,
     164,   179,   179,     0,   288,   199,   199,   190,   291,     0,
     199,   199,   178,   298,     0,     0,   171,     0,   179,     0,
     157,   179,   179,   157,     0,   -55,   -55,   -55,   151,   179,
     171,   152,   153,   154,   171,   155,     0,   171,    29,    30,
     -56,   -56,   -56,   164,   198,    31,     0,     0,   178,     0,
     171,   178,   178,   -55,   191,   -62,     0,   191,   -62,   -62,
     -62,   191,   -62,   -56,   157,   -62,   -62,     0,     0,   156,
       0,     0,   -62,   125,   165,     0,     0,     0,    82,     0,
       0,   166,   167,   168,     0,   169,     0,     0,    29,    30,
     -60,   -60,   -60,     0,   191,    31,   -62,     0,   157,   157,
     198,   157,     0,   164,   160,   171,   171,   -60,   171,   191,
     191,     0,     0,   -60,   191,   191,   174,   191,     0,   170,
       0,     0,   171,     0,     0,   171,   171,     0,   178,     0,
       0,   -78,   164,   171,   -78,   -78,   -78,     0,   -78,     0,
       0,   162,   178,     0,     0,     0,   178,   160,   194,     0,
       0,     0,   174,   176,   181,   174,   174,    24,    25,    26,
       0,    27,   178,     0,    29,    30,   198,     0,   123,     0,
       0,    31,   -78,   198,     0,     0,   164,     0,   157,   -55,
     -55,   -55,     0,     0,   162,   196,   -62,   -62,   -62,   176,
       0,     0,   176,   176,   -79,    40,   -55,   -79,   -79,   -79,
       0,   -79,   -55,   -62,   194,     0,   198,   160,   161,   -62,
     164,   281,     0,   124,     0,     0,     0,   178,   287,     0,
     175,   198,   198,     0,     0,     0,   198,   297,     0,     0,
       0,     0,   174,     0,   178,   -79,   160,   178,   178,     0,
       0,   196,     0,     0,   162,   178,   174,     0,     0,     0,
     174,   161,   195,   -60,   -60,   -60,   175,     0,   230,   175,
     175,   152,   153,   154,     0,   155,   174,     0,     0,   176,
     194,     0,     0,   162,     0,     0,   -60,   194,     0,     0,
     160,   185,     0,   176,   186,   187,   188,   176,   189,     0,
     164,    29,    30,   -62,   -62,   -62,     0,     0,    31,   156,
     -55,   -55,   -55,   176,     0,     0,     0,   196,   195,   158,
     194,   161,   279,     0,   196,     0,   -62,   162,     0,   285,
       0,   172,   190,   -55,     0,   194,   194,    82,   295,     0,
     166,   167,   168,     0,   169,     0,   175,     0,   174,     0,
     161,   174,   174,     0,     0,     0,     0,   196,     0,   174,
     175,   280,   158,   192,   175,     0,     0,   172,   286,     0,
     172,   172,   196,   196,     0,     0,     0,   296,   170,     0,
     175,     0,     0,     0,   195,   176,     0,     0,   176,   176,
       0,   195,     0,     0,   161,   230,   176,     0,   152,   153,
     154,     0,   155,     0,   160,    29,    30,     0,     0,     0,
     310,     0,    31,   166,   167,   168,     0,   169,     0,   192,
      29,    30,   158,     0,   195,   185,     0,    31,   186,   187,
     188,     0,   189,     0,     0,     0,   156,     0,     0,   195,
     195,   162,     0,     0,     0,     0,     0,   172,     0,     0,
       0,   170,   175,     0,     0,   175,   175,     0,     0,     0,
       0,   172,     0,   175,     0,     0,   190,     0,     0,     0,
       0,     0,     0,   -28,   -28,     0,   -28,   -28,   -28,     0,
     -28,   172,   -28,   -28,   -28,     0,     0,     0,     0,     0,
     -28,     0,   192,     0,     0,   158,     0,     0,   -28,   142,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   161,     0,
       0,     0,   -28,   -28,   -28,     0,     0,     0,     0,   -66,
       0,     0,   -66,   -66,   -66,   192,   -66,     0,     0,   -66,
     -66,     0,   -67,     0,     0,   -67,   -67,   -67,     0,   -67,
     192,   192,   -67,   -67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,     0,     0,   172,   172,   -26,   -26,
     -66,   -26,   -26,   -26,   172,   -26,     0,   -26,   -26,   -26,
       0,     0,     0,   -67,     0,   -26,     0,     0,     0,     0,
       0,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,   -26,     0,     0,     0,     0,   -26,   -26,   -26,
       0,    -7,    -7,     0,    -7,    -7,    -7,     0,    -7,   158,
      -7,    -7,    -7,     0,     0,     0,     0,     0,    -7,     0,
       0,     0,     0,     0,     0,     0,    -7,    -7,    -7,    -7,
      -7,    -7,     0,    -7,    -7,    -7,     0,     0,     0,     0,
      -7,    -7,    -7,   -19,   -19,     0,   -19,   -19,   -19,     0,
     -19,     0,   -19,   -19,   -19,     0,     0,     0,     0,     0,
     -19,     0,     0,     0,     0,     0,     0,     0,   -19,   -19,
     -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,     0,     0,
       0,     0,   -19,   -19,   -19,   -18,   -18,     0,   -18,   -18,
     -18,     0,   -18,     0,   -18,   -18,   -18,     0,     0,     0,
       0,     0,   -18,     0,     0,     0,     0,     0,     0,     0,
     -18,   -18,   -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,
       0,     0,     0,     0,   -18,   -18,   -18,   -20,   -20,     0,
     -20,   -20,   -20,     0,   -20,     0,   -20,   -20,   -20,     0,
       0,     0,     0,     0,   -20,     0,     0,     0,     0,     0,
       0,     0,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,
     -20,   -20,     0,     0,     0,     0,   -20,   -20,   -20,   -21,
     -21,     0,   -21,   -21,   -21,     0,   -21,     0,   -21,   -21,
     -21,     0,     0,     0,     0,     0,   -21,     0,     0,     0,
       0,     0,     0,     0,   -21,   -21,   -21,   -21,   -21,   -21,
       0,   -21,   -21,   -21,     0,     0,     0,     0,   -21,   -21,
     -21,   -22,   -22,     0,   -22,   -22,   -22,     0,   -22,     0,
     -22,   -22,   -22,     0,     0,     0,     0,     0,   -22,     0,
       0,     0,     0,     0,     0,     0,   -22,   -22,   -22,   -22,
     -22,   -22,     0,   -22,   -22,   -22,     0,     0,     0,     0,
     -22,   -22,   -22,   -23,   -23,     0,   -23,   -23,   -23,     0,
     -23,     0,   -23,   -23,   -23,     0,     0,     0,     0,     0,
     -23,     0,     0,     0,     0,     0,     0,     0,   -23,   -23,
     -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,     0,     0,
       0,     0,   -23,   -23,   -23,   -32,   -32,     0,   -32,   -32,
     -32,     0,   -32,     0,   -32,   -32,   -32,     0,     0,     0,
       0,     0,   -32,     0,     0,     0,     0,     0,     0,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,
       0,     0,     0,     0,   -32,   -32,   -32,   -33,   -33,     0,
     -33,   -33,   -33,     0,   -33,     0,   -33,   -33,   -33,     0,
       0,     0,     0,     0,   -33,     0,     0,     0,     0,     0,
       0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,     0,     0,     0,     0,   -33,   -33,   -33,   -34,
     -34,     0,   -34,   -34,   -34,     0,   -34,     0,   -34,   -34,
     -34,     0,     0,     0,     0,     0,   -34,     0,     0,     0,
       0,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,     0,     0,     0,     0,   -34,   -34,
     -34,   -35,   -35,     0,   -35,   -35,   -35,     0,   -35,     0,
     -35,   -35,   -35,     0,     0,     0,     0,     0,   -35,     0,
       0,     0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,   -35,   -35,   -35,     0,     0,     0,     0,
     -35,   -35,   -35,   -24,   -24,     0,   -24,   -24,   -24,     0,
     -24,     0,   -24,   -24,   -24,     0,     0,     0,     0,     0,
     -24,     0,     0,     0,     0,     0,     0,     0,   -24,   -24,
     -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,     0,     0,
       0,     0,   -24,   -24,   -24,   -25,   -25,     0,   -25,   -25,
     -25,     0,   -25,     0,   -25,   -25,   -25,     0,     0,     0,
       0,     0,   -25,     0,     0,     0,     0,     0,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,
       0,     0,     0,     0,   -25,   -25,   -25,   -10,   -10,     0,
     -10,   -10,   -10,     0,   -10,     0,   -10,   -10,   -10,     0,
       0,     0,     0,     0,   -10,     0,     0,     0,     0,     0,
       0,     0,   -10,   -10,   -10,   -10,   -10,   -10,     0,   -10,
     -10,   -10,     0,     0,     0,     0,   -10,   -10,   -10,   -37,
     -37,     0,   -37,   -37,   -37,     0,   -37,     0,   -37,   -37,
     -37,     0,     0,     0,     0,     0,   -37,     0,     0,     0,
       0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -37,     0,     0,     0,     0,   -37,   -37,
     -37,   -27,   -27,     0,   -27,   -27,   -27,     0,   -27,     0,
     -27,   -27,   -27,     0,     0,     0,     0,     0,   -27,     0,
       0,     0,     0,     0,     0,     0,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -27,     0,     0,     0,     0,
     -27,   -27,   -27,   -31,   -31,     0,   -31,   -31,   -31,     0,
     -31,     0,   -31,   -31,   -31,     0,     0,     0,     0,     0,
     -31,     0,     0,     0,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,     0,     0,
       0,     0,   -31,   -31,   -31,   -40,   -40,     0,   -40,   -40,
     -40,     0,   -40,     0,   -40,   -40,   -40,     0,     0,     0,
       0,     0,   -40,     0,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,
       0,     0,     0,     0,   -40,   -40,   -40,   -15,   -15,     0,
     -15,   -15,   -15,     0,   -15,     0,   -15,   -15,   -15,     0,
       0,     0,     0,     0,   -15,     0,     0,     0,     0,     0,
       0,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,
     -15,   -15,     0,     0,     0,     0,   -15,   -15,   -15,   -50,
     -50,     0,   -50,   -50,   -50,     0,   -50,     0,   -50,   -50,
     -50,     0,     0,     0,     0,     0,   -50,     0,     0,     0,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
       0,   -50,   -50,   -50,     0,     0,     0,     0,   -50,   -50,
     -50,   -36,   -36,     0,   -36,   -36,   -36,     0,   -36,     0,
     -36,   -36,   -36,     0,     0,     0,     0,     0,   -36,     0,
       0,     0,     0,     0,     0,     0,   -36,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,     0,     0,     0,     0,
     -36,   -36,   -36,   -41,   -41,     0,   -41,   -41,   -41,     0,
     -41,     0,   -41,   -41,   -41,     0,     0,     0,     0,     0,
     -41,     0,     0,     0,     0,     0,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,     0,     0,
       0,     0,   -41,   -41,   -41,   -28,   -28,     0,   -28,   -28,
     -28,     0,   -28,     0,   -28,   -28,   -28,     0,     0,     0,
       0,     0,   -28,     0,     0,     0,     0,     0,     0,     0,
     -28,   328,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,
       0,     0,     0,     0,   -28,   -28,   -28,   -51,   -51,     0,
     -51,   -51,   -51,     0,   -51,     0,   -51,   -51,   -51,     0,
       0,     0,     0,     0,   -51,     0,     0,     0,     0,     0,
       0,     0,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,
     -51,   -51,     0,     0,     0,     0,   -51,   -51,   -51,   -52,
     -52,     0,   -52,   -52,   -52,     0,   -52,     0,   -52,   -52,
     -52,     0,     0,     0,     0,     0,   -52,     0,     0,     0,
       0,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,
       0,   -52,   -52,   -52,     0,     0,     0,     0,   -52,   -52,
     -52,   -29,   -29,     0,   -29,   -29,   -29,     0,   -29,     0,
     -29,   -29,   -29,     0,     0,     0,     0,     0,   -29,     0,
       0,     0,     0,     0,     0,     0,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,   -29,     0,     0,     0,     0,
     -29,   -29,   -29,   -30,   -30,     0,   -30,   -30,   -30,     0,
     -30,     0,   -30,   -30,   -30,     0,     0,     0,     0,     0,
     -30,     0,     0,     0,     0,     0,     0,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,     0,
       0,     0,   -30,   -30,   -30,   -26,   -26,     0,   -26,   -26,
     -26,     0,   -26,     0,   -26,   -26,   -26,     0,     0,     0,
       0,     0,   -26,     0,     0,     0,     0,     0,     0,     0,
     -26,     0,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,
       0,     0,     0,     0,   -26,   -26,   -26,   -19,   -19,     0,
     -19,   -19,   -19,     0,   -19,     0,   -19,   -19,   -19,     0,
       0,     0,     0,     0,   -19,     0,     0,     0,     0,     0,
       0,     0,   -19,     0,   -19,   -19,   -19,   -19,     0,   -19,
     -19,   -19,     0,     0,     0,     0,   -19,   -19,   -19,    23,
     148,     0,    24,    25,    26,     0,    27,     0,    28,    29,
      30,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,    32,     0,    33,    34,    35,    36,
       0,    37,    38,    39,     0,     0,     0,     0,   149,    84,
      40,   -17,   -17,     0,   -17,   -17,   -17,     0,   -17,     0,
     -17,   -17,   -17,     0,     0,     0,     0,     0,   -17,     0,
       0,     0,     0,     0,     0,     0,   -17,     0,   -17,   -17,
     -17,   -17,     0,   -17,   -17,   -17,     0,     0,     0,     0,
     -17,   -17,   -17,   -18,   -18,     0,   -18,   -18,   -18,     0,
     -18,     0,   -18,   -18,   -18,     0,     0,     0,     0,     0,
     -18,     0,     0,     0,     0,     0,     0,     0,   -18,     0,
     -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,     0,     0,
       0,     0,   -18,   -18,   -18,   -20,   -20,     0,   -20,   -20,
     -20,     0,   -20,     0,   -20,   -20,   -20,     0,     0,     0,
       0,     0,   -20,     0,     0,     0,     0,     0,     0,     0,
     -20,     0,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,
       0,     0,     0,     0,   -20,   -20,   -20,   -21,   -21,     0,
     -21,   -21,   -21,     0,   -21,     0,   -21,   -21,   -21,     0,
       0,     0,     0,     0,   -21,     0,     0,     0,     0,     0,
       0,     0,   -21,     0,   -21,   -21,   -21,   -21,     0,   -21,
     -21,   -21,     0,     0,     0,     0,   -21,   -21,   -21,   -22,
     -22,     0,   -22,   -22,   -22,     0,   -22,     0,   -22,   -22,
     -22,     0,     0,     0,     0,     0,   -22,     0,     0,     0,
       0,     0,     0,     0,   -22,     0,   -22,   -22,   -22,   -22,
       0,   -22,   -22,   -22,     0,     0,     0,     0,   -22,   -22,
     -22,   -23,   -23,     0,   -23,   -23,   -23,     0,   -23,     0,
     -23,   -23,   -23,     0,     0,     0,     0,     0,   -23,     0,
       0,     0,     0,     0,     0,     0,   -23,     0,   -23,   -23,
     -23,   -23,     0,   -23,   -23,   -23,     0,     0,     0,     0,
     -23,   -23,   -23,   -32,   -32,     0,   -32,   -32,   -32,     0,
     -32,     0,   -32,   -32,   -32,     0,     0,     0,     0,     0,
     -32,     0,     0,     0,     0,     0,     0,     0,   -32,     0,
     -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,     0,
       0,     0,   -32,   -32,   -32,   -33,   -33,     0,   -33,   -33,
     -33,     0,   -33,     0,   -33,   -33,   -33,     0,     0,     0,
       0,     0,   -33,     0,     0,     0,     0,     0,     0,     0,
     -33,     0,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
       0,     0,     0,     0,   -33,   -33,   -33,   -34,   -34,     0,
     -34,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,     0,
       0,     0,     0,     0,   -34,     0,     0,     0,     0,     0,
       0,     0,   -34,     0,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,     0,     0,     0,     0,   -34,   -34,   -34,   -35,
     -35,     0,   -35,   -35,   -35,     0,   -35,     0,   -35,   -35,
     -35,     0,     0,     0,     0,     0,   -35,     0,     0,     0,
       0,     0,     0,     0,   -35,     0,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,     0,     0,     0,     0,   -35,   -35,
     -35,   -24,   -24,     0,   -24,   -24,   -24,     0,   -24,     0,
     -24,   -24,   -24,     0,     0,     0,     0,     0,   -24,     0,
       0,     0,     0,     0,     0,     0,   -24,     0,   -24,   -24,
     -24,   -24,     0,   -24,   -24,   -24,     0,     0,     0,     0,
     -24,   -24,   -24,   -25,   -25,     0,   -25,   -25,   -25,     0,
     -25,     0,   -25,   -25,   -25,     0,     0,     0,     0,     0,
     -25,     0,     0,     0,     0,     0,     0,     0,   -25,     0,
     -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,     0,     0,
       0,     0,   -25,   -25,   -25,   -16,   -16,     0,   -16,   -16,
     -16,     0,   -16,     0,   -16,   -16,   -16,     0,     0,     0,
       0,     0,   -16,     0,     0,     0,     0,     0,     0,     0,
     -16,     0,   -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,
       0,     0,     0,     0,   -16,   -16,   -16,   -37,   -37,     0,
     -37,   -37,   -37,     0,   -37,     0,   -37,   -37,   -37,     0,
       0,     0,     0,     0,   -37,     0,     0,     0,     0,     0,
       0,     0,   -37,     0,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,     0,     0,     0,     0,   -37,   -37,   -37,   -27,
     -27,     0,   -27,   -27,   -27,     0,   -27,     0,   -27,   -27,
     -27,     0,     0,     0,     0,     0,   -27,     0,     0,     0,
       0,     0,     0,     0,   -27,     0,   -27,   -27,   -27,   -27,
       0,   -27,   -27,   -27,     0,     0,     0,     0,   -27,   -27,
     -27,   -31,   -31,     0,   -31,   -31,   -31,     0,   -31,     0,
     -31,   -31,   -31,     0,     0,     0,     0,     0,   -31,     0,
       0,     0,     0,     0,     0,     0,   -31,     0,   -31,   -31,
     -31,   -31,     0,   -31,   -31,   -31,     0,     0,     0,     0,
     -31,   -31,   -31,   -40,   -40,     0,   -40,   -40,   -40,     0,
     -40,     0,   -40,   -40,   -40,     0,     0,     0,     0,     0,
     -40,     0,     0,     0,     0,     0,     0,     0,   -40,     0,
     -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,     0,     0,
       0,     0,   -40,   -40,   -40,   -50,   -50,     0,   -50,   -50,
     -50,     0,   -50,     0,   -50,   -50,   -50,     0,     0,     0,
       0,     0,   -50,     0,     0,     0,     0,     0,     0,     0,
     -50,     0,   -50,   -50,   -50,   -50,     0,   -50,   -50,   -50,
       0,     0,     0,     0,   -50,   -50,   -50,   -36,   -36,     0,
     -36,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,     0,
       0,     0,     0,     0,   -36,     0,     0,     0,     0,     0,
       0,     0,   -36,     0,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,     0,     0,     0,     0,   -36,   -36,   -36,   -41,
     -41,     0,   -41,   -41,   -41,     0,   -41,     0,   -41,   -41,
     -41,     0,     0,     0,     0,     0,   -41,     0,     0,     0,
       0,     0,     0,     0,   -41,     0,   -41,   -41,   -41,   -41,
       0,   -41,   -41,   -41,     0,     0,     0,     0,   -41,   -41,
     -41,   -51,   -51,     0,   -51,   -51,   -51,     0,   -51,     0,
     -51,   -51,   -51,     0,     0,     0,     0,     0,   -51,     0,
       0,     0,     0,     0,     0,     0,   -51,     0,   -51,   -51,
     -51,   -51,     0,   -51,   -51,   -51,     0,     0,     0,     0,
     -51,   -51,   -51,   -52,   -52,     0,   -52,   -52,   -52,     0,
     -52,     0,   -52,   -52,   -52,     0,     0,     0,     0,     0,
     -52,     0,     0,     0,     0,     0,     0,     0,   -52,     0,
     -52,   -52,   -52,   -52,     0,   -52,   -52,   -52,     0,     0,
       0,     0,   -52,   -52,   -52,   -29,   -29,     0,   -29,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -29,     0,     0,     0,
       0,     0,   -29,     0,     0,     0,     0,     0,     0,     0,
     -29,     0,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
       0,     0,     0,     0,   -29,   -29,   -29,   -30,   -30,     0,
     -30,   -30,   -30,     0,   -30,     0,   -30,   -30,   -30,     0,
       0,     0,     0,     0,   -30,     0,     0,     0,     0,     0,
       0,     0,   -30,     0,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,     0,     0,     0,     0,   -30,   -30,   -30,    -7,
      -7,     0,    -7,    -7,    -7,     0,    -7,     0,    -7,    -7,
      -7,     0,     0,     0,     0,     0,    -7,     0,     0,     0,
       0,     0,     0,     0,    -7,     0,    -7,    -7,    -7,    -7,
       0,    -7,    -7,    -7,     0,     0,     0,     0,    -7,    -7,
      -7,   -10,   -10,     0,   -10,   -10,   -10,     0,   -10,     0,
     -10,   -10,   -10,     0,     0,     0,     0,     0,   -10,     0,
       0,     0,     0,     0,     0,     0,   -10,     0,   -10,   -10,
     -10,   -10,     0,   -10,   -10,   -10,     0,     0,     0,     0,
     -10,   -10,   -10,    23,   148,     0,    24,    25,    26,     0,
      27,     0,    28,    29,    30,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     0,    32,     0,
      33,    34,    35,    36,     0,    37,    38,    39,     0,     0,
       0,     0,   149,   274,    40,    23,   148,     0,    24,    25,
      26,     0,    27,     0,    28,    29,    30,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,     0,     0,     0,
      32,     0,    33,    34,    35,    36,     0,    37,    38,    39,
       0,     0,     0,     0,   149,   307,    40,   -15,   -15,     0,
     -15,   -15,   -15,     0,   -15,     0,   -15,   -15,   -15,     0,
       0,     0,     0,     0,   -15,     0,     0,     0,     0,     0,
       0,     0,   -15,     0,   -15,   -15,   -15,   -15,     0,   -15,
     -15,   -15,     0,     0,     0,     0,   -15,   -15,   -15,    23,
     148,     0,    24,    25,    26,     0,    27,     0,    28,    29,
      30,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,    32,     0,    33,    34,    35,    36,
       0,    37,    38,    39,     0,     0,     0,     0,   149,     0,
      40,    23,   203,     0,    24,    25,    26,     0,    27,     0,
     204,    29,    30,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,   205,     0,   206,   207,
     208,   209,     0,    37,    38,   210,     0,     0,     0,     0,
     211,   -68,    40,     0,   -68,   -68,   -68,     0,   -68,     0,
     -69,   -68,   -68,   -69,   -69,   -69,     0,   -69,     0,   -70,
     -69,   -69,   -70,   -70,   -70,     0,   -70,     0,   181,   -70,
     -70,    24,    25,    26,     0,    27,     0,     0,    29,    30,
       0,     0,   -68,   -73,     0,     0,   -73,   -73,   -73,     0,
     -73,   -69,   -74,   -73,   -73,   -74,   -74,   -74,     0,   -74,
     -70,   230,   -74,   -74,   152,   153,   154,     0,   155,    40,
      82,    29,    30,   166,   167,   168,     0,   169,     0,     0,
      29,    30,     0,     0,   -73,   185,     0,     0,   186,   187,
     188,     0,   189,   -74,     0,    29,    30,     0,     0,     0,
       0,     0,   156,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   170,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,     0,     0,     0,     0,   190,     0,     0,     0,
       0,     0,   -80,     0,     0,   250,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   273,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,   201,   -80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   201,   -80,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,
     -47,   -47,   -47,   -46,     0,     0,     0,   -46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -47,     0,     0,
       0,   -47,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -48,     0,     0,     0,   -48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -49,     0,     0,     0,   -49,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -72,   -72,   103,   104,   -72,   -72,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -83,     0,     0,
       0,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,     0,     0,     0,   -72,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -76,     0,     0,     0,   -76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
       0,     0,   -81,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -77,     0,     0,     0,   -77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,     0,     0,     0,   -85,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -71,   -71,   103,   104,   -71,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -82,     0,
       0,     0,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -71,     0,     0,     0,   -71,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -75,     0,     0,     0,   -75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -84,
       0,     0,     0,   -84,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,
     -47,   -47,     0,     0,     0,     0,   -46,     0,     0,     0,
       0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -47,   -48,   -48,   -48,   -48,   -48,   -48,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,
     -49,     0,     0,     0,     0,   -48,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -49,
     -83,   -83,   -83,   -83,   -83,   -83,   -72,   -72,   103,   104,
     -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,   -83,     0,     0,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -72,   -76,
     -76,   -76,   -76,   -76,   -76,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,   -76,     0,     0,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -81,   -77,   -77,
     -77,   -77,   -77,   -77,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,     0,   -77,     0,     0,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -85,   -82,   -82,   -82,
     -82,   -82,   -82,   -71,   -71,   103,   104,   -71,   -71,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,   -82,     0,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -71,   -75,   -75,   -75,   -75,
     -75,   -75,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,     0,   183,   184,     0,
     -75,   -64,   -64,   -64,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   183,   184,     0,   -84,   -63,   -63,   -63,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -64,     0,     0,     0,   -64,
       0,     0,     0,     0,     0,     0,   183,   184,     0,   -63,
     -64,   -64,   -64,   -63,   -64,   -64,   -64,   -64,   -64,   -64,
     183,   184,     0,     0,   -63,   -63,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,     0,   -61,   -61,   -61,   -64,    94,
      95,    96,    97,    98,    99,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -63,   -80,   -80,   -80,   -80,   -80,   -80,    71,
       0,     0,     0,   -61,     0,     0,   -80,     0,     0,     0,
       0,     0,   -80,     0,     0,     0,    72,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,    71,     0,   -61,   -61,   -61,     0,    94,    95,    96,
      97,    98,    99,     0,   -80,     0,     0,     0,   234,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -61,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,     0,     0,     0,     0,
     -80,     0,     0,     0,     0,     0,   -80,     0,     0,     0,
     249,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -61,   -61,   -61,     0,    94,
      95,    96,    97,    98,    99,     0,     0,     0,   -80,     0,
       0,     0,   234,     0,     0,     0,     0,     0,     0,   -61,
       0,     0,     0,   -61,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,   -81,     0,     0,     0,   106,
       0,   -81,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
       0,     0,     0,   -85,     0,     0,     0,   -85,     0,   -85,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,     0,
       0,   -84,     0,     0,     0,   -84,     0,   -84,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,   -81,
       0,     0,     0,   272,     0,   -81,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,
       0,     0,     0,     0,     0,     0,     0,   -46,     0,     0,
       0,     0,     0,   -46,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,
       0,     0,     0,     0,     0,   -47,     0,     0,     0,     0,
       0,   -47,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
     -48,   -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,
       0,     0,     0,   -48,     0,     0,     0,     0,     0,   -48,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,
     -49,   -49,   -49,   -49,     0,     0,     0,     0,     0,     0,
       0,   -49,     0,     0,     0,     0,     0,   -49,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,   -83,
       0,     0,     0,     0,     0,   -83,   -72,   -72,   103,   104,
     -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,     0,   -72,     0,     0,
       0,     0,     0,   -72,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,     0,     0,     0,   -76,     0,     0,     0,     0,
       0,   -76,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
       0,     0,     0,   -77,     0,     0,     0,     0,     0,   -77,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,   -82,     0,     0,     0,     0,     0,   -82,   -71,   -71,
     103,   104,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,   -71,
       0,     0,     0,     0,     0,   -71,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,   -75,     0,     0,
       0,     0,     0,   -75,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,   -81,     0,     0,     0,     0,
       0,   -81,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
       0,     0,     0,   -85,     0,     0,     0,     0,     0,   -85,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,     0,
       0,   -84,     0,     0,     0,     0,     0,   -84,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -81,   -46,   -46,   -46,   -46,
     -46,   -46,     0,     0,     0,     0,     0,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -46,   -47,   -47,   -47,   -47,
     -47,   -47,     0,     0,     0,     0,     0,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -47,   -48,   -48,   -48,   -48,
     -48,   -48,     0,     0,     0,     0,     0,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -48,   -49,   -49,   -49,   -49,
     -49,   -49,     0,     0,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -49,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,     0,     0,   -72,   -72,
     103,   104,   -72,   -72,   -72,   -83,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -72,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -76,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -77,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -85,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,     0,     0,     0,     0,   -71,   -71,
     103,   104,   -71,   -71,   -71,   -82,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -71,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -75,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,     0,     0,   183,   184,
       0,     0,   -64,   -64,   -64,   -84,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,     0,   -64,
       0,     0,   183,   184,     0,   -64,   -63,   -63,   -63,     0,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,
       0,     0,     0,   -63,     0,     0,   183,   184,     0,   -63,
     -64,   -64,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,     0,     0,     0,     0,   183,   184,     0,     0,
     -63,   -63,   -63,   -64,   -63,   -63,   -63,   -63,   -63,   -63,
     -61,   -61,   -61,     0,    94,    95,    96,    97,    98,    99,
       0,     0,     0,   -63,     0,     0,     0,   -61,     0,     0,
       0,     0,     0,   -61
};

static const yytype_int16 yycheck[] =
{
       0,     0,    14,     3,     3,    80,    28,   149,     4,    21,
      19,   164,    12,   130,    43,     3,    16,    77,   130,    28,
     130,   130,     3,   201,     0,   178,     0,    34,     4,     4,
       4,     0,   158,    40,    43,     3,    28,     4,     6,     7,
       8,     4,    10,    44,     4,   198,   172,   161,    40,    71,
      44,   130,     4,     4,    63,    28,   234,    66,    17,    18,
      19,   175,    71,    72,    20,   130,   192,    40,    44,   211,
      45,   249,   250,   130,     3,     3,    44,    42,    45,    71,
      72,   195,    45,   143,    76,    45,    45,    79,    80,    34,
      63,   100,   101,    45,    45,    40,   105,    44,    71,    72,
       0,   130,    44,    76,     4,    44,    79,    80,   130,   130,
      44,     3,     3,   142,    17,    18,    19,   146,   130,   128,
       3,   130,   131,     6,     7,     8,    40,    10,   281,    40,
     130,   130,    40,   142,   287,    40,   128,   146,   130,   131,
     149,     3,    45,     3,   297,    17,    18,    19,    45,     0,
     130,   160,   130,     4,   163,   128,    40,     3,   131,   130,
     130,    44,    34,    20,   156,    17,    18,    19,    40,     3,
      20,    20,     6,     7,     8,     9,    10,     0,   170,    13,
      14,     4,   204,   156,     3,   194,    20,   160,   197,    41,
     265,   266,   201,    45,    27,   204,    40,   170,   190,    40,
     317,   174,   211,   263,   233,   317,    45,   317,   317,   201,
      44,   328,   204,   273,    45,   332,   328,   190,   328,   328,
     332,   194,   332,   332,   233,   234,    40,    45,   201,   238,
     239,   204,   241,     0,    45,    28,    45,     4,   317,   268,
     249,   250,   234,    45,    40,   254,   255,    40,   257,   328,
      40,   273,   317,   332,    17,    18,    19,   249,   250,   268,
     317,   234,     0,   328,     0,    40,     4,   332,     4,   329,
     262,   328,    65,   265,   266,   332,   249,   250,    71,    72,
       0,   273,    45,    76,     4,    40,    79,    80,   317,   262,
       0,     3,   265,   266,     4,   317,   317,    41,    41,   328,
     273,    45,    45,   332,    45,   317,   328,   328,   317,   318,
     332,   332,     3,    17,    18,    19,   328,   317,   317,   328,
     332,     3,    44,   332,    40,   317,   318,    44,   328,   328,
      41,   124,   332,   332,    45,   128,   328,   317,   131,   317,
     332,    45,    17,    18,    19,   318,   317,   317,   328,    41,
     328,    41,   332,    45,   332,    45,    41,   328,   328,     3,
      45,   332,   332,   156,    44,    44,    41,   160,     3,   162,
      45,     6,     7,     8,    28,    10,    41,   170,    13,    14,
      45,   174,    44,   176,     3,    20,    40,    27,     3,    45,
      20,     6,     7,     8,    45,    10,    20,   190,    13,    14,
      45,   194,    20,   196,    40,    20,     3,    40,   201,    44,
      45,   204,    66,    17,    18,    19,     3,    71,    72,    17,
      18,    19,    76,     3,    45,    79,    80,    40,    45,    44,
      45,    17,    18,    19,    45,     3,    40,    45,     6,     7,
       8,   234,    10,    41,    40,   238,   239,    45,    40,     3,
      45,   105,   245,   246,    45,    41,   249,   250,    40,    45,
       3,   254,   255,     6,     7,     8,    45,    10,    40,   262,
      13,    14,   265,   266,   128,    40,    44,   131,    28,    45,
     273,    17,    18,    19,    16,    -1,    -1,   280,    -1,    -1,
      40,    -1,    -1,   286,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    44,   156,   296,    40,    -1,   160,     3,    -1,   163,
       6,     7,     8,    -1,    10,    -1,   170,    13,    14,    -1,
     174,    71,    72,   177,    20,   318,    76,    -1,     3,    79,
      80,     6,     7,     8,    -1,    10,   190,    -1,    13,    14,
     194,    -1,    -1,   197,    -1,    20,    -1,   201,    44,    45,
     204,    17,    18,    19,    -1,    -1,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    -1,    -1,    13,    14,    -1,    44,
      45,    -1,    -1,    20,    -1,    41,    -1,    -1,   128,    45,
     234,   131,    -1,    -1,   238,   239,    -1,   241,    -1,    -1,
      28,   245,   246,    -1,   248,   249,   250,    44,    45,    -1,
     254,   255,    40,   257,    -1,    -1,   156,    -1,   262,    -1,
     160,   265,   266,   163,    -1,    17,    18,    19,     3,   273,
     170,     6,     7,     8,   174,    10,    -1,   177,    13,    14,
      17,    18,    19,    71,    72,    20,    -1,    -1,    76,    -1,
     190,    79,    80,    45,   194,     3,    -1,   197,     6,     7,
       8,   201,    10,    40,   204,    13,    14,    -1,    -1,    44,
      -1,    -1,    20,   101,   318,    -1,    -1,    -1,     3,    -1,
      -1,     6,     7,     8,    -1,    10,    -1,    -1,    13,    14,
      17,    18,    19,    -1,   234,    20,    44,    -1,   238,   239,
     128,   241,    -1,   131,    28,   245,   246,    34,   248,   249,
     250,    -1,    -1,    40,   254,   255,    40,   257,    -1,    44,
      -1,    -1,   262,    -1,    -1,   265,   266,    -1,   156,    -1,
      -1,     3,   160,   273,     6,     7,     8,    -1,    10,    -1,
      -1,    28,   170,    -1,    -1,    -1,   174,    71,    72,    -1,
      -1,    -1,    76,    40,     3,    79,    80,     6,     7,     8,
      -1,    10,   190,    -1,    13,    14,   194,    -1,    92,    -1,
      -1,    20,    44,   201,    -1,    -1,   204,    -1,   318,    17,
      18,    19,    -1,    -1,    71,    72,    17,    18,    19,    76,
      -1,    -1,    79,    80,     3,    44,    34,     6,     7,     8,
      -1,    10,    40,    34,   128,    -1,   234,   131,    28,    40,
     238,   239,    -1,   100,    -1,    -1,    -1,   245,   246,    -1,
      40,   249,   250,    -1,    -1,    -1,   254,   255,    -1,    -1,
      -1,    -1,   156,    -1,   262,    44,   160,   265,   266,    -1,
      -1,   128,    -1,    -1,   131,   273,   170,    -1,    -1,    -1,
     174,    71,    72,    17,    18,    19,    76,    -1,     3,    79,
      80,     6,     7,     8,    -1,    10,   190,    -1,    -1,   156,
     194,    -1,    -1,   160,    -1,    -1,    40,   201,    -1,    -1,
     204,     3,    -1,   170,     6,     7,     8,   174,    10,    -1,
     318,    13,    14,    17,    18,    19,    -1,    -1,    20,    44,
      17,    18,    19,   190,    -1,    -1,    -1,   194,   128,    28,
     234,   131,   236,    -1,   201,    -1,    40,   204,    -1,   243,
      -1,    40,    44,    40,    -1,   249,   250,     3,   252,    -1,
       6,     7,     8,    -1,    10,    -1,   156,    -1,   262,    -1,
     160,   265,   266,    -1,    -1,    -1,    -1,   234,    -1,   273,
     170,   238,    71,    72,   174,    -1,    -1,    76,   245,    -1,
      79,    80,   249,   250,    -1,    -1,    -1,   254,    44,    -1,
     190,    -1,    -1,    -1,   194,   262,    -1,    -1,   265,   266,
      -1,   201,    -1,    -1,   204,     3,   273,    -1,     6,     7,
       8,    -1,    10,    -1,   318,    13,    14,    -1,    -1,    -1,
       3,    -1,    20,     6,     7,     8,    -1,    10,    -1,   128,
      13,    14,   131,    -1,   234,     3,    -1,    20,     6,     7,
       8,    -1,    10,    -1,    -1,    -1,    44,    -1,    -1,   249,
     250,   318,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,
      -1,    44,   262,    -1,    -1,   265,   266,    -1,    -1,    -1,
      -1,   170,    -1,   273,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,    -1,
      10,   190,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,   201,    -1,    -1,   204,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,   318,    -1,
      -1,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,     3,
      -1,    -1,     6,     7,     8,   234,    10,    -1,    -1,    13,
      14,    -1,     3,    -1,    -1,     6,     7,     8,    -1,    10,
     249,   250,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   262,    -1,    -1,   265,   266,     3,     4,
      44,     6,     7,     8,   273,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    44,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,
      -1,     3,     4,    -1,     6,     7,     8,    -1,    10,   318,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,     3,     4,    -1,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,     3,     4,    -1,     6,     7,
       8,    -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    43,    44,     3,     4,    -1,
       6,     7,     8,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,     3,
       4,    -1,     6,     7,     8,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      44,     3,     4,    -1,     6,     7,     8,    -1,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,     3,     4,    -1,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,     3,     4,    -1,     6,     7,
       8,    -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    43,    44,     3,     4,    -1,
       6,     7,     8,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,     3,
       4,    -1,     6,     7,     8,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      44,     3,     4,    -1,     6,     7,     8,    -1,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,     3,     4,    -1,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,     3,     4,    -1,     6,     7,
       8,    -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    43,    44,     3,     4,    -1,
       6,     7,     8,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,     3,
       4,    -1,     6,     7,     8,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      44,     3,     4,    -1,     6,     7,     8,    -1,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,     3,     4,    -1,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,     3,     4,    -1,     6,     7,
       8,    -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    43,    44,     3,     4,    -1,
       6,     7,     8,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,     3,
       4,    -1,     6,     7,     8,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      44,     3,     4,    -1,     6,     7,     8,    -1,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,     3,     4,    -1,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,     3,     4,    -1,     6,     7,
       8,    -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    43,    44,     3,     4,    -1,
       6,     7,     8,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,     3,
       4,    -1,     6,     7,     8,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      44,     3,     4,    -1,     6,     7,     8,    -1,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,     3,     4,    -1,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,     3,     4,    -1,     6,     7,
       8,    -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    43,    44,     3,     4,    -1,
       6,     7,     8,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,     3,
       4,    -1,     6,     7,     8,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      44,     3,     4,    -1,     6,     7,     8,    -1,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,     3,     4,    -1,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,     3,     4,    -1,     6,     7,
       8,    -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    43,    44,     3,     4,    -1,
       6,     7,     8,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,     3,
       4,    -1,     6,     7,     8,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      44,     3,     4,    -1,     6,     7,     8,    -1,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,     3,     4,    -1,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,     3,     4,    -1,     6,     7,
       8,    -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    43,    44,     3,     4,    -1,
       6,     7,     8,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,     3,
       4,    -1,     6,     7,     8,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      44,     3,     4,    -1,     6,     7,     8,    -1,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,     3,     4,    -1,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,     3,     4,    -1,     6,     7,
       8,    -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    43,    44,     3,     4,    -1,
       6,     7,     8,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,     3,
       4,    -1,     6,     7,     8,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      44,     3,     4,    -1,     6,     7,     8,    -1,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,     3,     4,    -1,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,     3,     4,    -1,     6,     7,
       8,    -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    43,    44,     3,     4,    -1,
       6,     7,     8,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,     3,
       4,    -1,     6,     7,     8,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      44,     3,     4,    -1,     6,     7,     8,    -1,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,     3,     4,    -1,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,     3,     4,    -1,     6,     7,
       8,    -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    43,    44,     3,     4,    -1,
       6,     7,     8,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,     3,
       4,    -1,     6,     7,     8,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      44,     3,     4,    -1,     6,     7,     8,    -1,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,     3,     4,    -1,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,     3,     4,    -1,     6,     7,
       8,    -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    43,    44,     3,     4,    -1,
       6,     7,     8,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,     3,
       4,    -1,     6,     7,     8,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,
      44,     3,     4,    -1,     6,     7,     8,    -1,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,     3,    44,    -1,     6,     7,     8,    -1,    10,    -1,
       3,    13,    14,     6,     7,     8,    -1,    10,    -1,     3,
      13,    14,     6,     7,     8,    -1,    10,    -1,     3,    13,
      14,     6,     7,     8,    -1,    10,    -1,    -1,    13,    14,
      -1,    -1,    44,     3,    -1,    -1,     6,     7,     8,    -1,
      10,    44,     3,    13,    14,     6,     7,     8,    -1,    10,
      44,     3,    13,    14,     6,     7,     8,    -1,    10,    44,
       3,    13,    14,     6,     7,     8,    -1,    10,    -1,    -1,
      13,    14,    -1,    -1,    44,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    44,    -1,    13,    14,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    13,    14,    15,    16,    17,    18,
      19,    44,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    44,    45,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      26,    27,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    26,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    26,    41,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      41,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    26,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    26,    41,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    41,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    26,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      26,    41,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    41,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      26,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    26,    41,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    45,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      45,    21,    22,    23,    24,    25,    26,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    45,
      21,    22,    23,    24,    25,    26,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    45,    21,
      22,    23,    24,    25,    26,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    45,    21,    22,
      23,    24,    25,    26,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    45,    21,    22,    23,
      24,    25,    26,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    45,    21,    22,    23,    24,
      25,    26,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    -1,    13,    14,    -1,
      45,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      26,    13,    14,    -1,    45,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    26,    41,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    -1,    41,
      17,    18,    19,    45,    21,    22,    23,    24,    25,    26,
      13,    14,    -1,    -1,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    -1,    17,    18,    19,    45,    21,
      22,    23,    24,    25,    26,    13,    14,    15,    16,    17,
      18,    19,    45,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    45,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      26,    27,    -1,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    26,    -1,    40,    -1,    -1,    -1,    44,    13,
      14,    15,    16,    17,    18,    19,    40,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    26,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    45,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,
      -1,    40,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    -1,    40,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    38,    -1,    40,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    38,    -1,    40,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    40,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    40,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    40,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    40,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    40,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      -1,    -1,    17,    18,    19,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    13,    14,    -1,    40,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    13,    14,    -1,    40,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    -1,    -1,
      17,    18,    19,    40,    21,    22,    23,    24,    25,    26,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    47,    48,    49,    50,    51,    52,    53,     3,
       0,    49,    44,     4,    45,    52,    54,    55,     3,    42,
      56,    45,    55,     3,     6,     7,     8,    10,    12,    13,
      14,    20,    28,    30,    31,    32,    33,    35,    36,    37,
      44,    50,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    76,    78,    79,    80,    82,    83,    84,    86,    87,
      56,    27,    44,    69,    71,    87,    44,    44,    44,    44,
      44,     3,     3,    71,    43,    58,     3,    40,    34,    17,
      18,    19,    77,    78,    21,    22,    23,    24,    25,    26,
      81,    83,    86,    15,    16,    85,    38,    69,    45,    71,
      88,    40,    71,     3,    70,     3,     9,    71,    75,    75,
      40,    45,     3,    79,    82,    84,    86,     3,    41,    45,
      45,    40,    45,    45,    45,    40,    40,    71,    58,    71,
      40,    40,    29,    40,    58,    70,    45,    58,     4,    42,
      52,     3,     6,     7,     8,    10,    44,    72,    76,    78,
      79,    80,    82,    83,    84,    86,     6,     7,     8,    10,
      44,    72,    76,    78,    79,    80,    82,    83,    84,    86,
      87,     3,    87,    13,    14,     3,     6,     7,     8,    10,
      44,    72,    76,    78,    79,    80,    82,    83,    84,    86,
      87,    44,    20,     4,    12,    28,    30,    31,    32,    33,
      37,    42,    50,    52,    56,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    71,    73,    74,    87,
       3,     3,     3,    57,    44,    71,    77,    78,    81,    83,
      86,    85,    71,    77,    78,    81,    83,    86,    85,    44,
      44,    71,    77,    78,    81,    83,    86,    85,    45,    88,
       3,    69,    44,    44,    44,    44,    44,     3,    57,     3,
      40,    34,    38,    27,    43,    45,    88,    45,    20,    79,
      82,    84,    86,    45,    20,    79,    82,    84,    86,    45,
      88,    45,    88,    45,    20,    79,    82,    84,    86,    45,
      40,    71,    70,     3,    75,    75,    40,    43,     3,     3,
       3,    69,    70,    71,    45,    45,    45,    45,    40,    45,
      45,    45,    40,    40,    58,    71,    40,    40,    29,    40,
      58,    70,    45,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    50,    51,    51,
      52,    53,    54,    54,    55,    56,    57,    57,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    59,    60,    60,
      61,    62,    63,    63,    63,    63,    64,    65,    66,    66,
      67,    68,    69,    69,    70,    71,    72,    72,    72,    72,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    77,
      78,    78,    79,    80,    80,    81,    81,    81,    81,    81,
      81,    82,    82,    83,    83,    84,    84,    84,    85,    85,
      86,    86,    86,    86,    87,    87,    88,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     5,     4,
       2,     2,     2,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     7,
       9,     3,     1,     1,     1,     1,     4,     2,     1,     1,
       3,     4,     1,     1,     3,     1,     1,     1,     1,     1,
       4,     5,     5,     1,     1,     3,     1,     1,     1,     1,
       2,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     2,     1,     1,
       1,     1,     3,     1,     4,     3,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 92 "guillex.y"
                        {}
#line 2739 "guillex.tab.c"
    break;

  case 3:
#line 96 "guillex.y"
                                    {}
#line 2745 "guillex.tab.c"
    break;

  case 4:
#line 97 "guillex.y"
                      {}
#line 2751 "guillex.tab.c"
    break;

  case 5:
#line 101 "guillex.y"
                       {}
#line 2757 "guillex.tab.c"
    break;

  case 6:
#line 102 "guillex.y"
                       {}
#line 2763 "guillex.tab.c"
    break;

  case 7:
#line 106 "guillex.y"
                       {}
#line 2769 "guillex.tab.c"
    break;

  case 8:
#line 110 "guillex.y"
                                                         {}
#line 2775 "guillex.tab.c"
    break;

  case 9:
#line 111 "guillex.y"
                                                  {}
#line 2781 "guillex.tab.c"
    break;

  case 10:
#line 115 "guillex.y"
            {}
#line 2787 "guillex.tab.c"
    break;

  case 11:
#line 119 "guillex.y"
            {}
#line 2793 "guillex.tab.c"
    break;

  case 12:
#line 123 "guillex.y"
                 {}
#line 2799 "guillex.tab.c"
    break;

  case 13:
#line 124 "guillex.y"
          {}
#line 2805 "guillex.tab.c"
    break;

  case 14:
#line 128 "guillex.y"
                       {}
#line 2811 "guillex.tab.c"
    break;

  case 15:
#line 132 "guillex.y"
                            {}
#line 2817 "guillex.tab.c"
    break;

  case 16:
#line 136 "guillex.y"
                              {}
#line 2823 "guillex.tab.c"
    break;

  case 17:
#line 137 "guillex.y"
                  {}
#line 2829 "guillex.tab.c"
    break;

  case 18:
#line 141 "guillex.y"
             {}
#line 2835 "guillex.tab.c"
    break;

  case 19:
#line 142 "guillex.y"
                 {}
#line 2841 "guillex.tab.c"
    break;

  case 20:
#line 143 "guillex.y"
             {}
#line 2847 "guillex.tab.c"
    break;

  case 21:
#line 144 "guillex.y"
             {}
#line 2853 "guillex.tab.c"
    break;

  case 22:
#line 145 "guillex.y"
               {}
#line 2859 "guillex.tab.c"
    break;

  case 23:
#line 146 "guillex.y"
             {}
#line 2865 "guillex.tab.c"
    break;

  case 24:
#line 147 "guillex.y"
         {}
#line 2871 "guillex.tab.c"
    break;

  case 25:
#line 148 "guillex.y"
          {}
#line 2877 "guillex.tab.c"
    break;

  case 26:
#line 149 "guillex.y"
                   {}
#line 2883 "guillex.tab.c"
    break;

  case 27:
#line 153 "guillex.y"
                     {}
#line 2889 "guillex.tab.c"
    break;

  case 28:
#line 157 "guillex.y"
                                             {}
#line 2895 "guillex.tab.c"
    break;

  case 29:
#line 158 "guillex.y"
                                                                {}
#line 2901 "guillex.tab.c"
    break;

  case 30:
#line 162 "guillex.y"
                                                                              {}
#line 2907 "guillex.tab.c"
    break;

  case 31:
#line 166 "guillex.y"
                            {}
#line 2913 "guillex.tab.c"
    break;

  case 32:
#line 170 "guillex.y"
              {}
#line 2919 "guillex.tab.c"
    break;

  case 33:
#line 171 "guillex.y"
                  {}
#line 2925 "guillex.tab.c"
    break;

  case 34:
#line 172 "guillex.y"
                   {}
#line 2931 "guillex.tab.c"
    break;

  case 35:
#line 173 "guillex.y"
                 {}
#line 2937 "guillex.tab.c"
    break;

  case 36:
#line 177 "guillex.y"
                              {}
#line 2943 "guillex.tab.c"
    break;

  case 37:
#line 181 "guillex.y"
                    {}
#line 2949 "guillex.tab.c"
    break;

  case 38:
#line 185 "guillex.y"
             {}
#line 2955 "guillex.tab.c"
    break;

  case 39:
#line 186 "guillex.y"
             {}
#line 2961 "guillex.tab.c"
    break;

  case 40:
#line 190 "guillex.y"
                         {}
#line 2967 "guillex.tab.c"
    break;

  case 41:
#line 194 "guillex.y"
                       {}
#line 2973 "guillex.tab.c"
    break;

  case 42:
#line 198 "guillex.y"
              {}
#line 2979 "guillex.tab.c"
    break;

  case 43:
#line 199 "guillex.y"
              {}
#line 2985 "guillex.tab.c"
    break;

  case 44:
#line 203 "guillex.y"
                         {}
#line 2991 "guillex.tab.c"
    break;

  case 45:
#line 208 "guillex.y"
                  {}
#line 2997 "guillex.tab.c"
    break;

  case 46:
#line 212 "guillex.y"
            {}
#line 3003 "guillex.tab.c"
    break;

  case 47:
#line 213 "guillex.y"
            {}
#line 3009 "guillex.tab.c"
    break;

  case 48:
#line 214 "guillex.y"
         {}
#line 3015 "guillex.tab.c"
    break;

  case 49:
#line 215 "guillex.y"
        {}
#line 3021 "guillex.tab.c"
    break;

  case 50:
#line 219 "guillex.y"
                        {}
#line 3027 "guillex.tab.c"
    break;

  case 51:
#line 223 "guillex.y"
                                      {}
#line 3033 "guillex.tab.c"
    break;

  case 52:
#line 224 "guillex.y"
                                         {}
#line 3039 "guillex.tab.c"
    break;

  case 53:
#line 228 "guillex.y"
           {}
#line 3045 "guillex.tab.c"
    break;

  case 54:
#line 229 "guillex.y"
              {}
#line 3051 "guillex.tab.c"
    break;

  case 55:
#line 233 "guillex.y"
                                          {}
#line 3057 "guillex.tab.c"
    break;

  case 56:
#line 234 "guillex.y"
                 {}
#line 3063 "guillex.tab.c"
    break;

  case 57:
#line 238 "guillex.y"
       {}
#line 3069 "guillex.tab.c"
    break;

  case 58:
#line 239 "guillex.y"
        {}
#line 3075 "guillex.tab.c"
    break;

  case 59:
#line 240 "guillex.y"
        {}
#line 3081 "guillex.tab.c"
    break;

  case 60:
#line 244 "guillex.y"
                             {}
#line 3087 "guillex.tab.c"
    break;

  case 62:
#line 249 "guillex.y"
        {}
#line 3093 "guillex.tab.c"
    break;

  case 63:
#line 253 "guillex.y"
                                      {}
#line 3099 "guillex.tab.c"
    break;

  case 64:
#line 254 "guillex.y"
           {}
#line 3105 "guillex.tab.c"
    break;

  case 65:
#line 259 "guillex.y"
            {}
#line 3111 "guillex.tab.c"
    break;

  case 66:
#line 260 "guillex.y"
            {}
#line 3117 "guillex.tab.c"
    break;

  case 67:
#line 261 "guillex.y"
            {}
#line 3123 "guillex.tab.c"
    break;

  case 68:
#line 262 "guillex.y"
            {}
#line 3129 "guillex.tab.c"
    break;

  case 69:
#line 263 "guillex.y"
           {}
#line 3135 "guillex.tab.c"
    break;

  case 70:
#line 264 "guillex.y"
              {}
#line 3141 "guillex.tab.c"
    break;

  case 71:
#line 268 "guillex.y"
                        {}
#line 3147 "guillex.tab.c"
    break;

  case 72:
#line 269 "guillex.y"
           {}
#line 3153 "guillex.tab.c"
    break;

  case 73:
#line 273 "guillex.y"
        {}
#line 3159 "guillex.tab.c"
    break;

  case 74:
#line 274 "guillex.y"
        {}
#line 3165 "guillex.tab.c"
    break;

  case 75:
#line 278 "guillex.y"
                        {}
#line 3171 "guillex.tab.c"
    break;

  case 76:
#line 279 "guillex.y"
           {}
#line 3177 "guillex.tab.c"
    break;

  case 77:
#line 280 "guillex.y"
                 {}
#line 3183 "guillex.tab.c"
    break;

  case 78:
#line 284 "guillex.y"
         {}
#line 3189 "guillex.tab.c"
    break;

  case 79:
#line 285 "guillex.y"
        {}
#line 3195 "guillex.tab.c"
    break;

  case 80:
#line 289 "guillex.y"
       {}
#line 3201 "guillex.tab.c"
    break;

  case 81:
#line 290 "guillex.y"
          {}
#line 3207 "guillex.tab.c"
    break;

  case 82:
#line 291 "guillex.y"
                            {}
#line 3213 "guillex.tab.c"
    break;

  case 83:
#line 292 "guillex.y"
            {}
#line 3219 "guillex.tab.c"
    break;

  case 84:
#line 296 "guillex.y"
                                 {}
#line 3225 "guillex.tab.c"
    break;

  case 85:
#line 297 "guillex.y"
                     {}
#line 3231 "guillex.tab.c"
    break;

  case 86:
#line 301 "guillex.y"
                               {}
#line 3237 "guillex.tab.c"
    break;

  case 87:
#line 302 "guillex.y"
              {}
#line 3243 "guillex.tab.c"
    break;


#line 3247 "guillex.tab.c"

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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
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
#line 307 "guillex.y"

int main(int argc, char *argv[]) {
  Node *tree;

  tree = create_node("value", 'I');
  tree = add_node_left("value", 'S', tree);
  tree -> left = add_node_left("value", 'I', tree -> left);
  tree -> left = add_node_middle("value", 'T', tree -> left);
  tree -> left = add_node_right("value", 'C', tree -> left);
  print_tree(tree);

  printf("\n\n#### Beginning test ####\n\n");

  FILE *file;
  file = fopen(argv[1], "r");
  yyparse();
  yylex_destroy();
  fclose(file);
  printf("\n\n#### EOF ####\n\n");
  return 0;
}
