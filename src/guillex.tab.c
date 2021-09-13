/* A Bison parser, made by GNU Bison 3.7.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

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
#include "../lib/tree.h"
#include "../lib/table.h"

int errors = 0; 


extern int yylex();
extern int yylex_destroy();
extern int yyparse();
void yyerror(const char* a);
extern int line;
extern int word_position;
extern FILE* yyin;



#line 93 "guillex.tab.c"

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

#include "guillex.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_TYPE = 4,                       /* TYPE  */
  YYSYMBOL_INTEGER = 5,                    /* INTEGER  */
  YYSYMBOL_DECIMAL = 6,                    /* DECIMAL  */
  YYSYMBOL_LIST = 7,                       /* LIST  */
  YYSYMBOL_STRING = 8,                     /* STRING  */
  YYSYMBOL_NIL = 9,                        /* NIL  */
  YYSYMBOL_ADD = 10,                       /* ADD  */
  YYSYMBOL_SUB = 11,                       /* SUB  */
  YYSYMBOL_MULT = 12,                      /* MULT  */
  YYSYMBOL_DIV = 13,                       /* DIV  */
  YYSYMBOL_OR = 14,                        /* OR  */
  YYSYMBOL_AND = 15,                       /* AND  */
  YYSYMBOL_SMALLER = 16,                   /* SMALLER  */
  YYSYMBOL_GREATER = 17,                   /* GREATER  */
  YYSYMBOL_SMALLEQ = 18,                   /* SMALLEQ  */
  YYSYMBOL_GREATEQ = 19,                   /* GREATEQ  */
  YYSYMBOL_EQUALS = 20,                    /* EQUALS  */
  YYSYMBOL_DIFFERENT = 21,                 /* DIFFERENT  */
  YYSYMBOL_APPEND = 22,                    /* APPEND  */
  YYSYMBOL_HEADLIST = 23,                  /* HEADLIST  */
  YYSYMBOL_TAILLIST = 24,                  /* TAILLIST  */
  YYSYMBOL_DESTROYHEAD = 25,               /* DESTROYHEAD  */
  YYSYMBOL_FILTER = 26,                    /* FILTER  */
  YYSYMBOL_ASSIGN = 27,                    /* ASSIGN  */
  YYSYMBOL_NEG = 28,                       /* NEG  */
  YYSYMBOL_NOT = 29,                       /* NOT  */
  YYSYMBOL_MAP = 30,                       /* MAP  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_THEN = 32,                      /* THEN  */
  YYSYMBOL_IF = 33,                        /* IF  */
  YYSYMBOL_FOR = 34,                       /* FOR  */
  YYSYMBOL_READ = 35,                      /* READ  */
  YYSYMBOL_WRITE = 36,                     /* WRITE  */
  YYSYMBOL_WRITELN = 37,                   /* WRITELN  */
  YYSYMBOL_RETURN = 38,                    /* RETURN  */
  YYSYMBOL_SEMIC = 39,                     /* SEMIC  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_STFUNC = 41,                    /* STFUNC  */
  YYSYMBOL_ENDFUNC = 42,                   /* ENDFUNC  */
  YYSYMBOL_PARENL = 43,                    /* PARENL  */
  YYSYMBOL_PARENR = 44,                    /* PARENR  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_program = 46,                   /* program  */
  YYSYMBOL_declarationList = 47,           /* declarationList  */
  YYSYMBOL_declaration = 48,               /* declaration  */
  YYSYMBOL_varDeclaration = 49,            /* varDeclaration  */
  YYSYMBOL_funcDeclaration = 50,           /* funcDeclaration  */
  YYSYMBOL_simpleVarDeclaration = 51,      /* simpleVarDeclaration  */
  YYSYMBOL_simpleFuncDeclaration = 52,     /* simpleFuncDeclaration  */
  YYSYMBOL_params = 53,                    /* params  */
  YYSYMBOL_param = 54,                     /* param  */
  YYSYMBOL_compoundStmt = 55,              /* compoundStmt  */
  YYSYMBOL_stmtList = 56,                  /* stmtList  */
  YYSYMBOL_primitiveStmt = 57,             /* primitiveStmt  */
  YYSYMBOL_exprStmt = 58,                  /* exprStmt  */
  YYSYMBOL_condStmt = 59,                  /* condStmt  */
  YYSYMBOL_iterStmt = 60,                  /* iterStmt  */
  YYSYMBOL_returnStmt = 61,                /* returnStmt  */
  YYSYMBOL_listStmt = 62,                  /* listStmt  */
  YYSYMBOL_appendOps = 63,                 /* appendOps  */
  YYSYMBOL_returnListOps = 64,             /* returnListOps  */
  YYSYMBOL_returnListOp = 65,              /* returnListOp  */
  YYSYMBOL_destroyHeadOps = 66,            /* destroyHeadOps  */
  YYSYMBOL_mapFilterOps = 67,              /* mapFilterOps  */
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_assignExp = 69,                 /* assignExp  */
  YYSYMBOL_simpleExp = 70,                 /* simpleExp  */
  YYSYMBOL_constOp = 71,                   /* constOp  */
  YYSYMBOL_inOp = 72,                      /* inOp  */
  YYSYMBOL_outOp = 73,                     /* outOp  */
  YYSYMBOL_outConst = 74,                  /* outConst  */
  YYSYMBOL_binLogicalExp = 75,             /* binLogicalExp  */
  YYSYMBOL_binLogicalOp = 76,              /* binLogicalOp  */
  YYSYMBOL_unLogicalExp = 77,              /* unLogicalExp  */
  YYSYMBOL_unLogicalOp = 78,               /* unLogicalOp  */
  YYSYMBOL_relationalExp = 79,             /* relationalExp  */
  YYSYMBOL_relationalOp = 80,              /* relationalOp  */
  YYSYMBOL_sumExp = 81,                    /* sumExp  */
  YYSYMBOL_sumOp = 82,                     /* sumOp  */
  YYSYMBOL_mulExp = 83,                    /* mulExp  */
  YYSYMBOL_mulOp = 84,                     /* mulOp  */
  YYSYMBOL_factor = 85,                    /* factor  */
  YYSYMBOL_fCall = 86,                     /* fCall  */
  YYSYMBOL_callParams = 87                 /* callParams  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

#if 1

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
#endif /* 1 */

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
#define YYLAST   5880

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  348

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    69,    69,    73,    74,    78,    79,    83,    87,    88,
      92,    96,   100,   101,   105,   109,   113,   114,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   130,   134,   135,
     139,   140,   144,   148,   149,   150,   151,   155,   159,   163,
     164,   168,   172,   176,   177,   181,   186,   190,   191,   192,
     193,   197,   201,   202,   206,   207,   211,   212,   216,   217,
     218,   222,   223,   227,   231,   232,   237,   238,   239,   240,
     241,   242,   246,   247,   251,   252,   256,   257,   258,   262,
     263,   267,   268,   269,   270,   274,   275,   279,   280
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "TYPE",
  "INTEGER", "DECIMAL", "LIST", "STRING", "NIL", "ADD", "SUB", "MULT",
  "DIV", "OR", "AND", "SMALLER", "GREATER", "SMALLEQ", "GREATEQ", "EQUALS",
  "DIFFERENT", "APPEND", "HEADLIST", "TAILLIST", "DESTROYHEAD", "FILTER",
  "ASSIGN", "NEG", "NOT", "MAP", "ELSE", "THEN", "IF", "FOR", "READ",
  "WRITE", "WRITELN", "RETURN", "SEMIC", "COMMA", "STFUNC", "ENDFUNC",
  "PARENL", "PARENR", "$accept", "program", "declarationList",
  "declaration", "varDeclaration", "funcDeclaration",
  "simpleVarDeclaration", "simpleFuncDeclaration", "params", "param",
  "compoundStmt", "stmtList", "primitiveStmt", "exprStmt", "condStmt",
  "iterStmt", "returnStmt", "listStmt", "appendOps", "returnListOps",
  "returnListOp", "destroyHeadOps", "mapFilterOps", "expression",
  "assignExp", "simpleExp", "constOp", "inOp", "outOp", "outConst",
  "binLogicalExp", "binLogicalOp", "unLogicalExp", "unLogicalOp",
  "relationalExp", "relationalOp", "sumExp", "sumOp", "mulExp", "mulOp",
  "factor", "fCall", "callParams", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
