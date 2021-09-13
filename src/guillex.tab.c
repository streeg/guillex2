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
  YYSYMBOL_LISTTYPE = 5,                   /* LISTTYPE  */
  YYSYMBOL_LIST = 6,                       /* LIST  */
  YYSYMBOL_STRING = 7,                     /* STRING  */
  YYSYMBOL_NIL = 8,                        /* NIL  */
  YYSYMBOL_INTEGER = 9,                    /* INTEGER  */
  YYSYMBOL_DECIMAL = 10,                   /* DECIMAL  */
  YYSYMBOL_ADD = 11,                       /* ADD  */
  YYSYMBOL_SUB = 12,                       /* SUB  */
  YYSYMBOL_MULT = 13,                      /* MULT  */
  YYSYMBOL_DIV = 14,                       /* DIV  */
  YYSYMBOL_OR = 15,                        /* OR  */
  YYSYMBOL_AND = 16,                       /* AND  */
  YYSYMBOL_SMALLER = 17,                   /* SMALLER  */
  YYSYMBOL_GREATER = 18,                   /* GREATER  */
  YYSYMBOL_SMALLEQ = 19,                   /* SMALLEQ  */
  YYSYMBOL_GREATEQ = 20,                   /* GREATEQ  */
  YYSYMBOL_EQUALS = 21,                    /* EQUALS  */
  YYSYMBOL_DIFFERENT = 22,                 /* DIFFERENT  */
  YYSYMBOL_APPEND = 23,                    /* APPEND  */
  YYSYMBOL_HEADLIST = 24,                  /* HEADLIST  */
  YYSYMBOL_TAILLIST = 25,                  /* TAILLIST  */
  YYSYMBOL_DESTROYHEAD = 26,               /* DESTROYHEAD  */
  YYSYMBOL_FILTER = 27,                    /* FILTER  */
  YYSYMBOL_ASSIGN = 28,                    /* ASSIGN  */
  YYSYMBOL_NEG = 29,                       /* NEG  */
  YYSYMBOL_NOT = 30,                       /* NOT  */
  YYSYMBOL_MAP = 31,                       /* MAP  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_THEN = 33,                      /* THEN  */
  YYSYMBOL_IF = 34,                        /* IF  */
  YYSYMBOL_FOR = 35,                       /* FOR  */
  YYSYMBOL_READ = 36,                      /* READ  */
  YYSYMBOL_WRITE = 37,                     /* WRITE  */
  YYSYMBOL_WRITELN = 38,                   /* WRITELN  */
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
  YYSYMBOL_simpleVarDeclaration = 52,      /* simpleVarDeclaration  */
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
#define YYLAST   5104

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  319

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
       0,    63,    63,    69,    72,    78,    81,    87,    92,    97,
     104,   109,   116,   119,   125,   131,   137,   140,   146,   149,
     152,   155,   158,   161,   164,   167,   170,   176,   182,   185,
     191,   194,   200,   206,   209,   212,   215,   221,   227,   233,
     236,   242,   248,   254,   257,   263,   270,   276,   279,   282,
     285,   291,   297,   300,   306,   309,   315,   318,   325,   328,
     331,   338,   341,   347,   353,   356,   363,   366,   369,   372,
     375,   378,   384,   387,   393,   396,   402,   405,   408,   414,
     417,   423,   426,   429,   432,   438,   441,   447,   450
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
  "LISTTYPE", "LIST", "STRING", "NIL", "INTEGER", "DECIMAL", "ADD", "SUB",
  "MULT", "DIV", "OR", "AND", "SMALLER", "GREATER", "SMALLEQ", "GREATEQ",
  "EQUALS", "DIFFERENT", "APPEND", "HEADLIST", "TAILLIST", "DESTROYHEAD",
  "FILTER", "ASSIGN", "NEG", "NOT", "MAP", "ELSE", "THEN", "IF", "FOR",
  "READ", "WRITE", "WRITELN", "RETURN", "SEMIC", "COMMA", "STFUNC",
  "ENDFUNC", "PARENL", "PARENR", "$accept", "program", "declarationList",
  "declaration", "varDeclaration", "funcDeclaration",
  "simpleVarDeclaration", "params", "param", "compoundStmt", "stmtList",
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
       8,   126,    17,    62,   128,   147,   224,   -13,   118,    31,
    -169,   245,   246,    11,     1,   163,     5,    26,    32,    36,
      38,  3405,   276,     5,    55,  4371,  4644,  4674,  4704,  4734,
      76,   133,    47,    86,    92,   896,    54,    60,    61,    73,
      78,   938,   980,  2061,  2103,  2145,  2187,  2229,  2271,  2313,
    2355,  2397,  2439,  2481,   127,  2523,  2565,     4,    98,   106,
    4764,  2607,  2649,    23,   253,  1022,  4320,  5049,   151,  4794,
    4824,  4524,   319,   152,   938,    64,   138,   980,   938,   180,
     812,   812,  4439,   144,  4854,  3530,   145,   344,  2691,  2733,
    2775,   168,   171,   173,   174,   298,    13,   104,   204,   560,
     672,  1148,  1190,  1190,  4884,   438,   477,   151,   203,   181,
     186,  4554,   332,   365,  2817,   166,   189,   200,   210,   213,
     222,   229,   230,  2859,  4914,   374,  5064,  4944,  4974,   237,
    2901,  1064,  4584,  3442,  1022,  1022,   243,   257,   262,  2943,
     384,   843,   263,   268,  2985,  3027,  3069,  3405,   282,   282,
    3111,   301,   281,   289,  3405,  3405,  3153,  3195,   307,   170,
    3405,   296,  4039,  4058,  4077,  4096,   980,  4115,   275,   306,
     980,  3440,  3599,   520,  4134,  4153,  4172,  4473,  1232,  1274,
    3476,  3549,  3584,  3619,  3654,   980,  3689,   111,   576,  1064,
    4489,  4305,   600,  3724,  3759,  3794,   357,   756,   427,  4405,
     350,   317,   320,   326,   327,   334,   938,  3405,   885,   345,
     927,   969,  1011,  1053,  1095,  1137,  1179,  1221,   383,  1263,
    1305,   348,  1347,  1389,  4614,  1106,    56,   353,  3237,  3279,
     349,   385,   382,  1316,  1316,  4191,   520,   781,   371,   394,
     616,  1358,  1358,  3829,   600,  5004,   408,  4210,   418,   423,
     411,   980,   938,   429,   812,   812,   412,  3321,  1431,  1473,
    1515,   463,  3511,   425,   431,   434,  3363,  4229,   389,   392,
    3634,  4248,  4267,  3864,   419,  3899,   656,   658,  4336,  3934,
    3969,  5034,  4286,   441,  1557,   444,   452,   453,   449,   455,
     458,  1599,  1641,   457,  4004,  1683,  3442,  1022,  1022,   464,
     465,   470,  1725,  1767,   474,   475,  1809,  1851,  1893,  3442,
     282,   282,  1935,   466,   472,  3442,  3442,  1977,  2019
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -169,   515,     2,  -169,     0,  -169,   507,   -15,
    -154,    16,  -124,  -107,   -79,   -55,   -53,   -45,    41,    43,
      66,   124,   -37,   -58,   -32,   299,   159,   162,   -74,   611,
    -136,   548,   471,   558,   -84,   480,   158,   342,  -160,   265,
     -10,  -168
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    43,     6,   161,    18,    19,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,   121,    63,
      94,    64,    65,    66,   102,    67,    68,    69,   107,    70,
     176,   113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    22,     5,     7,    83,     5,   228,   122,    72,   211,
      86,    71,     1,    17,   236,    15,   -66,    10,    17,   -66,
     116,   -66,   -66,   -66,   -66,   -66,   212,    12,   246,   248,
     -14,    84,   231,   244,    14,    71,    15,   110,    91,    92,
     -13,   -11,   -10,   112,    90,   115,   117,    21,   120,   120,
     -39,   239,    93,   257,   213,    84,    16,   -66,    84,   -12,
     -11,    88,    -2,   -46,    84,   195,     1,   180,    84,   274,
     181,   -14,   182,   183,   184,    30,    31,    23,   214,   -74,
     215,   -13,   -74,   -10,   -74,   -74,   -74,   233,   216,   -40,
     152,   153,    84,    84,    35,    76,   221,    84,    77,   140,
     -12,   -11,   142,   143,    78,    79,   241,   -67,   185,   111,
     -67,   236,   -67,   -67,   -67,   -67,   -67,    80,   210,   244,
     -74,   195,    81,   224,    84,    84,    91,    92,    -4,     8,
      89,     9,    -4,   209,   230,   208,   -75,    71,   -43,   -75,
      93,   -75,   -75,   -75,    71,    71,   -44,    -5,   -67,   141,
      71,    -5,   -46,   238,   177,   109,   -46,    26,   -10,    27,
      28,    29,    13,   150,   112,   112,    20,   264,   158,   256,
     156,   157,   211,   227,   217,     9,   218,   -75,   114,   195,
     289,   290,   195,   118,   123,   211,   195,   195,   263,   212,
     124,   211,   211,   265,   286,    42,    84,    71,   -58,   219,
     173,   -59,   212,   -60,   198,   112,   129,   -68,   212,   212,
     -68,   133,   -68,   -68,   -68,   -68,   -68,   213,    71,   285,
     287,   130,   120,   120,    -6,   103,   -45,   195,    -6,   134,
     213,   195,   195,   192,   195,   173,   213,   213,   173,   173,
     135,   214,    84,   215,    88,    -3,    -7,    71,   -68,    -3,
      -7,   216,   313,   314,   214,   136,   215,   220,   -54,   221,
     214,   214,   215,   215,   216,   304,   305,   -55,   -57,   -57,
     216,   216,   221,    88,   137,   138,    -9,   139,   221,   221,
      -9,   210,   -57,   144,   103,   151,   224,    84,    84,   192,
      91,    92,   222,   -57,   210,   223,   209,   145,   208,   224,
     210,   210,   146,   148,    93,   224,   224,   175,   149,   209,
     226,   208,   303,   -61,   -61,   209,   209,   208,   208,    -8,
     -46,   -57,   -57,    -8,   173,   312,   154,   -61,   173,   225,
     234,   317,   318,   104,   155,   -57,   229,   217,   -61,   218,
     194,   167,   175,   173,   -15,   175,   175,   192,   -15,   242,
     217,   -57,   218,   250,   192,   192,   217,   217,   218,   218,
     180,   251,   219,   181,   252,   182,   183,   184,    30,    31,
     253,   254,   128,   -88,   186,   219,   167,   -88,   255,   167,
     167,   219,   219,   173,   174,   258,   259,    35,   260,   -56,
     -56,   173,   173,   -10,   267,   192,   194,   -61,   -61,   192,
     192,   185,   245,   -56,   -63,   -63,   131,   -56,   -56,   173,
     132,   -61,   173,   173,   -56,   268,   275,   193,   -63,   174,
     220,   -56,   174,   174,   276,   -87,   283,   -61,   234,   -87,
     186,   175,   288,   220,   -63,   175,   242,   -56,   235,   220,
     220,   -79,   -63,   -63,   -79,   127,   -79,   -79,   -79,   131,
     175,   284,   291,   281,   194,   222,   -63,   243,   223,   131,
     131,   194,   194,   282,   294,   167,   293,   -63,   222,   167,
     -45,   223,   167,   193,   222,   222,   -43,   223,   223,   -44,
     -80,   295,   -79,   -80,   167,   -80,   -80,   -80,   186,   296,
     175,   186,   297,   298,   299,   186,   186,   302,   175,   175,
     300,   272,   194,   301,   306,   307,   194,   194,   174,   280,
     308,   315,   174,   170,   310,   311,   175,   316,    11,   175,
     175,   -80,   172,    85,   167,    24,   162,   174,   163,   164,
     165,   193,   167,   167,     0,   167,   186,     0,   193,   193,
     186,   186,     0,   186,     0,     0,   189,     0,   170,     0,
     167,   170,   170,   167,   167,   191,     0,   172,     0,     0,
     172,   172,     0,   -69,   166,   125,   -69,   174,   -69,   -69,
     -69,   -69,   -69,     0,     0,   174,   271,     0,     0,   193,
       0,     0,   126,   193,   279,     0,     0,     0,     0,     0,
     169,   -57,   -57,   174,     0,     0,   174,   174,     0,     0,
     171,     0,   189,   180,   -69,   -57,   181,     0,   182,   183,
     184,   191,     0,    95,     0,     0,     0,   -57,     0,     0,
       0,   -57,     0,   188,     0,   169,     0,     0,   169,   169,
       0,   -61,   -61,   190,     0,   171,     0,   170,   171,   171,
       0,   170,     0,     0,   185,   -61,   172,     0,     0,     0,
     172,     0,     0,   168,     0,     0,   170,   -61,     0,     0,
     189,   -61,     0,     0,     0,   172,     0,   189,   189,   191,
       0,   -63,   -63,   -56,   -56,   -70,   191,   191,   -70,   188,
     -70,   -70,   -70,   -70,   -70,   -63,   187,   -56,   168,   190,
       0,   168,   168,     0,     0,     0,   170,   -63,     0,   -56,
       0,   -63,   269,   -56,     0,   172,     0,     0,   189,     0,
     277,     0,     0,   270,   169,     0,   -70,   191,   232,     0,
       0,   278,   170,     0,   171,   170,   170,     0,   171,     0,
       0,   172,     0,   169,   172,   172,     0,   240,     0,     0,
       0,     0,   187,   171,   188,   188,     0,   190,     0,     0,
       0,     0,     0,     0,   190,   190,     0,     0,     0,   180,
       0,     0,   181,     0,   182,   183,   184,    30,    31,     0,
       0,     0,     0,   169,     0,     0,     0,   168,     0,     0,
       0,     0,     0,   171,   180,   188,    35,   181,     0,   182,
     183,   184,    30,    31,     0,   190,   168,     0,     0,   169,
     185,   247,   169,   169,     0,     0,     0,   187,   187,   171,
       0,    35,   171,   171,     0,    85,     0,     0,   162,   119,
     163,   164,   165,    30,    31,   185,   273,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,     0,     0,     0,
       0,     0,    35,     0,     0,     0,   -28,   -28,   187,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   166,     0,     0,     0,
       0,     0,   168,     0,     0,   168,   168,   -28,   -28,   -28,
       0,     0,     0,   -28,     0,   147,     0,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,   -28,   -28,   -28,   -26,   -26,
       0,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,   -63,
       0,     0,   -63,     0,   -63,   -63,   -63,   -63,   -63,   -26,
     -26,   -26,     0,     0,     0,   -26,     0,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -26,     0,   -63,   -26,   -26,   -26,
     -19,   -19,     0,   -19,     0,   -19,   -19,   -19,   -19,   -19,
     -63,    82,     0,     0,    26,     0,    27,    28,    29,    30,
      31,   -19,   -19,   -19,     0,     0,     0,   -19,     0,   -19,
       0,   -19,   -19,   -19,   -19,   -19,   -19,     0,    35,   -19,
     -19,   -19,   -18,   -18,     0,   -18,     0,   -18,   -18,   -18,
     -18,   -18,    42,    85,     0,     0,   162,     0,   163,   164,
     165,    30,    31,   -18,   -18,   -18,     0,     0,     0,   -18,
       0,   -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,     0,
      35,   -18,   -18,   -18,   -20,   -20,     0,   -20,     0,   -20,
     -20,   -20,   -20,   -20,   166,   177,     0,     0,    26,     0,
      27,    28,    29,    30,    31,   -20,   -20,   -20,     0,     0,
       0,   -20,     0,   -20,     0,   -20,   -20,   -20,   -20,   -20,
     -20,     0,    35,   -20,   -20,   -20,   -21,   -21,     0,   -21,
       0,   -21,   -21,   -21,   -21,   -21,    42,   180,     0,     0,
     181,     0,   182,   183,   184,    30,    31,   -21,   -21,   -21,
       0,     0,     0,   -21,     0,   -21,     0,   -21,   -21,   -21,
     -21,   -21,   -21,     0,    35,   -21,   -21,   -21,   -22,   -22,
       0,   -22,     0,   -22,   -22,   -22,   -22,   -22,   185,   262,
       0,     0,   162,     0,   163,   164,   165,    30,    31,   -22,
     -22,   -22,     0,     0,     0,   -22,     0,   -22,     0,   -22,
     -22,   -22,   -22,   -22,   -22,     0,    35,   -22,   -22,   -22,
     -23,   -23,     0,   -23,     0,   -23,   -23,   -23,   -23,   -23,
     166,   -71,     0,     0,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -23,   -23,   -23,     0,     0,     0,   -23,     0,   -23,
       0,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,
     -23,   -23,   -33,   -33,     0,   -33,     0,   -33,   -33,   -33,
     -33,   -33,   -71,   177,     0,     0,    26,     0,    27,    28,
      29,    30,    31,   -33,   -33,   -33,     0,     0,     0,   -33,
       0,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -34,   -34,     0,   -34,     0,   -34,
     -34,   -34,   -34,   -34,    42,   -74,     0,     0,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -34,   -34,   -34,     0,     0,
       0,   -34,     0,   -34,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -34,   -34,   -35,   -35,     0,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -74,   -75,     0,     0,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -35,   -35,   -35,
       0,     0,     0,   -35,     0,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,   -35,   -35,   -35,   -36,   -36,
       0,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -75,    85,
       0,     0,   162,     0,   163,   164,   165,    30,    31,   -36,
     -36,   -36,     0,     0,     0,   -36,     0,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,
     -24,   -24,     0,   -24,     0,   -24,   -24,   -24,   -24,   -24,
     166,   180,     0,     0,   181,     0,   182,   183,   184,    30,
      31,   -24,   -24,   -24,     0,     0,     0,   -24,     0,   -24,
       0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,   -24,
     -24,   -24,   -25,   -25,     0,   -25,     0,   -25,   -25,   -25,
     -25,   -25,   185,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -25,   -25,   -25,     0,     0,     0,   -25,
       0,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,   -25,   -25,    -7,    -7,     0,    -7,     0,    -7,
      -7,    -7,    -7,    -7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -7,    -7,    -7,     0,     0,
       0,    -7,     0,    -7,     0,    -7,    -7,    -7,    -7,    -7,
      -7,     0,     0,    -7,    -7,    -7,   -38,   -38,     0,   -38,
       0,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -38,   -38,   -38,
       0,     0,     0,   -38,     0,   -38,     0,   -38,   -38,   -38,
     -38,   -38,   -38,     0,     0,   -38,   -38,   -38,   -27,   -27,
       0,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -27,
     -27,   -27,     0,     0,     0,   -27,     0,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,
     -41,   -41,     0,   -41,     0,   -41,   -41,   -41,   -41,   -41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -41,   -41,   -41,     0,     0,     0,   -41,     0,   -41,
       0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,
     -41,   -41,   -32,   -32,     0,   -32,     0,   -32,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -32,   -32,   -32,     0,     0,     0,   -32,
       0,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -32,   -32,   -15,   -15,     0,   -15,     0,   -15,
     -15,   -15,   -15,   -15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -15,   -15,   -15,     0,     0,
       0,   -15,     0,   -15,     0,   -15,   -15,   -15,   -15,   -15,
     -15,     0,     0,   -15,   -15,   -15,   -37,   -37,     0,   -37,
       0,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,   -37,
       0,     0,     0,   -37,     0,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,   -37,   -37,   -37,   -42,   -42,
       0,   -42,     0,   -42,   -42,   -42,   -42,   -42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -42,
     -42,   -42,     0,     0,     0,   -42,     0,   -42,     0,   -42,
     -42,   -42,   -42,   -42,   -42,     0,     0,   -42,   -42,   -42,
     -28,   -28,     0,   -28,     0,   -28,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -28,   -28,   -28,     0,     0,     0,   -28,     0,   309,
       0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,   -28,
     -28,   -28,   -51,   -51,     0,   -51,     0,   -51,   -51,   -51,
     -51,   -51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -51,   -51,   -51,     0,     0,     0,   -51,
       0,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,     0,
       0,   -51,   -51,   -51,   -52,   -52,     0,   -52,     0,   -52,
     -52,   -52,   -52,   -52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -52,   -52,   -52,     0,     0,
       0,   -52,     0,   -52,     0,   -52,   -52,   -52,   -52,   -52,
     -52,     0,     0,   -52,   -52,   -52,   -53,   -53,     0,   -53,
       0,   -53,   -53,   -53,   -53,   -53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -53,   -53,   -53,
       0,     0,     0,   -53,     0,   -53,     0,   -53,   -53,   -53,
     -53,   -53,   -53,     0,     0,   -53,   -53,   -53,   -29,   -29,
       0,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -29,
     -29,   -29,     0,     0,     0,   -29,     0,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,
     -30,   -30,     0,   -30,     0,   -30,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -30,   -30,   -30,     0,     0,     0,   -30,     0,   -30,
       0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,   -31,   -31,     0,   -31,     0,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -31,   -31,   -31,     0,     0,     0,   -31,
       0,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,   -31,   -31,   -31,   -26,   -26,     0,   -26,     0,   -26,
     -26,   -26,   -26,   -26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -26,   -26,   -26,     0,     0,
       0,   -26,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,
     -26,     0,     0,   -26,   -26,   -26,   -19,   -19,     0,   -19,
       0,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -19,   -19,   -19,
       0,     0,     0,   -19,     0,     0,     0,   -19,   -19,   -19,
     -19,   -19,   -19,     0,     0,   -19,   -19,   -19,    25,   159,
       0,    26,     0,    27,    28,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,     0,     0,     0,    35,     0,     0,     0,    36,
      37,    38,    39,    40,    41,     0,     0,   160,    87,    42,
     -17,   -17,     0,   -17,     0,   -17,   -17,   -17,   -17,   -17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -17,   -17,   -17,     0,     0,     0,   -17,     0,     0,
       0,   -17,   -17,   -17,   -17,   -17,   -17,     0,     0,   -17,
     -17,   -17,   -18,   -18,     0,   -18,     0,   -18,   -18,   -18,
     -18,   -18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -18,   -18,   -18,     0,     0,     0,   -18,
       0,     0,     0,   -18,   -18,   -18,   -18,   -18,   -18,     0,
       0,   -18,   -18,   -18,   -20,   -20,     0,   -20,     0,   -20,
     -20,   -20,   -20,   -20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -20,   -20,   -20,     0,     0,
       0,   -20,     0,     0,     0,   -20,   -20,   -20,   -20,   -20,
     -20,     0,     0,   -20,   -20,   -20,   -21,   -21,     0,   -21,
       0,   -21,   -21,   -21,   -21,   -21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -21,   -21,   -21,
       0,     0,     0,   -21,     0,     0,     0,   -21,   -21,   -21,
     -21,   -21,   -21,     0,     0,   -21,   -21,   -21,   -22,   -22,
       0,   -22,     0,   -22,   -22,   -22,   -22,   -22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -22,
     -22,   -22,     0,     0,     0,   -22,     0,     0,     0,   -22,
     -22,   -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -22,
     -23,   -23,     0,   -23,     0,   -23,   -23,   -23,   -23,   -23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -23,   -23,   -23,     0,     0,     0,   -23,     0,     0,
       0,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,
     -23,   -23,   -33,   -33,     0,   -33,     0,   -33,   -33,   -33,
     -33,   -33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -33,   -33,   -33,     0,     0,     0,   -33,
       0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -34,   -34,     0,   -34,     0,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -34,   -34,   -34,     0,     0,
       0,   -34,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -34,   -34,   -35,   -35,     0,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -35,   -35,   -35,
       0,     0,     0,   -35,     0,     0,     0,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,   -35,   -35,   -35,   -36,   -36,
       0,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -36,
     -36,   -36,     0,     0,     0,   -36,     0,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,
     -24,   -24,     0,   -24,     0,   -24,   -24,   -24,   -24,   -24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -24,   -24,   -24,     0,     0,     0,   -24,     0,     0,
       0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,   -24,
     -24,   -24,   -25,   -25,     0,   -25,     0,   -25,   -25,   -25,
     -25,   -25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -25,   -25,   -25,     0,     0,     0,   -25,
       0,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,   -25,   -25,   -16,   -16,     0,   -16,     0,   -16,
     -16,   -16,   -16,   -16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -16,   -16,   -16,     0,     0,
       0,   -16,     0,     0,     0,   -16,   -16,   -16,   -16,   -16,
     -16,     0,     0,   -16,   -16,   -16,   -38,   -38,     0,   -38,
       0,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -38,   -38,   -38,
       0,     0,     0,   -38,     0,     0,     0,   -38,   -38,   -38,
     -38,   -38,   -38,     0,     0,   -38,   -38,   -38,   -27,   -27,
       0,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -27,
     -27,   -27,     0,     0,     0,   -27,     0,     0,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,
     -41,   -41,     0,   -41,     0,   -41,   -41,   -41,   -41,   -41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -41,   -41,   -41,     0,     0,     0,   -41,     0,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,
     -41,   -41,   -32,   -32,     0,   -32,     0,   -32,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -32,   -32,   -32,     0,     0,     0,   -32,
       0,     0,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -32,   -32,   -37,   -37,     0,   -37,     0,   -37,
     -37,   -37,   -37,   -37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -37,   -37,   -37,     0,     0,
       0,   -37,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,   -37,   -37,   -37,   -42,   -42,     0,   -42,
       0,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -42,   -42,   -42,
       0,     0,     0,   -42,     0,     0,     0,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,   -42,   -42,   -42,   -51,   -51,
       0,   -51,     0,   -51,   -51,   -51,   -51,   -51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -51,
     -51,   -51,     0,     0,     0,   -51,     0,     0,     0,   -51,
     -51,   -51,   -51,   -51,   -51,     0,     0,   -51,   -51,   -51,
     -52,   -52,     0,   -52,     0,   -52,   -52,   -52,   -52,   -52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -52,   -52,   -52,     0,     0,     0,   -52,     0,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,   -52,
     -52,   -52,   -53,   -53,     0,   -53,     0,   -53,   -53,   -53,
     -53,   -53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -53,   -53,   -53,     0,     0,     0,   -53,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,     0,
       0,   -53,   -53,   -53,   -29,   -29,     0,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -29,   -29,   -29,     0,     0,
       0,   -29,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,   -29,   -29,   -29,   -30,   -30,     0,   -30,
       0,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -30,   -30,   -30,
       0,     0,     0,   -30,     0,     0,     0,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,   -31,   -31,
       0,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -31,
     -31,   -31,     0,     0,     0,   -31,     0,     0,     0,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,   -31,   -31,   -31,
      25,   159,     0,    26,     0,    27,    28,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,     0,     0,     0,    35,     0,     0,
       0,    36,    37,    38,    39,    40,    41,     0,     0,   160,
     266,    42,    -7,    -7,     0,    -7,     0,    -7,    -7,    -7,
      -7,    -7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    -7,    -7,    -7,     0,     0,     0,    -7,
       0,     0,     0,    -7,    -7,    -7,    -7,    -7,    -7,     0,
       0,    -7,    -7,    -7,    25,   159,     0,    26,     0,    27,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,    34,     0,     0,
       0,    35,     0,     0,     0,    36,    37,    38,    39,    40,
      41,     0,     0,   160,   292,    42,   -15,   -15,     0,   -15,
       0,   -15,   -15,   -15,   -15,   -15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -15,   -15,   -15,
       0,     0,     0,   -15,     0,     0,     0,   -15,   -15,   -15,
     -15,   -15,   -15,     0,     0,   -15,   -15,   -15,    25,   159,
       0,    26,     0,    27,    28,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,     0,     0,     0,    35,     0,     0,     0,    36,
      37,    38,    39,    40,    41,   199,   159,   160,    26,    42,
      27,    28,    29,    30,    31,   -62,   -62,    96,    97,    98,
      99,   100,   101,     0,     0,     0,    32,    33,   200,   -62,
       0,     0,    35,     0,     0,     0,   201,   202,   203,   204,
     205,   206,     0,     0,   207,   -62,    42,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,     0,     0,   -81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -81,     0,     0,
     237,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,   225,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,   197,   -81,     0,     0,   -81,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,     0,   197,   -81,     0,     0,   -49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -49,     0,     0,     0,   -49,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,     0,
     178,   179,     0,   -50,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,   -50,     0,     0,   -65,   -50,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,     0,     0,   -65,   178,   179,     0,   -47,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
     -47,     0,     0,   -64,   -47,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,     0,   -64,
       0,     0,     0,   -48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -48,     0,     0,     0,   -48,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,     0,     0,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,     0,     0,     0,   -84,   -73,   -73,   105,   106,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,     0,     0,   -73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -73,     0,     0,     0,   -73,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,     0,     0,   -77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -77,     0,     0,     0,   -77,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,     0,     0,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,     0,     0,     0,   -82,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,     0,     0,   -78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -78,     0,     0,     0,   -78,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,   -86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -86,     0,     0,     0,   -86,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,     0,     0,   -83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -83,     0,     0,     0,   -83,   -72,   -72,   105,   106,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,   -72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -72,     0,     0,     0,   -72,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,     0,     0,   -76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -76,     0,     0,     0,   -76,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,   -85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,     0,     0,     0,   -85,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,     0,     0,     0,     0,     0,   -49,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,     0,     0,     0,   -49,     0,     0,   -50,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
       0,     0,     0,   -50,     0,     0,   -47,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
       0,     0,   -47,     0,     0,   -48,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,   -48,     0,     0,   -84,   -73,   -73,   105,   106,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
     -84,     0,     0,   -73,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,   -73,
       0,     0,   -77,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,   -77,     0,
       0,   -82,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,   -82,     0,     0,
     -78,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,   -78,     0,     0,   -86,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,   -86,     0,     0,   -83,   -72,
     -72,   105,   106,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,   -83,     0,     0,   -72,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,   -72,     0,     0,   -76,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,   -76,     0,     0,   -85,   178,   179,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,   -85,     0,     0,   -65,   -62,   -62,    96,    97,    98,
      99,   100,   101,     0,     0,     0,   -65,   178,   179,   -62,
     -65,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -62,     0,     0,     0,     0,   -64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -64,     0,     0,
       0,   -64,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,    73,     0,     0,     0,     0,    74,
     -81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -81,     0,     0,     0,    75,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   249,     0,
       0,     0,     0,    74,   -81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -81,     0,     0,     0,    75,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,    74,   -81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -81,
       0,     0,     0,   196,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,   -81,     0,   -62,   -62,    96,    97,    98,    99,
     100,   101,     0,   -81,     0,     0,     0,   196,   -62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -62,     0,     0,     0,   -62,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,     0,     0,   -82,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,   -82,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,   -86,     0,   -86,     0,     0,     0,     0,
       0,     0,     0,     0,   -86,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,   -85,     0,   -85,     0,     0,     0,     0,
       0,     0,     0,     0,   -85,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,     0,     0,   -82,     0,   261,     0,     0,     0,     0,
       0,     0,     0,     0,   -82,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,     0,     0,
       0,     0,     0,   -49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -49,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,     0,
       0,     0,     0,   -50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -50,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,
       0,     0,     0,   -47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -47,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,     0,     0,
       0,     0,     0,   -48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -48,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,     0,     0,   -84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -84,   -73,   -73,   105,   106,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,     0,     0,   -73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -73,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,   -77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -77,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,     0,     0,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -82,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,     0,     0,   -78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -78,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,   -83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -83,   -72,   -72,   105,   106,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,   -72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -72,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,   -76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -76,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,   -86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -86,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
     178,   179,     0,   -85,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,   -85,   178,   179,     0,   -65,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,   -65,
       0,     0,     0,   -64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -64
};

