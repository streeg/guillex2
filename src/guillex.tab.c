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
void yyerror(const char* text);
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
  YYSYMBOL_params = 52,                    /* params  */
  YYSYMBOL_param = 53,                     /* param  */
  YYSYMBOL_compoundStmt = 54,              /* compoundStmt  */
  YYSYMBOL_stmtList = 55,                  /* stmtList  */
  YYSYMBOL_primitiveStmt = 56,             /* primitiveStmt  */
  YYSYMBOL_exprStmt = 57,                  /* exprStmt  */
  YYSYMBOL_condStmt = 58,                  /* condStmt  */
  YYSYMBOL_iterStmt = 59,                  /* iterStmt  */
  YYSYMBOL_returnStmt = 60,                /* returnStmt  */
  YYSYMBOL_listStmt = 61,                  /* listStmt  */
  YYSYMBOL_appendOps = 62,                 /* appendOps  */
  YYSYMBOL_returnListOps = 63,             /* returnListOps  */
  YYSYMBOL_returnListOp = 64,              /* returnListOp  */
  YYSYMBOL_destroyHeadOps = 65,            /* destroyHeadOps  */
  YYSYMBOL_mapFilterOps = 66,              /* mapFilterOps  */
  YYSYMBOL_expression = 67,                /* expression  */
  YYSYMBOL_assignExp = 68,                 /* assignExp  */
  YYSYMBOL_simpleExp = 69,                 /* simpleExp  */
  YYSYMBOL_constOp = 70,                   /* constOp  */
  YYSYMBOL_inOp = 71,                      /* inOp  */
  YYSYMBOL_outOp = 72,                     /* outOp  */
  YYSYMBOL_outConst = 73,                  /* outConst  */
  YYSYMBOL_binLogicalExp = 74,             /* binLogicalExp  */
  YYSYMBOL_binLogicalOp = 75,              /* binLogicalOp  */
  YYSYMBOL_unLogicalExp = 76,              /* unLogicalExp  */
  YYSYMBOL_unLogicalOp = 77,               /* unLogicalOp  */
  YYSYMBOL_relationalExp = 78,             /* relationalExp  */
  YYSYMBOL_relationalOp = 79,              /* relationalOp  */
  YYSYMBOL_sumExp = 80,                    /* sumExp  */
  YYSYMBOL_sumOp = 81,                     /* sumOp  */
  YYSYMBOL_mulExp = 82,                    /* mulExp  */
  YYSYMBOL_mulOp = 83,                     /* mulOp  */
  YYSYMBOL_factor = 84,                    /* factor  */
  YYSYMBOL_fCall = 85,                     /* fCall  */
  YYSYMBOL_callParams = 86                 /* callParams  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5022

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  315

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
       0,    63,    63,    69,    72,    78,    81,    87,    92,    97,
     104,   112,   115,   121,   125,   129,   130,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   146,   150,   151,   155,
     156,   160,   164,   165,   166,   167,   171,   175,   179,   180,
     184,   188,   192,   193,   197,   202,   206,   207,   208,   209,
     213,   217,   218,   222,   223,   227,   228,   232,   233,   234,
     238,   239,   243,   247,   248,   253,   254,   255,   256,   257,
     258,   262,   263,   267,   268,   272,   273,   274,   278,   279,
     283,   284,   285,   286,   290,   291,   295,   296
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
  "varDeclaration", "funcDeclaration", "simpleVarDeclaration", "params",
  "param", "compoundStmt", "stmtList", "primitiveStmt", "exprStmt",
  "condStmt", "iterStmt", "returnStmt", "listStmt", "appendOps",
  "returnListOps", "returnListOp", "destroyHeadOps", "mapFilterOps",
  "expression", "assignExp", "simpleExp", "constOp", "inOp", "outOp",
  "outConst", "binLogicalExp", "binLogicalOp", "unLogicalExp",
  "unLogicalOp", "relationalExp", "relationalOp", "sumExp", "sumOp",
  "mulExp", "mulOp", "factor", "fCall", "callParams", YY_NULLPTR
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

#define YYPACT_NINF (-177)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,    10,    19,    52,    84,    87,   107,   -19,   134,  -177,
     183,   200,    17,    40,   -13,    18,    22,    25,    26,  3320,
     201,   -13,    32,  4290,  4563,  4593,  4623,  4653,    42,   361,
      51,    64,    69,    89,   -12,    12,    58,    59,    65,   870,
     911,   805,  2049,  2090,  2131,  2172,  2213,  2254,  2295,  2336,
    2377,  2418,    72,  2459,  2500,    74,    90,    91,  4683,  2541,
    2582,   501,   558,   952,  4239,  4968,   430,  4713,  4743,  4443,
     255,    79,   870,    30,    96,   911,   870,   138,   385,   385,
    4358,   105,  4773,  3449,   110,   283,  2623,  2664,  2705,    94,
     122,   135,   137,   568,   552,  1075,  1116,  1157,  1198,  1239,
    1280,  1280,  4803,   534,   712,   430,   146,   124,   136,  4473,
     246,   256,  2746,   158,   141,   143,   159,   166,   167,   172,
     175,  2787,  4833,   609,  4983,  4863,  4893,   151,  2828,   993,
    4503,  3361,   952,   952,   185,   187,   202,  2869,   292,   860,
     213,   221,  2910,  2951,  2992,  3320,   259,   259,  3033,   238,
     226,   234,  3320,  3320,  3074,  3115,   285,  3320,   250,  3958,
    3977,  3996,  4015,   911,  4034,   125,   233,   911,  3318,  3518,
     779,  4053,  4072,  4091,  4392,  1321,  1362,  3395,  3468,  3503,
    3538,  3573,   911,  3608,    75,   128,   993,  4408,  4224,  1485,
    3643,  3678,  3713,   117,   481,   613,  4324,   288,   260,   261,
     275,   280,   286,   870,  3320,   901,   291,   942,   983,  1024,
    1065,  1106,  1147,  1188,  1229,   349,  1270,  1311,   314,  1352,
    1393,  4533,  1034,   322,  3156,  3197,   321,   338,   265,  1403,
    1403,  4110,   779,   700,   328,   344,   206,  1444,  1444,  3748,
    1485,  4923,   297,  4129,   298,   373,   341,   911,   870,   378,
     385,   385,   343,  3238,  1434,  1475,  1516,   380,  3430,   340,
     345,   353,  3279,  4148,   392,   504,  3553,  4167,  4186,  3783,
     303,  3818,   435,   454,  4255,  3853,  3888,  4953,  4205,   362,
    1557,   365,   366,   377,   375,   383,   390,  1598,  1639,   402,
    3923,  1680,  3361,   952,   952,   403,   413,   415,  1721,  1762,
     417,   419,  1803,  1844,  1885,  3361,   259,   259,  1926,   418,
     421,  3361,  3361,  1967,  2008
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -177,  -177,  -177,   456,     2,  -177,     0,  -177,   405,   -10,
    -151,   -36,  -116,   -99,   -48,    14,    16,    28,    39,    43,
      66,   106,   -38,   -67,   152,   424,   118,   120,   -65,   611,
    -142,   603,   506,   193,  -122,   530,   284,   -15,  -163,   382,
       5,  -176
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    41,     6,   158,    16,    17,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,   119,    61,
      92,    62,    63,    64,   100,    65,    66,    67,   105,    68,
     173,   111
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    81,     5,     7,    20,     5,   224,    86,   232,   114,
       1,    70,    15,     8,   120,   208,    15,   242,   244,     9,
      11,    13,   -13,   227,    69,   171,    13,   240,    19,   -12,
     -10,    75,   209,   177,   108,   178,   -11,   179,   180,   181,
      28,    29,   235,    18,    82,   -73,   229,   -73,    69,   -73,
     -73,   -73,    -2,   253,   -38,    76,     1,   270,   190,    33,
     171,    14,   -13,   171,   171,   237,    21,   -39,    82,   -12,
     -10,    82,    74,   182,   109,    87,   -11,    82,   192,   150,
     151,    82,   107,   210,    -4,   -73,   125,    -5,    -4,    89,
      90,    -5,   -62,   218,   -62,   139,   -62,   -62,   -62,   -62,
     -62,    77,    78,    91,   232,    82,    82,    -6,    79,   148,
      82,    -6,   240,    88,   190,   -45,   154,   155,   -62,   -45,
     177,   207,   178,   -57,   179,   180,   181,    28,    29,   -42,
     -43,   206,   -62,   205,   192,   112,   221,    82,    82,    89,
      90,   116,   -56,   -56,   121,   211,    33,   212,   171,   127,
      69,   -58,   171,    91,   122,   260,   -56,    69,    69,   213,
     182,   241,    69,   128,   -59,   252,   195,   171,   -56,   -45,
     214,   190,   -56,   -10,   215,   -44,   208,    12,   190,   190,
     132,   282,   133,    -3,   259,   285,   286,    -3,    86,   208,
     137,   192,    84,   209,   192,   208,   208,   216,   192,   192,
      -7,    -9,   131,   134,    -7,    -9,   209,   171,    82,    69,
     -53,   -54,   209,   209,   171,   267,   135,    86,   190,   136,
     -60,   -60,   190,   275,   142,   110,   143,   113,   115,    69,
     118,   118,   171,   168,   -60,   171,   171,   217,   192,   309,
     310,   144,   192,   192,   210,   192,   -60,   -56,   -56,   219,
     -60,   220,   146,    82,   218,    -8,   299,   210,    69,    -8,
     147,   -56,   149,   210,   210,   222,   187,   218,   168,   308,
     152,   168,   168,   218,   218,   313,   314,   -56,   153,   -60,
     -60,   138,   207,   -14,   140,   141,   -87,   -14,   223,   225,
     -87,   246,   206,   -60,   205,   207,   129,   221,    82,    82,
     130,   207,   207,   247,   248,   206,   211,   205,   212,   -60,
     221,   206,   206,   205,   205,   226,   221,   221,   249,   211,
     213,   212,   187,   250,   170,   211,   211,   212,   212,   251,
     254,   214,   -86,   213,   234,   215,   -86,   129,   129,   213,
     213,   277,   278,   129,   214,   110,   110,   290,   215,   101,
     214,   214,   255,   256,   215,   215,   168,   189,   216,   170,
     168,   -10,   170,   170,   -74,   263,   -74,   264,   -74,   -74,
     -74,   216,   271,   272,   261,   168,   279,   216,   216,   187,
     280,   284,   287,   289,   -44,   110,   187,   187,    83,   -42,
     159,   117,   160,   161,   162,    28,    29,   -43,   217,   281,
     283,   291,   118,   118,   -74,   293,   -62,   -62,   101,   292,
     219,   217,   220,   189,    33,   168,   294,   217,   217,   295,
     -62,    22,   172,   219,     0,   220,   187,   296,   163,   219,
     219,   220,   220,   174,   297,    24,   -62,    25,    26,    27,
     168,   298,   302,   168,   168,   300,   301,   170,   102,   -62,
     -62,   170,   303,   230,   304,   191,   306,   172,   307,    10,
     172,   172,   311,   -62,   164,   312,   170,     0,   -55,   -55,
     189,     0,   238,    40,     0,   -62,     0,   189,   189,   -62,
       0,     0,   -55,     0,   177,     0,   178,   126,   179,   180,
     181,    28,    29,     0,   -55,     0,     0,   183,   -55,   164,
       0,     0,   164,   164,     0,     0,   170,     0,     0,     0,
      33,   191,     0,   170,   170,    89,    90,   189,   -55,   -55,
       0,   189,   189,     0,   182,   243,     0,     0,     0,    91,
       0,   170,   -55,     0,   170,   170,     0,   -78,     0,   -78,
     -45,   -78,   -78,   -78,     0,   172,   167,     0,   -55,   172,
     230,     0,   231,   183,     0,   -65,     0,   -65,   238,   -65,
     -65,   -65,   -65,   -65,   172,     0,     0,     0,   191,     0,
     169,   239,   -56,   -56,     0,   191,   191,   -78,     0,   186,
       0,   167,   -60,   -60,   167,   167,   -56,   164,     0,     0,
       0,   164,     0,     0,   164,   -65,   -60,   -56,   123,     0,
       0,     0,     0,   188,   172,   169,   164,   -60,   169,   169,
     183,   172,   172,   183,   268,   191,     0,   183,   183,   191,
     191,     0,   276,   -55,   -55,     0,     0,   -62,   -62,   172,
     124,     0,   172,   172,     0,   186,     0,   -55,     0,     0,
       0,   -62,     0,   166,     0,     0,   164,     0,   -55,     0,
       0,   165,   -62,   164,   164,     0,   164,   183,     0,   188,
       0,   183,   183,     0,   183,     0,    93,     0,     0,   167,
       0,   164,     0,   167,   164,   164,   185,     0,   166,     0,
       0,   166,   166,     0,   184,     0,   165,     0,   167,   165,
     165,     0,   186,   169,     0,     0,     0,   169,     0,   186,
     186,     0,     0,   177,     0,   178,     0,   179,   180,   181,
      28,    29,   169,     0,     0,   -79,   188,   -79,     0,   -79,
     -79,   -79,     0,   188,   188,     0,     0,     0,   167,    33,
       0,     0,   185,   265,     0,     0,     0,     0,     0,   186,
     184,   273,     0,   182,   269,     0,     0,     0,     0,     0,
       0,     0,   169,   167,     0,   -79,   167,   167,     0,   266,
       0,     0,     0,   188,     0,     0,   166,   274,     0,     0,
     228,     0,     0,     0,   165,     0,     0,   169,     0,     0,
     169,   169,    83,     0,   159,   166,   160,   161,   162,   236,
       0,     0,     0,   165,     0,     0,   185,   185,     0,     0,
       0,     0,     0,     0,   184,   184,     0,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,
       0,     0,   163,     0,     0,   166,     0,     0,   -25,   -25,
     -25,     0,     0,   165,   -25,     0,   185,     0,   -25,   -25,
     -25,   -25,   -25,   -25,   184,     0,   -25,   -25,   -25,     0,
     166,     0,     0,   166,   166,     0,     0,     0,   165,     0,
       0,   165,   165,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,     0,    80,     0,    24,     0,    25,    26,    27,
      28,    29,     0,   -27,   -27,   -27,     0,     0,     0,   -27,
       0,   145,     0,   -27,   -27,   -27,   -27,   -27,   -27,    33,
       0,   -27,   -27,   -27,   -25,   -25,   -25,     0,   -25,   -25,
     -25,   -25,   -25,    40,    83,     0,   159,     0,   160,   161,
     162,    28,    29,     0,   -25,   -25,   -25,     0,     0,     0,
     -25,     0,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,
      33,     0,   -25,   -25,   -25,   -18,   -18,   -18,     0,   -18,
     -18,   -18,   -18,   -18,   163,   174,     0,    24,     0,    25,
      26,    27,    28,    29,     0,   -18,   -18,   -18,     0,     0,
       0,   -18,     0,   -18,     0,   -18,   -18,   -18,   -18,   -18,
     -18,    33,     0,   -18,   -18,   -18,   -17,   -17,   -17,     0,
     -17,   -17,   -17,   -17,   -17,    40,   177,     0,   178,     0,
     179,   180,   181,    28,    29,     0,   -17,   -17,   -17,     0,
       0,     0,   -17,     0,   -17,     0,   -17,   -17,   -17,   -17,
     -17,   -17,    33,     0,   -17,   -17,   -17,   -19,   -19,   -19,
       0,   -19,   -19,   -19,   -19,   -19,   182,   258,     0,   159,
       0,   160,   161,   162,    28,    29,     0,   -19,   -19,   -19,
       0,     0,     0,   -19,     0,   -19,     0,   -19,   -19,   -19,
     -19,   -19,   -19,    33,     0,   -19,   -19,   -19,   -20,   -20,
     -20,     0,   -20,   -20,   -20,   -20,   -20,   163,   -66,     0,
     -66,     0,   -66,   -66,   -66,   -66,   -66,     0,   -20,   -20,
     -20,     0,     0,     0,   -20,     0,   -20,     0,   -20,   -20,
     -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,   -21,
     -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -66,   -67,
       0,   -67,     0,   -67,   -67,   -67,   -67,   -67,     0,   -21,
     -21,   -21,     0,     0,     0,   -21,     0,   -21,     0,   -21,
     -21,   -21,   -21,   -21,   -21,     0,     0,   -21,   -21,   -21,
     -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -67,
     -68,     0,   -68,     0,   -68,   -68,   -68,   -68,   -68,     0,
     -22,   -22,   -22,     0,     0,     0,   -22,     0,   -22,     0,
     -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,   -22,
     -22,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -68,   -69,     0,   -69,     0,   -69,   -69,   -69,   -69,   -69,
       0,   -32,   -32,   -32,     0,     0,     0,   -32,     0,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,
     -32,   -32,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -69,   -70,     0,   -70,     0,   -70,   -70,   -70,   -70,
     -70,     0,   -33,   -33,   -33,     0,     0,     0,   -33,     0,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
     -33,   -33,   -33,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,   -70,   174,     0,    24,     0,    25,    26,    27,
      28,    29,     0,   -34,   -34,   -34,     0,     0,     0,   -34,
       0,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,
       0,   -34,   -34,   -34,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,    40,   -73,     0,   -73,     0,   -73,   -73,
     -73,   -73,   -73,     0,   -35,   -35,   -35,     0,     0,     0,
     -35,     0,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,   -35,   -35,   -35,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   -23,   -23,   -73,   -74,     0,   -74,     0,   -74,
     -74,   -74,   -74,   -74,     0,   -23,   -23,   -23,     0,     0,
       0,   -23,     0,   -23,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,     0,   -23,   -23,   -23,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -74,    83,     0,   159,     0,
     160,   161,   162,    28,    29,     0,   -24,   -24,   -24,     0,
       0,     0,   -24,     0,   -24,     0,   -24,   -24,   -24,   -24,
     -24,   -24,     0,     0,   -24,   -24,   -24,    -7,    -7,    -7,
       0,    -7,    -7,    -7,    -7,    -7,   163,   177,     0,   178,
       0,   179,   180,   181,    28,    29,     0,    -7,    -7,    -7,
       0,     0,     0,    -7,     0,    -7,     0,    -7,    -7,    -7,
      -7,    -7,    -7,     0,     0,    -7,    -7,    -7,   -37,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -37,   182,   177,     0,
     178,     0,   179,   180,   181,     0,     0,     0,   -37,   -37,
     -37,     0,     0,     0,   -37,     0,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,     0,   -37,   -37,   -37,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   182,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -26,
     -26,   -26,     0,     0,     0,   -26,     0,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -26,     0,     0,   -26,   -26,   -26,
     -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,     0,     0,     0,   -40,     0,   -40,     0,
     -40,   -40,   -40,   -40,   -40,   -40,     0,     0,   -40,   -40,
     -40,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -31,   -31,   -31,     0,     0,     0,   -31,     0,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,
     -31,   -31,   -14,   -14,   -14,     0,   -14,   -14,   -14,   -14,
     -14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -14,   -14,   -14,     0,     0,     0,   -14,     0,
     -14,     0,   -14,   -14,   -14,   -14,   -14,   -14,     0,     0,
     -14,   -14,   -14,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -36,   -36,   -36,     0,     0,     0,   -36,
       0,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,   -36,   -36,   -36,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -41,   -41,   -41,     0,     0,     0,
     -41,     0,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,   -41,   -41,   -41,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,   -27,   -27,     0,     0,
       0,   -27,     0,   305,     0,   -27,   -27,   -27,   -27,   -27,
     -27,     0,     0,   -27,   -27,   -27,   -50,   -50,   -50,     0,
     -50,   -50,   -50,   -50,   -50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -50,   -50,   -50,     0,
       0,     0,   -50,     0,   -50,     0,   -50,   -50,   -50,   -50,
     -50,   -50,     0,     0,   -50,   -50,   -50,   -51,   -51,   -51,
       0,   -51,   -51,   -51,   -51,   -51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -51,   -51,   -51,
       0,     0,     0,   -51,     0,   -51,     0,   -51,   -51,   -51,
     -51,   -51,   -51,     0,     0,   -51,   -51,   -51,   -52,   -52,
     -52,     0,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -52,   -52,
     -52,     0,     0,     0,   -52,     0,   -52,     0,   -52,   -52,
     -52,   -52,   -52,   -52,     0,     0,   -52,   -52,   -52,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -28,
     -28,   -28,     0,     0,     0,   -28,     0,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -29,   -29,   -29,     0,     0,     0,   -29,     0,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,
     -29,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -30,   -30,   -30,     0,     0,     0,   -30,     0,   -30,
       0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,
     -18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -18,   -18,   -18,     0,     0,     0,   -18,     0,
       0,     0,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,
     -18,   -18,   -18,    23,   156,    24,     0,    25,    26,    27,
      28,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,     0,     0,     0,    33,
       0,     0,     0,    34,    35,    36,    37,    38,    39,     0,
       0,   157,    85,    40,   -16,   -16,   -16,     0,   -16,   -16,
     -16,   -16,   -16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -16,   -16,   -16,     0,     0,     0,
     -16,     0,     0,     0,   -16,   -16,   -16,   -16,   -16,   -16,
       0,     0,   -16,   -16,   -16,   -17,   -17,   -17,     0,   -17,
     -17,   -17,   -17,   -17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -17,   -17,   -17,     0,     0,
       0,   -17,     0,     0,     0,   -17,   -17,   -17,   -17,   -17,
     -17,     0,     0,   -17,   -17,   -17,   -19,   -19,   -19,     0,
     -19,   -19,   -19,   -19,   -19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -19,   -19,   -19,     0,
       0,     0,   -19,     0,     0,     0,   -19,   -19,   -19,   -19,
     -19,   -19,     0,     0,   -19,   -19,   -19,   -20,   -20,   -20,
       0,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -20,   -20,   -20,
       0,     0,     0,   -20,     0,     0,     0,   -20,   -20,   -20,
     -20,   -20,   -20,     0,     0,   -20,   -20,   -20,   -21,   -21,
     -21,     0,   -21,   -21,   -21,   -21,   -21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -21,   -21,
     -21,     0,     0,     0,   -21,     0,     0,     0,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,   -21,   -21,   -21,   -22,
     -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -22,
     -22,   -22,     0,     0,     0,   -22,     0,     0,     0,   -22,
     -22,   -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -22,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,   -32,   -32,     0,     0,     0,   -32,     0,     0,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,
     -32,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -33,   -33,   -33,     0,     0,     0,   -33,     0,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,
     -33,   -33,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -34,   -34,   -34,     0,     0,     0,   -34,     0,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,
     -34,   -34,   -34,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -35,   -35,   -35,     0,     0,     0,   -35,
       0,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -23,   -23,   -23,     0,     0,     0,
     -23,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,   -23,   -23,   -23,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -24,   -24,   -24,     0,     0,
       0,   -24,     0,     0,     0,   -24,   -24,   -24,   -24,   -24,
     -24,     0,     0,   -24,   -24,   -24,   -15,   -15,   -15,     0,
     -15,   -15,   -15,   -15,   -15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -15,   -15,   -15,     0,
       0,     0,   -15,     0,     0,     0,   -15,   -15,   -15,   -15,
     -15,   -15,     0,     0,   -15,   -15,   -15,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,   -37,
       0,     0,     0,   -37,     0,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,   -37,   -37,   -37,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -26,   -26,
     -26,     0,     0,     0,   -26,     0,     0,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,   -26,   -26,   -26,   -40,
     -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -40,
     -40,   -40,     0,     0,     0,   -40,     0,     0,     0,   -40,
     -40,   -40,   -40,   -40,   -40,     0,     0,   -40,   -40,   -40,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -31,   -31,   -31,     0,     0,     0,   -31,     0,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,   -31,
     -31,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -36,   -36,   -36,     0,     0,     0,   -36,     0,     0,
       0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,   -36,
     -36,   -36,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,
     -41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -41,   -41,   -41,     0,     0,     0,   -41,     0,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
     -41,   -41,   -41,   -50,   -50,   -50,     0,   -50,   -50,   -50,
     -50,   -50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -50,   -50,   -50,     0,     0,     0,   -50,
       0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,     0,
       0,   -50,   -50,   -50,   -51,   -51,   -51,     0,   -51,   -51,
     -51,   -51,   -51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -51,   -51,   -51,     0,     0,     0,
     -51,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,
       0,     0,   -51,   -51,   -51,   -52,   -52,   -52,     0,   -52,
     -52,   -52,   -52,   -52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -52,   -52,   -52,     0,     0,
       0,   -52,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,
     -52,     0,     0,   -52,   -52,   -52,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -28,   -28,   -28,     0,
       0,     0,   -28,     0,     0,     0,   -28,   -28,   -28,   -28,
     -28,   -28,     0,     0,   -28,   -28,   -28,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -29,   -29,   -29,
       0,     0,     0,   -29,     0,     0,     0,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,   -29,   -29,   -29,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -30,   -30,
     -30,     0,     0,     0,   -30,     0,     0,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,     0,   -30,   -30,   -30,    23,
     156,    24,     0,    25,    26,    27,    28,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
      31,    32,     0,     0,     0,    33,     0,     0,     0,    34,
      35,    36,    37,    38,    39,     0,     0,   157,   262,    40,
      -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -7,    -7,    -7,     0,     0,     0,    -7,     0,     0,     0,
      -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,    -7,
      -7,    23,   156,    24,     0,    25,    26,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,     0,     0,     0,    33,     0,     0,
       0,    34,    35,    36,    37,    38,    39,     0,     0,   157,
     288,    40,   -14,   -14,   -14,     0,   -14,   -14,   -14,   -14,
     -14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -14,   -14,   -14,     0,     0,     0,   -14,     0,
       0,     0,   -14,   -14,   -14,   -14,   -14,   -14,     0,     0,
     -14,   -14,   -14,    23,   156,    24,     0,    25,    26,    27,
      28,    29,   -61,   -61,    94,    95,    96,    97,    98,    99,
       0,     0,     0,    30,    31,    32,   -61,     0,     0,    33,
       0,     0,     0,    34,    35,    36,    37,    38,    39,     0,
       0,   157,   -61,    40,   196,   156,    24,     0,    25,    26,
      27,    28,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,    31,   197,     0,     0,     0,
      33,     0,     0,     0,   198,   199,   200,   201,   202,   203,
       0,     0,   204,     0,    40,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,   -80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -80,     0,     0,   233,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,   222,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,   194,   -80,     0,     0,   -80,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,     0,   194,   -80,     0,     0,   -48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -48,     0,
       0,     0,   -48,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,     0,     0,   175,   176,
       0,   -49,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,     0,   -49,     0,     0,   -64,   -49,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
       0,     0,   -64,   175,   176,     0,   -46,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,     0,   -46,     0,
       0,   -63,   -46,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,     0,     0,   -63,     0,     0,
       0,   -47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -47,     0,     0,     0,   -47,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,     0,     0,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,     0,
       0,     0,   -83,   -72,   -72,   103,   104,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,
       0,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -72,     0,     0,     0,   -72,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,   -76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -76,     0,
       0,     0,   -76,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
       0,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,     0,     0,     0,   -81,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,     0,     0,     0,   -77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -77,     0,
       0,     0,   -77,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -85,     0,     0,     0,   -85,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -82,     0,
       0,     0,   -82,   -71,   -71,   103,   104,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -71,     0,     0,     0,   -71,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,   -75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -75,     0,
       0,     0,   -75,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,
       0,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -84,     0,     0,     0,   -84,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,     0,     0,     0,     0,     0,   -48,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,
       0,     0,   -48,     0,     0,   -49,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,
       0,   -49,     0,     0,   -46,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,
     -46,     0,     0,   -47,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,   -47,
       0,     0,   -83,   -72,   -72,   103,   104,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,   -83,     0,
       0,   -72,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,   -72,     0,     0,
     -76,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,   -76,     0,     0,   -81,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,   -81,     0,     0,   -77,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,   -77,     0,     0,   -85,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,   -85,     0,     0,   -82,   -71,   -71,   103,
     104,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,   -82,     0,     0,   -71,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,   -71,     0,     0,   -75,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
     -75,     0,     0,   -84,   175,   176,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,   -84,
       0,     0,   -64,   -61,   -61,    94,    95,    96,    97,    98,
      99,     0,     0,     0,   -64,   175,   176,   -61,   -64,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,   -61,     0,
       0,     0,     0,   -63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -63,     0,     0,     0,   -63,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,    71,     0,     0,     0,     0,    72,   -80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -80,
       0,     0,     0,    73,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   245,     0,     0,     0,
       0,    72,   -80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -80,     0,     0,     0,    73,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,    72,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,     0,     0,
       0,   193,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
     -80,     0,   -61,   -61,    94,    95,    96,    97,    98,    99,
       0,   -80,     0,     0,     0,   193,   -61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -61,     0,
       0,     0,   -61,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
       0,   -81,     0,   106,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,   -85,     0,   -85,     0,     0,     0,     0,     0,     0,
       0,     0,   -85,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,
       0,   -84,     0,   -84,     0,     0,     0,     0,     0,     0,
       0,     0,   -84,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
       0,   -81,     0,   257,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,     0,
       0,   -48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -48,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,     0,     0,     0,     0,
       0,   -49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -49,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,     0,     0,     0,     0,     0,
       0,   -46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -46,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,     0,     0,     0,     0,     0,
       0,   -47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -47,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,
       0,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,   -72,   -72,   103,   104,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,
       0,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -72,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,
       0,   -76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -76,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
       0,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,
       0,   -77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
       0,   -82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -71,   -71,   103,   104,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -71,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,
       0,   -75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -75,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -85,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,   175,   176,
       0,   -84,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,   -84,   175,   176,     0,   -64,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,   -64,     0,     0,
       0,   -63,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -63
};

static const yytype_int16 yycheck[] =
{
       0,    39,     0,     3,    14,     3,   157,    43,   171,    76,
       4,    21,    12,     3,    79,   131,    16,   193,   194,     0,
      39,     4,     4,   165,    19,    40,     4,   190,    41,     4,
       4,    43,   131,     3,    72,     5,     4,     7,     8,     9,
      10,    11,   184,     3,    39,     3,   168,     5,    43,     7,
       8,     9,     0,   204,     3,    43,     4,   233,    73,    29,
      75,    44,    44,    78,    79,   187,    44,     3,    63,    44,
      44,    66,     3,    43,    44,     3,    44,    72,    73,   146,
     147,    76,     3,   131,     0,    43,   101,     0,     4,    14,
      15,     4,     3,   131,     5,   131,     7,     8,     9,    10,
      11,    43,    43,    28,   267,   100,   101,     0,    43,   145,
     105,     4,   275,    39,   129,    40,   152,   153,    29,    44,
       3,   131,     5,    29,     7,     8,     9,    10,    11,    39,
      39,   131,    43,   131,   129,    39,   131,   132,   133,    14,
      15,     3,    14,    15,    39,   131,    29,   131,   163,     3,
     145,    29,   167,    28,    44,   222,    28,   152,   153,   131,
      43,    44,   157,    39,    29,   203,    29,   182,    40,    44,
     131,   186,    44,    39,   131,    39,   292,    43,   193,   194,
      39,   248,    39,     0,   222,   250,   251,     4,   224,   305,
      39,   186,    40,   292,   189,   311,   312,   131,   193,   194,
       0,     0,    44,    44,     4,     4,   305,   222,   203,   204,
      44,    44,   311,   312,   229,   230,    44,   253,   233,    44,
      14,    15,   237,   238,    39,    73,    39,    75,    76,   224,
      78,    79,   247,    40,    28,   250,   251,   131,   233,   306,
     307,    39,   237,   238,   292,   240,    40,    14,    15,   131,
      44,   131,    39,   248,   292,     0,   292,   305,   253,     4,
      39,    28,     3,   311,   312,    27,    73,   305,    75,   305,
      44,    78,    79,   311,   312,   311,   312,    44,    44,    14,
      15,   129,   292,     0,   132,   133,    40,     4,     3,    39,
      44,     3,   292,    28,   292,   305,    40,   292,   293,   294,
      44,   311,   312,    43,    43,   305,   292,   305,   292,    44,
     305,   311,   312,   311,   312,   163,   311,   312,    43,   305,
     292,   305,   129,    43,    40,   311,   312,   311,   312,    43,
      39,   292,    40,   305,   182,   292,    44,    40,    40,   311,
     312,    44,    44,    40,   305,   193,   194,    44,   305,    65,
     311,   312,     3,    39,   311,   312,   163,    73,   292,    75,
     167,    39,    78,    79,     3,    44,     5,    29,     7,     8,
       9,   305,    44,    29,   222,   182,     3,   311,   312,   186,
      39,     3,    39,     3,    44,   233,   193,   194,     3,    44,
       5,     6,     7,     8,     9,    10,    11,    44,   292,   247,
     248,    39,   250,   251,    43,    39,    14,    15,   124,    44,
     292,   305,   292,   129,    29,   222,    39,   311,   312,    44,
      28,    16,    40,   305,    -1,   305,   233,    44,    43,   311,
     312,   311,   312,     3,    44,     5,    44,     7,     8,     9,
     247,    39,    39,   250,   251,   293,   294,   163,    66,    14,
      15,   167,    39,   169,    39,    73,    39,    75,    39,     3,
      78,    79,    44,    28,    40,    44,   182,    -1,    14,    15,
     186,    -1,   188,    43,    -1,    40,    -1,   193,   194,    44,
      -1,    -1,    28,    -1,     3,    -1,     5,   105,     7,     8,
       9,    10,    11,    -1,    40,    -1,    -1,    73,    44,    75,
      -1,    -1,    78,    79,    -1,    -1,   222,    -1,    -1,    -1,
      29,   129,    -1,   229,   230,    14,    15,   233,    14,    15,
      -1,   237,   238,    -1,    43,    44,    -1,    -1,    -1,    28,
      -1,   247,    28,    -1,   250,   251,    -1,     3,    -1,     5,
      39,     7,     8,     9,    -1,   163,    40,    -1,    44,   167,
     266,    -1,   170,   129,    -1,     3,    -1,     5,   274,     7,
       8,     9,    10,    11,   182,    -1,    -1,    -1,   186,    -1,
      40,   189,    14,    15,    -1,   193,   194,    43,    -1,    73,
      -1,    75,    14,    15,    78,    79,    28,   163,    -1,    -1,
      -1,   167,    -1,    -1,   170,    43,    28,    39,    92,    -1,
      -1,    -1,    -1,    73,   222,    75,   182,    39,    78,    79,
     186,   229,   230,   189,   232,   233,    -1,   193,   194,   237,
     238,    -1,   240,    14,    15,    -1,    -1,    14,    15,   247,
     100,    -1,   250,   251,    -1,   129,    -1,    28,    -1,    -1,
      -1,    28,    -1,    40,    -1,    -1,   222,    -1,    39,    -1,
      -1,    40,    39,   229,   230,    -1,   232,   233,    -1,   129,
      -1,   237,   238,    -1,   240,    -1,    63,    -1,    -1,   163,
      -1,   247,    -1,   167,   250,   251,    73,    -1,    75,    -1,
      -1,    78,    79,    -1,    73,    -1,    75,    -1,   182,    78,
      79,    -1,   186,   163,    -1,    -1,    -1,   167,    -1,   193,
     194,    -1,    -1,     3,    -1,     5,    -1,     7,     8,     9,
      10,    11,   182,    -1,    -1,     3,   186,     5,    -1,     7,
       8,     9,    -1,   193,   194,    -1,    -1,    -1,   222,    29,
      -1,    -1,   129,   227,    -1,    -1,    -1,    -1,    -1,   233,
     129,   235,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   222,   247,    -1,    43,   250,   251,    -1,   229,
      -1,    -1,    -1,   233,    -1,    -1,   163,   237,    -1,    -1,
     167,    -1,    -1,    -1,   163,    -1,    -1,   247,    -1,    -1,
     250,   251,     3,    -1,     5,   182,     7,     8,     9,   186,
      -1,    -1,    -1,   182,    -1,    -1,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,   193,   194,    -1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,   222,    -1,    -1,    23,    24,
      25,    -1,    -1,   222,    29,    -1,   233,    -1,    33,    34,
      35,    36,    37,    38,   233,    -1,    41,    42,    43,    -1,
     247,    -1,    -1,   250,   251,    -1,    -1,    -1,   247,    -1,
      -1,   250,   251,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,     3,    -1,     5,    -1,     7,     8,     9,
      10,    11,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    38,    29,
      -1,    41,    42,    43,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    43,     3,    -1,     5,    -1,     7,     8,
       9,    10,    11,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    38,
      29,    -1,    41,    42,    43,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    43,     3,    -1,     5,    -1,     7,
       8,     9,    10,    11,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      38,    29,    -1,    41,    42,    43,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    43,     3,    -1,     5,    -1,
       7,     8,     9,    10,    11,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    38,    29,    -1,    41,    42,    43,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    43,     3,    -1,     5,
      -1,     7,     8,     9,    10,    11,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    38,    29,    -1,    41,    42,    43,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    43,     3,    -1,
       5,    -1,     7,     8,     9,    10,    11,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    43,     3,
      -1,     5,    -1,     7,     8,     9,    10,    11,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    43,
       3,    -1,     5,    -1,     7,     8,     9,    10,    11,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      43,     3,    -1,     5,    -1,     7,     8,     9,    10,    11,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    43,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    37,    38,    -1,    -1,
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
       7,     8,     9,    10,    11,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    43,     3,    -1,     5,
      -1,     7,     8,     9,    10,    11,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    43,     3,    -1,
       5,    -1,     7,     8,     9,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    43,    -1,
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
      10,    11,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    23,    24,    25,    28,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    44,    43,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    -1,    43,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    44,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    43,    44,    -1,    -1,    28,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    43,    44,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    10,    11,
      -1,    28,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    40,    -1,    -1,    28,    44,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    44,    10,    11,    -1,    28,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    40,    -1,
      -1,    28,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    44,    -1,    -1,
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
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    10,    11,    12,
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
      -1,    -1,    -1,    44,    -1,    -1,    28,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    44,    -1,    -1,    28,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    44,    -1,    -1,    28,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      44,    -1,    -1,    28,    10,    11,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    44,
      -1,    -1,    28,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    40,    10,    11,    28,    44,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    39,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    39,    -1,    -1,    -1,    43,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    10,    11,
      -1,    28,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    39,    10,    11,    -1,    28,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    39,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    46,    47,    48,    49,    50,    51,     3,     0,
      48,    39,    43,     4,    44,    51,    52,    53,     3,    41,
      54,    44,    53,     3,     5,     7,     8,     9,    10,    11,
      23,    24,    25,    29,    33,    34,    35,    36,    37,    38,
      43,    49,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    74,    76,    77,    78,    80,    81,    82,    84,    85,
      54,    22,    27,    43,     3,    43,    43,    43,    43,    43,
       3,    67,    85,     3,    69,    42,    56,     3,    39,    14,
      15,    28,    75,    76,    16,    17,    18,    19,    20,    21,
      79,    81,    84,    12,    13,    83,    30,     3,    67,    44,
      69,    86,    39,    69,    68,    69,     3,     6,    69,    73,
      73,    39,    44,    77,    80,    82,    84,     3,    39,    40,
      44,    44,    39,    39,    44,    44,    44,    39,    69,    56,
      69,    69,    39,    39,    39,    31,    39,    39,    56,     3,
      68,    68,    44,    44,    56,    56,     4,    41,    51,     5,
       7,     8,     9,    43,    70,    74,    76,    77,    78,    80,
      81,    82,    84,    85,     3,    10,    11,     3,     5,     7,
       8,     9,    43,    70,    74,    76,    77,    78,    80,    81,
      82,    84,    85,    43,    43,    29,     3,    25,    33,    34,
      35,    36,    37,    38,    41,    49,    51,    54,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    71,
      72,    85,    27,     3,    55,    39,    69,    75,    76,    79,
      81,    84,    83,    43,    69,    75,    76,    79,    81,    84,
      83,    44,    86,    44,    86,    22,     3,    43,    43,    43,
      43,    43,    67,    55,    39,     3,    39,    30,     3,    67,
      68,    69,    42,    44,    29,    77,    80,    82,    84,    44,
      86,    44,    29,    77,    80,    82,    84,    44,    44,     3,
      39,    69,    68,    69,     3,    73,    73,    39,    42,     3,
      44,    39,    44,    39,    39,    44,    44,    44,    39,    56,
      69,    69,    39,    39,    39,    31,    39,    39,    56,    68,
      68,    44,    44,    56,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    49,    50,    50,
      51,    52,    52,    53,    54,    55,    55,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    57,    58,    58,    59,
      59,    60,    61,    61,    61,    61,    62,    63,    64,    64,
      65,    66,    67,    67,    68,    69,    70,    70,    70,    70,
      71,    72,    72,    73,    73,    74,    74,    75,    75,    75,
      76,    76,    77,    78,    78,    79,    79,    79,    79,    79,
      79,    80,    80,    81,    81,    82,    82,    82,    83,    83,
      84,    84,    84,    84,    85,    85,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     6,     5,
       2,     2,     1,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     5,     7,     9,
       9,     3,     1,     1,     1,     1,     4,     2,     1,     1,
       3,     4,     1,     1,     3,     1,     1,     1,     1,     1,
       5,     5,     5,     1,     1,     3,     1,     1,     1,     1,
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
#line 63 "guillex.y"
                        {
        abstractSyntaxTree = (yyval.treeNode);
    }
#line 2671 "guillex.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 69 "guillex.y"
                                    {
       (yyval.treeNode) = createNode2("declarations_list declaration", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
     }
#line 2679 "guillex.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 72 "guillex.y"
                      {
    (yyval.treeNode) = createNode1("declaration", (yyvsp[0].treeNode));
  }
#line 2687 "guillex.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 78 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("var_dec", (yyvsp[0].treeNode));
    }
#line 2695 "guillex.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 81 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("func_dec", (yyvsp[0].treeNode));
    }
#line 2703 "guillex.tab.c"
    break;

  case 7: /* varDeclaration: simpleVarDeclaration SEMIC  */
