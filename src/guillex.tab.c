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
int symbolIdCounter;

extern int yylex();
extern int yylex_destroy();
extern int yyparse();
void yyerror(const char* a);
extern int line;
extern int wordPosition;
extern FILE* yyin;
extern Symbol *symbol;

Node *abstractSyntaxTree = NULL;



#line 96 "guillex.tab.c"

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
  YYSYMBOL_LIST = 5,                       /* LIST  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_NIL = 7,                        /* NIL  */
  YYSYMBOL_INTEGER = 8,                    /* INTEGER  */
  YYSYMBOL_DECIMAL = 9,                    /* DECIMAL  */
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
#define YYLAST   5107

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  316

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
       0,    63,    63,    69,    70,    74,    75,    79,    83,    84,
      88,    95,   102,   103,   107,   111,   115,   116,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   132,   136,   137,
     141,   142,   146,   150,   151,   152,   153,   157,   161,   165,
     166,   170,   174,   178,   179,   183,   188,   192,   193,   194,
     195,   199,   203,   204,   208,   209,   213,   214,   218,   219,
     220,   224,   225,   229,   233,   234,   239,   240,   241,   242,
     243,   244,   248,   249,   253,   254,   258,   259,   260,   264,
     265,   269,   270,   271,   272,   276,   277,   281,   282
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "TYPE", "LIST",
  "STRING", "NIL", "INTEGER", "DECIMAL", "ADD", "SUB", "MULT", "DIV", "OR",
  "AND", "SMALLER", "GREATER", "SMALLEQ", "GREATEQ", "EQUALS", "DIFFERENT",
  "APPEND", "HEADLIST", "TAILLIST", "DESTROYHEAD", "FILTER", "ASSIGN",
  "NEG", "NOT", "MAP", "ELSE", "THEN", "IF", "FOR", "READ", "WRITE",
  "WRITELN", "RETURN", "SEMIC", "COMMA", "STFUNC", "ENDFUNC", "PARENL",
  "PARENR", "$accept", "program", "declarationList", "declaration",
  "varDeclaration", "funcDeclaration", "simpleVarDeclaration",
  "simpleFuncDeclaration", "params", "param", "compoundStmt", "stmtList",
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
     295,   296,   297,   298,   299
};
#endif