static const yytype_int16 yycheck[] =
{
       0,    16,     0,     3,    41,     3,   160,    81,    23,   133,
      42,    21,     4,    13,   174,     4,     3,     0,    18,     6,
      78,     8,     9,    10,    11,    12,   133,    40,   196,   197,
       4,    41,   168,   193,     3,    45,     4,    74,    15,    16,
       4,    40,     4,    75,    40,    77,    78,    42,    80,    81,
       3,   187,    29,   207,   133,    65,    45,    44,    68,     4,
       4,    45,     0,    40,    74,    75,     4,     3,    78,   237,
       6,    45,     8,     9,    10,    11,    12,    45,   133,     3,
     133,    45,     6,    45,     8,     9,    10,   171,   133,     3,
     148,   149,   102,   103,    30,     3,   133,   107,    44,   131,
      45,    45,   134,   135,    44,    44,   190,     3,    44,    45,
       6,   271,     8,     9,    10,    11,    12,    44,   133,   279,
      44,   131,    44,   133,   134,   135,    15,    16,     0,     3,
       3,     5,     4,   133,   166,   133,     3,   147,    40,     6,
      29,     8,     9,    10,   154,   155,    40,     0,    44,   133,
     160,     4,    41,   185,     3,     3,    45,     6,    40,     8,
       9,    10,    44,   147,   196,   197,     3,   225,     5,   206,
     154,   155,   296,     3,   133,     5,   133,    44,    40,   189,
     254,   255,   192,     3,    40,   309,   196,   197,   225,   296,
      45,   315,   316,   225,   252,    44,   206,   207,    30,   133,
      42,    30,   309,    30,    30,   237,     3,     3,   315,   316,
       6,    45,     8,     9,    10,    11,    12,   296,   228,   251,
     252,    40,   254,   255,     0,    67,    40,   237,     4,    40,
     309,   241,   242,    75,   244,    77,   315,   316,    80,    81,
      40,   296,   252,   296,   228,     0,     0,   257,    44,     4,
       4,   296,   310,   311,   309,    45,   309,   133,    45,   296,
     315,   316,   315,   316,   309,   297,   298,    45,    15,    16,
     315,   316,   309,   257,    45,    45,     0,    40,   315,   316,
       4,   296,    29,    40,   126,     3,   296,   297,   298,   131,
      15,    16,   133,    40,   309,   133,   296,    40,   296,   309,
     315,   316,    40,    40,    29,   315,   316,    42,    40,   309,
       3,   309,   296,    15,    16,   315,   316,   315,   316,     0,
      45,    15,    16,     4,   166,   309,    45,    29,   170,    28,
     172,   315,   316,    68,    45,    29,    40,   296,    40,   296,
      75,    42,    77,   185,     0,    80,    81,   189,     4,   191,
     309,    45,   309,     3,   196,   197,   315,   316,   315,   316,
       3,    44,   296,     6,    44,     8,     9,    10,    11,    12,
      44,    44,   107,    41,    75,   309,    77,    45,    44,    80,
      81,   315,   316,   225,    42,    40,     3,    30,    40,    15,
      16,   233,   234,    40,    45,   237,   131,    15,    16,   241,
     242,    44,    45,    29,    15,    16,    41,    15,    16,   251,
      45,    29,   254,   255,    40,    30,    45,    75,    29,    77,
     296,    29,    80,    81,    30,    41,     3,    45,   270,    45,
     131,   166,     3,   309,    45,   170,   278,    45,   173,   315,
     316,     3,    15,    16,     6,   103,     8,     9,    10,    41,
     185,    40,    40,    45,   189,   296,    29,   192,   296,    41,
      41,   196,   197,    45,    45,   166,     3,    40,   309,   170,
      45,   309,   173,   131,   315,   316,    45,   315,   316,    45,
       3,    40,    44,     6,   185,     8,     9,    10,   189,    45,
     225,   192,    40,    40,    45,   196,   197,    40,   233,   234,
      45,   236,   237,    45,    40,    40,   241,   242,   166,   244,
      40,    45,   170,    42,    40,    40,   251,    45,     3,   254,
     255,    44,    42,     3,   225,    18,     6,   185,     8,     9,
      10,   189,   233,   234,    -1,   236,   237,    -1,   196,   197,
     241,   242,    -1,   244,    -1,    -1,    75,    -1,    77,    -1,
     251,    80,    81,   254,   255,    75,    -1,    77,    -1,    -1,
      80,    81,    -1,     3,    44,    94,     6,   225,     8,     9,
      10,    11,    12,    -1,    -1,   233,   234,    -1,    -1,   237,
      -1,    -1,   102,   241,   242,    -1,    -1,    -1,    -1,    -1,
      42,    15,    16,   251,    -1,    -1,   254,   255,    -1,    -1,
      42,    -1,   131,     3,    44,    29,     6,    -1,     8,     9,
      10,   131,    -1,    65,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    -1,    75,    -1,    77,    -1,    -1,    80,    81,
      -1,    15,    16,    75,    -1,    77,    -1,   166,    80,    81,
      -1,   170,    -1,    -1,    44,    29,   166,    -1,    -1,    -1,
     170,    -1,    -1,    42,    -1,    -1,   185,    41,    -1,    -1,
     189,    45,    -1,    -1,    -1,   185,    -1,   196,   197,   189,
      -1,    15,    16,    15,    16,     3,   196,   197,     6,   131,
       8,     9,    10,    11,    12,    29,    75,    29,    77,   131,
      -1,    80,    81,    -1,    -1,    -1,   225,    41,    -1,    41,
      -1,    45,   231,    45,    -1,   225,    -1,    -1,   237,    -1,
     239,    -1,    -1,   233,   166,    -1,    44,   237,   170,    -1,
      -1,   241,   251,    -1,   166,   254,   255,    -1,   170,    -1,
      -1,   251,    -1,   185,   254,   255,    -1,   189,    -1,    -1,
      -1,    -1,   131,   185,   196,   197,    -1,   189,    -1,    -1,
      -1,    -1,    -1,    -1,   196,   197,    -1,    -1,    -1,     3,
      -1,    -1,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,   166,    -1,    -1,
      -1,    -1,    -1,   225,     3,   237,    30,     6,    -1,     8,
       9,    10,    11,    12,    -1,   237,   185,    -1,    -1,   251,
      44,    45,   254,   255,    -1,    -1,    -1,   196,   197,   251,
      -1,    30,   254,   255,    -1,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,     3,     4,   237,     6,
      -1,     8,     9,    10,    11,    12,    44,    -1,    -1,    -1,
      -1,    -1,   251,    -1,    -1,   254,   255,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,     3,     4,
      -1,     6,    -1,     8,     9,    10,    11,    12,    -1,     3,
      -1,    -1,     6,    -1,     8,     9,    10,    11,    12,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    -1,    30,    42,    43,    44,
       3,     4,    -1,     6,    -1,     8,     9,    10,    11,    12,
      44,     3,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      12,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    -1,    30,    42,
      43,    44,     3,     4,    -1,     6,    -1,     8,     9,    10,
      11,    12,    44,     3,    -1,    -1,     6,    -1,     8,     9,
      10,    11,    12,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    -1,
      30,    42,    43,    44,     3,     4,    -1,     6,    -1,     8,
       9,    10,    11,    12,    44,     3,    -1,    -1,     6,    -1,
       8,     9,    10,    11,    12,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    -1,    30,    42,    43,    44,     3,     4,    -1,     6,
      -1,     8,     9,    10,    11,    12,    44,     3,    -1,    -1,
       6,    -1,     8,     9,    10,    11,    12,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    -1,    30,    42,    43,    44,     3,     4,
      -1,     6,    -1,     8,     9,    10,    11,    12,    44,     3,
      -1,    -1,     6,    -1,     8,     9,    10,    11,    12,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    -1,    30,    42,    43,    44,
       3,     4,    -1,     6,    -1,     8,     9,    10,    11,    12,
      44,     3,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      12,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    44,     3,     4,    -1,     6,    -1,     8,     9,    10,
      11,    12,    44,     3,    -1,    -1,     6,    -1,     8,     9,
      10,    11,    12,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    44,     3,     4,    -1,     6,    -1,     8,
       9,    10,    11,    12,    44,     3,    -1,    -1,     6,    -1,
       8,     9,    10,    11,    12,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    44,     3,     4,    -1,     6,
      -1,     8,     9,    10,    11,    12,    44,     3,    -1,    -1,
       6,    -1,     8,     9,    10,    11,    12,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,     3,     4,
      -1,     6,    -1,     8,     9,    10,    11,    12,    44,     3,
      -1,    -1,     6,    -1,     8,     9,    10,    11,    12,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    44,
       3,     4,    -1,     6,    -1,     8,     9,    10,    11,    12,
      44,     3,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      12,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    44,     3,     4,    -1,     6,    -1,     8,     9,    10,
      11,    12,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    44,     3,     4,    -1,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    44,     3,     4,    -1,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,     3,     4,
      -1,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    44,
       3,     4,    -1,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    44,     3,     4,    -1,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    44,     3,     4,    -1,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    44,     3,     4,    -1,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,     3,     4,
      -1,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    44,
       3,     4,    -1,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    44,     3,     4,    -1,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    44,     3,     4,    -1,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    44,     3,     4,    -1,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,     3,     4,
      -1,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    44,
       3,     4,    -1,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    44,     3,     4,    -1,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    44,     3,     4,    -1,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    44,     3,     4,    -1,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,     3,     4,
      -1,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    44,
       3,     4,    -1,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    44,     3,     4,    -1,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    44,     3,     4,    -1,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    44,     3,     4,    -1,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,     3,     4,
      -1,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    44,
       3,     4,    -1,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    44,     3,     4,    -1,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    44,     3,     4,    -1,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    44,     3,     4,    -1,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,     3,     4,
      -1,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    44,
       3,     4,    -1,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    44,     3,     4,    -1,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    44,     3,     4,    -1,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    44,     3,     4,    -1,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,     3,     4,
      -1,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    44,
       3,     4,    -1,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    44,     3,     4,    -1,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    44,     3,     4,    -1,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    44,     3,     4,    -1,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,     3,     4,
      -1,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    44,
       3,     4,    -1,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    44,     3,     4,    -1,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    44,     3,     4,    -1,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    44,     3,     4,    -1,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,     3,     4,
      -1,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    44,
       3,     4,    -1,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    44,     3,     4,    -1,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    44,     3,     4,    -1,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    44,     3,     4,    -1,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,     3,     4,
      -1,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     3,     4,    42,     6,    44,
       8,     9,    10,    11,    12,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    24,    25,    26,    29,
      -1,    -1,    30,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    45,    44,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      44,    45,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,
      29,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    44,    45,    -1,    -1,    29,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    44,    45,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      11,    12,    -1,    29,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    41,    -1,    -1,    29,    45,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    45,    11,    12,    -1,    29,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      41,    -1,    -1,    29,    45,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    45,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    45,    -1,    -1,    29,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    45,    -1,    -1,    29,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    45,    -1,    -1,    29,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    45,    -1,    -1,    29,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      45,    -1,    -1,    29,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    45,
      -1,    -1,    29,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    45,    -1,
      -1,    29,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    45,    -1,    -1,
      29,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    45,    -1,    -1,    29,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    45,    -1,    -1,    29,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    45,    -1,    -1,    29,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    45,    -1,    -1,    29,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    45,    -1,    -1,    29,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    45,    -1,    -1,    29,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    41,    11,    12,    29,
      45,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      40,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    40,    -1,    -1,    -1,    44,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      11,    12,    -1,    29,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    40,    11,    12,    -1,    29,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    40,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    47,    48,    49,    50,    51,    52,     3,     5,
       0,    49,    40,    44,     3,     4,    45,    52,    53,    54,
       3,    42,    55,    45,    54,     3,     6,     8,     9,    10,
      11,    12,    24,    25,    26,    30,    34,    35,    36,    37,
      38,    39,    44,    50,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    75,    77,    78,    79,    81,    82,    83,
      85,    86,    55,    23,    28,    44,     3,    44,    44,    44,
      44,    44,     3,    68,    86,     3,    70,    43,    57,     3,
      40,    15,    16,    29,    76,    77,    17,    18,    19,    20,
      21,    22,    80,    82,    85,    13,    14,    84,    31,     3,
      68,    45,    70,    87,    40,    70,    69,    70,     3,     7,
      70,    74,    74,    40,    45,    78,    81,    83,    85,     3,
      40,    41,    45,    45,    40,    40,    45,    45,    45,    40,
      70,    57,    70,    70,    40,    40,    40,    32,    40,    40,
      57,     3,    69,    69,    45,    45,    57,    57,     5,     4,
      42,    52,     6,     8,     9,    10,    44,    71,    75,    77,
      78,    79,    81,    82,    83,    85,    86,     3,    11,    12,
       3,     6,     8,     9,    10,    44,    71,    75,    77,    78,
      79,    81,    82,    83,    85,    86,    44,    44,    30,     3,
      26,    34,    35,    36,    37,    38,    39,    42,    50,    52,
      55,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    72,    73,    86,    28,     3,     3,    56,    40,
      70,    76,    77,    80,    82,    85,    84,    44,    70,    76,
      77,    80,    82,    85,    84,    45,    87,    45,    87,    23,
       3,    44,    44,    44,    44,    44,    68,    56,    40,     3,
      40,    31,     3,    68,    69,    70,    43,    45,    30,    78,
      81,    83,    85,    45,    87,    45,    30,    78,    81,    83,
      85,    45,    45,     3,    40,    70,    69,    70,     3,    74,
      74,    40,    43,     3,    45,    40,    45,    40,    40,    45,
      45,    45,    40,    57,    70,    70,    40,    40,    40,    32,
      40,    40,    57,    69,    69,    45,    45,    57,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    50,    51,    51,
      52,    52,    53,    53,    54,    55,    56,    56,    57,    57,
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
       0,     2,     1,     2,     1,     1,     1,     2,     6,     5,
       2,     3,     2,     1,     1,     3,     2,     1,     1,     1,
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
        abstractSyntaxTree = (yyval.treeNode);
    }