#endif

#define YYPACT_NINF (-198)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    17,    46,    71,   116,   132,   141,   -18,   -17,   124,
    -198,   170,   178,    15,    25,    11,    20,    21,    37,    39,
    3713,   190,    11,    54,  4683,  4956,  4986,  5016,  5046,    44,
      94,    36,    75,    81,   821,    42,    47,    50,    52,    67,
     831,   872,   996,  2442,  2483,  2524,  2565,  2606,  2647,  2688,
    2729,  2770,  2811,   131,  2852,  2893,    88,   107,     1,  5076,
    2934,  2975,   430,   694,  1055,  4632,  5781,   543,  5106,  5136,
    4836,   206,   831,   386,   109,   872,   831,   157,   530,   530,
     130,   152,  5376,  3842,   160,   223,  3016,  3057,  3098,   193,
     197,   204,   214,   215,   709,    26,   146,   174,   479,   518,
    1324,  1386,  1386,  5166,   585,   696,   543,   232,   217,  4866,
     234,   248,  3139,   210,   222,   228,   237,   238,   243,   250,
     253,  3180,  5196,   265,   950,  5796,  5226,  5256,   268,  1191,
    4896,  3754,  1204,  1204,  3221,   271,   273,  3262,  3303,   297,
     615,   274,   279,  3344,  3385,  3713,   316,   316,  3426,   299,
     285,   288,  3713,  3713,  3467,  3508,   349,  3713,   300,  4717,
    5406,  5436,  5466,  5496,   872,  5526,    74,   111,  1204,  5841,
    5811,   852,  5556,  5586,  4351,  4370,  4389,  4408,   872,  4427,
     100,   342,   872,  3711,  3911,   974,  4446,  4465,  4484,  4751,
    5286,  1427,  1468,  3788,  3861,  3896,  3931,  3966,   872,  4001,
     158,   555,  1191,  4801,  4617,  1119,  4036,  4071,  4106,   396,
    1116,   351,   319,   320,   321,   331,   347,   831,  3713,  1283,
     355,  1335,  1376,  1417,  1458,  1499,  1540,  1581,  1622,   395,
    1663,  1704,   361,    55,  1745,  1786,  4926,  4785,  1248,   365,
    3549,  3590,   407,   364,   380,   173,  1509,  1509,  5616,   852,
     367,   390,   434,  1550,  1550,  4503,   974,   417,   465,   377,
     402,   645,  1591,  1591,  4141,  1119,  4522,   311,   393,   872,
     831,   432,   530,   530,   394,  3631,  1827,  1868,  1909,   440,
     444,  3823,   411,   412,   413,  3672,  5646,   325,  5676,   231,
     294,  5826,  5706,  5736,  4541,   439,   617,  3946,  4560,  4579,
    5316,   336,  4176,   339,  4211,   740,   870,  4648,  4246,  4281,
    4598,  1950,   415,   398,   424,   420,   436,   437,  1991,  2032,
     456,   457,  5766,  5346,  4316,  3754,  1204,  1204,  2073,   460,
     463,  2114,  2155,  2196,   466,   467,  2237,  2278,  3754,   316,
     316,  2319,   468,   470,  3754,  3754,  2360,  2401
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,  -198,  -198,   507,     2,  -198,     0,  -198,  -198,   498,
     -14,  -150,    23,  -125,  -120,  -116,  -104,   -87,   -76,   -61,
     -59,   -49,   -45,   -24,   -67,    33,   536,    -2,    28,   -57,
    1027,  -124,   912,   688,  1010,   -65,   895,   309,   671,  -168,
     425,   -10,  -197
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    42,     6,   158,     8,    17,    18,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,   119,
      62,    93,    63,    64,    65,   101,    66,    67,    68,   106,
      69,   188,   111
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    21,     5,     7,   249,     5,   222,   240,    71,   114,
      70,   223,   267,    16,     1,   224,    80,    16,   256,    14,
       9,    12,   120,    89,   -14,    14,    13,   225,    19,   -66,
      82,   -66,   -66,   -66,    70,   -66,   -66,   -66,   265,   -39,
     -44,   -13,   244,   -10,   226,   287,    10,   -74,   108,   -74,
     -74,   -74,    20,   -74,   190,   227,   251,   190,   -12,    15,
     301,   303,    82,   208,   -14,    22,    82,    86,   275,   -66,
     228,    -2,   229,    81,    84,     1,   260,   279,   -40,   150,
     151,   -13,   230,   -10,    74,    75,   231,   -74,    90,    91,
      76,   190,   190,    77,   -44,    78,   190,   -75,   -12,   -75,
     -75,   -75,    92,   -75,   246,    81,   110,   232,   113,   115,
      79,   118,   118,   -46,    90,    91,    -4,   221,   253,   208,
      -4,   236,    82,    82,   249,   -57,   -57,    88,    92,   234,
     256,   220,    -5,   219,    87,    70,    -5,   -75,   262,   -57,
     265,    -6,    70,    70,   -46,    -6,   -43,    70,   112,   -67,
     -57,   -67,   -67,   -67,   140,   -67,   -67,   -67,    82,   235,
     116,    82,   139,   -10,   233,   141,   142,   -11,   148,   121,
      -3,   283,    90,    91,    -3,   154,   155,   -68,    -7,   -68,
     -68,   -68,    -7,   -68,   -68,   -68,    92,   -61,   -61,   -67,
      -9,   -44,   208,   274,    -9,   208,   123,   243,   -46,   208,
     222,   -61,   -46,   313,   122,   223,    -8,    82,    70,   224,
      -8,   250,   -61,   222,   282,   316,   317,   -68,   223,   222,
     222,   225,   224,   -15,   223,   223,   -58,   -15,   224,   224,
      70,   259,   208,   -59,   225,   128,    82,    82,   226,    82,
     225,   225,   110,   -60,   210,   -63,   -63,   208,   208,   227,
      81,   226,   208,   208,   131,   208,   -45,   226,   226,   -63,
      82,   132,   227,    86,   228,    70,   229,   133,   227,   227,
     -63,   284,   342,   343,   -88,   110,   230,   228,   -88,   229,
     231,   134,   -54,   228,   228,   229,   229,   -55,   129,   230,
     110,   110,   130,   231,   135,   230,   230,   136,    86,   231,
     231,   232,   312,   314,   137,   118,   118,   138,   -56,   -56,
     143,   221,   144,   146,   232,   236,    82,    82,   147,   149,
     232,   232,   -56,   234,   221,   220,   238,   219,   236,   152,
     221,   221,   153,   -56,   236,   236,   234,   -87,   220,   241,
     219,   -87,   234,   234,   220,   220,   219,   219,   333,   171,
     185,   129,   239,   235,   268,   310,   -57,   -57,   233,   334,
     335,   341,   269,   270,   271,   129,   235,   346,   347,   322,
     -57,   233,   235,   235,   272,   102,   129,   233,   233,   129,
     323,   171,   205,   324,   185,   171,   -57,   185,   185,   193,
     273,   194,   195,   196,   276,   197,    29,    30,   277,   193,
     278,   194,   195,   196,   -10,   197,    29,    30,   288,   289,
     193,   294,   194,   195,   196,    34,   197,    29,    30,   295,
     193,   304,   194,   195,   196,    34,   197,    29,    30,   198,
     109,   305,   311,   318,   102,   315,    34,   326,   205,   198,
     266,   171,   171,   320,    90,    91,    34,   321,   -61,   -61,
     198,   286,   -46,   -63,   -63,   -45,   -43,   -44,    92,   325,
     198,   300,   -61,   327,   328,   173,   187,   -63,   193,   -46,
     194,   195,   196,   185,   197,    29,    30,   171,   -61,   247,
     329,   330,   -69,   -63,   -69,   -69,   -69,   185,   -69,   -69,
     -69,   185,   103,   254,    34,   331,   332,   173,   207,   336,
     187,   173,   337,   187,   187,   339,   340,   185,   198,   302,
      11,   205,   344,   263,   345,    23,     0,     0,   205,     0,
       0,   -70,   -69,   -70,   -70,   -70,   171,   -70,   -70,   -70,
       0,   127,     0,    83,     0,   174,   175,   176,   117,   177,
      29,    30,     0,     0,     0,     0,   189,   185,    25,    26,
      27,   205,    28,     0,   207,   171,   171,   173,   173,    34,
       0,   -70,   185,   185,     0,     0,   205,   205,     0,   -57,
     -57,   205,   205,   178,     0,     0,   165,   179,   185,   171,
       0,   185,   185,   -57,     0,     0,    41,     0,   -79,   187,
     -79,   -79,   -79,   173,   -79,   -57,   248,     0,     0,   -57,
     247,     0,     0,   187,     0,     0,   254,   187,   165,   199,
     255,   179,   165,     0,   179,   179,   263,     0,   -28,   -28,
     -28,   -28,   -28,   187,   -28,   -28,   -28,   207,   -79,     0,
     264,   -56,   -56,     0,   207,   171,   171,     0,   -28,   -28,
     -28,     0,   173,     0,   -28,   -56,   145,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,   -61,
     -61,   -56,     0,   187,     0,   199,     0,   207,   165,   165,
       0,   173,   173,   -61,   293,     0,     0,     0,   187,   187,
       0,   299,   207,   207,     0,   -61,     0,   207,   207,   -61,
     309,     0,     0,     0,   187,   173,     0,   187,   187,   -80,
     179,   -80,   -80,   -80,   165,   -80,     0,   165,   -57,   -57,
       0,   172,   186,     0,   179,     0,   -57,     0,   179,     0,
       0,   179,   -57,   -61,   -61,     0,     0,     0,   168,   182,
       0,   -61,     0,   -57,   179,     0,     0,   -61,   199,   -80,
       0,   199,     0,   172,   206,   199,   186,   172,   -61,   186,
     186,   173,   173,   165,   -63,   -63,     0,     0,     0,     0,
     168,   202,     0,   182,   168,     0,   182,   182,   -63,     0,
       0,     0,     0,   126,   179,     0,     0,     0,   199,     0,
     -63,   124,   165,   165,   -63,   165,     0,     0,     0,   179,
     179,     0,   179,   199,   199,     0,     0,     0,   199,   199,
     206,   199,     0,   172,   172,   179,   165,     0,   179,   179,
       0,     0,     0,     0,     0,     0,     0,   202,     0,     0,
     168,   168,     0,     0,   -63,     0,   -63,   -63,   -63,     0,
     -63,   -63,   -63,     0,   159,   186,   160,   161,   162,   172,
     163,    29,    30,     0,     0,     0,     0,     0,     0,   186,
     -63,     0,   182,   186,     0,   237,   168,   160,   161,   162,
      34,   163,   165,   165,   -63,     0,   182,     0,     0,   186,
     182,     0,     0,   206,   164,    83,     0,   174,   175,   176,
     206,   177,    29,    30,   -56,   -56,   182,     0,   172,     0,
     202,     0,     0,     0,     0,   164,     0,   202,   -56,     0,
       0,    34,     0,     0,     0,   168,     0,     0,     0,   186,
     -56,     0,     0,   206,   -56,   178,     0,   172,   292,     0,
       0,     0,     0,     0,   186,   298,   182,     0,   206,   206,
     202,     0,   290,   206,   308,   170,   184,     0,     0,   296,
     186,   172,     0,   186,   186,   202,   202,     0,   306,     0,
       0,     0,   167,   181,     0,     0,     0,   182,   168,     0,
     182,   182,     0,     0,   -56,   -56,     0,   170,   204,     0,
     184,   170,   -56,   184,   184,     0,    94,    83,   -56,   174,
     175,   176,     0,   177,   167,   201,     0,   181,   167,   -56,
     181,   181,     0,     0,     0,     0,   125,   172,   172,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,     0,     0,
       0,     0,     0,     0,   168,   168,     0,   178,     0,   -26,
     -26,   -26,     0,     0,   204,   -26,     0,   170,   170,   -26,
     -26,   -26,   -26,   -26,   -26,     0,     0,   -26,   -26,   -26,
       0,   201,     0,     0,   167,   167,     0,     0,     0,     0,
     169,   183,     0,     0,     0,     0,     0,     0,   189,   184,
      25,    26,    27,   170,    28,    29,    30,   166,   180,     0,
       0,     0,     0,   184,     0,     0,   181,   184,     0,     0,
     245,     0,   169,   203,    34,   183,   169,     0,   183,   183,
     181,     0,     0,   184,   252,     0,     0,   204,    41,   166,
     200,     0,   180,   166,   204,   180,   180,     0,     0,     0,
     181,     0,   170,     0,   261,     0,     0,     0,     0,     0,
       0,   201,   193,     0,   194,   195,   196,     0,   197,   167,
     -63,   -63,     0,   184,     0,     0,     0,   204,   -63,   203,
       0,   291,   169,   169,   -63,     0,     0,     0,   297,     0,
     181,     0,   204,   204,   201,   -63,   200,   307,     0,   166,
     166,     0,   198,     0,   184,   170,     0,   184,   184,   201,
     201,     0,     0,     0,   183,     0,     0,     0,   169,     0,
       0,   181,   167,     0,   181,   181,     0,     0,   183,     0,
       0,   180,   183,     0,   193,     0,   194,   195,   196,     0,
     197,    29,    30,     0,     0,   180,     0,   237,   183,   160,
     161,   162,   203,   163,    29,    30,     0,     0,     0,   203,
      34,   170,   170,     0,     0,   180,     0,   169,     0,     0,
       0,     0,     0,    34,   198,     0,   200,     0,   167,   167,
       0,     0,     0,     0,   166,     0,     0,   164,   183,     0,
       0,   281,   203,   174,   175,   176,     0,   177,    29,    30,
       0,     0,     0,     0,     0,   180,     0,   203,   203,   200,
       0,     0,     0,     0,     0,     0,     0,    34,     0,   183,
     169,     0,   183,   183,   200,   200,   -26,   -26,   -26,   -26,
     -26,   178,   -26,   -26,   -26,     0,   180,   166,     0,   180,
     180,     0,     0,     0,     0,     0,   -26,   -26,   -26,     0,
       0,     0,   -26,     0,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,   -26,   -26,   -26,   -71,     0,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   169,   169,   -19,   -19,
     -19,   -19,   -19,     0,   -19,   -19,   -19,     0,     0,     0,
       0,     0,     0,   166,   166,     0,     0,     0,   -19,   -19,
     -19,     0,     0,     0,   -19,     0,   -19,   -71,   -19,   -19,
     -19,   -19,   -19,   -19,     0,     0,   -19,   -19,   -19,   -18,
     -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,     0,   189,
       0,    25,    26,    27,     0,    28,    29,    30,     0,   -18,
     -18,   -18,     0,     0,     0,   -18,     0,   -18,     0,   -18,
     -18,   -18,   -18,   -18,   -18,     0,     0,   -18,   -18,   -18,
     -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,    41,
     -74,     0,   -74,   -74,   -74,     0,   -74,   -74,   -74,     0,
     -20,   -20,   -20,     0,     0,     0,   -20,     0,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,   -20,
     -20,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,
     -74,   -75,     0,   -75,   -75,   -75,     0,   -75,   -75,   -75,
       0,   -21,   -21,   -21,     0,     0,     0,   -21,     0,   -21,
       0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,   -21,
     -21,   -21,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -75,   237,     0,   160,   161,   162,     0,   163,    29,
      30,     0,   -22,   -22,   -22,     0,     0,     0,   -22,     0,
     -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,
     -22,   -22,   -22,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   164,    83,     0,   174,   175,   176,     0,   177,
      29,    30,     0,   -23,   -23,   -23,     0,     0,     0,   -23,
       0,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
       0,   -23,   -23,   -23,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   178,   193,     0,   194,   195,   196,     0,
     197,    29,    30,     0,   -33,   -33,   -33,     0,     0,     0,
     -33,     0,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,   -33,   -33,   -33,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   198,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -34,   -34,   -34,     0,     0,
       0,   -34,     0,   -34,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -34,   -34,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -35,   -35,   -35,     0,
       0,     0,   -35,     0,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,   -35,   -35,   -35,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -36,   -36,   -36,
       0,     0,     0,   -36,     0,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,   -36,   -36,   -36,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -24,   -24,
     -24,     0,     0,     0,   -24,     0,   -24,     0,   -24,   -24,
     -24,   -24,   -24,   -24,     0,     0,   -24,   -24,   -24,   -25,
     -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -25,
     -25,   -25,     0,     0,     0,   -25,     0,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,     0,     0,   -25,   -25,   -25,
      -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -7,    -7,    -7,     0,     0,     0,    -7,     0,    -7,     0,
      -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,    -7,
      -7,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -38,   -38,   -38,     0,     0,     0,   -38,     0,   -38,
       0,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,
     -38,   -38,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
     -27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -27,   -27,   -27,     0,     0,     0,   -27,     0,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,
     -27,   -27,   -27,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -41,   -41,   -41,     0,     0,     0,   -41,
       0,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,
       0,   -41,   -41,   -41,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -32,   -32,   -32,     0,     0,     0,
     -32,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,   -32,   -32,   -32,   -15,   -15,   -15,   -15,   -15,
       0,   -15,   -15,   -15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -15,   -15,   -15,     0,     0,
       0,   -15,     0,   -15,     0,   -15,   -15,   -15,   -15,   -15,
     -15,     0,     0,   -15,   -15,   -15,   -51,   -51,   -51,   -51,
     -51,     0,   -51,   -51,   -51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -51,   -51,   -51,     0,
       0,     0,   -51,     0,   -51,     0,   -51,   -51,   -51,   -51,
     -51,   -51,     0,     0,   -51,   -51,   -51,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,   -37,
       0,     0,     0,   -37,     0,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,   -37,   -37,   -37,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -42,   -42,
     -42,     0,     0,     0,   -42,     0,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -42,     0,     0,   -42,   -42,   -42,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -28,
     -28,   -28,     0,     0,     0,   -28,     0,   338,     0,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,
     -52,   -52,   -52,   -52,   -52,     0,   -52,   -52,   -52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -52,   -52,   -52,     0,     0,     0,   -52,     0,   -52,     0,
     -52,   -52,   -52,   -52,   -52,   -52,     0,     0,   -52,   -52,
     -52,   -53,   -53,   -53,   -53,   -53,     0,   -53,   -53,   -53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -53,   -53,   -53,     0,     0,     0,   -53,     0,   -53,
       0,   -53,   -53,   -53,   -53,   -53,   -53,     0,     0,   -53,
     -53,   -53,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -29,   -29,   -29,     0,     0,     0,   -29,     0,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
     -29,   -29,   -29,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -30,   -30,   -30,     0,     0,     0,   -30,
       0,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,   -30,   -30,   -30,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -31,   -31,   -31,     0,     0,     0,
     -31,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,   -31,   -31,   -31,   -19,   -19,   -19,   -19,   -19,
       0,   -19,   -19,   -19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -19,   -19,   -19,     0,     0,
       0,   -19,     0,     0,     0,   -19,   -19,   -19,   -19,   -19,
     -19,     0,     0,   -19,   -19,   -19,    24,   156,    25,    26,
      27,     0,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,    33,     0,
       0,     0,    34,     0,     0,     0,    35,    36,    37,    38,
      39,    40,     0,     0,   157,    85,    41,   -17,   -17,   -17,
     -17,   -17,     0,   -17,   -17,   -17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -17,   -17,   -17,
       0,     0,     0,   -17,     0,     0,     0,   -17,   -17,   -17,
     -17,   -17,   -17,     0,     0,   -17,   -17,   -17,   -18,   -18,
     -18,   -18,   -18,     0,   -18,   -18,   -18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -18,   -18,
     -18,     0,     0,     0,   -18,     0,     0,     0,   -18,   -18,
     -18,   -18,   -18,   -18,     0,     0,   -18,   -18,   -18,   -20,
     -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -20,
     -20,   -20,     0,     0,     0,   -20,     0,     0,     0,   -20,
     -20,   -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,
     -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -21,   -21,   -21,     0,     0,     0,   -21,     0,     0,     0,
     -21,   -21,   -21,   -21,   -21,   -21,     0,     0,   -21,   -21,
     -21,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -22,   -22,   -22,     0,     0,     0,   -22,     0,     0,
       0,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,
     -22,   -22,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,
     -23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -23,   -23,   -23,     0,     0,     0,   -23,     0,
       0,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,
     -23,   -23,   -23,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -33,   -33,   -33,     0,     0,     0,   -33,
       0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -34,   -34,   -34,     0,     0,     0,
     -34,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,
       0,     0,   -34,   -34,   -34,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -35,   -35,   -35,     0,     0,
       0,   -35,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,     0,     0,   -35,   -35,   -35,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -36,   -36,   -36,     0,
       0,     0,   -36,     0,     0,     0,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,   -36,   -36,   -36,   -24,   -24,   -24,
     -24,   -24,     0,   -24,   -24,   -24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -24,   -24,   -24,
       0,     0,     0,   -24,     0,     0,     0,   -24,   -24,   -24,
     -24,   -24,   -24,     0,     0,   -24,   -24,   -24,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,   -25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -25,   -25,
     -25,     0,     0,     0,   -25,     0,     0,     0,   -25,   -25,
     -25,   -25,   -25,   -25,     0,     0,   -25,   -25,   -25,   -16,
     -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -16,
     -16,   -16,     0,     0,     0,   -16,     0,     0,     0,   -16,
     -16,   -16,   -16,   -16,   -16,     0,     0,   -16,   -16,   -16,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -38,   -38,   -38,     0,     0,     0,   -38,     0,     0,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,   -38,
     -38,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,   -27,   -27,     0,     0,     0,   -27,     0,     0,
       0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,
     -27,   -27,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,
     -41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -41,   -41,   -41,     0,     0,     0,   -41,     0,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
     -41,   -41,   -41,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -32,   -32,   -32,     0,     0,     0,   -32,
       0,     0,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -32,   -32,   -51,   -51,   -51,   -51,   -51,     0,
     -51,   -51,   -51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -51,   -51,   -51,     0,     0,     0,
     -51,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,
       0,     0,   -51,   -51,   -51,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -37,   -37,   -37,     0,     0,
       0,   -37,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,   -37,   -37,   -37,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -42,   -42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -42,   -42,   -42,     0,
       0,     0,   -42,     0,     0,     0,   -42,   -42,   -42,   -42,
     -42,   -42,     0,     0,   -42,   -42,   -42,   -52,   -52,   -52,
     -52,   -52,     0,   -52,   -52,   -52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -52,   -52,   -52,
       0,     0,     0,   -52,     0,     0,     0,   -52,   -52,   -52,
     -52,   -52,   -52,     0,     0,   -52,   -52,   -52,   -53,   -53,
     -53,   -53,   -53,     0,   -53,   -53,   -53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -53,   -53,
     -53,     0,     0,     0,   -53,     0,     0,     0,   -53,   -53,
     -53,   -53,   -53,   -53,     0,     0,   -53,   -53,   -53,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -29,
     -29,   -29,     0,     0,     0,   -29,     0,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -30,   -30,   -30,     0,     0,     0,   -30,     0,     0,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,   -30,
     -30,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -31,   -31,   -31,     0,     0,     0,   -31,     0,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,
     -31,   -31,    24,   156,    25,    26,    27,     0,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,     0,     0,     0,    34,     0,
       0,     0,    35,    36,    37,    38,    39,    40,     0,     0,
     157,   285,    41,    -7,    -7,    -7,    -7,    -7,     0,    -7,
      -7,    -7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    -7,    -7,    -7,     0,     0,     0,    -7,
       0,     0,     0,    -7,    -7,    -7,    -7,    -7,    -7,     0,
       0,    -7,    -7,    -7,    24,   156,    25,    26,    27,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,    33,     0,     0,     0,
      34,     0,     0,     0,    35,    36,    37,    38,    39,    40,
       0,     0,   157,   319,    41,   -15,   -15,   -15,   -15,   -15,
       0,   -15,   -15,   -15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -15,   -15,   -15,     0,     0,
       0,   -15,     0,     0,     0,   -15,   -15,   -15,   -15,   -15,
     -15,     0,     0,   -15,   -15,   -15,    24,   156,    25,    26,
      27,     0,    28,    29,    30,   -62,   -62,    95,    96,    97,
      98,    99,   100,     0,     0,     0,    31,    32,    33,   -62,
       0,     0,    34,     0,     0,     0,    35,    36,    37,    38,
      39,    40,     0,     0,   157,   -62,    41,    24,   156,    25,
      26,    27,     0,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,   211,
       0,     0,     0,    34,     0,     0,     0,   212,   213,   214,
     215,   216,   217,     0,     0,   218,     0,    41,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,     0,     0,   -81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
       0,   258,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
     238,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,   209,   -81,     0,     0,
     -81,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,     0,   209,   -81,     0,     0,   -47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -47,     0,     0,     0,   -47,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,     0,
       0,   191,   192,     0,   -48,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,   -48,     0,     0,   -65,
     -48,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,     0,   -65,   191,   192,     0,   -49,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,   -49,     0,     0,   -64,   -49,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,
     -64,     0,     0,     0,   -50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -50,     0,     0,     0,
     -50,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,   -84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,     0,     0,     0,   -84,   -73,   -73,   104,   105,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,     0,   -73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -73,     0,     0,     0,
     -73,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,     0,   -77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -77,     0,     0,     0,   -77,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,     0,     0,     0,
     -82,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,     0,     0,   -78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -78,     0,     0,     0,   -78,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,     0,     0,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -86,     0,     0,     0,
     -86,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,     0,     0,     0,   -83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -83,     0,     0,     0,   -83,   -72,   -72,   104,   105,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,     0,     0,     0,   -72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -72,     0,     0,     0,
     -72,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,     0,     0,   -76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -76,     0,     0,     0,   -76,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,     0,     0,     0,   -85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -85,     0,     0,     0,
     -85,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,     0,     0,     0,     0,     0,   -47,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,     0,     0,     0,   -47,     0,     0,   -48,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,     0,     0,     0,   -48,     0,     0,   -49,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
       0,     0,     0,   -49,     0,     0,   -50,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,   -50,     0,     0,   -84,   -73,   -73,   104,   105,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,   -84,     0,     0,   -73,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
     -73,     0,     0,   -77,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,   -77,
       0,     0,   -82,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,   -82,     0,
       0,   -78,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,   -78,     0,     0,
     -86,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,   -86,     0,     0,   -83,
     -72,   -72,   104,   105,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,   -83,     0,     0,   -72,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,   -72,     0,     0,   -76,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,   -76,     0,     0,   -85,   191,   192,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,   -85,     0,     0,   -65,   -62,   -62,    95,    96,
      97,    98,    99,   100,   -62,     0,     0,   -65,   191,   192,
     -62,   -65,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -62,     0,     0,     0,     0,   -64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -64,     0,
       0,     0,   -64,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
      72,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,     0,     0,     0,    73,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,     0,    72,   -81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -81,     0,     0,     0,
     242,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,   -81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,     0,     0,     0,   257,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,   -81,     0,   -62,   -62,    95,    96,    97,
      98,    99,   100,     0,   -81,     0,     0,     0,   242,   -62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -62,     0,     0,     0,   -62,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,     0,   -82,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,     0,   -86,     0,   -86,     0,     0,     0,
       0,     0,     0,     0,     0,   -86,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,     0,     0,   -85,     0,   -85,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,     0,   -82,     0,   280,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,
       0,     0,     0,     0,   -47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -47,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
       0,     0,     0,     0,   -48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -48,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,
       0,     0,     0,     0,   -49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -49,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,
       0,     0,     0,     0,   -50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -50,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,   -84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -84,   -73,   -73,   104,   105,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,     0,   -73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -73,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,     0,     0,     0,   -77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -77,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,   -78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -78,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,     0,   -83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -83,   -72,   -72,   104,   105,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,   -72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -72,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,     0,     0,   -76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -76,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,     0,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,     0,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -86,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,     0,     0,   -85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,
       0,     0,     0,     0,   -47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -47,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,     0,
       0,     0,     0,     0,   -48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -48,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,     0,
       0,     0,     0,     0,   -49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -49,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,
       0,     0,     0,     0,   -50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -50,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,     0,     0,     0,   -84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -84,   -73,   -73,   104,   105,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,     0,   -73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -73,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,     0,     0,   -77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -77,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
       0,     0,     0,     0,   -78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -78,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,     0,     0,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -86,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,     0,     0,     0,   -83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -83,   -72,   -72,   104,   105,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,     0,     0,     0,   -72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -72,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,     0,     0,   -76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -76,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,   191,   192,     0,   -85,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,   -85,   191,   192,     0,   -65,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -65,   191,   192,     0,   -64,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,   -64,   191,   192,     0,   -65,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
     -65,     0,     0,     0,   -64,   -62,   -62,    95,    96,    97,
      98,    99,   100,     0,     0,   -64,     0,     0,     0,   -62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -62
};