#line 87 "guillex.y"
                               {
      (yyval.treeNode) = createNode1("var_dec", (yyvsp[-1].treeNode));}
#line 2710 "guillex.tab.c"
    break;

  case 8: /* funcDeclaration: TYPE ID PARENL params PARENR compoundStmt  */
#line 92 "guillex.y"
                                              {
      addSymbol(symbolIdCounter, (yyvsp[-4].str), "func", (yyvsp[-5].str));
      symbolIdCounter++;
      (yyval.treeNode) = createNode4("TYPE ID PARENL params PARENR compoundStmt", createNode0((yyvsp[-5].str)), createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
  }
#line 2720 "guillex.tab.c"
    break;

  case 9: /* funcDeclaration: TYPE ID PARENL PARENR compoundStmt  */
#line 97 "guillex.y"
                                       {
    symbolIdCounter++;
    (yyval.treeNode) = createNode3("TYPE ID PARENL PARENR compoundStmt", createNode0((yyvsp[-4].str)), createNode0((yyvsp[-3].str)), (yyvsp[0].treeNode));                                                                       
  }
#line 2729 "guillex.tab.c"
    break;

  case 10: /* simpleVarDeclaration: TYPE ID  */
#line 104 "guillex.y"
            {
      addSymbol(symbolIdCounter, (yyvsp[0].str), "var", (yyvsp[-1].str));
      symbolIdCounter++;
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      }
#line 2739 "guillex.tab.c"
    break;

  case 11: /* params: params param  */
#line 112 "guillex.y"
                 {
      (yyval.treeNode) = createNode2("params param", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
      }
#line 2747 "guillex.tab.c"
    break;

  case 12: /* params: param  */
#line 115 "guillex.y"
          { 
    (yyval.treeNode) = createNode1("param", (yyvsp[0].treeNode)); 
    }
#line 2755 "guillex.tab.c"
    break;

  case 13: /* param: simpleVarDeclaration  */
#line 121 "guillex.y"
                         {}
#line 2761 "guillex.tab.c"
    break;

  case 14: /* compoundStmt: STFUNC stmtList ENDFUNC  */
#line 125 "guillex.y"
                            {}
#line 2767 "guillex.tab.c"
    break;

  case 15: /* stmtList: stmtList primitiveStmt  */
#line 129 "guillex.y"
                              {}
#line 2773 "guillex.tab.c"
    break;

  case 16: /* stmtList: primitiveStmt  */
#line 130 "guillex.y"
                  {}
#line 2779 "guillex.tab.c"
    break;

  case 17: /* primitiveStmt: exprStmt  */
#line 134 "guillex.y"
             {}
#line 2785 "guillex.tab.c"
    break;

  case 18: /* primitiveStmt: compoundStmt  */
#line 135 "guillex.y"
                 {}
#line 2791 "guillex.tab.c"
    break;

  case 19: /* primitiveStmt: condStmt  */
#line 136 "guillex.y"
             {}
#line 2797 "guillex.tab.c"
    break;

  case 20: /* primitiveStmt: iterStmt  */
#line 137 "guillex.y"
             {}
#line 2803 "guillex.tab.c"
    break;

  case 21: /* primitiveStmt: returnStmt  */
#line 138 "guillex.y"
               {}
#line 2809 "guillex.tab.c"
    break;

  case 22: /* primitiveStmt: listStmt  */
#line 139 "guillex.y"
             {}
#line 2815 "guillex.tab.c"
    break;

  case 23: /* primitiveStmt: inOp  */
#line 140 "guillex.y"
         {}
#line 2821 "guillex.tab.c"
    break;

  case 24: /* primitiveStmt: outOp  */
#line 141 "guillex.y"
          {}
#line 2827 "guillex.tab.c"
    break;

  case 25: /* primitiveStmt: varDeclaration  */
#line 142 "guillex.y"
                   {}
#line 2833 "guillex.tab.c"
    break;

  case 26: /* exprStmt: expression SEMIC  */
#line 146 "guillex.y"
                     {}
#line 2839 "guillex.tab.c"
    break;

  case 27: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt  */
#line 150 "guillex.y"
                                                        {}
#line 2845 "guillex.tab.c"
    break;

  case 28: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt ELSE primitiveStmt  */
#line 151 "guillex.y"
                                                                {}
#line 2851 "guillex.tab.c"
    break;

  case 29: /* iterStmt: FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 155 "guillex.y"
                                                                              {}
#line 2857 "guillex.tab.c"
    break;

  case 30: /* iterStmt: FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 156 "guillex.y"
                                                                              {}
#line 2863 "guillex.tab.c"
    break;

  case 31: /* returnStmt: RETURN expression SEMIC  */
#line 160 "guillex.y"
                            {}
#line 2869 "guillex.tab.c"
    break;

  case 32: /* listStmt: appendOps  */
#line 164 "guillex.y"
              {}
#line 2875 "guillex.tab.c"
    break;

  case 33: /* listStmt: returnListOps  */
#line 165 "guillex.y"
                  {}
#line 2881 "guillex.tab.c"
    break;

  case 34: /* listStmt: destroyHeadOps  */
#line 166 "guillex.y"
                   {}
#line 2887 "guillex.tab.c"
    break;

  case 35: /* listStmt: mapFilterOps  */
#line 167 "guillex.y"
                 {}
#line 2893 "guillex.tab.c"
    break;

  case 36: /* appendOps: ID APPEND ID SEMIC  */
#line 171 "guillex.y"
                       {}
#line 2899 "guillex.tab.c"
    break;

  case 37: /* returnListOps: returnListOp ID  */
#line 175 "guillex.y"
                    {}
#line 2905 "guillex.tab.c"
    break;

  case 38: /* returnListOp: HEADLIST  */
#line 179 "guillex.y"
             {}
#line 2911 "guillex.tab.c"
    break;

  case 39: /* returnListOp: TAILLIST  */
#line 180 "guillex.y"
             {}
#line 2917 "guillex.tab.c"
    break;

  case 40: /* destroyHeadOps: DESTROYHEAD ID SEMIC  */
#line 184 "guillex.y"
                         {}
#line 2923 "guillex.tab.c"
    break;

  case 41: /* mapFilterOps: fCall MAP ID SEMIC  */
#line 188 "guillex.y"
                       {}
#line 2929 "guillex.tab.c"
    break;

  case 42: /* expression: assignExp  */
#line 192 "guillex.y"
              {}
#line 2935 "guillex.tab.c"
    break;

  case 43: /* expression: simpleExp  */
#line 193 "guillex.y"
              {}
#line 2941 "guillex.tab.c"
    break;

  case 44: /* assignExp: ID ASSIGN expression  */
#line 197 "guillex.y"
                         {}
#line 2947 "guillex.tab.c"
    break;

  case 45: /* simpleExp: binLogicalExp  */
#line 202 "guillex.y"
                  {}
#line 2953 "guillex.tab.c"
    break;

  case 46: /* constOp: INTEGER  */
#line 206 "guillex.y"
            {}
#line 2959 "guillex.tab.c"
    break;

  case 47: /* constOp: DECIMAL  */
#line 207 "guillex.y"
            {}
#line 2965 "guillex.tab.c"
    break;

  case 48: /* constOp: LIST  */
#line 208 "guillex.y"
         {}
#line 2971 "guillex.tab.c"
    break;

  case 49: /* constOp: NIL  */
#line 209 "guillex.y"
        {}
#line 2977 "guillex.tab.c"
    break;

  case 50: /* inOp: READ PARENL ID PARENR SEMIC  */
#line 213 "guillex.y"
                             {}
#line 2983 "guillex.tab.c"
    break;

  case 51: /* outOp: WRITE PARENL outConst PARENR SEMIC  */
#line 217 "guillex.y"
                                      {}
#line 2989 "guillex.tab.c"
    break;

  case 52: /* outOp: WRITELN PARENL outConst PARENR SEMIC  */
#line 218 "guillex.y"
                                         {}
#line 2995 "guillex.tab.c"
    break;

  case 53: /* outConst: STRING  */
#line 222 "guillex.y"
           {}
#line 3001 "guillex.tab.c"
    break;

  case 54: /* outConst: simpleExp  */
#line 223 "guillex.y"
              {}
#line 3007 "guillex.tab.c"
    break;

  case 55: /* binLogicalExp: binLogicalExp binLogicalOp unLogicalOp  */
#line 227 "guillex.y"
                                          {}
#line 3013 "guillex.tab.c"
    break;

  case 56: /* binLogicalExp: unLogicalExp  */
#line 228 "guillex.y"
                 {}
#line 3019 "guillex.tab.c"
    break;

  case 57: /* binLogicalOp: OR  */
#line 232 "guillex.y"
       {}
#line 3025 "guillex.tab.c"
    break;

  case 58: /* binLogicalOp: AND  */
#line 233 "guillex.y"
        {}
#line 3031 "guillex.tab.c"
    break;

  case 59: /* binLogicalOp: NEG  */
#line 234 "guillex.y"
        {}
#line 3037 "guillex.tab.c"
    break;

  case 60: /* unLogicalExp: unLogicalOp unLogicalExp  */
#line 238 "guillex.y"
                             {}
#line 3043 "guillex.tab.c"
    break;

  case 62: /* unLogicalOp: NOT  */
#line 243 "guillex.y"
        {}
#line 3049 "guillex.tab.c"
    break;

  case 63: /* relationalExp: relationalExp relationalOp sumExp  */
#line 247 "guillex.y"
                                      {}
#line 3055 "guillex.tab.c"
    break;

  case 64: /* relationalExp: sumExp  */
#line 248 "guillex.y"
           {}
#line 3061 "guillex.tab.c"
    break;

  case 65: /* relationalOp: SMALLER  */
#line 253 "guillex.y"
            {}
#line 3067 "guillex.tab.c"
    break;

  case 66: /* relationalOp: GREATER  */
#line 254 "guillex.y"
            {}
#line 3073 "guillex.tab.c"
    break;

  case 67: /* relationalOp: SMALLEQ  */
#line 255 "guillex.y"
            {}
#line 3079 "guillex.tab.c"
    break;

  case 68: /* relationalOp: GREATEQ  */
#line 256 "guillex.y"
            {}
#line 3085 "guillex.tab.c"
    break;

  case 69: /* relationalOp: EQUALS  */
#line 257 "guillex.y"
           {}
#line 3091 "guillex.tab.c"
    break;

  case 70: /* relationalOp: DIFFERENT  */
#line 258 "guillex.y"
              {}
#line 3097 "guillex.tab.c"
    break;

  case 71: /* sumExp: sumExp sumOp mulExp  */
#line 262 "guillex.y"
                        {}
#line 3103 "guillex.tab.c"
    break;

  case 72: /* sumExp: mulExp  */
#line 263 "guillex.y"
           {}
#line 3109 "guillex.tab.c"
    break;

  case 73: /* sumOp: ADD  */
#line 267 "guillex.y"
        {}
#line 3115 "guillex.tab.c"
    break;

  case 74: /* sumOp: SUB  */
#line 268 "guillex.y"
        {}
#line 3121 "guillex.tab.c"
    break;

  case 75: /* mulExp: mulExp mulOp factor  */
#line 272 "guillex.y"
                        {}
#line 3127 "guillex.tab.c"
    break;

  case 76: /* mulExp: factor  */
#line 273 "guillex.y"
           {}
#line 3133 "guillex.tab.c"
    break;

  case 77: /* mulExp: sumOp factor  */
#line 274 "guillex.y"
                 {}
#line 3139 "guillex.tab.c"
    break;

  case 78: /* mulOp: MULT  */
#line 278 "guillex.y"
         {}
#line 3145 "guillex.tab.c"
    break;

  case 79: /* mulOp: DIV  */
#line 279 "guillex.y"
        {}
#line 3151 "guillex.tab.c"
    break;

  case 80: /* factor: ID  */
#line 283 "guillex.y"
       {}
#line 3157 "guillex.tab.c"
    break;

  case 81: /* factor: fCall  */
#line 284 "guillex.y"
          {}
#line 3163 "guillex.tab.c"
    break;

  case 82: /* factor: PARENL simpleExp PARENR  */
#line 285 "guillex.y"
                            {}
#line 3169 "guillex.tab.c"
    break;

  case 83: /* factor: constOp  */
#line 286 "guillex.y"
            {}
#line 3175 "guillex.tab.c"
    break;

  case 84: /* fCall: ID PARENL callParams PARENR  */
#line 290 "guillex.y"
                                 {}
#line 3181 "guillex.tab.c"
    break;

  case 85: /* fCall: ID PARENL PARENR  */
#line 291 "guillex.y"
                     {}
#line 3187 "guillex.tab.c"
    break;

  case 86: /* callParams: callParams COMMA simpleExp  */
#line 295 "guillex.y"
                               {}
#line 3193 "guillex.tab.c"
    break;

  case 87: /* callParams: simpleExp  */
#line 296 "guillex.y"
              {}
#line 3199 "guillex.tab.c"
    break;


#line 3203 "guillex.tab.c"

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

#line 301 "guillex.y"


void yyerror(const char* msg) {
  printf("%s\n", msg);
  printf ("%s, linha: %d, coluna: %d\n", msg,line,wordPosition);
  errors++;
}

int main(int argc, char *argv[]) {

  printf("\n\n#### beginning ####\n\n");
  FILE *file;
  file = fopen(argv[1], "r");
  if(argc > 1){
    if(file){
      yyin = file;
      yyparse();
      printf("------------------------symbols---------------------\n");
      printSymbols();
      printf("-------------------------tree-----------------------\n");
      // printTree(abstractSyntaxTree);
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