#line 2689 "guillex.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 69 "guillex.y"
                                    {
       (yyval.treeNode) = createNode2("declarationsList declaration", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
     }
#line 2697 "guillex.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 72 "guillex.y"
                      {
    (yyval.treeNode) = createNode1("declaration", (yyvsp[0].treeNode));
  }
#line 2705 "guillex.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 78 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
    }
#line 2713 "guillex.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 81 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("funcDeclaration", (yyvsp[0].treeNode));
    }
#line 2721 "guillex.tab.c"
    break;

  case 7: /* varDeclaration: simpleVarDeclaration SEMIC  */
#line 87 "guillex.y"
                               {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[-1].treeNode));}
#line 2728 "guillex.tab.c"
    break;

  case 8: /* funcDeclaration: TYPE ID PARENL params PARENR compoundStmt  */
#line 92 "guillex.y"
                                              {
      addSymbol(symbolIdCounter, (yyvsp[-4].str), "func", (yyvsp[-5].str));
      symbolIdCounter++;
      (yyval.treeNode) = createNode4("TYPE ID PARENL params PARENR compoundStmt", createNode0((yyvsp[-5].str)), createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
  }
#line 2738 "guillex.tab.c"
    break;

  case 9: /* funcDeclaration: TYPE ID PARENL PARENR compoundStmt  */
#line 97 "guillex.y"
                                       {
    symbolIdCounter++;
    (yyval.treeNode) = createNode3("TYPE ID PARENL PARENR compoundStmt", createNode0((yyvsp[-4].str)), createNode0((yyvsp[-3].str)), (yyvsp[0].treeNode));                                                                       
  }
#line 2747 "guillex.tab.c"
    break;

  case 10: /* simpleVarDeclaration: TYPE ID  */
#line 104 "guillex.y"
            {
      addSymbol(symbolIdCounter, (yyvsp[0].str), "var", (yyvsp[-1].str));
      symbolIdCounter++;
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      }
#line 2757 "guillex.tab.c"
    break;

  case 11: /* simpleVarDeclaration: TYPE LISTTYPE ID  */
#line 109 "guillex.y"
                       {
      symbolIdCounter++;
      (yyval.treeNode) = createNode3("TYPE ID", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 2766 "guillex.tab.c"
    break;

  case 12: /* params: params param  */
#line 116 "guillex.y"
                 {
      (yyval.treeNode) = createNode2("params param", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
      }
#line 2774 "guillex.tab.c"
    break;

  case 13: /* params: param  */
#line 119 "guillex.y"
          { 
    (yyval.treeNode) = createNode1("param", (yyvsp[0].treeNode)); 
    }
#line 2782 "guillex.tab.c"
    break;

  case 14: /* param: simpleVarDeclaration  */
#line 125 "guillex.y"
                         {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[0].treeNode));
    }
#line 2790 "guillex.tab.c"
    break;

  case 15: /* compoundStmt: STFUNC stmtList ENDFUNC  */
#line 131 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[-1].treeNode));
    }
#line 2798 "guillex.tab.c"
    break;

  case 16: /* stmtList: stmtList primitiveStmt  */
#line 137 "guillex.y"
                              {
      (yyval.treeNode) = createNode2("stmtList primitiveStmt", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 2806 "guillex.tab.c"
    break;

  case 17: /* stmtList: primitiveStmt  */
#line 140 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("primitiveStmt", (yyvsp[0].treeNode));
  }
#line 2814 "guillex.tab.c"
    break;

  case 18: /* primitiveStmt: exprStmt  */
#line 146 "guillex.y"
             {
      (yyval.treeNode) = createNode1("exprStmt", (yyvsp[0].treeNode));
    }
#line 2822 "guillex.tab.c"
    break;

  case 19: /* primitiveStmt: compoundStmt  */
#line 149 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[0].treeNode));
  }
#line 2830 "guillex.tab.c"
    break;

  case 20: /* primitiveStmt: condStmt  */
#line 152 "guillex.y"
             {
    (yyval.treeNode) = createNode1("condStmt", (yyvsp[0].treeNode));
  }
#line 2838 "guillex.tab.c"
    break;

  case 21: /* primitiveStmt: iterStmt  */
#line 155 "guillex.y"
             {
    (yyval.treeNode) = createNode1("iterStmt", (yyvsp[0].treeNode));
  }
#line 2846 "guillex.tab.c"
    break;

  case 22: /* primitiveStmt: returnStmt  */
#line 158 "guillex.y"
               {
    (yyval.treeNode) = createNode1("returnStmt", (yyvsp[0].treeNode));
  }
#line 2854 "guillex.tab.c"
    break;

  case 23: /* primitiveStmt: listStmt  */
#line 161 "guillex.y"
             {
    (yyval.treeNode) = createNode1("listStmt", (yyvsp[0].treeNode));
  }
#line 2862 "guillex.tab.c"
    break;

  case 24: /* primitiveStmt: inOp  */
#line 164 "guillex.y"
         {
    (yyval.treeNode) = createNode1("inOp", (yyvsp[0].treeNode));
  }
#line 2870 "guillex.tab.c"
    break;

  case 25: /* primitiveStmt: outOp  */
#line 167 "guillex.y"
          {
    (yyval.treeNode) = createNode1("outOp", (yyvsp[0].treeNode));
  }
#line 2878 "guillex.tab.c"
    break;

  case 26: /* primitiveStmt: varDeclaration  */
#line 170 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
  }