static const yytype_int16 yycheck[] =
{
       0,    15,     0,     3,   172,     3,   131,   157,    22,    76,
      20,   131,   209,    13,     4,   131,    40,    17,   186,     4,
       3,    39,    79,    22,     4,     4,    43,   131,     3,     3,
      40,     5,     6,     7,    44,     9,    10,    11,   206,     3,
      39,     4,   166,     4,   131,   242,     0,     3,    72,     5,
       6,     7,    41,     9,    64,   131,   180,    67,     4,    44,
     257,   258,    72,    73,    44,    44,    76,    44,   218,    43,
     131,     0,   131,    40,    41,     4,   200,    22,     3,   146,
     147,    44,   131,    44,     3,    43,   131,    43,    14,    15,
      43,   101,   102,    43,    39,    43,   106,     3,    44,     5,
       6,     7,    28,     9,   169,    72,    73,   131,    75,    76,
      43,    78,    79,    39,    14,    15,     0,   131,   183,   129,
       4,   131,   132,   133,   292,    14,    15,    39,    28,   131,
     298,   131,     0,   131,     3,   145,     4,    43,   203,    28,
     308,     0,   152,   153,    44,     4,    39,   157,    39,     3,
      39,     5,     6,     7,   131,     9,    10,    11,   168,   131,
       3,   171,   129,    39,   131,   132,   133,    43,   145,    39,
       0,   238,    14,    15,     4,   152,   153,     3,     0,     5,
       6,     7,     4,     9,    10,    11,    28,    14,    15,    43,
       0,    39,   202,   217,     4,   205,     3,   164,    40,   209,
     325,    28,    44,   270,    44,   325,     0,   217,   218,   325,
       4,   178,    39,   338,   238,   272,   273,    43,   338,   344,
     345,   325,   338,     0,   344,   345,    29,     4,   344,   345,
     240,   198,   242,    29,   338,     3,   246,   247,   325,   249,
     344,   345,   209,    29,    29,    14,    15,   257,   258,   325,
     217,   338,   262,   263,    44,   265,    39,   344,   345,    28,
     270,    39,   338,   240,   325,   275,   325,    39,   344,   345,
      39,   238,   339,   340,    40,   242,   325,   338,    44,   338,
     325,    44,    44,   344,   345,   344,   345,    44,    40,   338,
     257,   258,    44,   338,    44,   344,   345,    44,   275,   344,
     345,   325,   269,   270,    39,   272,   273,    39,    14,    15,
      39,   325,    39,    39,   338,   325,   326,   327,    39,     3,
     344,   345,    28,   325,   338,   325,    27,   325,   338,    44,
     344,   345,    44,    39,   344,   345,   338,    40,   338,    39,
     338,    44,   344,   345,   344,   345,   344,   345,   325,    40,
      41,    40,     3,   325,     3,    44,    14,    15,   325,   326,
     327,   338,    43,    43,    43,    40,   338,   344,   345,    44,
      28,   338,   344,   345,    43,    66,    40,   344,   345,    40,
      44,    72,    73,    44,    75,    76,    44,    78,    79,     3,
      43,     5,     6,     7,    39,     9,    10,    11,     3,     3,
      39,     5,     6,     7,    39,     9,    10,    11,    44,    29,
       3,    44,     5,     6,     7,    29,     9,    10,    11,    29,
       3,    44,     5,     6,     7,    29,     9,    10,    11,    43,
      44,    29,    39,    39,   125,     3,    29,    39,   129,    43,
      44,   132,   133,     3,    14,    15,    29,     3,    14,    15,
      43,    44,    22,    14,    15,    44,    44,    44,    28,    44,
      43,    44,    28,    39,    44,    40,    41,    28,     3,    39,
       5,     6,     7,   164,     9,    10,    11,   168,    44,   170,
      44,    44,     3,    44,     5,     6,     7,   178,     9,    10,
      11,   182,    67,   184,    29,    39,    39,    72,    73,    39,
      75,    76,    39,    78,    79,    39,    39,   198,    43,    44,
       3,   202,    44,   204,    44,    17,    -1,    -1,   209,    -1,
      -1,     3,    43,     5,     6,     7,   217,     9,    10,    11,
      -1,   106,    -1,     3,    -1,     5,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,     3,   238,     5,     6,
       7,   242,     9,    -1,   129,   246,   247,   132,   133,    29,
      -1,    43,   253,   254,    -1,    -1,   257,   258,    -1,    14,
      15,   262,   263,    43,    -1,    -1,    40,    41,   269,   270,
      -1,   272,   273,    28,    -1,    -1,    43,    -1,     3,   164,
       5,     6,     7,   168,     9,    40,   171,    -1,    -1,    44,
     291,    -1,    -1,   178,    -1,    -1,   297,   182,    72,    73,
     185,    75,    76,    -1,    78,    79,   307,    -1,     3,     4,
       5,     6,     7,   198,     9,    10,    11,   202,    43,    -1,
     205,    14,    15,    -1,   209,   326,   327,    -1,    23,    24,
      25,    -1,   217,    -1,    29,    28,    31,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,    14,
      15,    44,    -1,   238,    -1,   129,    -1,   242,   132,   133,
      -1,   246,   247,    28,   249,    -1,    -1,    -1,   253,   254,
      -1,   256,   257,   258,    -1,    40,    -1,   262,   263,    44,
     265,    -1,    -1,    -1,   269,   270,    -1,   272,   273,     3,
     164,     5,     6,     7,   168,     9,    -1,   171,    14,    15,
      -1,    40,    41,    -1,   178,    -1,    22,    -1,   182,    -1,
      -1,   185,    28,    14,    15,    -1,    -1,    -1,    40,    41,
      -1,    22,    -1,    39,   198,    -1,    -1,    28,   202,    43,
      -1,   205,    -1,    72,    73,   209,    75,    76,    39,    78,
      79,   326,   327,   217,    14,    15,    -1,    -1,    -1,    -1,
      72,    73,    -1,    75,    76,    -1,    78,    79,    28,    -1,
      -1,    -1,    -1,   102,   238,    -1,    -1,    -1,   242,    -1,
      40,    93,   246,   247,    44,   249,    -1,    -1,    -1,   253,
     254,    -1,   256,   257,   258,    -1,    -1,    -1,   262,   263,
     129,   265,    -1,   132,   133,   269,   270,    -1,   272,   273,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,
     132,   133,    -1,    -1,     3,    -1,     5,     6,     7,    -1,
       9,    10,    11,    -1,     3,   164,     5,     6,     7,   168,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   178,
      29,    -1,   164,   182,    -1,     3,   168,     5,     6,     7,
      29,     9,   326,   327,    43,    -1,   178,    -1,    -1,   198,
     182,    -1,    -1,   202,    43,     3,    -1,     5,     6,     7,
     209,     9,    10,    11,    14,    15,   198,    -1,   217,    -1,
     202,    -1,    -1,    -1,    -1,    43,    -1,   209,    28,    -1,
      -1,    29,    -1,    -1,    -1,   217,    -1,    -1,    -1,   238,
      40,    -1,    -1,   242,    44,    43,    -1,   246,   247,    -1,
      -1,    -1,    -1,    -1,   253,   254,   238,    -1,   257,   258,
     242,    -1,   244,   262,   263,    40,    41,    -1,    -1,   251,
     269,   270,    -1,   272,   273,   257,   258,    -1,   260,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,   269,   270,    -1,
     272,   273,    -1,    -1,    14,    15,    -1,    72,    73,    -1,
      75,    76,    22,    78,    79,    -1,    64,     3,    28,     5,
       6,     7,    -1,     9,    72,    73,    -1,    75,    76,    39,
      78,    79,    -1,    -1,    -1,    -1,   101,   326,   327,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,   326,   327,    -1,    43,    -1,    23,
      24,    25,    -1,    -1,   129,    29,    -1,   132,   133,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      -1,   129,    -1,    -1,   132,   133,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,     3,   164,
       5,     6,     7,   168,     9,    10,    11,    40,    41,    -1,
      -1,    -1,    -1,   178,    -1,    -1,   164,   182,    -1,    -1,
     168,    -1,    72,    73,    29,    75,    76,    -1,    78,    79,
     178,    -1,    -1,   198,   182,    -1,    -1,   202,    43,    72,
      73,    -1,    75,    76,   209,    78,    79,    -1,    -1,    -1,
     198,    -1,   217,    -1,   202,    -1,    -1,    -1,    -1,    -1,
      -1,   209,     3,    -1,     5,     6,     7,    -1,     9,   217,
      14,    15,    -1,   238,    -1,    -1,    -1,   242,    22,   129,
      -1,   246,   132,   133,    28,    -1,    -1,    -1,   253,    -1,
     238,    -1,   257,   258,   242,    39,   129,   262,    -1,   132,
     133,    -1,    43,    -1,   269,   270,    -1,   272,   273,   257,
     258,    -1,    -1,    -1,   164,    -1,    -1,    -1,   168,    -1,
      -1,   269,   270,    -1,   272,   273,    -1,    -1,   178,    -1,
      -1,   164,   182,    -1,     3,    -1,     5,     6,     7,    -1,
       9,    10,    11,    -1,    -1,   178,    -1,     3,   198,     5,
       6,     7,   202,     9,    10,    11,    -1,    -1,    -1,   209,
      29,   326,   327,    -1,    -1,   198,    -1,   217,    -1,    -1,
      -1,    -1,    -1,    29,    43,    -1,   209,    -1,   326,   327,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    43,   238,    -1,
      -1,     3,   242,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,   238,    -1,   257,   258,   242,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,   269,
     270,    -1,   272,   273,   257,   258,     3,     4,     5,     6,
       7,    43,     9,    10,    11,    -1,   269,   270,    -1,   272,
     273,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,     3,    -1,     5,
       6,     7,    -1,     9,    10,    11,   326,   327,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,   326,   327,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    31,    43,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,     3,
      -1,     5,     6,     7,    -1,     9,    10,    11,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    43,
       3,    -1,     5,     6,     7,    -1,     9,    10,    11,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      43,     3,    -1,     5,     6,     7,    -1,     9,    10,    11,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    43,     3,    -1,     5,     6,     7,    -1,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    43,     3,    -1,     5,     6,     7,    -1,     9,
      10,    11,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    43,     3,    -1,     5,     6,     7,    -1,
       9,    10,    11,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    23,    24,    25,    28,
      -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    44,    43,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    -1,    43,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      27,    28,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    43,    44,    -1,    -1,
      28,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    43,    44,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    10,    11,    -1,    28,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    40,    -1,    -1,    28,
      44,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    44,    10,    11,    -1,    28,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    40,    -1,    -1,    28,    44,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      44,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    44,    -1,    -1,    28,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    44,    -1,    -1,    28,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    44,    -1,    -1,    28,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    44,    -1,    -1,    28,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    44,    -1,    -1,    28,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      44,    -1,    -1,    28,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    44,
      -1,    -1,    28,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    44,    -1,
      -1,    28,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    44,    -1,    -1,
      28,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    44,    -1,    -1,    28,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    44,    -1,    -1,    28,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    44,    -1,    -1,    28,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    44,    -1,    -1,    28,    10,    11,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    44,    -1,    -1,    28,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    40,    10,    11,
      28,    44,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    39,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    39,    -1,    -1,    -1,    43,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    10,    11,    -1,    28,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    39,    10,    11,    -1,    28,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      39,    10,    11,    -1,    28,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    39,    10,    11,    -1,    28,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      39,    -1,    -1,    -1,    28,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    39,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    46,    47,    48,    49,    50,    51,    52,     3,
       0,    48,    39,    43,     4,    44,    51,    53,    54,     3,
      41,    55,    44,    54,     3,     5,     6,     7,     9,    10,
      11,    23,    24,    25,    29,    33,    34,    35,    36,    37,
      38,    43,    49,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    75,    77,    78,    79,    81,    82,    83,    85,
      86,    55,    27,    43,     3,    43,    43,    43,    43,    43,
      68,    70,    86,     3,    70,    42,    57,     3,    39,    22,
      14,    15,    28,    76,    77,    16,    17,    18,    19,    20,
      21,    80,    82,    85,    12,    13,    84,    30,    68,    44,
      70,    87,    39,    70,    69,    70,     3,     8,    70,    74,
      74,    39,    44,     3,    78,    81,    83,    85,     3,    40,
      44,    44,    39,    39,    44,    44,    44,    39,    39,    70,
      57,    70,    70,    39,    39,    31,    39,    39,    57,     3,
      69,    69,    44,    44,    57,    57,     4,    41,    51,     3,
       5,     6,     7,     9,    43,    71,    75,    77,    78,    79,
      81,    82,    83,    85,     5,     6,     7,     9,    43,    71,
      75,    77,    78,    79,    81,    82,    83,    85,    86,     3,
      86,    10,    11,     3,     5,     6,     7,     9,    43,    71,
      75,    77,    78,    79,    81,    82,    83,    85,    86,    43,
      29,    25,    33,    34,    35,    36,    37,    38,    41,    49,
      51,    55,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    70,    72,    73,    86,     3,    27,     3,
      56,    39,    43,    70,    76,    77,    80,    82,    85,    84,
      70,    76,    77,    80,    82,    85,    84,    43,    43,    70,
      76,    77,    80,    82,    85,    84,    44,    87,     3,    43,
      43,    43,    43,    43,    68,    56,    39,     3,    39,    22,
      30,     3,    68,    69,    70,    42,    44,    87,    44,    29,
      78,    81,    83,    85,    44,    29,    78,    81,    83,    85,
      44,    87,    44,    87,    44,    29,    78,    81,    83,    85,
      44,    39,    70,    69,    70,     3,    74,    74,    39,    42,
       3,     3,    44,    44,    44,    44,    39,    39,    44,    44,
      44,    39,    39,    57,    70,    70,    39,    39,    31,    39,
      39,    57,    69,    69,    44,    44,    57,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    49,    50,    50,
      51,    52,    53,    53,    54,    55,    56,    56,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    58,    59,    59,
      60,    60,    61,    62,    62,    62,    62,    63,    64,    65,
      65,    66,    67,    68,    68,    69,    70,    71,    71,    71,
      71,    72,    73,    73,    74,    74,    75,    75,    76,    76,
      76,    77,    77,    78,    79,    79,    80,    80,    80,    80,
      80,    80,    81,    81,    82,    82,    83,    83,    83,    84,
      84,    85,    85,    85,    85,    86,    86,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     5,     4,
       2,     2,     2,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     7,
       9,     9,     3,     1,     1,     1,     1,     4,     2,     1,
       1,     3,     4,     1,     1,     3,     1,     1,     1,     1,
       1,     4,     5,     5,     1,     1,     3,     1,     1,     1,
       1,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     2,     1,
       1,     1,     1,     3,     1,     4,     3,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

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

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  case 2: /* program: declarationList  */
#line 69 "guillex.y"
                        {}
#line 2849 "guillex.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 73 "guillex.y"
                                    {}
#line 2855 "guillex.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 74 "guillex.y"
                      {}
#line 2861 "guillex.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 78 "guillex.y"
                       {}
#line 2867 "guillex.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 79 "guillex.y"
                       {}
#line 2873 "guillex.tab.c"
    break;

  case 7: /* varDeclaration: simpleVarDeclaration SEMIC  */
#line 83 "guillex.y"
                               {}
#line 2879 "guillex.tab.c"
    break;

  case 8: /* funcDeclaration: simpleFuncDeclaration PARENL params PARENR compoundStmt  */
#line 87 "guillex.y"
                                                            {}
#line 2885 "guillex.tab.c"
    break;

  case 9: /* funcDeclaration: simpleFuncDeclaration PARENL PARENR compoundStmt  */
#line 88 "guillex.y"
                                                     {}
#line 2891 "guillex.tab.c"
    break;

  case 10: /* simpleVarDeclaration: TYPE ID  */
#line 92 "guillex.y"
            {}
#line 2897 "guillex.tab.c"
    break;

  case 11: /* simpleFuncDeclaration: TYPE ID  */
#line 96 "guillex.y"
            {}
#line 2903 "guillex.tab.c"
    break;

  case 12: /* params: params param  */
#line 100 "guillex.y"
                 {}
#line 2909 "guillex.tab.c"
    break;

  case 13: /* params: param  */
#line 101 "guillex.y"
          {}
#line 2915 "guillex.tab.c"
    break;

  case 14: /* param: simpleVarDeclaration  */
#line 105 "guillex.y"
                         {}
#line 2921 "guillex.tab.c"
    break;

  case 15: /* compoundStmt: STFUNC stmtList ENDFUNC  */
#line 109 "guillex.y"
                            {}
#line 2927 "guillex.tab.c"
    break;

  case 16: /* stmtList: stmtList primitiveStmt  */
#line 113 "guillex.y"
                              {}
#line 2933 "guillex.tab.c"
    break;

  case 17: /* stmtList: primitiveStmt  */
#line 114 "guillex.y"
                  {}
#line 2939 "guillex.tab.c"
    break;

  case 18: /* primitiveStmt: exprStmt  */
#line 118 "guillex.y"
             {}
#line 2945 "guillex.tab.c"
    break;

  case 19: /* primitiveStmt: compoundStmt  */
#line 119 "guillex.y"
                 {}
#line 2951 "guillex.tab.c"
    break;

  case 20: /* primitiveStmt: condStmt  */
#line 120 "guillex.y"
             {}
#line 2957 "guillex.tab.c"
    break;

  case 21: /* primitiveStmt: iterStmt  */
#line 121 "guillex.y"
             {}
#line 2963 "guillex.tab.c"
    break;

  case 22: /* primitiveStmt: returnStmt  */
#line 122 "guillex.y"
               {}
#line 2969 "guillex.tab.c"
    break;

  case 23: /* primitiveStmt: listStmt  */
#line 123 "guillex.y"
             {}
#line 2975 "guillex.tab.c"
    break;

  case 24: /* primitiveStmt: inOp  */
#line 124 "guillex.y"
         {}
#line 2981 "guillex.tab.c"
    break;

  case 25: /* primitiveStmt: outOp  */
#line 125 "guillex.y"
          {}
#line 2987 "guillex.tab.c"
    break;

  case 26: /* primitiveStmt: varDeclaration  */
#line 126 "guillex.y"
                   {}
#line 2993 "guillex.tab.c"
    break;

  case 27: /* exprStmt: expression SEMIC  */
#line 130 "guillex.y"
                     {}
#line 2999 "guillex.tab.c"
    break;

  case 28: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt  */
#line 134 "guillex.y"
                                                        {}
#line 3005 "guillex.tab.c"
    break;

  case 29: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt ELSE primitiveStmt  */
#line 135 "guillex.y"
                                                                {}
#line 3011 "guillex.tab.c"
    break;

  case 30: /* iterStmt: FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 139 "guillex.y"
                                                                              {}
#line 3017 "guillex.tab.c"
    break;

  case 31: /* iterStmt: FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 140 "guillex.y"
                                                                              {}
#line 3023 "guillex.tab.c"
    break;

  case 32: /* returnStmt: RETURN expression SEMIC  */
#line 144 "guillex.y"
                            {}
#line 3029 "guillex.tab.c"
    break;

  case 33: /* listStmt: appendOps  */
#line 148 "guillex.y"
              {}
#line 3035 "guillex.tab.c"
    break;

  case 34: /* listStmt: returnListOps  */
#line 149 "guillex.y"
                  {}
#line 3041 "guillex.tab.c"
    break;

  case 35: /* listStmt: destroyHeadOps  */
#line 150 "guillex.y"
                   {}
#line 3047 "guillex.tab.c"
    break;

  case 36: /* listStmt: mapFilterOps  */
#line 151 "guillex.y"
                 {}
#line 3053 "guillex.tab.c"
    break;

  case 37: /* appendOps: simpleExp APPEND ID SEMIC  */
#line 155 "guillex.y"
                              {}
#line 3059 "guillex.tab.c"
    break;

  case 38: /* returnListOps: returnListOp ID  */
#line 159 "guillex.y"
                    {}
#line 3065 "guillex.tab.c"
    break;

  case 39: /* returnListOp: HEADLIST  */
#line 163 "guillex.y"
             {}
#line 3071 "guillex.tab.c"
    break;

  case 40: /* returnListOp: TAILLIST  */
#line 164 "guillex.y"
             {}
#line 3077 "guillex.tab.c"
    break;

  case 41: /* destroyHeadOps: DESTROYHEAD ID SEMIC  */
#line 168 "guillex.y"
                         {}
#line 3083 "guillex.tab.c"
    break;

  case 42: /* mapFilterOps: fCall MAP ID SEMIC  */
#line 172 "guillex.y"
                       {}
#line 3089 "guillex.tab.c"
    break;

  case 43: /* expression: assignExp  */
#line 176 "guillex.y"
              {}
#line 3095 "guillex.tab.c"
    break;

  case 44: /* expression: simpleExp  */
#line 177 "guillex.y"
              {}
#line 3101 "guillex.tab.c"
    break;

  case 45: /* assignExp: ID ASSIGN expression  */
#line 181 "guillex.y"
                         {}
#line 3107 "guillex.tab.c"
    break;

  case 46: /* simpleExp: binLogicalExp  */
#line 186 "guillex.y"
                  {}
#line 3113 "guillex.tab.c"
    break;

  case 47: /* constOp: INTEGER  */
#line 190 "guillex.y"
            {}
#line 3119 "guillex.tab.c"
    break;

  case 48: /* constOp: DECIMAL  */
#line 191 "guillex.y"
            {}
#line 3125 "guillex.tab.c"
    break;

  case 49: /* constOp: LIST  */
#line 192 "guillex.y"
         {}
#line 3131 "guillex.tab.c"
    break;

  case 50: /* constOp: NIL  */
#line 193 "guillex.y"
        {}
#line 3137 "guillex.tab.c"
    break;

  case 51: /* inOp: READ PARENL ID PARENR  */
#line 197 "guillex.y"
                        {}
#line 3143 "guillex.tab.c"
    break;

  case 52: /* outOp: WRITE PARENL outConst PARENR SEMIC  */
#line 201 "guillex.y"
                                      {}
#line 3149 "guillex.tab.c"
    break;

  case 53: /* outOp: WRITELN PARENL outConst PARENR SEMIC  */
#line 202 "guillex.y"
                                         {}
#line 3155 "guillex.tab.c"
    break;

  case 54: /* outConst: STRING  */
#line 206 "guillex.y"
           {}
#line 3161 "guillex.tab.c"
    break;

  case 55: /* outConst: simpleExp  */
#line 207 "guillex.y"
              {}
#line 3167 "guillex.tab.c"
    break;

  case 56: /* binLogicalExp: binLogicalExp binLogicalOp unLogicalOp  */
#line 211 "guillex.y"
                                          {}
#line 3173 "guillex.tab.c"
    break;

  case 57: /* binLogicalExp: unLogicalExp  */
#line 212 "guillex.y"
                 {}
#line 3179 "guillex.tab.c"
    break;

  case 58: /* binLogicalOp: OR  */
#line 216 "guillex.y"
       {}
#line 3185 "guillex.tab.c"
    break;

  case 59: /* binLogicalOp: AND  */
#line 217 "guillex.y"
        {}
#line 3191 "guillex.tab.c"
    break;

  case 60: /* binLogicalOp: NEG  */
#line 218 "guillex.y"
        {}
#line 3197 "guillex.tab.c"
    break;

  case 61: /* unLogicalExp: unLogicalOp unLogicalExp  */
#line 222 "guillex.y"
                             {}
#line 3203 "guillex.tab.c"
    break;

  case 63: /* unLogicalOp: NOT  */
#line 227 "guillex.y"
        {}
#line 3209 "guillex.tab.c"
    break;

  case 64: /* relationalExp: relationalExp relationalOp sumExp  */
#line 231 "guillex.y"
                                      {}
#line 3215 "guillex.tab.c"
    break;

  case 65: /* relationalExp: sumExp  */
#line 232 "guillex.y"
           {}
#line 3221 "guillex.tab.c"
    break;

  case 66: /* relationalOp: SMALLER  */
#line 237 "guillex.y"
            {}
#line 3227 "guillex.tab.c"
    break;

  case 67: /* relationalOp: GREATER  */
#line 238 "guillex.y"
            {}
#line 3233 "guillex.tab.c"
    break;

  case 68: /* relationalOp: SMALLEQ  */
#line 239 "guillex.y"
            {}
#line 3239 "guillex.tab.c"
    break;

  case 69: /* relationalOp: GREATEQ  */
#line 240 "guillex.y"
            {}
#line 3245 "guillex.tab.c"
    break;

  case 70: /* relationalOp: EQUALS  */
#line 241 "guillex.y"
           {}
#line 3251 "guillex.tab.c"
    break;

  case 71: /* relationalOp: DIFFERENT  */
#line 242 "guillex.y"
              {}
#line 3257 "guillex.tab.c"
    break;

  case 72: /* sumExp: sumExp sumOp mulExp  */
#line 246 "guillex.y"
                        {}
#line 3263 "guillex.tab.c"
    break;

  case 73: /* sumExp: mulExp  */
#line 247 "guillex.y"
           {}
#line 3269 "guillex.tab.c"
    break;

  case 74: /* sumOp: ADD  */
#line 251 "guillex.y"
        {}
#line 3275 "guillex.tab.c"
    break;

  case 75: /* sumOp: SUB  */
#line 252 "guillex.y"
        {}
#line 3281 "guillex.tab.c"
    break;

  case 76: /* mulExp: mulExp mulOp factor  */
#line 256 "guillex.y"
                        {}
#line 3287 "guillex.tab.c"
    break;

  case 77: /* mulExp: factor  */
#line 257 "guillex.y"
           {}
#line 3293 "guillex.tab.c"
    break;

  case 78: /* mulExp: sumOp factor  */
#line 258 "guillex.y"
                 {}
#line 3299 "guillex.tab.c"
    break;

  case 79: /* mulOp: MULT  */
#line 262 "guillex.y"
         {}
#line 3305 "guillex.tab.c"
    break;

  case 80: /* mulOp: DIV  */
#line 263 "guillex.y"
        {}
#line 3311 "guillex.tab.c"
    break;

  case 81: /* factor: ID  */
#line 267 "guillex.y"
       {}
#line 3317 "guillex.tab.c"
    break;

  case 82: /* factor: fCall  */
#line 268 "guillex.y"
          {}
#line 3323 "guillex.tab.c"
    break;

  case 83: /* factor: PARENL simpleExp PARENR  */
#line 269 "guillex.y"
                            {}
#line 3329 "guillex.tab.c"
    break;

  case 84: /* factor: constOp  */
#line 270 "guillex.y"
            {}
#line 3335 "guillex.tab.c"
    break;

  case 85: /* fCall: ID PARENL callParams PARENR  */
#line 274 "guillex.y"
                                 {}
#line 3341 "guillex.tab.c"
    break;

  case 86: /* fCall: ID PARENL PARENR  */
#line 275 "guillex.y"
                     {}
#line 3347 "guillex.tab.c"
    break;

  case 87: /* callParams: callParams COMMA simpleExp  */
#line 279 "guillex.y"
                               {}
#line 3353 "guillex.tab.c"
    break;

  case 88: /* callParams: simpleExp  */
#line 280 "guillex.y"
              {}
#line 3359 "guillex.tab.c"
    break;


#line 3363 "guillex.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 285 "guillex.y"


void yyerror(const char* msg) {
  printf("%s\n", msg);
  errors++;
}

int main(int argc, char *argv[]) {
  printf("testing tree\n");
  Node *tree;

  tree = create_node("value", 'I');
  tree = add_node_left("value", 'S', tree);
  tree -> left = add_node_left("value", 'I', tree -> left);
  tree -> left = add_node_middle("value", 'T', tree -> left);
  tree -> left = add_node_right("value", 'C', tree -> left);
  print_tree(tree);


  printf("\n\n#### beginning ####\n\n");
  FILE *file;
  file = fopen(argv[1], "r");
  if(argc > 1){
    if(file){
      yyin = file;
      yyparse();
    }else{
      printf("File not found\n");
    }
  }
  else{
    printf("No file specified\n");
  }
  fclose(yyin);
  yylex_destroy();
  printf("\n\n#### EOF ####\n\n");
  return 0;
}