#define YYPACT_NINF (-169)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,    26,    14,    68,    76,    78,   121,    -7,     1,    87,
    -169,   135,   138,    11,    49,    29,    15,    37,    56,    58,
    3405,   162,    29,    73,  4375,  4648,  4678,  4708,  4738,    30,
      90,    55,    83,    85,   875,    63,    71,    86,    94,    97,
     955,   996,  2093,  2134,  2175,  2216,  2257,  2298,  2339,  2380,
    2421,  2462,  2503,    91,  2544,  2585,   108,   115,   122,  4768,
    2626,  2667,   113,   208,  1037,  4324,  5053,   319,  4798,  4828,
    4528,   174,   161,   955,   102,   128,   996,   955,   166,   818,
     818,  4443,   133,  4858,  3534,   146,   214,  2708,  2749,  2790,
     150,   153,   164,   167,   241,    13,    40,   148,   343,   453,
     606,   633,   633,  4888,   423,   616,   319,   210,   180,   199,
    4558,   181,   193,  2831,   197,   207,   224,   230,   232,   233,
     245,   260,  2872,  4918,   258,  5068,  4948,  4978,   270,  2913,
    1078,  4588,  3446,  1037,  1037,   272,   278,   292,  2954,   226,
     904,   298,   303,  2995,  3036,  3077,  3405,   340,   340,  3118,
     318,   315,   322,  3405,  3405,  3159,  3200,   365,  3405,   330,
    4043,  4062,  4081,  4100,   996,  4119,   346,   394,   996,  3403,
    3603,   795,  4138,  4157,  4176,  4477,   888,  1160,  3480,  3553,
    3588,  3623,  3658,   996,  3693,    75,   250,  1078,  4493,  4309,
    1283,  3728,  3763,  3798,   391,   751,   367,  4409,   374,   336,
     342,   344,   345,   348,   955,  3405,   945,   341,   986,  1027,
    1068,  1109,  1150,  1191,  1232,  1273,   380,  1314,  1355,   353,
    1396,  1437,  4618,  1119,   358,  3241,  3282,   359,   376,   489,
    1201,  1201,  4195,   795,   767,   363,   381,   437,  1242,  1242,
    3833,  1283,  5008,   247,  4214,   261,   409,   375,   996,   955,
     412,   818,   818,   385,  3323,  1478,  1519,  1560,   422,  3515,
     389,   392,   393,  3364,  4233,   538,   558,  3638,  4252,  4271,
    3868,   276,  3903,   455,   521,  4340,  3938,  3973,  5038,  4290,
     400,  1601,   396,   402,   405,   401,   403,   406,  1642,  1683,
     410,  4008,  1724,  3446,  1037,  1037,   418,   429,   432,  1765,
    1806,   433,   434,  1847,  1888,  1929,  3446,   340,   340,  1970,
     431,   435,  3446,  3446,  2011,  2052
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -169,   473,     2,  -169,     0,  -169,  -169,   467,
     -14,  -152,    17,  -125,  -107,  -104,   -96,   -86,   -63,   -61,
     -53,   -45,    28,   -31,   -73,   124,   439,    43,    51,   -40,
     669,  -101,   622,   471,   654,   -84,   517,   259,   291,  -160,
     337,   -10,  -168
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    42,     6,   159,     8,    17,    18,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,   120,
      62,    93,    63,    64,    65,   101,    66,    67,    68,   106,
      69,   174,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    21,     5,     7,   115,     5,   225,   209,    71,    82,
      70,     1,   233,    16,    10,    14,   -66,    16,   -66,   -14,
     -66,   -66,   -66,   -66,   -66,   210,   243,   245,   211,     9,
      83,   241,    12,   -74,    70,   -74,   212,   -74,   -74,   -74,
     121,    14,   109,   -67,    13,   -67,   213,   -67,   -67,   -67,
     -67,   -67,    19,   254,    83,    15,   -66,    83,   -39,   -14,
     -13,    87,   -10,    83,   193,   228,   271,    83,    -2,   214,
      20,   215,     1,   -74,   151,   152,    -4,   -12,    -5,   216,
      -4,    22,    -5,   -67,   236,   230,   -40,   217,    75,    90,
      91,    83,    83,   -75,    88,   -75,    83,   -75,   -75,   -75,
     -13,   219,   -10,    92,   238,   178,    76,   179,   233,   180,
     181,   182,    29,    30,    77,   -46,   241,   -12,   208,   -46,
     193,    -6,   222,    83,    83,    -6,   -10,    90,    91,    78,
     -11,    34,   207,   -75,   206,    -3,    70,    79,    -7,    -3,
      80,    92,    -7,    70,    70,   183,   110,    89,    70,   140,
     261,   -68,   -46,   -68,   -43,   -68,   -68,   -68,   -68,   -68,
     218,   -44,    -9,   149,   108,    85,    -9,   113,   209,   117,
     155,   156,   122,   253,    -8,   220,   283,   193,    -8,   -58,
     193,   209,   -59,   221,   193,   193,   210,   209,   209,   211,
     123,   -68,   260,   -60,    83,    70,   196,   212,   111,   210,
     114,   116,   211,   119,   119,   210,   210,   213,   211,   211,
     212,   286,   287,   128,   -15,    70,   212,   212,   -15,   129,
     213,   -88,   -57,   -57,   193,   -88,   213,   213,   193,   193,
     214,   193,   215,   130,   310,   311,   -57,   131,   -45,    83,
     216,   132,    87,   214,    70,   215,   133,   -57,   217,   214,
     214,   215,   215,   216,   139,   -61,   -61,   141,   142,   216,
     216,   217,   219,   134,   -57,   -57,   -87,   217,   217,   -61,
     -87,    87,   -56,   -56,   135,   219,   -54,   -55,   -57,   208,
     -61,   219,   219,   222,    83,    83,   -56,   130,   227,   136,
     -57,   278,   208,   207,   -57,   206,   222,   -56,   208,   208,
     171,   130,   222,   222,   137,   279,   207,   235,   206,   138,
     300,   143,   207,   207,   206,   206,   130,   144,   111,   111,
     291,   218,   175,   309,    25,   102,    26,    27,    28,   314,
     315,   145,   172,   190,   218,   171,   220,   147,   171,   171,
     218,   218,   148,   150,   221,   223,   -69,   262,   -69,   220,
     -69,   -69,   -69,   -69,   -69,   220,   220,   221,   111,   153,
      90,    91,    41,   221,   221,   191,   154,   172,   224,   226,
     172,   172,   282,   284,    92,   119,   119,   247,   173,   248,
     255,   -63,   -63,   256,   102,   249,   -69,   250,   251,   190,
     -46,   252,   257,   126,   178,   -63,   179,   -10,   180,   181,
     182,    29,    30,   264,   103,   265,   -63,   272,   -57,   -57,
     273,   192,   280,   173,   281,   285,   173,   173,   301,   302,
      34,   191,   -57,   171,   288,   290,   -79,   171,   -79,   231,
     -79,   -79,   -79,   -45,   183,   242,   -43,   -44,   -57,   292,
     293,   294,   171,   127,   295,   296,   190,   297,   239,   299,
     298,   -61,   -61,   190,   190,   172,   -70,   303,   -70,   172,
     -70,   -70,   -70,   -70,   -70,   -61,   -79,   192,   304,   -63,
     -63,   305,   307,   308,   172,   312,    11,   -61,   191,   313,
     165,   -61,   171,   -63,    23,   191,   191,     0,     0,   171,
     171,     0,     0,   190,     0,   -63,   -70,   190,   190,   -63,
       0,   173,     0,   -61,   -61,   173,     0,   171,   232,     0,
     171,   171,   168,   184,   172,   165,     0,   -61,   165,   165,
     173,   172,   268,     0,   192,   191,   231,   240,     0,   191,
     276,   192,   192,   -61,   239,   -56,   -56,     0,     0,   172,
       0,     0,   172,   172,     0,   187,     0,   168,     0,   -56,
     168,   168,   -63,   -63,     0,     0,     0,     0,   170,     0,
     173,   -56,     0,     0,   124,   -56,   -63,   173,   173,   184,
     269,   192,   -56,   -56,     0,   192,   192,     0,   277,     0,
       0,     0,   -63,     0,     0,   173,   -56,     0,   173,   173,
       0,   189,     0,   170,     0,     0,   170,   170,     0,     0,
       0,   187,   -56,   165,     0,     0,     0,   165,     0,   -71,
     165,   -71,     0,   -71,   -71,   -71,   -71,   -71,   125,   -80,
       0,   -80,   165,   -80,   -80,   -80,   184,     0,     0,   184,
       0,     0,     0,   184,   184,   168,   175,     0,    25,   168,
      26,    27,    28,    29,    30,     0,     0,   189,     0,   -71,
       0,     0,     0,     0,   168,     0,     0,     0,   187,   -80,
       0,     0,   165,   167,     0,   187,   187,     0,     0,   165,
     165,     0,   165,   184,     0,     0,    41,   184,   184,     0,
     184,   170,     0,     0,     0,   170,    94,   165,     0,     0,
     165,   165,     0,     0,   168,   169,   186,     0,   167,   266,
     170,   167,   167,     0,   189,   187,     0,   274,     0,     0,
     166,   189,   189,     0,     0,     0,     0,     0,     0,   168,
       0,     0,   168,   168,     0,     0,     0,     0,   188,     0,
     169,     0,     0,   169,   169,     0,     0,     0,     0,     0,
     170,     0,     0,   185,     0,   166,     0,   267,   166,   166,
       0,   189,   186,     0,   178,   275,   179,     0,   180,   181,
     182,    29,    30,     0,     0,   170,     0,     0,   170,   170,
     178,     0,   179,     0,   180,   181,   182,    29,    30,     0,
      34,     0,     0,     0,   188,     0,   167,     0,     0,     0,
     229,     0,     0,     0,   183,   244,    34,     0,    84,   185,
     160,     0,   161,   162,   163,   167,     0,     0,     0,   237,
     183,   270,     0,     0,     0,     0,   186,   186,   169,     0,
       0,    84,   169,   160,   118,   161,   162,   163,    29,    30,
       0,     0,     0,   166,     0,     0,     0,   169,   164,     0,
       0,   188,     0,     0,     0,   167,     0,    34,   188,   188,
       0,     0,   166,     0,     0,     0,   186,     0,     0,     0,
       0,   164,     0,   185,   185,     0,     0,     0,     0,     0,
     167,     0,     0,   167,   167,     0,     0,   169,   -63,     0,
     -63,     0,   -63,   -63,   -63,   -63,   -63,     0,   188,     0,
       0,   -74,   166,   -74,     0,   -74,   -74,   -74,   -74,   -74,
       0,     0,   169,   185,   -63,   169,   169,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,     0,   166,   -63,     0,
     166,   166,     0,     0,     0,     0,     0,   -28,   -28,   -28,
       0,   -74,     0,   -28,     0,   146,     0,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,   -28,   -28,   -28,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,     0,    81,     0,
      25,     0,    26,    27,    28,    29,    30,     0,   -26,   -26,
     -26,     0,     0,     0,   -26,     0,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,    34,     0,   -26,   -26,   -26,   -19,
     -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,    41,    84,
       0,   160,     0,   161,   162,   163,    29,    30,     0,   -19,
     -19,   -19,     0,     0,     0,   -19,     0,   -19,     0,   -19,
     -19,   -19,   -19,   -19,   -19,    34,     0,   -19,   -19,   -19,
     -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,   164,
     175,     0,    25,     0,    26,    27,    28,    29,    30,     0,
     -18,   -18,   -18,     0,     0,     0,   -18,     0,   -18,     0,
     -18,   -18,   -18,   -18,   -18,   -18,    34,     0,   -18,   -18,
     -18,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,
      41,   178,     0,   179,     0,   180,   181,   182,    29,    30,
       0,   -20,   -20,   -20,     0,     0,     0,   -20,     0,   -20,
       0,   -20,   -20,   -20,   -20,   -20,   -20,    34,     0,   -20,
     -20,   -20,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   183,   259,     0,   160,     0,   161,   162,   163,    29,
      30,     0,   -21,   -21,   -21,     0,     0,     0,   -21,     0,
     -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,    34,     0,
     -21,   -21,   -21,   -22,   -22,   -22,     0,   -22,   -22,   -22,
     -22,   -22,   164,   -75,     0,   -75,     0,   -75,   -75,   -75,
     -75,   -75,     0,   -22,   -22,   -22,     0,     0,     0,   -22,
       0,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,
       0,   -22,   -22,   -22,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -75,    84,     0,   160,     0,   161,   162,
     163,    29,    30,     0,   -23,   -23,   -23,     0,     0,     0,
     -23,     0,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,   -23,   -23,   -23,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   164,   178,     0,   179,     0,   180,
     181,   182,    29,    30,     0,   -33,   -33,   -33,     0,     0,
       0,   -33,     0,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,   -33,   -33,   -33,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   183,   178,     0,   179,     0,
     180,   181,   182,     0,     0,     0,   -34,   -34,   -34,     0,
       0,     0,   -34,     0,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,   -34,   -34,   -34,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   183,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -35,   -35,   -35,
       0,     0,     0,   -35,     0,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,   -35,   -35,   -35,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -36,   -36,
     -36,     0,     0,     0,   -36,     0,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,   -24,
     -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -24,
     -24,   -24,     0,     0,     0,   -24,     0,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -24,     0,     0,   -24,   -24,   -24,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -25,   -25,   -25,     0,     0,     0,   -25,     0,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,   -25,
     -25,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    -7,    -7,    -7,     0,     0,     0,    -7,     0,    -7,
       0,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,
      -7,    -7,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     -38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -38,   -38,   -38,     0,     0,     0,   -38,     0,
     -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
     -38,   -38,   -38,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -27,   -27,   -27,     0,     0,     0,   -27,
       0,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -27,   -27,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -41,   -41,   -41,     0,     0,     0,
     -41,     0,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,   -41,   -41,   -41,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -32,   -32,   -32,     0,     0,
       0,   -32,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -32,     0,     0,   -32,   -32,   -32,   -15,   -15,   -15,     0,
     -15,   -15,   -15,   -15,   -15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -15,   -15,   -15,     0,
       0,     0,   -15,     0,   -15,     0,   -15,   -15,   -15,   -15,
     -15,   -15,     0,     0,   -15,   -15,   -15,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,   -37,
       0,     0,     0,   -37,     0,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,   -37,   -37,   -37,   -42,   -42,
     -42,     0,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -42,   -42,
     -42,     0,     0,     0,   -42,     0,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -42,     0,     0,   -42,   -42,   -42,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -28,
     -28,   -28,     0,     0,     0,   -28,     0,   306,     0,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,
     -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,   -51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -51,   -51,   -51,     0,     0,     0,   -51,     0,   -51,     0,
     -51,   -51,   -51,   -51,   -51,   -51,     0,     0,   -51,   -51,
     -51,   -52,   -52,   -52,     0,   -52,   -52,   -52,   -52,   -52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -52,   -52,   -52,     0,     0,     0,   -52,     0,   -52,
       0,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,   -52,
     -52,   -52,   -53,   -53,   -53,     0,   -53,   -53,   -53,   -53,
     -53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -53,   -53,   -53,     0,     0,     0,   -53,     0,
     -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,     0,     0,
     -53,   -53,   -53,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -29,   -29,   -29,     0,     0,     0,   -29,
       0,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,
       0,   -29,   -29,   -29,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -30,   -30,   -30,     0,     0,     0,
     -30,     0,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,   -30,   -30,   -30,   -31,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -31,   -31,   -31,     0,     0,
       0,   -31,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,   -31,   -31,   -31,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   -26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -26,   -26,   -26,     0,
       0,     0,   -26,     0,     0,     0,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,   -26,   -26,   -26,   -19,   -19,   -19,
       0,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -19,   -19,   -19,
       0,     0,     0,   -19,     0,     0,     0,   -19,   -19,   -19,
     -19,   -19,   -19,     0,     0,   -19,   -19,   -19,    24,   157,
      25,     0,    26,    27,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
      33,     0,     0,     0,    34,     0,     0,     0,    35,    36,
      37,    38,    39,    40,     0,     0,   158,    86,    41,   -17,
     -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -17,
     -17,   -17,     0,     0,     0,   -17,     0,     0,     0,   -17,
     -17,   -17,   -17,   -17,   -17,     0,     0,   -17,   -17,   -17,
     -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -18,   -18,   -18,     0,     0,     0,   -18,     0,     0,     0,
     -18,   -18,   -18,   -18,   -18,   -18,     0,     0,   -18,   -18,
     -18,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -20,   -20,   -20,     0,     0,     0,   -20,     0,     0,
       0,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,
     -20,   -20,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -21,   -21,   -21,     0,     0,     0,   -21,     0,
       0,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,   -21,   -21,   -22,   -22,   -22,     0,   -22,   -22,   -22,
     -22,   -22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -22,   -22,   -22,     0,     0,     0,   -22,
       0,     0,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,
       0,   -22,   -22,   -22,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -23,   -23,   -23,     0,     0,     0,
     -23,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,   -23,   -23,   -23,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -33,   -33,   -33,     0,     0,
       0,   -33,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,   -33,   -33,   -33,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -34,   -34,   -34,     0,
       0,     0,   -34,     0,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,   -34,   -34,   -34,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -35,   -35,   -35,
       0,     0,     0,   -35,     0,     0,     0,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,   -35,   -35,   -35,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -36,   -36,
     -36,     0,     0,     0,   -36,     0,     0,     0,   -36,   -36,
     -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,   -24,
     -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -24,
     -24,   -24,     0,     0,     0,   -24,     0,     0,     0,   -24,
     -24,   -24,   -24,   -24,   -24,     0,     0,   -24,   -24,   -24,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -25,   -25,   -25,     0,     0,     0,   -25,     0,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,   -25,
     -25,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -16,   -16,   -16,     0,     0,     0,   -16,     0,     0,
       0,   -16,   -16,   -16,   -16,   -16,   -16,     0,     0,   -16,
     -16,   -16,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     -38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -38,   -38,   -38,     0,     0,     0,   -38,     0,
       0,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
     -38,   -38,   -38,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -27,   -27,   -27,     0,     0,     0,   -27,
       0,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -27,   -27,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -41,   -41,   -41,     0,     0,     0,
     -41,     0,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,   -41,   -41,   -41,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -32,   -32,   -32,     0,     0,
       0,   -32,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,     0,     0,   -32,   -32,   -32,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -37,   -37,   -37,     0,
       0,     0,   -37,     0,     0,     0,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,   -37,   -37,   -37,   -42,   -42,   -42,
       0,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -42,   -42,   -42,
       0,     0,     0,   -42,     0,     0,     0,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,   -42,   -42,   -42,   -51,   -51,
     -51,     0,   -51,   -51,   -51,   -51,   -51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -51,   -51,
     -51,     0,     0,     0,   -51,     0,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,     0,     0,   -51,   -51,   -51,   -52,
     -52,   -52,     0,   -52,   -52,   -52,   -52,   -52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -52,
     -52,   -52,     0,     0,     0,   -52,     0,     0,     0,   -52,
     -52,   -52,   -52,   -52,   -52,     0,     0,   -52,   -52,   -52,
     -53,   -53,   -53,     0,   -53,   -53,   -53,   -53,   -53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -53,   -53,   -53,     0,     0,     0,   -53,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,     0,     0,   -53,   -53,
     -53,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -29,   -29,   -29,     0,     0,     0,   -29,     0,     0,
       0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,
     -29,   -29,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -30,   -30,   -30,     0,     0,     0,   -30,     0,
       0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
     -30,   -30,   -30,   -31,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -31,   -31,   -31,     0,     0,     0,   -31,
       0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,   -31,   -31,   -31,    24,   157,    25,     0,    26,    27,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,    33,     0,     0,     0,
      34,     0,     0,     0,    35,    36,    37,    38,    39,    40,
       0,     0,   158,   263,    41,    -7,    -7,    -7,     0,    -7,
      -7,    -7,    -7,    -7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -7,    -7,    -7,     0,     0,
       0,    -7,     0,     0,     0,    -7,    -7,    -7,    -7,    -7,
      -7,     0,     0,    -7,    -7,    -7,    24,   157,    25,     0,
      26,    27,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,    33,     0,
       0,     0,    34,     0,     0,     0,    35,    36,    37,    38,
      39,    40,     0,     0,   158,   289,    41,   -15,   -15,   -15,
       0,   -15,   -15,   -15,   -15,   -15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -15,   -15,   -15,
       0,     0,     0,   -15,     0,     0,     0,   -15,   -15,   -15,
     -15,   -15,   -15,     0,     0,   -15,   -15,   -15,    24,   157,
      25,     0,    26,    27,    28,    29,    30,   -62,   -62,    95,
      96,    97,    98,    99,   100,     0,     0,     0,    31,    32,
      33,   -62,     0,     0,    34,     0,     0,     0,    35,    36,
      37,    38,    39,    40,     0,     0,   158,   -62,    41,   197,
     157,    25,     0,    26,    27,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,   198,     0,     0,     0,    34,     0,     0,     0,   199,
     200,   201,   202,   203,   204,     0,     0,   205,     0,    41,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,   -81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,     0,     0,   234,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,   223,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   195,   -81,
       0,     0,   -81,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,     0,   195,   -81,     0,
       0,   -49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -49,     0,     0,     0,   -49,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
       0,     0,     0,   176,   177,     0,   -50,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,   -50,     0,
       0,   -65,   -50,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,     0,     0,   -65,   176,   177,
       0,   -47,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,     0,   -47,     0,     0,   -64,   -47,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,     0,   -64,     0,     0,     0,   -48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -48,     0,
       0,     0,   -48,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,
       0,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -84,     0,     0,     0,   -84,   -73,   -73,
     104,   105,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,     0,     0,   -73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -73,     0,
       0,     0,   -73,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,
       0,   -77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -77,     0,     0,     0,   -77,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -82,     0,
       0,     0,   -82,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,
       0,   -78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -78,     0,     0,     0,   -78,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,     0,     0,   -86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -86,     0,
       0,     0,   -86,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,
       0,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -83,     0,     0,     0,   -83,   -72,   -72,
     104,   105,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -72,     0,
       0,     0,   -72,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,
       0,   -76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -76,     0,     0,     0,   -76,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,   -85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -85,     0,
       0,     0,   -85,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,     0,     0,     0,     0,
       0,   -49,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,     0,     0,     0,   -49,     0,     0,
     -50,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,     0,     0,   -50,     0,     0,   -47,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,     0,     0,     0,   -47,     0,     0,   -48,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,   -48,     0,     0,   -84,   -73,   -73,
     104,   105,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,   -84,     0,     0,   -73,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,     0,   -73,     0,     0,   -77,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,   -77,     0,     0,   -82,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
     -82,     0,     0,   -78,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,   -78,
       0,     0,   -86,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,   -86,     0,
       0,   -83,   -72,   -72,   104,   105,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,   -83,     0,     0,
     -72,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,   -72,     0,     0,   -76,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,   -76,     0,     0,   -85,   176,
     177,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,   -85,     0,     0,   -65,   -62,   -62,
      95,    96,    97,    98,    99,   100,     0,     0,     0,   -65,
     176,   177,   -62,   -65,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,   -62,     0,     0,     0,     0,   -64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -64,     0,     0,     0,   -64,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,    72,     0,     0,
       0,     0,    73,   -81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -81,     0,     0,     0,    74,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   246,     0,     0,     0,     0,    73,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
       0,     0,    74,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
      73,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,     0,     0,     0,   194,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,     0,     0,   -81,     0,   -62,   -62,    95,
      96,    97,    98,    99,   100,     0,   -81,     0,     0,     0,
     194,   -62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -62,     0,     0,     0,   -62,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,   -82,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,     0,     0,   -86,     0,   -86,     0,
       0,     0,     0,     0,     0,     0,     0,   -86,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,   -85,     0,   -85,     0,
       0,     0,     0,     0,     0,     0,     0,   -85,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,   -82,     0,   258,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
       0,     0,     0,     0,     0,     0,   -49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -49,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
       0,     0,     0,     0,     0,     0,   -50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -50,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
       0,     0,     0,     0,     0,     0,   -47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -47,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,     0,     0,     0,     0,     0,   -48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -48,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,     0,     0,     0,   -84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,   -73,   -73,
     104,   105,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,     0,     0,   -73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -73,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,     0,     0,     0,   -77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -77,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,     0,     0,   -78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -78,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,     0,     0,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -83,   -72,   -72,
     104,   105,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -72,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,   -76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -76,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,     0,     0,   -86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -86,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,   176,   177,     0,   -85,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,   -85,   176,   177,
       0,   -65,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,   -65,     0,     0,     0,   -64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -64
};