#line 2886 "guillex.tab.c"
    break;

  case 27: /* exprStmt: expression SEMIC  */
#line 176 "guillex.y"
                     {
      (yyval.treeNode) = createNode1("expression SEMIC", (yyvsp[-1].treeNode));
    }
#line 2894 "guillex.tab.c"
    break;

  case 28: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt  */
#line 182 "guillex.y"
                                                        {
      (yyval.treeNode) = createNode3("IF PARENL simpleExp PARENR primitiveStmt", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 2902 "guillex.tab.c"
    break;

  case 29: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt ELSE primitiveStmt  */
#line 185 "guillex.y"
                                                                {
    (yyval.treeNode) = createNode5("IF PARENL primitiveExp PARENR primitiveStmt ELSE primitiveStmt", createNode0((yyvsp[-6].str)), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), createNode0((yyvsp[-1].str)), (yyvsp[0].treeNode));
  }
#line 2910 "guillex.tab.c"
    break;

  case 30: /* iterStmt: FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 191 "guillex.y"
                                                                              {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-8].str)), (yyvsp[-6].treeNode), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 2918 "guillex.tab.c"
    break;

  case 31: /* iterStmt: FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 194 "guillex.y"
                                                                              {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-8].str)), (yyvsp[-6].treeNode), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
  }
#line 2926 "guillex.tab.c"
    break;

  case 32: /* returnStmt: RETURN expression SEMIC  */
#line 200 "guillex.y"
                            {
      (yyval.treeNode) = createNode2("RETURN expression SEMIC", createNode0((yyvsp[-2].str)), (yyvsp[-1].treeNode));
    }
#line 2934 "guillex.tab.c"
    break;

  case 33: /* listStmt: appendOps  */
#line 206 "guillex.y"
              {
      (yyval.treeNode) = createNode1("appendOps", (yyvsp[0].treeNode));
    }
#line 2942 "guillex.tab.c"
    break;

  case 34: /* listStmt: returnListOps  */
#line 209 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("returnListOps", (yyvsp[0].treeNode));
  }
