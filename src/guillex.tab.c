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

int errors = 0; 

void yyerror(const char* msg) {
  printf("%s\n", msg);
  errors++;
}
int yylex();
extern int yylex_destroy(void);



#line 89 "guillex.tab.c"

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
  YYSYMBOL_MAIN = 38,                      /* MAIN  */
  YYSYMBOL_RETURN = 39,                    /* RETURN  */
  YYSYMBOL_SEMIC = 40,                     /* SEMIC  */
  YYSYMBOL_COMMA = 41,                     /* COMMA  */
  YYSYMBOL_STFUNC = 42,                    /* STFUNC  */
  YYSYMBOL_ENDFUNC = 43,                   /* ENDFUNC  */
  YYSYMBOL_PARENL = 44,                    /* PARENL  */
  YYSYMBOL_PARENR = 45,                    /* PARENR  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_program = 47,                   /* program  */
  YYSYMBOL_declarationList = 48,           /* declarationList  */
  YYSYMBOL_declaration = 49,               /* declaration  */
  YYSYMBOL_varDeclaration = 50,            /* varDeclaration  */
  YYSYMBOL_funcDeclaration = 51,           /* funcDeclaration  */
  YYSYMBOL_simpleVDeclaration = 52,        /* simpleVDeclaration  */
  YYSYMBOL_simpleFDeclaration = 53,        /* simpleFDeclaration  */
  YYSYMBOL_params = 54,                    /* params  */
  YYSYMBOL_param = 55,                     /* param  */
  YYSYMBOL_compoundStmt = 56,              /* compoundStmt  */
  YYSYMBOL_stmtList = 57,                  /* stmtList  */
  YYSYMBOL_primitiveStmt = 58,             /* primitiveStmt  */
  YYSYMBOL_exprStmt = 59,                  /* exprStmt  */
  YYSYMBOL_condStmt = 60,                  /* condStmt  */
  YYSYMBOL_iterStmt = 61,                  /* iterStmt  */
  YYSYMBOL_returnStmt = 62,                /* returnStmt  */
  YYSYMBOL_listStmt = 63,                  /* listStmt  */
  YYSYMBOL_appendOps = 64,                 /* appendOps  */
  YYSYMBOL_returnListOps = 65,             /* returnListOps  */
  YYSYMBOL_returnListOp = 66,              /* returnListOp  */
  YYSYMBOL_destroyHeadOps = 67,            /* destroyHeadOps  */
  YYSYMBOL_mapFilterOps = 68,              /* mapFilterOps  */
  YYSYMBOL_expression = 69,                /* expression  */
  YYSYMBOL_assignExp = 70,                 /* assignExp  */
  YYSYMBOL_simpleExp = 71,                 /* simpleExp  */
  YYSYMBOL_constOp = 72,                   /* constOp  */
  YYSYMBOL_inOp = 73,                      /* inOp  */
  YYSYMBOL_outOp = 74,                     /* outOp  */
  YYSYMBOL_outConst = 75,                  /* outConst  */
  YYSYMBOL_binLogicalExp = 76,             /* binLogicalExp  */
  YYSYMBOL_binLogicalOp = 77,              /* binLogicalOp  */
  YYSYMBOL_unLogicalExp = 78,              /* unLogicalExp  */
  YYSYMBOL_unLogicalOp = 79,               /* unLogicalOp  */
  YYSYMBOL_relationalExp = 80,             /* relationalExp  */
  YYSYMBOL_relationalOp = 81,              /* relationalOp  */
  YYSYMBOL_sumExp = 82,                    /* sumExp  */
  YYSYMBOL_sumOp = 83,                     /* sumOp  */
  YYSYMBOL_mulExp = 84,                    /* mulExp  */
  YYSYMBOL_mulOp = 85,                     /* mulOp  */
  YYSYMBOL_factor = 86,                    /* factor  */
  YYSYMBOL_fCall = 87,                     /* fCall  */
  YYSYMBOL_callParams = 88                 /* callParams  */
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
#define YYLAST   5657

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  334

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    65,    65,    69,    70,    74,    75,    79,    83,    84,
      88,    92,    96,    97,   101,   105,   109,   110,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   126,   130,   131,
     135,   139,   143,   144,   145,   146,   150,   154,   158,   159,
     163,   167,   171,   172,   176,   181,   185,   186,   187,   188,
     192,   196,   197,   201,   202,   206,   207,   211,   212,   213,
     217,   218,   222,   226,   227,   232,   233,   234,   235,   236,
     237,   241,   242,   246,   247,   251,   252,   253,   257,   258,
     262,   263,   264,   265,   269,   270,   274,   275
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
  "WRITE", "WRITELN", "MAIN", "RETURN", "SEMIC", "COMMA", "STFUNC",
  "ENDFUNC", "PARENL", "PARENR", "$accept", "program", "declarationList",
  "declaration", "varDeclaration", "funcDeclaration", "simpleVDeclaration",
  "simpleFDeclaration", "params", "param", "compoundStmt", "stmtList",
  "primitiveStmt", "exprStmt", "condStmt", "iterStmt", "returnStmt",
  "listStmt", "appendOps", "returnListOps", "returnListOp",
  "destroyHeadOps", "mapFilterOps", "expression", "assignExp", "simpleExp",
  "constOp", "inOp", "outOp", "outConst", "binLogicalExp", "binLogicalOp",
  "unLogicalExp", "unLogicalOp", "relationalExp", "relationalOp", "sumExp",
  "sumOp", "mulExp", "mulOp", "factor", "fCall", "callParams", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300
};
#endif