static const yytype_int16 yycheck[] =
{
       0,    15,     0,     3,    77,     3,   158,   132,    22,    40,
      20,     4,   172,    13,     0,     4,     3,    17,     5,     4,
       7,     8,     9,    10,    11,   132,   194,   195,   132,     3,
      40,   191,    39,     3,    44,     5,   132,     7,     8,     9,
      80,     4,    73,     3,    43,     5,   132,     7,     8,     9,
      10,    11,     3,   205,    64,    44,    43,    67,     3,    44,
       4,    44,     4,    73,    74,   166,   234,    77,     0,   132,
      41,   132,     4,    43,   147,   148,     0,     4,     0,   132,
       4,    44,     4,    43,   185,   169,     3,   132,     3,    14,
      15,   101,   102,     3,     3,     5,   106,     7,     8,     9,
      44,   132,    44,    28,   188,     3,    43,     5,   268,     7,
       8,     9,    10,    11,    43,    40,   276,    44,   132,    44,
     130,     0,   132,   133,   134,     4,    39,    14,    15,    43,
      43,    29,   132,    43,   132,     0,   146,    43,     0,     4,
      43,    28,     4,   153,   154,    43,    44,    39,   158,   132,
     223,     3,    39,     5,    39,     7,     8,     9,    10,    11,
     132,    39,     0,   146,     3,    41,     4,    39,   293,     3,
     153,   154,    39,   204,     0,   132,   249,   187,     4,    29,
     190,   306,    29,   132,   194,   195,   293,   312,   313,   293,
      44,    43,   223,    29,   204,   205,    29,   293,    74,   306,
      76,    77,   306,    79,    80,   312,   313,   293,   312,   313,
     306,   251,   252,     3,     0,   225,   312,   313,     4,    39,
     306,    40,    14,    15,   234,    44,   312,   313,   238,   239,
     293,   241,   293,    40,   307,   308,    28,    44,    39,   249,
     293,    44,   225,   306,   254,   306,    39,    39,   293,   312,
     313,   312,   313,   306,   130,    14,    15,   133,   134,   312,
     313,   306,   293,    39,    14,    15,    40,   312,   313,    28,
      44,   254,    14,    15,    44,   306,    44,    44,    28,   293,
      39,   312,   313,   293,   294,   295,    28,    40,   164,    44,
      40,    44,   306,   293,    44,   293,   306,    39,   312,   313,
      41,    40,   312,   313,    44,    44,   306,   183,   306,    39,
     293,    39,   312,   313,   312,   313,    40,    39,   194,   195,
      44,   293,     3,   306,     5,    66,     7,     8,     9,   312,
     313,    39,    41,    74,   306,    76,   293,    39,    79,    80,
     312,   313,    39,     3,   293,    27,     3,   223,     5,   306,
       7,     8,     9,    10,    11,   312,   313,   306,   234,    44,
      14,    15,    43,   312,   313,    74,    44,    76,     3,    39,
      79,    80,   248,   249,    28,   251,   252,     3,    41,    43,
      39,    14,    15,     3,   125,    43,    43,    43,    43,   130,
      44,    43,    39,   102,     3,    28,     5,    39,     7,     8,
       9,    10,    11,    44,    67,    29,    39,    44,    14,    15,
      29,    74,     3,    76,    39,     3,    79,    80,   294,   295,
      29,   130,    28,   164,    39,     3,     3,   168,     5,   170,
       7,     8,     9,    44,    43,    44,    44,    44,    44,    39,
      44,    39,   183,   106,    39,    44,   187,    44,   189,    39,
      44,    14,    15,   194,   195,   164,     3,    39,     5,   168,
       7,     8,     9,    10,    11,    28,    43,   130,    39,    14,
      15,    39,    39,    39,   183,    44,     3,    40,   187,    44,
      41,    44,   223,    28,    17,   194,   195,    -1,    -1,   230,
     231,    -1,    -1,   234,    -1,    40,    43,   238,   239,    44,
      -1,   164,    -1,    14,    15,   168,    -1,   248,   171,    -1,
     251,   252,    41,    74,   223,    76,    -1,    28,    79,    80,
     183,   230,   231,    -1,   187,   234,   267,   190,    -1,   238,
     239,   194,   195,    44,   275,    14,    15,    -1,    -1,   248,
      -1,    -1,   251,   252,    -1,    74,    -1,    76,    -1,    28,
      79,    80,    14,    15,    -1,    -1,    -1,    -1,    41,    -1,
     223,    40,    -1,    -1,    93,    44,    28,   230,   231,   130,
     233,   234,    14,    15,    -1,   238,   239,    -1,   241,    -1,
      -1,    -1,    44,    -1,    -1,   248,    28,    -1,   251,   252,
      -1,    74,    -1,    76,    -1,    -1,    79,    80,    -1,    -1,
      -1,   130,    44,   164,    -1,    -1,    -1,   168,    -1,     3,
     171,     5,    -1,     7,     8,     9,    10,    11,   101,     3,
      -1,     5,   183,     7,     8,     9,   187,    -1,    -1,   190,
      -1,    -1,    -1,   194,   195,   164,     3,    -1,     5,   168,
       7,     8,     9,    10,    11,    -1,    -1,   130,    -1,    43,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,   187,    43,
      -1,    -1,   223,    41,    -1,   194,   195,    -1,    -1,   230,
     231,    -1,   233,   234,    -1,    -1,    43,   238,   239,    -1,
     241,   164,    -1,    -1,    -1,   168,    64,   248,    -1,    -1,
     251,   252,    -1,    -1,   223,    41,    74,    -1,    76,   228,
     183,    79,    80,    -1,   187,   234,    -1,   236,    -1,    -1,
      41,   194,   195,    -1,    -1,    -1,    -1,    -1,    -1,   248,
      -1,    -1,   251,   252,    -1,    -1,    -1,    -1,    74,    -1,
      76,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,
     223,    -1,    -1,    74,    -1,    76,    -1,   230,    79,    80,
      -1,   234,   130,    -1,     3,   238,     5,    -1,     7,     8,
       9,    10,    11,    -1,    -1,   248,    -1,    -1,   251,   252,
       3,    -1,     5,    -1,     7,     8,     9,    10,    11,    -1,
      29,    -1,    -1,    -1,   130,    -1,   164,    -1,    -1,    -1,
     168,    -1,    -1,    -1,    43,    44,    29,    -1,     3,   130,
       5,    -1,     7,     8,     9,   183,    -1,    -1,    -1,   187,
      43,    44,    -1,    -1,    -1,    -1,   194,   195,   164,    -1,
      -1,     3,   168,     5,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,   164,    -1,    -1,    -1,   183,    43,    -1,
      -1,   187,    -1,    -1,    -1,   223,    -1,    29,   194,   195,
      -1,    -1,   183,    -1,    -1,    -1,   234,    -1,    -1,    -1,
      -1,    43,    -1,   194,   195,    -1,    -1,    -1,    -1,    -1,
     248,    -1,    -1,   251,   252,    -1,    -1,   223,     3,    -1,
       5,    -1,     7,     8,     9,    10,    11,    -1,   234,    -1,
      -1,     3,   223,     5,    -1,     7,     8,     9,    10,    11,
      -1,    -1,   248,   234,    29,   251,   252,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,   248,    43,    -1,
     251,   252,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    43,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,     3,    -1,
       5,    -1,     7,     8,     9,    10,    11,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,
      35,    36,    37,    38,    29,    -1,    41,    42,    43,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    43,     3,
      -1,     5,    -1,     7,     8,     9,    10,    11,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    38,    29,    -1,    41,    42,    43,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    43,
       3,    -1,     5,    -1,     7,     8,     9,    10,    11,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    37,    38,    29,    -1,    41,    42,
      43,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      43,     3,    -1,     5,    -1,     7,     8,     9,    10,    11,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    38,    29,    -1,    41,
      42,    43,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    43,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    37,    38,    29,    -1,
      41,    42,    43,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    43,     3,    -1,     5,    -1,     7,     8,     9,
      10,    11,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    43,     3,    -1,     5,    -1,     7,     8,
       9,    10,    11,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    43,     3,    -1,     5,    -1,     7,
       8,     9,    10,    11,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    43,     3,    -1,     5,    -1,
       7,     8,     9,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    23,    24,
      25,    28,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    44,    43,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    -1,    43,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    44,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    27,    28,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    43,    44,
      -1,    -1,    28,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    43,    44,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    10,    11,    -1,    28,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    40,    -1,
      -1,    28,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    44,    10,    11,
      -1,    28,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    40,    -1,    -1,    28,    44,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    44,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    44,    -1,    -1,
      28,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    44,    -1,    -1,    28,
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
      11,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    44,    -1,    -1,    28,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    40,
      10,    11,    28,    44,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    39,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    39,    -1,    -1,    -1,
      43,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    10,    11,    -1,    28,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    39,    10,    11,
      -1,    28,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    39,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    46,    47,    48,    49,    50,    51,    52,     3,
       0,    48,    39,    43,     4,    44,    51,    53,    54,     3,
      41,    55,    44,    54,     3,     5,     7,     8,     9,    10,
      11,    23,    24,    25,    29,    33,    34,    35,    36,    37,
      38,    43,    49,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    75,    77,    78,    79,    81,    82,    83,    85,
      86,    55,    22,    27,    43,     3,    43,    43,    43,    43,
      43,     3,    68,    86,     3,    70,    42,    57,     3,    39,
      14,    15,    28,    76,    77,    16,    17,    18,    19,    20,
      21,    80,    82,    85,    12,    13,    84,    30,     3,    68,
      44,    70,    87,    39,    70,    69,    70,     3,     6,    70,
      74,    74,    39,    44,    78,    81,    83,    85,     3,    39,
      40,    44,    44,    39,    39,    44,    44,    44,    39,    70,
      57,    70,    70,    39,    39,    39,    31,    39,    39,    57,
       3,    69,    69,    44,    44,    57,    57,     4,    41,    51,
       5,     7,     8,     9,    43,    71,    75,    77,    78,    79,
      81,    82,    83,    85,    86,     3,    10,    11,     3,     5,
       7,     8,     9,    43,    71,    75,    77,    78,    79,    81,
      82,    83,    85,    86,    43,    43,    29,     3,    25,    33,
      34,    35,    36,    37,    38,    41,    49,    51,    55,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      72,    73,    86,    27,     3,    56,    39,    70,    76,    77,
      80,    82,    85,    84,    43,    70,    76,    77,    80,    82,
      85,    84,    44,    87,    44,    87,    22,     3,    43,    43,
      43,    43,    43,    68,    56,    39,     3,    39,    30,     3,
      68,    69,    70,    42,    44,    29,    78,    81,    83,    85,
      44,    87,    44,    29,    78,    81,    83,    85,    44,    44,
       3,    39,    70,    69,    70,     3,    74,    74,    39,    42,
       3,    44,    39,    44,    39,    39,    44,    44,    44,    39,
      57,    70,    70,    39,    39,    39,    31,    39,    39,    57,
      69,    69,    44,    44,    57,    57
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
       1,     5,     5,     5,     1,     1,     3,     1,     1,     1,
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
#line 63 "guillex.y"
                        {
        abstractSyntaxTree = (yyvsp[0].node);
    }
#line 2688 "guillex.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 69 "guillex.y"
                                    {}
#line 2694 "guillex.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 70 "guillex.y"
                      {}
#line 2700 "guillex.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 74 "guillex.y"
                       {}
#line 2706 "guillex.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 75 "guillex.y"
                       {}
#line 2712 "guillex.tab.c"
    break;

  case 7: /* varDeclaration: simpleVarDeclaration SEMIC  */
#line 79 "guillex.y"
                               {}
#line 2718 "guillex.tab.c"
    break;

  case 8: /* funcDeclaration: simpleFuncDeclaration PARENL params PARENR compoundStmt  */
#line 83 "guillex.y"
                                                            {}
#line 2724 "guillex.tab.c"
    break;

  case 9: /* funcDeclaration: simpleFuncDeclaration PARENL PARENR compoundStmt  */
#line 84 "guillex.y"
                                                     {}
#line 2730 "guillex.tab.c"
    break;

  case 10: /* simpleVarDeclaration: TYPE ID  */
#line 88 "guillex.y"
            {
      addSymbol(symbolIdCounter, (yyvsp[0].str), "var", (yyvsp[-1].str));
      symbolIdCounter++;
      }
#line 2739 "guillex.tab.c"
    break;

  case 11: /* simpleFuncDeclaration: TYPE ID  */
#line 95 "guillex.y"
            {
      addSymbol(symbolIdCounter, (yyvsp[0].str), "func", (yyvsp[-1].str));
      symbolIdCounter++;
      }
#line 2748 "guillex.tab.c"
    break;

  case 12: /* params: params param  */
#line 102 "guillex.y"
                 {}
#line 2754 "guillex.tab.c"
    break;

  case 13: /* params: param  */
#line 103 "guillex.y"
          {}
#line 2760 "guillex.tab.c"
    break;

  case 14: /* param: simpleVarDeclaration  */
#line 107 "guillex.y"
                         {}
#line 2766 "guillex.tab.c"
    break;

  case 15: /* compoundStmt: STFUNC stmtList ENDFUNC  */
#line 111 "guillex.y"
                            {}
#line 2772 "guillex.tab.c"
    break;

  case 16: /* stmtList: stmtList primitiveStmt  */
#line 115 "guillex.y"
                              {}
#line 2778 "guillex.tab.c"
    break;

  case 17: /* stmtList: primitiveStmt  */
#line 116 "guillex.y"
                  {}
#line 2784 "guillex.tab.c"
    break;

  case 18: /* primitiveStmt: exprStmt  */
#line 120 "guillex.y"
             {}
#line 2790 "guillex.tab.c"
    break;

  case 19: /* primitiveStmt: compoundStmt  */
#line 121 "guillex.y"
                 {}
#line 2796 "guillex.tab.c"
    break;

  case 20: /* primitiveStmt: condStmt  */
#line 122 "guillex.y"
             {}
#line 2802 "guillex.tab.c"
    break;

  case 21: /* primitiveStmt: iterStmt  */
#line 123 "guillex.y"
             {}
#line 2808 "guillex.tab.c"
    break;

  case 22: /* primitiveStmt: returnStmt  */
#line 124 "guillex.y"
               {}
#line 2814 "guillex.tab.c"
    break;

  case 23: /* primitiveStmt: listStmt  */
#line 125 "guillex.y"
             {}
#line 2820 "guillex.tab.c"
    break;

  case 24: /* primitiveStmt: inOp  */
#line 126 "guillex.y"
         {}
#line 2826 "guillex.tab.c"
    break;

  case 25: /* primitiveStmt: outOp  */
#line 127 "guillex.y"
          {}
#line 2832 "guillex.tab.c"
    break;

  case 26: /* primitiveStmt: varDeclaration  */
#line 128 "guillex.y"
                   {}
#line 2838 "guillex.tab.c"
    break;

  case 27: /* exprStmt: expression SEMIC  */
#line 132 "guillex.y"
                     {}
#line 2844 "guillex.tab.c"
    break;

  case 28: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt  */
#line 136 "guillex.y"
                                                        {}
#line 2850 "guillex.tab.c"
    break;

  case 29: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt ELSE primitiveStmt  */
#line 137 "guillex.y"
                                                                {}
#line 2856 "guillex.tab.c"
    break;

  case 30: /* iterStmt: FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 141 "guillex.y"
                                                                              {}
#line 2862 "guillex.tab.c"
    break;

  case 31: /* iterStmt: FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 142 "guillex.y"
                                                                              {}
#line 2868 "guillex.tab.c"
    break;

  case 32: /* returnStmt: RETURN expression SEMIC  */
#line 146 "guillex.y"
                            {}
#line 2874 "guillex.tab.c"
    break;

  case 33: /* listStmt: appendOps  */
#line 150 "guillex.y"
              {}
#line 2880 "guillex.tab.c"
    break;

  case 34: /* listStmt: returnListOps  */
#line 151 "guillex.y"
                  {}
#line 2886 "guillex.tab.c"
    break;

  case 35: /* listStmt: destroyHeadOps  */
#line 152 "guillex.y"
                   {}
#line 2892 "guillex.tab.c"
    break;

  case 36: /* listStmt: mapFilterOps  */
#line 153 "guillex.y"
                 {}
#line 2898 "guillex.tab.c"
    break;

  case 37: /* appendOps: ID APPEND ID SEMIC  */
#line 157 "guillex.y"
                       {}
#line 2904 "guillex.tab.c"
    break;

  case 38: /* returnListOps: returnListOp ID  */
#line 161 "guillex.y"
                    {}
#line 2910 "guillex.tab.c"
    break;

  case 39: /* returnListOp: HEADLIST  */
#line 165 "guillex.y"
             {}
#line 2916 "guillex.tab.c"
    break;

  case 40: /* returnListOp: TAILLIST  */
#line 166 "guillex.y"
             {}
#line 2922 "guillex.tab.c"
    break;

  case 41: /* destroyHeadOps: DESTROYHEAD ID SEMIC  */
#line 170 "guillex.y"
                         {}
#line 2928 "guillex.tab.c"
    break;

  case 42: /* mapFilterOps: fCall MAP ID SEMIC  */
#line 174 "guillex.y"
                       {}
#line 2934 "guillex.tab.c"
    break;

  case 43: /* expression: assignExp  */
#line 178 "guillex.y"
              {}
#line 2940 "guillex.tab.c"
    break;

  case 44: /* expression: simpleExp  */
#line 179 "guillex.y"
              {}
#line 2946 "guillex.tab.c"
    break;

  case 45: /* assignExp: ID ASSIGN expression  */
#line 183 "guillex.y"
                         {}
#line 2952 "guillex.tab.c"
    break;

  case 46: /* simpleExp: binLogicalExp  */
#line 188 "guillex.y"
                  {}
#line 2958 "guillex.tab.c"
    break;

  case 47: /* constOp: INTEGER  */
#line 192 "guillex.y"
            {}
#line 2964 "guillex.tab.c"
    break;

  case 48: /* constOp: DECIMAL  */
#line 193 "guillex.y"
            {}
#line 2970 "guillex.tab.c"
    break;

  case 49: /* constOp: LIST  */
#line 194 "guillex.y"
         {}
#line 2976 "guillex.tab.c"
    break;

  case 50: /* constOp: NIL  */
#line 195 "guillex.y"
        {}
#line 2982 "guillex.tab.c"
    break;

  case 51: /* inOp: READ PARENL ID PARENR SEMIC  */
#line 199 "guillex.y"
                             {}
#line 2988 "guillex.tab.c"
    break;

  case 52: /* outOp: WRITE PARENL outConst PARENR SEMIC  */
#line 203 "guillex.y"
                                      {}
#line 2994 "guillex.tab.c"
    break;

  case 53: /* outOp: WRITELN PARENL outConst PARENR SEMIC  */
#line 204 "guillex.y"
                                         {}
#line 3000 "guillex.tab.c"
    break;

  case 54: /* outConst: STRING  */
#line 208 "guillex.y"
           {}
#line 3006 "guillex.tab.c"
    break;

  case 55: /* outConst: simpleExp  */
#line 209 "guillex.y"
              {}
#line 3012 "guillex.tab.c"
    break;

  case 56: /* binLogicalExp: binLogicalExp binLogicalOp unLogicalOp  */
#line 213 "guillex.y"
                                          {}
#line 3018 "guillex.tab.c"
    break;

  case 57: /* binLogicalExp: unLogicalExp  */
#line 214 "guillex.y"
                 {}
#line 3024 "guillex.tab.c"
    break;

  case 58: /* binLogicalOp: OR  */
#line 218 "guillex.y"
       {}
#line 3030 "guillex.tab.c"
    break;

  case 59: /* binLogicalOp: AND  */
#line 219 "guillex.y"
        {}
#line 3036 "guillex.tab.c"
    break;

  case 60: /* binLogicalOp: NEG  */
#line 220 "guillex.y"
        {}
#line 3042 "guillex.tab.c"
    break;

  case 61: /* unLogicalExp: unLogicalOp unLogicalExp  */
#line 224 "guillex.y"
                             {}
#line 3048 "guillex.tab.c"
    break;

  case 63: /* unLogicalOp: NOT  */
#line 229 "guillex.y"
        {}
#line 3054 "guillex.tab.c"
    break;

  case 64: /* relationalExp: relationalExp relationalOp sumExp  */
#line 233 "guillex.y"
                                      {}
#line 3060 "guillex.tab.c"
    break;

  case 65: /* relationalExp: sumExp  */
#line 234 "guillex.y"
           {}
#line 3066 "guillex.tab.c"
    break;

  case 66: /* relationalOp: SMALLER  */
#line 239 "guillex.y"
            {}
#line 3072 "guillex.tab.c"
    break;

  case 67: /* relationalOp: GREATER  */
#line 240 "guillex.y"
            {}
#line 3078 "guillex.tab.c"
    break;

  case 68: /* relationalOp: SMALLEQ  */
#line 241 "guillex.y"
            {}
#line 3084 "guillex.tab.c"
    break;

  case 69: /* relationalOp: GREATEQ  */
#line 242 "guillex.y"
            {}
#line 3090 "guillex.tab.c"
    break;

  case 70: /* relationalOp: EQUALS  */
#line 243 "guillex.y"
           {}
#line 3096 "guillex.tab.c"
    break;

  case 71: /* relationalOp: DIFFERENT  */
#line 244 "guillex.y"
              {}
#line 3102 "guillex.tab.c"
    break;

  case 72: /* sumExp: sumExp sumOp mulExp  */
#line 248 "guillex.y"
                        {}
#line 3108 "guillex.tab.c"
    break;

  case 73: /* sumExp: mulExp  */
#line 249 "guillex.y"
           {}
#line 3114 "guillex.tab.c"
    break;

  case 74: /* sumOp: ADD  */
#line 253 "guillex.y"
        {}
#line 3120 "guillex.tab.c"
    break;

  case 75: /* sumOp: SUB  */
#line 254 "guillex.y"
        {}
#line 3126 "guillex.tab.c"
    break;

  case 76: /* mulExp: mulExp mulOp factor  */
#line 258 "guillex.y"
                        {}
#line 3132 "guillex.tab.c"
    break;

  case 77: /* mulExp: factor  */
#line 259 "guillex.y"
           {}
#line 3138 "guillex.tab.c"
    break;

  case 78: /* mulExp: sumOp factor  */
#line 260 "guillex.y"
                 {}
#line 3144 "guillex.tab.c"
    break;

  case 79: /* mulOp: MULT  */
#line 264 "guillex.y"
         {}
#line 3150 "guillex.tab.c"
    break;

  case 80: /* mulOp: DIV  */
#line 265 "guillex.y"
        {}
#line 3156 "guillex.tab.c"
    break;

  case 81: /* factor: ID  */
#line 269 "guillex.y"
       {}
#line 3162 "guillex.tab.c"
    break;

  case 82: /* factor: fCall  */
#line 270 "guillex.y"
          {}
#line 3168 "guillex.tab.c"
    break;

  case 83: /* factor: PARENL simpleExp PARENR  */
#line 271 "guillex.y"
                            {}
#line 3174 "guillex.tab.c"
    break;

  case 84: /* factor: constOp  */
#line 272 "guillex.y"
            {}
#line 3180 "guillex.tab.c"
    break;

  case 85: /* fCall: ID PARENL callParams PARENR  */
#line 276 "guillex.y"
                                 {}
#line 3186 "guillex.tab.c"
    break;

  case 86: /* fCall: ID PARENL PARENR  */
#line 277 "guillex.y"
                     {}
#line 3192 "guillex.tab.c"
    break;

  case 87: /* callParams: callParams COMMA simpleExp  */
#line 281 "guillex.y"
                               {}
#line 3198 "guillex.tab.c"
    break;

  case 88: /* callParams: simpleExp  */
#line 282 "guillex.y"
              {}
#line 3204 "guillex.tab.c"
    break;


#line 3208 "guillex.tab.c"

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

#line 287 "guillex.y"


void yyerror(const char* msg) {
  printf("%s\n", msg);
  errors++;
}

int main(int argc, char *argv[]) {
  printf("testing tree\n");
  Node *tree;

  tree = createNode("value", 'I');
  tree = addNodeLeft("value", 'S', tree);
  tree -> left = addNodeLeft("value", 'I', tree -> left);
  tree -> left = addNodeMiddle("value", 'T', tree -> left);
  tree -> left = addNodeRight("value", 'C', tree -> left);
  printTree(tree);


  printf("\n\n#### beginning ####\n\n");
  FILE *file;
  file = fopen(argv[1], "r");
  if(argc > 1){
    if(file){
      yyin = file;
      yyparse();
      printf("----------------------symbols--------------------\n");
      printSymbols();
      freeSymbols();
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