#line 2950 "guillex.tab.c"
    break;

  case 35: /* listStmt: destroyHeadOps  */
#line 212 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("destroyHeadOps", (yyvsp[0].treeNode));
  }
#line 2958 "guillex.tab.c"
    break;

  case 36: /* listStmt: mapFilterOps  */
#line 215 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("mapFilterOps", (yyvsp[0].treeNode));
  }
#line 2966 "guillex.tab.c"
    break;

  case 37: /* appendOps: ID APPEND ID SEMIC  */
#line 221 "guillex.y"
                       {
      (yyval.treeNode) = createNode3("ID APPEND ID SEMIC", createNode0((yyvsp[-3].str)), createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)));
    }
#line 2974 "guillex.tab.c"
    break;

  case 38: /* returnListOps: returnListOp ID  */
#line 227 "guillex.y"
                    {
      (yyval.treeNode) = createNode2("returnListOp ID", (yyvsp[-1].treeNode), createNode0((yyvsp[0].str)));
    }
#line 2982 "guillex.tab.c"
    break;

  case 39: /* returnListOp: HEADLIST  */
#line 233 "guillex.y"
             {
      (yyval.treeNode) = createNode1("HEADLIST", createNode0((yyvsp[0].str)));
    }
#line 2990 "guillex.tab.c"
    break;

  case 40: /* returnListOp: TAILLIST  */