#define YYPACT_NINF (-182)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,    14,    41,    23,    66,    89,   112,   120,    -2,    11,
    -182,   146,     4,    40,     2,    27,    29,    31,    32,  3696,
     168,     2,    33,  4438,  4718,  4749,  4780,  4811,   434,   441,
      47,    55,    58,   570,    43,    44,    46,    56,    71,   610,
     621,  2352,  2394,  2436,  2478,  2520,  2562,  2604,  2646,  2688,
    2730,  2772,    68,  2814,  2856,    59,    62,     6,  4842,  2898,
    2940,   113,   475,   642,  1426,  5570,   637,  4873,  4904,  4594,
     183,   610,   100,    83,   621,   123,   131,   557,   557,    92,
     107,  5152,  3811,   104,   233,  2982,  3024,  3066,   149,   128,
     142,   162,   167,   568,   156,   704,   758,  1013,  1076,  1085,
    1143,  1143,  4935,   718,   881,   637,   194,   172,  4625,   129,
     253,  3108,   165,   180,   173,   189,   190,   191,   198,   199,
    3150,  4966,   188,   778,  5586,  4997,  5028,   210,   827,  4656,
    3738,   892,  3192,   216,   229,  3234,  3276,   256,  1101,   232,
    3318,  3360,  3696,   279,  3402,   239,  3696,  3444,   301,  3696,
    3486,  4473,  5183,  5214,  5245,  5276,   621,  5307,   323,   479,
     892,  1468,  5601,  1003,  5338,  5369,  4096,  4115,  4134,  4153,
     621,  4172,    69,    80,   621,  3694,  4400,  1056,  4191,  4210,
    4229,  4508,  5059,  1156,  1228,  3773,  3830,  3849,  3868,  3887,
     621,  3906,   141,   702,   827,  4558,  4362,  1186,  3925,  3944,
    3963,   170,   973,   309,   310,   280,   290,   291,   298,   300,
     610,  3696,  1173,  1218,  1260,  1302,  1344,  1386,  1428,  1470,
    1512,  1554,   346,  1596,  1638,   312,    16,  1680,  1722,  4687,
    4543,   328,  3528,  3570,   363,   305,   335,   494,  1270,  1270,
    5400,  1003,   320,   338,   175,  1312,  1312,  4248,  1056,   373,
     390,   336,   357,   775,  1354,  1354,  3982,  1186,  4267,   269,
    1764,   348,   621,   123,   387,   557,   557,   354,  3612,  1806,
    1848,   395,   400,   960,  3654,  5431,   270,  5462,   498,   644,
    5617,  5493,  5524,  4286,   250,   262,  4419,  4305,  4324,  5090,
     286,  4001,   316,  4020,   800,   851,  4381,  4039,  4058,  4343,
    1890,   359,   366,   367,   369,   370,  1932,  1974,   380,   381,
    3792,   377,   378,   379,  5555,  5121,  4077,  3738,   892,  2016,
     386,   388,  2058,  2100,  2142,   389,  2184,  2226,  3738,   279,
    2268,   382,  3738,  2310
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
    -182,  -182,  -182,   427,     1,  -182,     0,  -182,  -182,   415,
     -12,  -144,   -29,  -111,  -109,  -106,  -101,   -79,   -66,   -65,
     -57,   -49,   -32,   -26,   -68,     8,   428,    13,    30,   -72,
     908,  -140,   783,   657,   804,  -135,   679,   215,   532,  -139,
     282,    -9,  -181
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
       7,     5,    20,     7,     5,   233,   119,   114,    13,    70,
      69,   -10,    15,    79,    85,   -10,    15,     9,   236,   215,
     259,   216,     1,    -2,   217,   241,   238,     1,    88,   218,
      81,   -14,   243,    13,    69,   -13,   -10,   -12,   271,   248,
     245,    10,    12,    18,    19,   107,   -43,    80,    83,    14,
     -38,   219,   252,   276,   182,   -11,   -43,   182,   -39,   257,
     254,    73,    81,   200,   220,   221,    -4,   268,   290,   292,
      -4,    86,   -14,   222,    21,   145,   -13,   -10,   -12,    80,
     109,   223,   112,    89,    90,   117,   117,    74,    75,    -5,
      76,   182,   182,    -5,   -56,   -56,   182,    91,   224,    87,
      77,   138,   -42,   185,   225,   186,   187,   188,   -56,   189,
      28,    29,    -6,   144,   -45,    78,    -6,   147,   214,   200,
      -7,   229,    81,   111,    -7,   -56,   113,    89,    90,    33,
     213,   212,   120,    69,   115,   -45,   137,    69,   226,   139,
      69,    91,   241,   227,   190,   108,    -3,   -43,   248,   121,
      -3,    81,   122,   -45,    81,    89,    90,   -57,   257,   -65,
     228,   -65,   -65,   -65,   235,   -65,   -65,   -65,    -9,    91,
     -87,   -58,    -9,   185,   -87,   186,   187,   188,   242,   189,
      28,    29,   -45,    -8,   267,   200,   -45,    -8,   200,   -60,
     -60,   -59,   200,   304,   305,   302,   202,   127,   251,    33,
     -65,    81,    69,   -60,    85,   312,   215,    71,   216,   109,
     130,   217,   -44,   131,   190,   258,   218,   215,    80,   216,
     -60,   215,   217,   216,    69,   200,   217,   218,   135,    81,
      81,   218,    81,   -15,   132,   -53,   -54,   -15,   219,    85,
     200,   200,   109,   133,   134,   200,   200,   311,   200,   219,
     136,   220,   221,   219,   163,   177,   140,   109,   109,    69,
     222,   331,   220,   221,   -62,   -62,   220,   221,   223,   141,
     301,   222,   143,   117,   117,   222,   -55,   -55,   -62,   223,
     101,   313,   231,   223,   146,   224,   163,   197,   324,   177,
     -55,   225,   177,   177,   128,   -62,   224,   -86,   129,   330,
     224,   -86,   225,   333,   232,   214,   225,   -55,   229,    81,
     128,   128,   260,   261,   299,   314,   214,   213,   212,   229,
     214,   165,   179,   229,   262,   226,   325,   128,   213,   212,
     227,   315,   213,   212,   263,   264,   226,    89,    90,   101,
     226,   227,   265,   197,   266,   227,   163,   228,   102,   269,
     277,    91,   270,   165,   199,   273,   179,   128,   228,   179,
     179,   316,   228,   -45,   278,   283,   185,   284,   186,   187,
     188,   177,   189,    28,    29,   163,   185,   239,   186,   187,
     188,   293,   189,    28,    29,   177,   294,   126,   300,   177,
     303,   246,    33,   185,   306,   186,   187,   188,   308,   189,
      28,    29,    33,   309,   317,   177,   318,   190,   275,   197,
     199,   255,   319,   165,   320,   321,   197,   190,   289,    33,
     322,   323,   -44,   -42,   -43,   163,   326,   332,   327,   329,
      11,    22,     0,     0,   190,   291,     0,   -73,   179,   -73,
     -73,   -73,   165,   -73,   -74,   240,   -74,   -74,   -74,   197,
     -74,     0,   179,   163,   163,     0,   179,     0,     0,   247,
     177,   177,     0,     0,   197,   197,     0,   157,   171,   197,
     197,     0,   179,     0,     0,     0,   199,   177,   -73,   256,
     177,   177,     0,   199,     0,   -74,     0,     0,   177,   -56,
     -56,     0,   165,   -56,   -56,   239,     0,   -56,     0,   157,
     191,   246,   171,   -56,     0,   171,   171,   -56,   -60,   -60,
       0,   255,   -62,   -62,     0,   -56,   199,     0,     0,   -56,
     165,   165,   -60,   282,     0,     0,   -62,   179,   179,     0,
     288,   199,   199,   163,   -60,     0,   199,   199,   -62,   298,
       0,     0,     0,     0,   179,     0,     0,   179,   179,     0,
       0,     0,     0,     0,     0,   179,   191,     0,     0,   157,
      82,     0,   166,   167,   168,   116,   169,    28,    29,     0,
       0,   164,   178,   -62,     0,   -62,   -62,   -62,     0,   -62,
     -62,   -62,   -60,   -60,   171,     0,    33,     0,   157,     0,
     -60,   157,     0,     0,     0,     0,   -60,     0,   171,   -62,
     165,   170,   171,   164,   198,   171,   178,     0,   -60,   178,
     178,     0,     0,   151,   -62,   152,   153,   154,   171,   155,
      28,    29,   191,     0,    82,   191,   166,   167,   168,   191,
     169,    28,    29,   125,     0,     0,     0,     0,   157,    33,
     181,     0,    24,    25,    26,   181,    27,    24,    25,    26,
      33,    27,    28,    29,   156,     0,     0,     0,   -55,   -55,
     198,     0,   191,   164,     0,   170,   157,   157,     0,   157,
       0,    33,   -55,   171,   171,     0,   171,   191,   191,     0,
       0,    40,   191,   191,   -55,   191,    40,     0,   178,     0,
     171,     0,   164,   171,   171,     0,   160,   174,     0,     0,
       0,   171,   178,     0,     0,     0,   178,   -66,     0,   -66,
     -66,   -66,     0,   -66,   -66,   -66,   -56,   -56,   162,   176,
       0,   -78,   178,   -78,   -78,   -78,   198,   -78,   160,   194,
     -56,   174,     0,   198,   174,   174,     0,     0,     0,     0,
       0,     0,   164,   -56,     0,     0,   157,   -56,   -66,   123,
     162,   196,     0,   176,     0,     0,   176,   176,     0,     0,
       0,   -67,   -78,   -67,   -67,   -67,   198,   -67,   -67,   -67,
     164,   281,     0,     0,     0,     0,     0,   178,   287,   124,
       0,   198,   198,     0,     0,   194,   198,   297,   160,   -60,
     -60,     0,   -55,   -55,   178,     0,     0,   178,   178,     0,
     -55,     0,   -67,   -60,     0,   178,   -55,   196,     0,     0,
     162,     0,     0,   174,   -62,   -62,   -60,   160,   -55,     0,
     -60,     0,   159,   173,     0,     0,     0,   174,   -62,     0,
     185,   174,   186,   187,   188,   176,   189,    28,    29,   162,
       0,   -62,     0,   161,   175,   -62,    93,   174,     0,   176,
     164,   194,     0,   176,   159,   193,    33,   173,   194,     0,
     173,   173,     0,     0,     0,   -55,   -55,   160,     0,   176,
       0,   190,     0,   196,     0,   161,   195,     0,   175,   -55,
     196,   175,   175,     0,   -79,     0,   -79,   -79,   -79,   162,
     -79,   194,   -55,   279,     0,   230,   -55,   152,   153,   154,
     285,   155,    28,    29,     0,     0,   194,   194,     0,   295,
       0,   193,     0,   196,   159,     0,     0,   280,     0,   174,
       0,    33,   174,   174,   286,   -79,     0,     0,   196,   196,
     174,     0,   195,   296,     0,   161,   156,     0,     0,   173,
       0,   176,     0,   237,   176,   176,     0,   158,   172,     0,
       0,     0,   176,   173,     0,     0,     0,   244,     0,     0,
     175,     0,     0,   310,   161,   166,   167,   168,     0,   169,
      28,    29,     0,   173,   175,   160,     0,   253,   175,   158,
     192,     0,   172,     0,   193,   172,   172,   -62,   -62,    33,
       0,     0,     0,   159,   175,   -62,     0,   162,   195,     0,
       0,   -62,     0,     0,   170,   195,   230,     0,   152,   153,
     154,     0,   155,   -62,   161,     0,   -68,   193,   -68,   -68,
     -68,     0,   -68,   -68,   -68,     0,     0,     0,     0,     0,
       0,     0,   193,   193,     0,     0,   192,     0,   195,   158,
       0,     0,     0,     0,     0,   173,     0,   156,   173,   173,
       0,     0,     0,   195,   195,     0,   173,   -68,     0,    82,
       0,   166,   167,   168,   172,   169,   175,     0,     0,   175,
     175,     0,     0,     0,     0,     0,     0,   175,   172,   -69,
       0,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -70,     0,
     -70,   -70,   -70,     0,   -70,   -70,   -70,     0,   172,     0,
     170,   159,     0,     0,   -28,   -28,   -28,   -28,   -28,   192,
     -28,   -28,   -28,     0,     0,     0,     0,     0,   158,     0,
     -69,     0,   161,     0,   -28,   -28,   -28,     0,     0,   -70,
     -28,     0,   142,     0,   -28,   -28,   -28,   -28,   -28,     0,
     -28,     0,   192,   -28,   -28,   -28,   181,     0,    24,    25,
      26,     0,    27,    28,    29,     0,     0,   192,   192,   -73,
       0,   -73,   -73,   -73,     0,   -73,   -73,   -73,     0,     0,
     172,     0,     0,   172,   172,     0,   -26,   -26,   -26,   -26,
     -26,   172,   -26,   -26,   -26,     0,     0,    40,     0,   185,
       0,   186,   187,   188,     0,   189,   -26,   -26,   -26,     0,
     -73,     0,   -26,     0,   -26,     0,   -26,   -26,   -26,   -26,
     -26,     0,   -26,     0,     0,   -26,   -26,   -26,     0,     0,
       0,    -7,    -7,    -7,    -7,    -7,   158,    -7,    -7,    -7,
     190,   -74,     0,   -74,   -74,   -74,     0,   -74,   -74,   -74,
       0,    -7,    -7,    -7,     0,     0,     0,    -7,     0,    -7,
       0,    -7,    -7,    -7,    -7,    -7,     0,    -7,     0,     0,
      -7,    -7,    -7,   -19,   -19,   -19,   -19,   -19,     0,   -19,
     -19,   -19,   -74,   230,     0,   152,   153,   154,     0,   155,
      28,    29,     0,   -19,   -19,   -19,     0,     0,     0,   -19,
       0,   -19,     0,   -19,   -19,   -19,   -19,   -19,     0,   -19,
       0,     0,   -19,   -19,   -19,   -18,   -18,   -18,   -18,   -18,
       0,   -18,   -18,   -18,   156,    82,     0,   166,   167,   168,
       0,   169,    28,    29,     0,   -18,   -18,   -18,     0,     0,
       0,   -18,     0,   -18,     0,   -18,   -18,   -18,   -18,   -18,
       0,   -18,     0,     0,   -18,   -18,   -18,   -20,   -20,   -20,
     -20,   -20,     0,   -20,   -20,   -20,   170,   185,     0,   186,
     187,   188,     0,   189,    28,    29,     0,   -20,   -20,   -20,
       0,     0,     0,   -20,     0,   -20,     0,   -20,   -20,   -20,
     -20,   -20,     0,   -20,     0,     0,   -20,   -20,   -20,   -21,
     -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,   190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -21,
     -21,   -21,     0,     0,     0,   -21,     0,   -21,     0,   -21,
     -21,   -21,   -21,   -21,     0,   -21,     0,     0,   -21,   -21,
     -21,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,
     -61,   -61,    94,    95,    96,    97,    98,    99,   -61,     0,
       0,   -22,   -22,   -22,   -61,     0,     0,   -22,     0,   -22,
       0,   -22,   -22,   -22,   -22,   -22,   -61,   -22,     0,     0,
     -22,   -22,   -22,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   -61,   -61,    94,    95,    96,    97,    98,    99,
       0,     0,     0,   -23,   -23,   -23,   -61,     0,     0,   -23,
       0,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -61,   -23,
       0,     0,   -23,   -23,   -23,   -32,   -32,   -32,   -32,   -32,
       0,   -32,   -32,   -32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -32,   -32,   -32,     0,     0,
       0,   -32,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,
       0,   -32,     0,     0,   -32,   -32,   -32,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,   -33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -33,   -33,   -33,
       0,     0,     0,   -33,     0,   -33,     0,   -33,   -33,   -33,
     -33,   -33,     0,   -33,     0,     0,   -33,   -33,   -33,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -34,
     -34,   -34,     0,     0,     0,   -34,     0,   -34,     0,   -34,
     -34,   -34,   -34,   -34,     0,   -34,     0,     0,   -34,   -34,
     -34,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -35,   -35,   -35,     0,     0,     0,   -35,     0,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,     0,
     -35,   -35,   -35,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,   -24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -24,   -24,   -24,     0,     0,     0,   -24,
       0,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,
       0,     0,   -24,   -24,   -24,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,   -25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,   -25,   -25,     0,     0,
       0,   -25,     0,   -25,     0,   -25,   -25,   -25,   -25,   -25,
       0,   -25,     0,     0,   -25,   -25,   -25,   -10,   -10,   -10,
     -10,   -10,     0,   -10,   -10,   -10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -10,   -10,   -10,
       0,     0,     0,   -10,     0,   -10,     0,   -10,   -10,   -10,
     -10,   -10,     0,   -10,     0,     0,   -10,   -10,   -10,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -37,
     -37,   -37,     0,     0,     0,   -37,     0,   -37,     0,   -37,
     -37,   -37,   -37,   -37,     0,   -37,     0,     0,   -37,   -37,
     -37,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,   -27,   -27,     0,     0,     0,   -27,     0,   -27,
       0,   -27,   -27,   -27,   -27,   -27,     0,   -27,     0,     0,
     -27,   -27,   -27,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -40,   -40,   -40,     0,     0,     0,   -40,
       0,   -40,     0,   -40,   -40,   -40,   -40,   -40,     0,   -40,
       0,     0,   -40,   -40,   -40,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -31,   -31,   -31,     0,     0,
       0,   -31,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,   -31,     0,     0,   -31,   -31,   -31,   -15,   -15,   -15,
     -15,   -15,     0,   -15,   -15,   -15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -15,   -15,   -15,
       0,     0,     0,   -15,     0,   -15,     0,   -15,   -15,   -15,
     -15,   -15,     0,   -15,     0,     0,   -15,   -15,   -15,   -50,
     -50,   -50,   -50,   -50,     0,   -50,   -50,   -50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -50,
     -50,   -50,     0,     0,     0,   -50,     0,   -50,     0,   -50,
     -50,   -50,   -50,   -50,     0,   -50,     0,     0,   -50,   -50,
     -50,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -36,   -36,   -36,     0,     0,     0,   -36,     0,   -36,
       0,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,     0,
     -36,   -36,   -36,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -41,   -41,   -41,     0,     0,     0,   -41,
       0,   -41,     0,   -41,   -41,   -41,   -41,   -41,     0,   -41,
       0,     0,   -41,   -41,   -41,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -28,   -28,   -28,     0,     0,
       0,   -28,     0,   328,     0,   -28,   -28,   -28,   -28,   -28,
       0,   -28,     0,     0,   -28,   -28,   -28,   -51,   -51,   -51,
     -51,   -51,     0,   -51,   -51,   -51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -51,   -51,   -51,
       0,     0,     0,   -51,     0,   -51,     0,   -51,   -51,   -51,
     -51,   -51,     0,   -51,     0,     0,   -51,   -51,   -51,   -52,
     -52,   -52,   -52,   -52,     0,   -52,   -52,   -52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -52,
     -52,   -52,     0,     0,     0,   -52,     0,   -52,     0,   -52,
     -52,   -52,   -52,   -52,     0,   -52,     0,     0,   -52,   -52,
     -52,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -29,   -29,   -29,     0,     0,     0,   -29,     0,   -29,
       0,   -29,   -29,   -29,   -29,   -29,     0,   -29,     0,     0,
     -29,   -29,   -29,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -30,   -30,   -30,     0,     0,     0,   -30,
       0,   -30,     0,   -30,   -30,   -30,   -30,   -30,     0,   -30,
       0,     0,   -30,   -30,   -30,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -26,   -26,   -26,     0,     0,
       0,   -26,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,
       0,   -26,     0,     0,   -26,   -26,   -26,   -19,   -19,   -19,
     -19,   -19,     0,   -19,   -19,   -19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -19,   -19,   -19,
       0,     0,     0,   -19,     0,     0,     0,   -19,   -19,   -19,
     -19,   -19,     0,   -19,     0,     0,   -19,   -19,   -19,    23,
     148,    24,    25,    26,     0,    27,    28,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
      31,    32,     0,     0,     0,    33,     0,     0,     0,    34,
      35,    36,    37,    38,     0,    39,     0,     0,   149,    84,
      40,   -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,   -17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -17,   -17,   -17,     0,     0,     0,   -17,     0,     0,
       0,   -17,   -17,   -17,   -17,   -17,     0,   -17,     0,     0,
     -17,   -17,   -17,   -18,   -18,   -18,   -18,   -18,     0,   -18,
     -18,   -18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -18,   -18,   -18,     0,     0,     0,   -18,
       0,     0,     0,   -18,   -18,   -18,   -18,   -18,     0,   -18,
       0,     0,   -18,   -18,   -18,   -20,   -20,   -20,   -20,   -20,
       0,   -20,   -20,   -20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -20,   -20,   -20,     0,     0,
       0,   -20,     0,     0,     0,   -20,   -20,   -20,   -20,   -20,
       0,   -20,     0,     0,   -20,   -20,   -20,   -21,   -21,   -21,
     -21,   -21,     0,   -21,   -21,   -21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -21,   -21,   -21,
       0,     0,     0,   -21,     0,     0,     0,   -21,   -21,   -21,
     -21,   -21,     0,   -21,     0,     0,   -21,   -21,   -21,   -22,
     -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -22,
     -22,   -22,     0,     0,     0,   -22,     0,     0,     0,   -22,
     -22,   -22,   -22,   -22,     0,   -22,     0,     0,   -22,   -22,
     -22,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -23,   -23,   -23,     0,     0,     0,   -23,     0,     0,
       0,   -23,   -23,   -23,   -23,   -23,     0,   -23,     0,     0,
     -23,   -23,   -23,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -32,   -32,   -32,     0,     0,     0,   -32,
       0,     0,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,
       0,     0,   -32,   -32,   -32,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   -33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -33,   -33,   -33,     0,     0,
       0,   -33,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,
       0,   -33,     0,     0,   -33,   -33,   -33,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -34,   -34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -34,   -34,   -34,
       0,     0,     0,   -34,     0,     0,     0,   -34,   -34,   -34,
     -34,   -34,     0,   -34,     0,     0,   -34,   -34,   -34,   -35,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -35,
     -35,   -35,     0,     0,     0,   -35,     0,     0,     0,   -35,
     -35,   -35,   -35,   -35,     0,   -35,     0,     0,   -35,   -35,
     -35,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -24,   -24,   -24,     0,     0,     0,   -24,     0,     0,
       0,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,     0,
     -24,   -24,   -24,   -25,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -25,   -25,   -25,     0,     0,     0,   -25,
       0,     0,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,
       0,     0,   -25,   -25,   -25,   -16,   -16,   -16,   -16,   -16,
       0,   -16,   -16,   -16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -16,   -16,   -16,     0,     0,
       0,   -16,     0,     0,     0,   -16,   -16,   -16,   -16,   -16,
       0,   -16,     0,     0,   -16,   -16,   -16,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,   -37,
       0,     0,     0,   -37,     0,     0,     0,   -37,   -37,   -37,
     -37,   -37,     0,   -37,     0,     0,   -37,   -37,   -37,   -27,
     -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -27,
     -27,   -27,     0,     0,     0,   -27,     0,     0,     0,   -27,
     -27,   -27,   -27,   -27,     0,   -27,     0,     0,   -27,   -27,
     -27,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -40,   -40,   -40,     0,     0,     0,   -40,     0,     0,
       0,   -40,   -40,   -40,   -40,   -40,     0,   -40,     0,     0,
     -40,   -40,   -40,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,   -31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -31,   -31,   -31,     0,     0,     0,   -31,
       0,     0,     0,   -31,   -31,   -31,   -31,   -31,     0,   -31,
       0,     0,   -31,   -31,   -31,   -50,   -50,   -50,   -50,   -50,
       0,   -50,   -50,   -50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -50,   -50,   -50,     0,     0,
       0,   -50,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,
       0,   -50,     0,     0,   -50,   -50,   -50,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -36,   -36,   -36,
       0,     0,     0,   -36,     0,     0,     0,   -36,   -36,   -36,
     -36,   -36,     0,   -36,     0,     0,   -36,   -36,   -36,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -41,
     -41,   -41,     0,     0,     0,   -41,     0,     0,     0,   -41,
     -41,   -41,   -41,   -41,     0,   -41,     0,     0,   -41,   -41,
     -41,   -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,   -51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -51,   -51,   -51,     0,     0,     0,   -51,     0,     0,
       0,   -51,   -51,   -51,   -51,   -51,     0,   -51,     0,     0,
     -51,   -51,   -51,   -52,   -52,   -52,   -52,   -52,     0,   -52,
     -52,   -52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -52,   -52,   -52,     0,     0,     0,   -52,
       0,     0,     0,   -52,   -52,   -52,   -52,   -52,     0,   -52,
       0,     0,   -52,   -52,   -52,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,   -29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -29,   -29,   -29,     0,     0,
       0,   -29,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,
       0,   -29,     0,     0,   -29,   -29,   -29,   -30,   -30,   -30,
     -30,   -30,     0,   -30,   -30,   -30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -30,   -30,   -30,
       0,     0,     0,   -30,     0,     0,     0,   -30,   -30,   -30,
     -30,   -30,     0,   -30,     0,     0,   -30,   -30,   -30,    -7,
      -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    -7,
      -7,    -7,     0,     0,     0,    -7,     0,     0,     0,    -7,
      -7,    -7,    -7,    -7,     0,    -7,     0,     0,    -7,    -7,
      -7,   -10,   -10,   -10,   -10,   -10,     0,   -10,   -10,   -10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -10,   -10,   -10,     0,     0,     0,   -10,     0,     0,
       0,   -10,   -10,   -10,   -10,   -10,     0,   -10,     0,     0,
     -10,   -10,   -10,    23,   148,    24,    25,    26,     0,    27,
      28,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,     0,     0,     0,    33,
       0,     0,     0,    34,    35,    36,    37,    38,     0,    39,
       0,     0,   149,   274,    40,    23,   148,    24,    25,    26,
       0,    27,    28,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,    32,     0,     0,
       0,    33,     0,     0,     0,    34,    35,    36,    37,    38,
       0,    39,     0,     0,   149,   307,    40,   -15,   -15,   -15,
     -15,   -15,     0,   -15,   -15,   -15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -15,   -15,   -15,
       0,     0,     0,   -15,     0,     0,     0,   -15,   -15,   -15,
     -15,   -15,     0,   -15,     0,     0,   -15,   -15,   -15,    23,
     148,    24,    25,    26,     0,    27,    28,    29,   -61,   -61,
      94,    95,    96,    97,    98,    99,     0,     0,     0,    30,
      31,    32,   -61,     0,     0,    33,     0,     0,     0,    34,
      35,    36,    37,    38,     0,    39,     0,     0,   149,   -61,
      40,    23,   203,    24,    25,    26,     0,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,   204,     0,     0,     0,    33,     0,     0,
       0,   205,   206,   207,   208,   209,     0,   210,     0,     0,
     211,     0,    40,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,   250,   -80,   273,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,   201,   -80,     0,   -80,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,     0,     0,     0,   201,   -80,     0,   -46,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -46,     0,     0,     0,   -46,     0,   -47,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -47,     0,     0,     0,   -47,     0,   -48,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -48,
       0,     0,     0,   -48,     0,   -49,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -49,     0,
       0,     0,   -49,     0,   -83,   -72,   -72,   103,   104,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -83,     0,     0,
       0,   -83,     0,   -72,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -72,     0,     0,     0,
     -72,     0,   -76,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -76,     0,     0,     0,   -76,
       0,   -81,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -81,     0,     0,     0,   -81,     0,
     -77,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -77,     0,     0,     0,   -77,     0,   -85,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -85,     0,     0,     0,   -85,     0,   -82,   -71,
     -71,   103,   104,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -82,     0,     0,     0,   -82,     0,   -71,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -71,     0,     0,     0,   -71,     0,   -75,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -75,
       0,     0,     0,   -75,     0,   -84,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -84,     0,
       0,     0,   -84,     0,   -46,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,
       0,   -46,     0,   -47,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,
     -47,     0,   -48,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,     0,     0,     0,   -48,
       0,   -49,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,     0,     0,   -49,     0,
     -83,   -72,   -72,   103,   104,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,   -83,     0,   -72,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,   -72,     0,   -76,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,   -76,     0,   -81,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,     0,   -81,     0,   -77,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,     0,   -77,     0,   -85,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,   -85,     0,   -82,   -71,   -71,   103,   104,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,   -82,     0,   -71,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
     -71,     0,   -75,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,   -75,
       0,   -84,   183,   184,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,   -84,     0,
     -64,   183,   184,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -64,     0,     0,     0,   -64,     0,   -63,
     183,   184,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -63,     0,     0,     0,   -63,     0,   -64,   183,
     184,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,     0,   -64,     0,   -63,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,   -63,    71,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -80,     0,
       0,     0,    72,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
      71,   -80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -80,     0,     0,     0,   234,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,     0,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -80,     0,
       0,     0,   249,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
       0,   -80,   -61,   -61,    94,    95,    96,    97,    98,    99,
       0,     0,     0,   -80,     0,     0,   -61,   234,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -61,
       0,     0,     0,   -61,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,   -81,     0,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -81,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,     0,     0,   -85,     0,   -85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,   -84,     0,   -84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -84,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,     0,   -81,     0,   272,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -81,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,     0,     0,     0,     0,     0,   -46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -46,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,     0,     0,     0,     0,     0,   -47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -47,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,     0,     0,     0,     0,   -48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -48,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,     0,     0,     0,     0,     0,   -49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -49,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,
     -83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,   -72,   -72,   103,   104,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
       0,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -72,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,   -76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -76,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,     0,   -77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -77,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,     0,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,   -71,   -71,   103,
     104,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,   -71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -71,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,   -75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -75,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -81,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,     0,   -85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -85,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,   -84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,
     -81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,     0,     0,     0,     0,     0,
       0,   -46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -46,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,     0,
       0,     0,   -47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -47,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,     0,     0,
       0,     0,     0,   -48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -48,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,     0,
       0,     0,     0,     0,   -49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -49,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,     0,     0,   -83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -83,   -72,   -72,
     103,   104,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -72,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,   -76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -76,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,     0,     0,   -77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -77,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,     0,     0,   -85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
     -82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -71,   -71,   103,   104,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -71,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,     0,   -75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -75,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
     183,   184,     0,   -84,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,   -84,   183,   184,   -64,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
     -64,   183,   184,     0,   -63,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,   -63,   183,   184,   -64,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,   -64,     0,     0,     0,   -63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -63
};