#line 236 "guillex.y"
             {
      (yyval.treeNode) = createNode1("TAILLIST", createNode0((yyvsp[0].str)));
  }
#line 2998 "guillex.tab.c"
    break;

  case 41: /* destroyHeadOps: DESTROYHEAD ID SEMIC  */
#line 242 "guillex.y"
                         {
      (yyval.treeNode) = createNode2("DESTROYHEAD ID", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)));
    }
#line 3006 "guillex.tab.c"
    break;

  case 42: /* mapFilterOps: fCall MAP ID SEMIC  */
#line 248 "guillex.y"
                       {
      (yyval.treeNode) = createNode3("fCall MAP ID SEMIC", (yyvsp[-3].treeNode), createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)));
    }
#line 3014 "guillex.tab.c"
    break;

  case 43: /* expression: assignExp  */
#line 254 "guillex.y"
              {
      (yyval.treeNode) = createNode1("assignExp", (yyvsp[0].treeNode));
    }
#line 3022 "guillex.tab.c"
    break;

  case 44: /* expression: simpleExp  */
#line 257 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3030 "guillex.tab.c"
    break;

  case 45: /* assignExp: ID ASSIGN expression  */
#line 263 "guillex.y"
                         {
      (yyval.treeNode) = createNode3("ID ASSIGN expression", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), (yyvsp[0].treeNode));
    }
#line 3038 "guillex.tab.c"
    break;

  case 46: /* simpleExp: binLogicalExp  */
#line 270 "guillex.y"
                  {
      (yyval.treeNode) = createNode1("binLogicalExp", (yyvsp[0].treeNode));
    }
#line 3046 "guillex.tab.c"
    break;

  case 47: /* constOp: INTEGER  */
#line 276 "guillex.y"
            {
      (yyval.treeNode) = createNode0Int((yyvsp[0].integer), 'i');
    }
#line 3054 "guillex.tab.c"
    break;

  case 48: /* constOp: DECIMAL  */
#line 279 "guillex.y"
            {
    (yyval.treeNode) = createNode0Dec((yyvsp[0].dec), 'd');
  }
#line 3062 "guillex.tab.c"
    break;

  case 49: /* constOp: LIST  */
#line 282 "guillex.y"
         {
    (yyval.treeNode) = createNode0List((yyvsp[0].str), 'l');
  }
#line 3070 "guillex.tab.c"
    break;

  case 50: /* constOp: NIL  */
#line 285 "guillex.y"
        {
    (yyval.treeNode) = createNode0Nil((yyvsp[0].str), 'n');
  }
#line 3078 "guillex.tab.c"
    break;

  case 51: /* inOp: READ PARENL ID PARENR SEMIC  */
#line 291 "guillex.y"
                             {
    (yyval.treeNode) = createNode2("READ PARENL ID PARENR SEMIC", createNode0((yyvsp[-4].str)), createNode0((yyvsp[-2].str)));
  }
#line 3086 "guillex.tab.c"
    break;

  case 52: /* outOp: WRITE PARENL outConst PARENR SEMIC  */