static const yytype_int16 yycheck[] =
{
       0,     0,    14,     3,     3,   149,    78,    75,     4,    21,
      19,     0,    12,    39,    43,     4,    16,     3,   158,   130,
     201,   130,     4,     0,   130,   164,   161,     4,    22,   130,
      39,     4,   172,     4,    43,     4,     4,     4,    22,   178,
     175,     0,    44,     3,    42,    71,    40,    39,    40,    45,
       3,   130,   192,   234,    63,    44,    40,    66,     3,   198,
     195,     3,    71,    72,   130,   130,     0,   211,   249,   250,
       4,     3,    45,   130,    45,   143,    45,    45,    45,    71,
      72,   130,    74,    14,    15,    77,    78,    44,    44,     0,
      44,   100,   101,     4,    14,    15,   105,    28,   130,    40,
      44,   130,    40,     3,   130,     5,     6,     7,    28,     9,
      10,    11,     0,   142,    45,    44,     4,   146,   130,   128,
       0,   130,   131,    40,     4,    45,     3,    14,    15,    29,
     130,   130,    40,   142,     3,    22,   128,   146,   130,   131,
     149,    28,   281,   130,    44,    45,     0,    40,   287,    45,
       4,   160,     3,    40,   163,    14,    15,    29,   297,     3,
     130,     5,     6,     7,   156,     9,    10,    11,     0,    28,
      41,    29,     4,     3,    45,     5,     6,     7,   170,     9,
      10,    11,    41,     0,   210,   194,    45,     4,   197,    14,
      15,    29,   201,   265,   266,   263,    29,     3,   190,    29,
      44,   210,   211,    28,   233,   273,   317,    27,   317,   201,
      45,   317,    40,    40,    44,    45,   317,   328,   210,   328,
      45,   332,   328,   332,   233,   234,   332,   328,    40,   238,
     239,   332,   241,     0,    45,    45,    45,     4,   317,   268,
     249,   250,   234,    45,    45,   254,   255,   273,   257,   328,
      40,   317,   317,   332,    39,    40,    40,   249,   250,   268,
     317,   329,   328,   328,    14,    15,   332,   332,   317,    40,
     262,   328,    40,   265,   266,   332,    14,    15,    28,   328,
      65,   273,     3,   332,    45,   317,    71,    72,   317,    74,
      28,   317,    77,    78,    41,    45,   328,    41,    45,   328,
     332,    45,   328,   332,     3,   317,   332,    45,   317,   318,
      41,    41,     3,     3,    45,    45,   328,   317,   317,   328,
     332,    39,    40,   332,    44,   317,   318,    41,   328,   328,
     317,    45,   332,   332,    44,    44,   328,    14,    15,   124,
     332,   328,    44,   128,    44,   332,   131,   317,    66,     3,
      45,    28,    40,    71,    72,    27,    74,    41,   328,    77,
      78,    45,   332,    40,    29,    45,     3,    29,     5,     6,
       7,   156,     9,    10,    11,   160,     3,   162,     5,     6,
       7,    45,     9,    10,    11,   170,    29,   105,    40,   174,
       3,   176,    29,     3,    40,     5,     6,     7,     3,     9,
      10,    11,    29,     3,    45,   190,    40,    44,    45,   194,
     128,   196,    45,   131,    45,    45,   201,    44,    45,    29,
      40,    40,    45,    45,    45,   210,    40,    45,    40,    40,
       3,    16,    -1,    -1,    44,    45,    -1,     3,   156,     5,
       6,     7,   160,     9,     3,   163,     5,     6,     7,   234,
       9,    -1,   170,   238,   239,    -1,   174,    -1,    -1,   177,
     245,   246,    -1,    -1,   249,   250,    -1,    39,    40,   254,
     255,    -1,   190,    -1,    -1,    -1,   194,   262,    44,   197,
     265,   266,    -1,   201,    -1,    44,    -1,    -1,   273,    14,
      15,    -1,   210,    14,    15,   280,    -1,    22,    -1,    71,
      72,   286,    74,    28,    -1,    77,    78,    28,    14,    15,
      -1,   296,    14,    15,    -1,    40,   234,    -1,    -1,    40,
     238,   239,    28,   241,    -1,    -1,    28,   245,   246,    -1,
     248,   249,   250,   318,    40,    -1,   254,   255,    40,   257,
      -1,    -1,    -1,    -1,   262,    -1,    -1,   265,   266,    -1,
      -1,    -1,    -1,    -1,    -1,   273,   128,    -1,    -1,   131,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    39,    40,     3,    -1,     5,     6,     7,    -1,     9,
      10,    11,    14,    15,   156,    -1,    29,    -1,   160,    -1,
      22,   163,    -1,    -1,    -1,    -1,    28,    -1,   170,    29,
     318,    44,   174,    71,    72,   177,    74,    -1,    40,    77,
      78,    -1,    -1,     3,    44,     5,     6,     7,   190,     9,
      10,    11,   194,    -1,     3,   197,     5,     6,     7,   201,
       9,    10,    11,   101,    -1,    -1,    -1,    -1,   210,    29,
       3,    -1,     5,     6,     7,     3,     9,     5,     6,     7,
      29,     9,    10,    11,    44,    -1,    -1,    -1,    14,    15,
     128,    -1,   234,   131,    -1,    44,   238,   239,    -1,   241,
      -1,    29,    28,   245,   246,    -1,   248,   249,   250,    -1,
      -1,    44,   254,   255,    40,   257,    44,    -1,   156,    -1,
     262,    -1,   160,   265,   266,    -1,    39,    40,    -1,    -1,
      -1,   273,   170,    -1,    -1,    -1,   174,     3,    -1,     5,
       6,     7,    -1,     9,    10,    11,    14,    15,    39,    40,
      -1,     3,   190,     5,     6,     7,   194,     9,    71,    72,
      28,    74,    -1,   201,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,   210,    41,    -1,    -1,   318,    45,    44,    92,
      71,    72,    -1,    74,    -1,    -1,    77,    78,    -1,    -1,
      -1,     3,    44,     5,     6,     7,   234,     9,    10,    11,
     238,   239,    -1,    -1,    -1,    -1,    -1,   245,   246,   100,
      -1,   249,   250,    -1,    -1,   128,   254,   255,   131,    14,
      15,    -1,    14,    15,   262,    -1,    -1,   265,   266,    -1,
      22,    -1,    44,    28,    -1,   273,    28,   128,    -1,    -1,
     131,    -1,    -1,   156,    14,    15,    41,   160,    40,    -1,
      45,    -1,    39,    40,    -1,    -1,    -1,   170,    28,    -1,
       3,   174,     5,     6,     7,   156,     9,    10,    11,   160,
      -1,    41,    -1,    39,    40,    45,    63,   190,    -1,   170,
     318,   194,    -1,   174,    71,    72,    29,    74,   201,    -1,
      77,    78,    -1,    -1,    -1,    14,    15,   210,    -1,   190,
      -1,    44,    -1,   194,    -1,    71,    72,    -1,    74,    28,
     201,    77,    78,    -1,     3,    -1,     5,     6,     7,   210,
       9,   234,    41,   236,    -1,     3,    45,     5,     6,     7,
     243,     9,    10,    11,    -1,    -1,   249,   250,    -1,   252,
      -1,   128,    -1,   234,   131,    -1,    -1,   238,    -1,   262,
      -1,    29,   265,   266,   245,    44,    -1,    -1,   249,   250,
     273,    -1,   128,   254,    -1,   131,    44,    -1,    -1,   156,
      -1,   262,    -1,   160,   265,   266,    -1,    39,    40,    -1,
      -1,    -1,   273,   170,    -1,    -1,    -1,   174,    -1,    -1,
     156,    -1,    -1,     3,   160,     5,     6,     7,    -1,     9,
      10,    11,    -1,   190,   170,   318,    -1,   194,   174,    71,
      72,    -1,    74,    -1,   201,    77,    78,    14,    15,    29,
      -1,    -1,    -1,   210,   190,    22,    -1,   318,   194,    -1,
      -1,    28,    -1,    -1,    44,   201,     3,    -1,     5,     6,
       7,    -1,     9,    40,   210,    -1,     3,   234,     5,     6,
       7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   249,   250,    -1,    -1,   128,    -1,   234,   131,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    44,   265,   266,
      -1,    -1,    -1,   249,   250,    -1,   273,    44,    -1,     3,
      -1,     5,     6,     7,   156,     9,   262,    -1,    -1,   265,
     266,    -1,    -1,    -1,    -1,    -1,    -1,   273,   170,     3,
      -1,     5,     6,     7,    -1,     9,    10,    11,     3,    -1,
       5,     6,     7,    -1,     9,    10,    11,    -1,   190,    -1,
      44,   318,    -1,    -1,     3,     4,     5,     6,     7,   201,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,   210,    -1,
      44,    -1,   318,    -1,    23,    24,    25,    -1,    -1,    44,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    -1,
      39,    -1,   234,    42,    43,    44,     3,    -1,     5,     6,
       7,    -1,     9,    10,    11,    -1,    -1,   249,   250,     3,
      -1,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
     262,    -1,    -1,   265,   266,    -1,     3,     4,     5,     6,
       7,   273,     9,    10,    11,    -1,    -1,    44,    -1,     3,
      -1,     5,     6,     7,    -1,     9,    23,    24,    25,    -1,
      44,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    -1,    39,    -1,    -1,    42,    43,    44,    -1,    -1,
      -1,     3,     4,     5,     6,     7,   318,     9,    10,    11,
      44,     3,    -1,     5,     6,     7,    -1,     9,    10,    11,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    43,    44,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    44,     3,    -1,     5,     6,     7,    -1,     9,
      10,    11,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    -1,    42,    43,    44,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    44,     3,    -1,     5,     6,     7,
      -1,     9,    10,    11,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    -1,    42,    43,    44,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    44,     3,    -1,     5,
       6,     7,    -1,     9,    10,    11,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    43,    44,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    42,    43,
      44,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    23,    24,    25,    28,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    40,    39,    -1,    -1,
      42,    43,    44,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    23,    24,    25,    28,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    40,    39,
      -1,    -1,    42,    43,    44,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    -1,    42,    43,    44,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    43,    44,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    42,    43,
      44,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    43,    44,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    -1,    42,    43,    44,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    -1,    42,    43,    44,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    43,    44,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    42,    43,
      44,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    43,    44,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    -1,    42,    43,    44,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    -1,    42,    43,    44,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    43,    44,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    42,    43,
      44,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    43,    44,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    -1,    42,    43,    44,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    -1,    42,    43,    44,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    43,    44,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    42,    43,
      44,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    43,    44,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    -1,    42,    43,    44,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    -1,    42,    43,    44,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    43,    44,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    42,    43,
      44,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    43,    44,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    -1,    42,    43,    44,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    -1,    42,    43,    44,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    43,    44,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    42,    43,
      44,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    43,    44,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    -1,    42,    43,    44,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    -1,    42,    43,    44,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    43,    44,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    42,    43,
      44,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    43,    44,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    -1,    42,    43,    44,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    -1,    42,    43,    44,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    43,    44,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    42,    43,
      44,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    43,    44,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    -1,    42,    43,    44,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    -1,    42,    43,    44,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    43,    44,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    42,    43,
      44,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    43,    44,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    -1,    42,    43,    44,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    -1,    42,    43,    44,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    43,    44,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    42,    43,
      44,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    43,    44,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    -1,    42,    43,    44,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    -1,    42,    43,    44,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    43,    44,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    23,
      24,    25,    28,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    42,    45,
      44,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    -1,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    41,    -1,    -1,    44,    45,    27,
      28,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    44,    45,    -1,    28,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    44,    45,    -1,    28,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    41,    -1,    -1,    -1,    45,    -1,    28,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      41,    -1,    -1,    -1,    45,    -1,    28,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    41,
      -1,    -1,    -1,    45,    -1,    28,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    41,    -1,
      -1,    -1,    45,    -1,    28,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    41,    -1,    -1,
      -1,    45,    -1,    28,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    41,    -1,    -1,    -1,
      45,    -1,    28,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    41,    -1,    -1,    -1,    45,
      -1,    28,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    41,    -1,    -1,    -1,    45,    -1,
      28,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    41,    -1,    -1,    -1,    45,    -1,    28,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    41,    -1,    -1,    -1,    45,    -1,    28,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    41,    -1,    -1,    -1,    45,    -1,    28,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      41,    -1,    -1,    -1,    45,    -1,    28,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    41,
      -1,    -1,    -1,    45,    -1,    28,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    41,    -1,
      -1,    -1,    45,    -1,    28,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    45,    -1,    28,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      45,    -1,    28,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    45,
      -1,    28,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    45,    -1,
      28,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    45,    -1,    28,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    45,    -1,    28,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    45,    -1,    28,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    45,    -1,    28,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    45,    -1,    28,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    45,    -1,    28,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    45,    -1,    28,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      45,    -1,    28,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    45,
      -1,    28,    10,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    45,    -1,
      28,    10,    11,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    41,    -1,    -1,    -1,    45,    -1,    28,
      10,    11,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    41,    -1,    -1,    -1,    45,    -1,    28,    10,
      11,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    45,    -1,    28,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    45,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    40,    -1,    -1,    28,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    45,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      10,    11,    -1,    28,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    40,    10,    11,    28,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      40,    10,    11,    -1,    28,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    40,    10,    11,    28,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    40,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    47,    48,    49,    50,    51,    52,    53,     3,
       0,    49,    44,     4,    45,    52,    54,    55,     3,    42,
      56,    45,    55,     3,     5,     6,     7,     9,    10,    11,
      23,    24,    25,    29,    33,    34,    35,    36,    37,    39,
      44,    50,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    76,    78,    79,    80,    82,    83,    84,    86,    87,
      56,    27,    44,     3,    44,    44,    44,    44,    44,    69,
      71,    87,     3,    71,    43,    58,     3,    40,    22,    14,
      15,    28,    77,    78,    16,    17,    18,    19,    20,    21,
      81,    83,    86,    12,    13,    85,    30,    69,    45,    71,
      88,    40,    71,     3,    70,     3,     8,    71,    75,    75,
      40,    45,     3,    79,    82,    84,    86,     3,    41,    45,
      45,    40,    45,    45,    45,    40,    40,    71,    58,    71,
      40,    40,    31,    40,    58,    70,    45,    58,     4,    42,
      52,     3,     5,     6,     7,     9,    44,    72,    76,    78,
      79,    80,    82,    83,    84,    86,     5,     6,     7,     9,
      44,    72,    76,    78,    79,    80,    82,    83,    84,    86,
      87,     3,    87,    10,    11,     3,     5,     6,     7,     9,
      44,    72,    76,    78,    79,    80,    82,    83,    84,    86,
      87,    44,    29,     4,    25,    33,    34,    35,    36,    37,
      39,    42,    50,    52,    56,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    71,    73,    74,    87,
       3,     3,     3,    57,    44,    71,    77,    78,    81,    83,
      86,    85,    71,    77,    78,    81,    83,    86,    85,    44,
      44,    71,    77,    78,    81,    83,    86,    85,    45,    88,
       3,     3,    44,    44,    44,    44,    44,    69,    57,     3,
      40,    22,    30,    27,    43,    45,    88,    45,    29,    79,
      82,    84,    86,    45,    29,    79,    82,    84,    86,    45,
      88,    45,    88,    45,    29,    79,    82,    84,    86,    45,
      40,    71,    70,     3,    75,    75,    40,    43,     3,     3,
       3,    69,    70,    71,    45,    45,    45,    45,    40,    45,
      45,    45,    40,    40,    58,    71,    40,    40,    31,    40,
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
#line 65 "guillex.y"
                        {}
#line 2797 "guillex.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 69 "guillex.y"
                                    {}
#line 2803 "guillex.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 70 "guillex.y"
                      {}
#line 2809 "guillex.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 74 "guillex.y"
                       {}
#line 2815 "guillex.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 75 "guillex.y"
                       {}
#line 2821 "guillex.tab.c"
    break;

  case 7: /* varDeclaration: simpleVDeclaration  */
#line 79 "guillex.y"
                       {}
#line 2827 "guillex.tab.c"
    break;

  case 8: /* funcDeclaration: simpleFDeclaration PARENL params PARENR compoundStmt  */
#line 83 "guillex.y"
                                                         {}
#line 2833 "guillex.tab.c"
    break;

  case 9: /* funcDeclaration: simpleFDeclaration PARENL PARENR compoundStmt  */
#line 84 "guillex.y"
                                                  {}
#line 2839 "guillex.tab.c"
    break;

  case 10: /* simpleVDeclaration: TYPE ID  */
#line 88 "guillex.y"
            {}
#line 2845 "guillex.tab.c"
    break;

  case 11: /* simpleFDeclaration: TYPE ID  */
#line 92 "guillex.y"
            {}
#line 2851 "guillex.tab.c"
    break;

  case 12: /* params: params param  */
#line 96 "guillex.y"
                 {}
#line 2857 "guillex.tab.c"
    break;

  case 13: /* params: param  */
#line 97 "guillex.y"
          {}
#line 2863 "guillex.tab.c"
    break;

  case 14: /* param: simpleVDeclaration  */
#line 101 "guillex.y"
                       {}
#line 2869 "guillex.tab.c"
    break;

  case 15: /* compoundStmt: STFUNC stmtList ENDFUNC  */
#line 105 "guillex.y"
                            {}
#line 2875 "guillex.tab.c"
    break;

  case 16: /* stmtList: stmtList primitiveStmt  */
#line 109 "guillex.y"
                              {}
#line 2881 "guillex.tab.c"
    break;

  case 17: /* stmtList: primitiveStmt  */
#line 110 "guillex.y"
                  {}
#line 2887 "guillex.tab.c"
    break;

  case 18: /* primitiveStmt: exprStmt  */
#line 114 "guillex.y"
             {}
#line 2893 "guillex.tab.c"
    break;

  case 19: /* primitiveStmt: compoundStmt  */
#line 115 "guillex.y"
                 {}
#line 2899 "guillex.tab.c"
    break;

  case 20: /* primitiveStmt: condStmt  */
#line 116 "guillex.y"
             {}
#line 2905 "guillex.tab.c"
    break;

  case 21: /* primitiveStmt: iterStmt  */
#line 117 "guillex.y"
             {}
#line 2911 "guillex.tab.c"
    break;

  case 22: /* primitiveStmt: returnStmt  */
#line 118 "guillex.y"
               {}
#line 2917 "guillex.tab.c"
    break;

  case 23: /* primitiveStmt: listStmt  */
#line 119 "guillex.y"
             {}
#line 2923 "guillex.tab.c"
    break;

  case 24: /* primitiveStmt: inOp  */
#line 120 "guillex.y"
         {}
#line 2929 "guillex.tab.c"
    break;

  case 25: /* primitiveStmt: outOp  */
#line 121 "guillex.y"
          {}
#line 2935 "guillex.tab.c"
    break;

  case 26: /* primitiveStmt: varDeclaration  */
#line 122 "guillex.y"
                   {}
#line 2941 "guillex.tab.c"
    break;

  case 27: /* exprStmt: expression SEMIC  */
#line 126 "guillex.y"
                     {}
#line 2947 "guillex.tab.c"
    break;

  case 28: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt  */
#line 130 "guillex.y"
                                                        {}
#line 2953 "guillex.tab.c"
    break;

  case 29: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt ELSE primitiveStmt  */
#line 131 "guillex.y"
                                                                {}
#line 2959 "guillex.tab.c"
    break;

  case 30: /* iterStmt: FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 135 "guillex.y"
                                                                              {}
#line 2965 "guillex.tab.c"
    break;

  case 31: /* returnStmt: RETURN expression SEMIC  */
#line 139 "guillex.y"
                            {}
#line 2971 "guillex.tab.c"
    break;

  case 32: /* listStmt: appendOps  */
#line 143 "guillex.y"
              {}
#line 2977 "guillex.tab.c"
    break;

  case 33: /* listStmt: returnListOps  */
#line 144 "guillex.y"
                  {}
#line 2983 "guillex.tab.c"
    break;

  case 34: /* listStmt: destroyHeadOps  */
#line 145 "guillex.y"
                   {}
#line 2989 "guillex.tab.c"
    break;

  case 35: /* listStmt: mapFilterOps  */
#line 146 "guillex.y"
                 {}
#line 2995 "guillex.tab.c"
    break;

  case 36: /* appendOps: simpleExp APPEND ID SEMIC  */
#line 150 "guillex.y"
                              {}
#line 3001 "guillex.tab.c"
    break;

  case 37: /* returnListOps: returnListOp ID  */
#line 154 "guillex.y"
                    {}
#line 3007 "guillex.tab.c"
    break;

  case 38: /* returnListOp: HEADLIST  */
#line 158 "guillex.y"
             {}
#line 3013 "guillex.tab.c"
    break;

  case 39: /* returnListOp: TAILLIST  */
#line 159 "guillex.y"
             {}
#line 3019 "guillex.tab.c"
    break;

  case 40: /* destroyHeadOps: DESTROYHEAD ID SEMIC  */
#line 163 "guillex.y"
                         {}
#line 3025 "guillex.tab.c"
    break;

  case 41: /* mapFilterOps: fCall MAP ID SEMIC  */
#line 167 "guillex.y"
                       {}
#line 3031 "guillex.tab.c"
    break;

  case 42: /* expression: assignExp  */
#line 171 "guillex.y"
              {}
#line 3037 "guillex.tab.c"
    break;

  case 43: /* expression: simpleExp  */
#line 172 "guillex.y"
              {}
#line 3043 "guillex.tab.c"
    break;

  case 44: /* assignExp: ID ASSIGN expression  */
#line 176 "guillex.y"
                         {}
#line 3049 "guillex.tab.c"
    break;

  case 45: /* simpleExp: binLogicalExp  */
#line 181 "guillex.y"
                  {}
#line 3055 "guillex.tab.c"
    break;

  case 46: /* constOp: INTEGER  */
#line 185 "guillex.y"
            {}
#line 3061 "guillex.tab.c"
    break;

  case 47: /* constOp: DECIMAL  */
#line 186 "guillex.y"
            {}
#line 3067 "guillex.tab.c"
    break;

  case 48: /* constOp: LIST  */
#line 187 "guillex.y"
         {}
#line 3073 "guillex.tab.c"
    break;

  case 49: /* constOp: NIL  */
#line 188 "guillex.y"
        {}
#line 3079 "guillex.tab.c"
    break;

  case 50: /* inOp: READ PARENL ID PARENR  */
#line 192 "guillex.y"
                        {}
#line 3085 "guillex.tab.c"
    break;

  case 51: /* outOp: WRITE PARENL outConst PARENR SEMIC  */
#line 196 "guillex.y"
                                      {}
#line 3091 "guillex.tab.c"
    break;

  case 52: /* outOp: WRITELN PARENL outConst PARENR SEMIC  */
#line 197 "guillex.y"
                                         {}
#line 3097 "guillex.tab.c"
    break;

  case 53: /* outConst: STRING  */
#line 201 "guillex.y"
           {}
#line 3103 "guillex.tab.c"
    break;

  case 54: /* outConst: simpleExp  */
#line 202 "guillex.y"
              {}
#line 3109 "guillex.tab.c"
    break;

  case 55: /* binLogicalExp: binLogicalExp binLogicalOp unLogicalOp  */
#line 206 "guillex.y"
                                          {}
#line 3115 "guillex.tab.c"
    break;

  case 56: /* binLogicalExp: unLogicalExp  */
#line 207 "guillex.y"
                 {}
#line 3121 "guillex.tab.c"
    break;

  case 57: /* binLogicalOp: OR  */
#line 211 "guillex.y"
       {}
#line 3127 "guillex.tab.c"
    break;

  case 58: /* binLogicalOp: AND  */
#line 212 "guillex.y"
        {}
#line 3133 "guillex.tab.c"
    break;

  case 59: /* binLogicalOp: NEG  */
#line 213 "guillex.y"
        {}
#line 3139 "guillex.tab.c"
    break;

  case 60: /* unLogicalExp: unLogicalOp unLogicalExp  */
#line 217 "guillex.y"
                             {}
#line 3145 "guillex.tab.c"
    break;

  case 62: /* unLogicalOp: NOT  */
#line 222 "guillex.y"
        {}
#line 3151 "guillex.tab.c"
    break;

  case 63: /* relationalExp: relationalExp relationalOp sumExp  */
#line 226 "guillex.y"
                                      {}
#line 3157 "guillex.tab.c"
    break;

  case 64: /* relationalExp: sumExp  */
#line 227 "guillex.y"
           {}
#line 3163 "guillex.tab.c"
    break;

  case 65: /* relationalOp: SMALLER  */
#line 232 "guillex.y"
            {}
#line 3169 "guillex.tab.c"
    break;

  case 66: /* relationalOp: GREATER  */
#line 233 "guillex.y"
            {}
#line 3175 "guillex.tab.c"
    break;

  case 67: /* relationalOp: SMALLEQ  */
#line 234 "guillex.y"
            {}
#line 3181 "guillex.tab.c"
    break;

  case 68: /* relationalOp: GREATEQ  */
#line 235 "guillex.y"
            {}
#line 3187 "guillex.tab.c"
    break;

  case 69: /* relationalOp: EQUALS  */
#line 236 "guillex.y"
           {}
#line 3193 "guillex.tab.c"
    break;

  case 70: /* relationalOp: DIFFERENT  */
#line 237 "guillex.y"
              {}
#line 3199 "guillex.tab.c"
    break;

  case 71: /* sumExp: sumExp sumOp mulExp  */
#line 241 "guillex.y"
                        {}
#line 3205 "guillex.tab.c"
    break;

  case 72: /* sumExp: mulExp  */
#line 242 "guillex.y"
           {}
#line 3211 "guillex.tab.c"
    break;

  case 73: /* sumOp: ADD  */
#line 246 "guillex.y"
        {printf("oi");}
#line 3217 "guillex.tab.c"
    break;

  case 74: /* sumOp: SUB  */
#line 247 "guillex.y"
        {}
#line 3223 "guillex.tab.c"
    break;

  case 75: /* mulExp: mulExp mulOp factor  */
#line 251 "guillex.y"
                        {}
#line 3229 "guillex.tab.c"
    break;

  case 76: /* mulExp: factor  */
#line 252 "guillex.y"
           {}
#line 3235 "guillex.tab.c"
    break;

  case 77: /* mulExp: sumOp factor  */
#line 253 "guillex.y"
                 {}
#line 3241 "guillex.tab.c"
    break;

  case 78: /* mulOp: MULT  */
#line 257 "guillex.y"
         {}
#line 3247 "guillex.tab.c"
    break;

  case 79: /* mulOp: DIV  */
#line 258 "guillex.y"
        {}
#line 3253 "guillex.tab.c"
    break;

  case 80: /* factor: ID  */
#line 262 "guillex.y"
       {printf("oi");}
#line 3259 "guillex.tab.c"
    break;

  case 81: /* factor: fCall  */
#line 263 "guillex.y"
          {}
#line 3265 "guillex.tab.c"
    break;

  case 82: /* factor: PARENL simpleExp PARENR  */
#line 264 "guillex.y"
                            {}
#line 3271 "guillex.tab.c"
    break;

  case 83: /* factor: constOp  */
#line 265 "guillex.y"
            {}
#line 3277 "guillex.tab.c"
    break;

  case 84: /* fCall: ID PARENL callParams PARENR  */
#line 269 "guillex.y"
                                 {}
#line 3283 "guillex.tab.c"
    break;

  case 85: /* fCall: ID PARENL PARENR  */
#line 270 "guillex.y"
                     {}
#line 3289 "guillex.tab.c"
    break;

  case 86: /* callParams: callParams COMMA simpleExp  */
#line 274 "guillex.y"
                               {}
#line 3295 "guillex.tab.c"
    break;

  case 87: /* callParams: simpleExp  */
#line 275 "guillex.y"
              {}
#line 3301 "guillex.tab.c"
    break;


#line 3305 "guillex.tab.c"

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

#line 280 "guillex.y"

int main(int argc, char *argv[]) {
  printf("\n\n#### beginning ####\n\n");
  FILE *file;
  file = fopen(argv[1], "r");
  yyparse();
  yylex_destroy();
  printf("\n\n#### EOF ####\n\n");
  return 0;
}