#line 297 "guillex.y"
                                      {
      (yyval.treeNode) = createNode2("WRITE PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
    }
#line 3094 "guillex.tab.c"
    break;

  case 53: /* outOp: WRITELN PARENL outConst PARENR SEMIC  */
#line 300 "guillex.y"
                                         {
      (yyval.treeNode) = createNode2("WRITELN PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
  }
#line 3102 "guillex.tab.c"
    break;

  case 54: /* outConst: STRING  */
#line 306 "guillex.y"
           {
      (yyval.treeNode) = createNode1("STRING", createNode0((yyvsp[0].str)));
    }
#line 3110 "guillex.tab.c"
    break;

  case 55: /* outConst: simpleExp  */
#line 309 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3118 "guillex.tab.c"
    break;

  case 56: /* binLogicalExp: binLogicalExp binLogicalOp unLogicalOp  */
#line 315 "guillex.y"
                                          {
      (yyval.treeNode) = createNode3("binLogicalExp binLogicalOp unLogicalOp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3126 "guillex.tab.c"
    break;

  case 57: /* binLogicalExp: unLogicalExp  */
#line 318 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("unLogicalExp", (yyvsp[0].treeNode));
  }
#line 3134 "guillex.tab.c"
    break;

  case 58: /* binLogicalOp: OR  */
#line 325 "guillex.y"
       {
      (yyval.treeNode) = createNode1("OR", createNode0((yyvsp[0].str)));
    }
#line 3142 "guillex.tab.c"
    break;

  case 59: /* binLogicalOp: AND  */
#line 328 "guillex.y"
        {
      (yyval.treeNode) = createNode1("AND", createNode0((yyvsp[0].str)));
  }
#line 3150 "guillex.tab.c"
    break;

  case 60: /* binLogicalOp: NEG  */
#line 331 "guillex.y"
        {
      (yyval.treeNode) = createNode1("NEG", createNode0((yyvsp[0].str)));
  }
#line 3158 "guillex.tab.c"
    break;

  case 61: /* unLogicalExp: unLogicalOp unLogicalExp  */
#line 338 "guillex.y"
                             {
      (yyval.treeNode) = createNode2("unLogicalOp unLogicalExp", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3166 "guillex.tab.c"
    break;

  case 62: /* unLogicalExp: relationalExp  */
#line 341 "guillex.y"
                 {
      (yyval.treeNode) = createNode1("relationalExp", (yyvsp[0].treeNode));
  }
#line 3174 "guillex.tab.c"
    break;

  case 63: /* unLogicalOp: NOT  */
#line 347 "guillex.y"
        {
      (yyval.treeNode) = createNode1("NOT", createNode0((yyvsp[0].str)));
    }
#line 3182 "guillex.tab.c"
    break;

  case 64: /* relationalExp: relationalExp relationalOp sumExp  */
#line 353 "guillex.y"
                                      {
      (yyval.treeNode) = createNode3("relationalExp relationalOp sumExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3190 "guillex.tab.c"
    break;

  case 65: /* relationalExp: sumExp  */
#line 356 "guillex.y"
           {
      (yyval.treeNode) = createNode1("sumExp", (yyvsp[0].treeNode));
  }
#line 3198 "guillex.tab.c"
    break;

  case 66: /* relationalOp: SMALLER  */
#line 363 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLER", createNode0((yyvsp[0].str)));
    }
#line 3206 "guillex.tab.c"
    break;

  case 67: /* relationalOp: GREATER  */
#line 366 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATER", createNode0((yyvsp[0].str)));
  }
#line 3214 "guillex.tab.c"
    break;

  case 68: /* relationalOp: SMALLEQ  */
#line 369 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLEQ", createNode0((yyvsp[0].str)));
  }
#line 3222 "guillex.tab.c"
    break;

  case 69: /* relationalOp: GREATEQ  */
#line 372 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATEQ", createNode0((yyvsp[0].str)));
  }
#line 3230 "guillex.tab.c"
    break;

  case 70: /* relationalOp: EQUALS  */
#line 375 "guillex.y"
           {
      (yyval.treeNode) = createNode1("EQUALS", createNode0((yyvsp[0].str)));
  }
#line 3238 "guillex.tab.c"
    break;

  case 71: /* relationalOp: DIFFERENT  */
#line 378 "guillex.y"
              {
      (yyval.treeNode) = createNode1("DIFFERENT", createNode0((yyvsp[0].str)));
  }
#line 3246 "guillex.tab.c"
    break;

  case 72: /* sumExp: sumExp sumOp mulExp  */
#line 384 "guillex.y"
                        {
      (yyval.treeNode) = createNode3("sumExp sumOp mulExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3254 "guillex.tab.c"
    break;

  case 73: /* sumExp: mulExp  */
#line 387 "guillex.y"
           {
      (yyval.treeNode) = createNode1("mulExp", (yyvsp[0].treeNode));
  }
#line 3262 "guillex.tab.c"
    break;

  case 74: /* sumOp: ADD  */
#line 393 "guillex.y"
        {
      (yyval.treeNode) = createNode1("ADD", createNode0((yyvsp[0].str)));
    }
#line 3270 "guillex.tab.c"
    break;

  case 75: /* sumOp: SUB  */
#line 396 "guillex.y"
        {
      (yyval.treeNode) = createNode1("SUB", createNode0((yyvsp[0].str)));
  }
#line 3278 "guillex.tab.c"
    break;

  case 76: /* mulExp: mulExp mulOp factor  */
#line 402 "guillex.y"
                        {
      (yyval.treeNode) = createNode3("mulExp mulOp factor", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3286 "guillex.tab.c"
    break;

  case 77: /* mulExp: factor  */
#line 405 "guillex.y"
           {
      (yyval.treeNode) = createNode1("factor", (yyvsp[0].treeNode));
  }
#line 3294 "guillex.tab.c"
    break;

  case 78: /* mulExp: sumOp factor  */
#line 408 "guillex.y"
                 {
      (yyval.treeNode) = createNode2("sumOp factor", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
  }
#line 3302 "guillex.tab.c"
    break;

  case 79: /* mulOp: MULT  */
#line 414 "guillex.y"
         {
      (yyval.treeNode) = createNode1("MULT", createNode0((yyvsp[0].str)));
    }
#line 3310 "guillex.tab.c"
    break;

  case 80: /* mulOp: DIV  */
#line 417 "guillex.y"
        {
      (yyval.treeNode) = createNode1("DIV", createNode0((yyvsp[0].str)));
  }
#line 3318 "guillex.tab.c"
    break;

  case 81: /* factor: ID  */
#line 423 "guillex.y"
       {
      (yyval.treeNode) = createNode1("ID", createNode0((yyvsp[0].str)));
    }
#line 3326 "guillex.tab.c"
    break;

  case 82: /* factor: fCall  */
#line 426 "guillex.y"
          {
      (yyval.treeNode) = createNode1("fCall", (yyvsp[0].treeNode));
  }
#line 3334 "guillex.tab.c"
    break;

  case 83: /* factor: PARENL simpleExp PARENR  */
#line 429 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("PARENL simpleExp PARENR", (yyvsp[-1].treeNode));
  }
#line 3342 "guillex.tab.c"
    break;

  case 84: /* factor: constOp  */
#line 432 "guillex.y"
            {
      (yyval.treeNode) = createNode1("constOp", (yyvsp[0].treeNode));
  }
#line 3350 "guillex.tab.c"
    break;

  case 85: /* fCall: ID PARENL callParams PARENR  */
#line 438 "guillex.y"
                                 {
      (yyval.treeNode) = createNode2("ID PARENL callParams PARENR", createNode0((yyvsp[-3].str)), (yyvsp[-1].treeNode));
    }
#line 3358 "guillex.tab.c"
    break;

  case 86: /* fCall: ID PARENL PARENR  */
#line 441 "guillex.y"
                     {
    (yyval.treeNode) = createNode1("ID PARENL PARENR", createNode0((yyvsp[-2].str)));
  }
#line 3366 "guillex.tab.c"
    break;

  case 87: /* callParams: callParams COMMA simpleExp  */
#line 447 "guillex.y"
                               {
      (yyval.treeNode) = createNode2("callParams COMMA simpleExp", (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 3374 "guillex.tab.c"
    break;

  case 88: /* callParams: simpleExp  */
#line 450 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3382 "guillex.tab.c"
    break;


#line 3386 "guillex.tab.c"

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

#line 457 "guillex.y"


void yyerror(const char* msg) {
  printf("%s\n", msg);
  printf ("%s, linha: %d, coluna: %d\n", msg,line,wordPosition);
  errors++;
}

int main(int argc, char *argv[]) {
  // #ifdef YYDEBUG
  // yydebug = 1;
  // #endif

  printf("\n\n#### beginning ####\n\n");
  abstractSyntaxTree = NULL;
  FILE *file;
  file = fopen(argv[1], "r");
  if(argc > 1){
    if(file){
      yyin = file;
      yyparse();
      printf("------------------------symbols---------------------\n");
      printSymbols();
      printf("-------------------------tree-----------------------\n");
      printTree(abstractSyntaxTree);
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
