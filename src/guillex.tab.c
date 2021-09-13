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
  YYSYMBOL_MAP = 29,                       /* MAP  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_THEN = 31,                      /* THEN  */
  YYSYMBOL_IF = 32,                        /* IF  */
  YYSYMBOL_FOR = 33,                       /* FOR  */
  YYSYMBOL_READ = 34,                      /* READ  */
  YYSYMBOL_WRITE = 35,                     /* WRITE  */
  YYSYMBOL_WRITELN = 36,                   /* WRITELN  */
  YYSYMBOL_RETURN = 37,                    /* RETURN  */
  YYSYMBOL_SEMIC = 38,                     /* SEMIC  */
  YYSYMBOL_COMMA = 39,                     /* COMMA  */
  YYSYMBOL_STFUNC = 40,                    /* STFUNC  */
  YYSYMBOL_ENDFUNC = 41,                   /* ENDFUNC  */
  YYSYMBOL_PARENL = 42,                    /* PARENL  */
  YYSYMBOL_PARENR = 43,                    /* PARENR  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_declarationList = 46,           /* declarationList  */
  YYSYMBOL_declaration = 47,               /* declaration  */
  YYSYMBOL_varDeclaration = 48,            /* varDeclaration  */
  YYSYMBOL_funcDeclaration = 49,           /* funcDeclaration  */
  YYSYMBOL_simpleVarDeclaration = 50,      /* simpleVarDeclaration  */
  YYSYMBOL_simpleFuncDeclaration = 51,     /* simpleFuncDeclaration  */
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
  YYSYMBOL_relationalExp = 76,             /* relationalExp  */
  YYSYMBOL_relationalOp = 77,              /* relationalOp  */
  YYSYMBOL_sumExp = 78,                    /* sumExp  */
  YYSYMBOL_sumOp = 79,                     /* sumOp  */
  YYSYMBOL_mulExp = 80,                    /* mulExp  */
  YYSYMBOL_mulOp = 81,                     /* mulOp  */
  YYSYMBOL_factor = 82,                    /* factor  */
  YYSYMBOL_fCall = 83,                     /* fCall  */
  YYSYMBOL_callParams = 84                 /* callParams  */
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
#define YYLAST   4736

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  306

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    69,    72,    78,    81,    87,    92,    95,
     102,   110,   118,   121,   127,   133,   139,   142,   148,   151,
     154,   157,   160,   163,   166,   169,   172,   178,   184,   187,
     193,   196,   202,   208,   211,   214,   217,   223,   229,   235,
     238,   244,   250,   256,   259,   265,   272,   278,   281,   284,
     287,   293,   299,   302,   308,   311,   317,   320,   326,   329,
     332,   339,   342,   349,   352,   355,   358,   361,   364,   370,
     373,   379,   382,   388,   391,   394,   400,   403,   409,   412,
     415,   418,   424,   427,   433,   436
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
  "NEG", "MAP", "ELSE", "THEN", "IF", "FOR", "READ", "WRITE", "WRITELN",
  "RETURN", "SEMIC", "COMMA", "STFUNC", "ENDFUNC", "PARENL", "PARENR",
  "$accept", "program", "declarationList", "declaration", "varDeclaration",
  "funcDeclaration", "simpleVarDeclaration", "simpleFuncDeclaration",
  "params", "param", "compoundStmt", "stmtList", "primitiveStmt",
  "exprStmt", "condStmt", "iterStmt", "returnStmt", "listStmt",
  "appendOps", "returnListOps", "returnListOp", "destroyHeadOps",
  "mapFilterOps", "expression", "assignExp", "simpleExp", "constOp",
  "inOp", "outOp", "outConst", "binLogicalExp", "binLogicalOp",
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
     295,   296,   297,   298
};
#endif

#define YYPACT_NINF (-162)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,    18,    31,    12,    89,   120,   121,   -12,    -8,    -1,
    -162,   126,   128,    19,    36,    10,    23,    24,    26,    38,
    3059,   149,    10,    42,  4027,  4291,  4320,  4349,  4378,    40,
     253,    53,    54,    60,    -2,    29,    41,    44,    49,    67,
     137,  1779,  1819,  1859,  1899,  1939,  1979,  2019,  2059,  2099,
    2139,  2179,    65,  2219,  2259,    46,    59,    68,  4407,  2299,
    2339,   304,  1340,  4683,  1149,  4436,  4465,  4175,   152,   100,
      67,    91,    70,   137,    67,   102,   629,   629,  4093,    76,
    4494,  3185,    92,   157,  2379,  2419,  2459,   562,   683,  1380,
    1420,   709,   749,   789,   829,   869,   909,   949,   949,  4523,
    1189,  1229,  1149,   134,   116,   117,  4204,   143,   164,  2499,
     123,   122,   131,   148,   154,   161,   166,   169,  2539,  4552,
    4698,  4581,  4610,   139,  2579,   989,  4233,  3099,   949,   949,
     177,   193,   199,  2619,   167,   619,   201,   203,  2659,  2699,
    2739,  3059,   160,   160,  2779,   165,   202,   204,  3059,  3059,
    2819,  2859,   249,  3059,   217,  3680,  3699,  3718,  3737,   137,
    3756,   108,  3057,  3989,  1269,  3775,  3794,  3813,  1029,  1069,
    4126,  3132,  3204,  3238,  3272,  3306,   137,  3340,   229,  4141,
    3943,  1309,  3374,  3408,  3442,   551,   561,  4060,   260,   225,
     237,   238,   239,   248,    67,  3059,   659,   259,   699,   739,
     779,   819,   859,   899,   939,   979,   284,  1019,  1059,   262,
    1099,  1139,  4262,  1109,   270,  2899,  2939,   271,   263,   331,
     361,   573,   137,   137,  3832,  1269,   604,   273,   309,   413,
     582,  4135,   989,   989,  3476,  1309,  4639,   175,  3851,   187,
     314,   283,   137,    67,   319,   629,   629,   288,  2979,  1179,
    1219,  1259,   333,  3166,   300,   306,   311,  3019,  3870,  4008,
    3889,  3908,  3510,   197,  3544,  3973,  3578,  3612,  4668,  3927,
     312,  1299,   315,   317,   343,   326,   339,   342,  1339,  1379,
     349,  3646,  1419,  3099,   949,   949,   356,   364,   365,  1459,
    1499,   368,   373,  1539,  1579,  1619,  3099,   160,   160,  1659,
     355,   372,  3099,  3099,  1699,  1739
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -162,  -162,  -162,   414,     2,  -162,     0,  -162,  -162,   402,
     -14,  -144,   -37,  -113,  -109,   -83,   -54,    32,    37,    61,
      90,    94,   105,   -32,   -63,   125,   254,   214,   245,   -73,
     -18,  -142,   432,  -127,   360,   236,   307,  -150,   289,   -10,
    -161
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    41,     6,   154,     8,    17,    18,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,   116,
      61,    90,    62,    97,    63,    64,    65,   102,    66,   167,
     108
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    21,     5,     7,   117,     5,    84,    79,    68,   215,
      67,   111,    -2,    16,   199,   225,     1,    16,   200,   221,
       1,     9,   161,    14,   237,   239,    12,   -14,    14,    80,
     -13,    10,   235,    67,    13,   222,   231,   -10,   105,    19,
      73,   -11,   -10,   -71,   201,   -71,   -12,   -71,   -71,   -71,
      20,   248,   232,   178,    80,   161,   -39,   -40,   161,   161,
      80,   184,    15,    72,    80,   263,   -14,    22,    85,   -13,
      78,    74,    25,   202,    26,    27,    28,    29,    30,   146,
     147,   -10,   -71,    75,    86,   -12,    76,    80,    80,    -4,
     135,    77,    80,    -4,   171,   209,   172,   -43,   173,   174,
     175,    29,    30,   104,   144,   113,   -44,   178,   109,    40,
     225,   150,   151,   198,   118,   184,   235,   212,    80,    80,
      -5,    -6,   218,   219,    -5,    -6,    -3,   197,    -7,   196,
      -3,    67,    -7,   176,   106,   119,   220,   123,    67,    67,
      81,   161,   155,    67,   156,   157,   158,    29,    30,    -9,
     255,   -46,    -8,    -9,   124,   -45,    -8,   -15,   161,   203,
     128,   -15,   247,   145,   204,    82,   127,   178,   178,   129,
     199,   184,   276,   277,   200,   184,   184,   133,    84,   159,
     273,   254,   -85,   199,    80,    67,   -85,   200,   205,   199,
     199,   130,   213,   200,   200,   161,   107,   -54,   110,   112,
     201,   115,   115,   125,   -55,    67,   -84,   126,   178,   131,
     -84,    84,   132,   201,   125,   138,   184,   206,   268,   201,
     201,   207,   184,   184,   161,   184,   125,   161,   161,   202,
     269,   139,   208,    80,   300,   301,   125,   140,    67,   142,
     281,   143,   202,   228,   229,   148,   290,   149,   202,   202,
     134,   209,   214,   136,   137,   216,   -72,   230,   -72,   299,
     -72,   -72,   -72,   241,   209,   304,   305,   242,   -46,   198,
     209,   209,   -46,   212,    80,    80,   164,   -58,   -58,   243,
     244,   245,   198,   197,   217,   196,   212,   250,   198,   198,
     246,   -58,   212,   212,   160,   -72,   197,   249,   196,    98,
     251,   227,   197,   197,   196,   196,   -58,   181,   -10,   164,
     107,   107,   164,   164,   258,   203,   264,   270,    87,    88,
     204,   271,   275,   -58,   -58,   177,   278,   160,   203,   166,
     160,   160,    89,   204,   203,   203,   280,   -58,   256,   204,
     204,   210,   -46,   -45,   205,   -59,   -59,   165,   -58,   -43,
     282,   107,   -58,    99,   -44,   284,    98,   205,   283,   -59,
     183,   181,   166,   205,   205,   166,   166,   272,   274,   286,
     115,   115,   211,   206,   -59,   -60,   -60,   207,   182,   177,
     165,   285,   287,   165,   165,   288,   206,   289,   208,   -60,
     207,   122,   206,   206,   293,   164,   207,   207,   302,   223,
     163,   208,   294,   295,   -60,   121,   297,   208,   208,   291,
     292,   298,   164,   160,   183,   303,   233,    11,   160,    23,
       0,   181,   181,     0,     0,     0,     0,   -59,   -59,     0,
     160,   180,   182,   163,     0,   177,   163,   163,     0,   177,
     177,   -59,     0,     0,     0,     0,     0,     0,   166,   164,
       0,     0,   -59,   224,     0,     0,   -59,   120,   164,   164,
       0,     0,   181,     0,     0,   166,   165,   160,   181,   181,
     234,     0,   162,     0,   183,   183,   160,   160,   164,   160,
     177,   164,   164,   165,     0,   180,   177,   177,     0,   177,
       0,     0,   182,   182,     0,   223,   160,   210,     0,   160,
     160,   233,   166,   179,     0,   162,     0,     0,   162,   162,
     210,   166,   166,     0,   261,   183,   210,   210,     0,   163,
     165,   183,   183,     0,   267,     0,     0,     0,   211,   165,
     260,   166,     0,   182,   166,   166,   163,     0,     0,   182,
     266,   211,     0,     0,     0,   180,   180,   211,   211,   165,
       0,     0,   165,   165,   171,     0,   172,   179,   173,   174,
     175,    29,    30,     0,   171,     0,   172,     0,   173,   174,
     175,    29,    30,   163,     0,     0,   -58,   -58,     0,     0,
       0,     0,   259,     0,     0,     0,   180,   -56,   -56,     0,
     -58,   162,   265,   176,   236,     0,   -60,   -60,     0,     0,
     -58,   -56,   163,   176,   238,   163,   163,   171,   162,   172,
     -60,   173,   174,   175,    29,    30,   -56,   179,   179,     0,
       0,   -60,   -28,   -28,   -28,   -60,   -28,   -28,   -28,   -28,
     -28,     0,    81,     0,   155,   114,   156,   157,   158,    29,
      30,     0,   -28,   -28,   -28,   162,   176,   262,     0,   141,
       0,   -28,   -28,   -28,   -28,   -28,   -28,     0,   179,   -28,
     -28,   -28,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   159,     0,     0,   162,     0,     0,   162,   162,     0,
       0,     0,   -26,   -26,   -26,     0,     0,     0,     0,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   -59,   -59,   -26,
     -26,   -26,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,
     -19,   -59,   -63,     0,   -63,     0,   -63,   -63,   -63,   -63,
     -63,   -59,   -19,   -19,   -19,     0,     0,     0,     0,   -19,
       0,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,   -19,
     -19,   -19,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,
     -18,   -63,   -64,     0,   -64,     0,   -64,   -64,   -64,   -64,
     -64,     0,   -18,   -18,   -18,     0,     0,     0,     0,   -18,
       0,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,   -18,
     -18,   -18,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,
     -20,   -64,   -65,     0,   -65,     0,   -65,   -65,   -65,   -65,
     -65,     0,   -20,   -20,   -20,     0,     0,     0,     0,   -20,
       0,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,
     -20,   -20,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -65,   -66,     0,   -66,     0,   -66,   -66,   -66,   -66,
     -66,     0,   -21,   -21,   -21,     0,     0,     0,     0,   -21,
       0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,   -21,
     -21,   -21,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -66,   -67,     0,   -67,     0,   -67,   -67,   -67,   -67,
     -67,     0,   -22,   -22,   -22,     0,     0,     0,     0,   -22,
       0,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,
     -22,   -22,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -67,   -68,     0,   -68,     0,   -68,   -68,   -68,   -68,
     -68,     0,   -23,   -23,   -23,     0,     0,     0,     0,   -23,
       0,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,
     -23,   -23,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -68,   170,     0,    25,     0,    26,    27,    28,    29,
      30,     0,   -33,   -33,   -33,     0,     0,     0,     0,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,
     -33,   -33,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,    40,   171,     0,   172,     0,   173,   174,   175,    29,
      30,     0,   -34,   -34,   -34,     0,     0,     0,     0,   -34,
       0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,
     -34,   -34,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   176,   -71,     0,   -71,     0,   -71,   -71,   -71,   -71,
     -71,     0,   -35,   -35,   -35,     0,     0,     0,     0,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
     -35,   -35,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -71,   -72,     0,   -72,     0,   -72,   -72,   -72,   -72,
     -72,     0,   -36,   -36,   -36,     0,     0,     0,     0,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,   -36,
     -36,   -36,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,
     -24,   -72,   253,     0,   155,     0,   156,   157,   158,    29,
      30,     0,   -24,   -24,   -24,     0,     0,     0,     0,   -24,
       0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,   -24,
     -24,   -24,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   159,   170,     0,    25,     0,    26,    27,    28,     0,
       0,     0,   -25,   -25,   -25,     0,     0,     0,     0,   -25,
       0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,
     -25,   -25,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,
      -7,    40,   -76,     0,   -76,     0,   -76,   -76,   -76,     0,
       0,     0,    -7,    -7,    -7,     0,     0,     0,     0,    -7,
       0,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,
      -7,    -7,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -76,   -77,     0,   -77,     0,   -77,   -77,   -77,     0,
       0,     0,   -38,   -38,   -38,     0,     0,     0,     0,   -38,
       0,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,
     -38,   -38,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -77,    81,     0,   155,     0,   156,   157,   158,     0,
       0,     0,   -27,   -27,   -27,     0,     0,     0,     0,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,
     -27,   -27,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,
     -41,   159,   171,     0,   172,     0,   173,   174,   175,     0,
       0,     0,   -41,   -41,   -41,     0,     0,     0,     0,   -41,
       0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,
     -41,   -41,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   176,     0,     0,   -57,   -57,    91,    92,    93,    94,
      95,    96,   -32,   -32,   -32,     0,     0,     0,   -57,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -57,   -32,
     -32,   -32,   -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,
     -15,     0,     0,     0,   -60,   -60,     0,     0,     0,     0,
       0,     0,   -15,   -15,   -15,     0,     0,     0,   -60,   -15,
       0,   -15,   -15,   -15,   -15,   -15,   -15,     0,   -60,   -15,
     -15,   -15,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,   -56,   -56,     0,     0,     0,     0,
       0,     0,   -37,   -37,   -37,     0,     0,     0,   -56,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -56,   -37,
     -37,   -37,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -42,   -42,   -42,     0,     0,     0,     0,   -42,
       0,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,   -42,
     -42,   -42,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -28,   -28,   -28,     0,     0,     0,     0,   296,
       0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,   -28,
     -28,   -28,   -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,
     -51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -51,   -51,   -51,     0,     0,     0,     0,   -51,
       0,   -51,   -51,   -51,   -51,   -51,   -51,     0,     0,   -51,
     -51,   -51,   -52,   -52,   -52,     0,   -52,   -52,   -52,   -52,
     -52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -52,   -52,   -52,     0,     0,     0,     0,   -52,
       0,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,   -52,
     -52,   -52,   -53,   -53,   -53,     0,   -53,   -53,   -53,   -53,
     -53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -53,   -53,   -53,     0,     0,     0,     0,   -53,
       0,   -53,   -53,   -53,   -53,   -53,   -53,     0,     0,   -53,
     -53,   -53,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -29,   -29,   -29,     0,     0,     0,     0,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,
     -29,   -29,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -30,   -30,   -30,     0,     0,     0,     0,   -30,
       0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -31,   -31,   -31,     0,     0,     0,     0,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,
     -31,   -31,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -26,   -26,   -26,     0,     0,     0,     0,     0,
       0,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,
     -26,   -26,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,
     -19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -19,   -19,   -19,     0,     0,     0,     0,     0,
       0,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,   -19,
     -19,   -19,    24,   152,    25,     0,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,    38,    39,     0,     0,   153,
      83,    40,   -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,
     -17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -17,   -17,   -17,     0,     0,     0,     0,     0,
       0,   -17,   -17,   -17,   -17,   -17,   -17,     0,     0,   -17,
     -17,   -17,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,
     -18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -18,   -18,   -18,     0,     0,     0,     0,     0,
       0,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,   -18,
     -18,   -18,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,
     -20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -20,   -20,   -20,     0,     0,     0,     0,     0,
       0,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,
     -20,   -20,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -21,   -21,   -21,     0,     0,     0,     0,     0,
       0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,   -21,
     -21,   -21,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,
     -22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -22,   -22,   -22,     0,     0,     0,     0,     0,
       0,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,
     -22,   -22,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -23,   -23,   -23,     0,     0,     0,     0,     0,
       0,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,
     -23,   -23,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -33,   -33,   -33,     0,     0,     0,     0,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,
     -33,   -33,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -34,   -34,   -34,     0,     0,     0,     0,     0,
       0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,
     -34,   -34,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,
     -35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -35,   -35,   -35,     0,     0,     0,     0,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
     -35,   -35,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -36,   -36,   -36,     0,     0,     0,     0,     0,
       0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,   -36,
     -36,   -36,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,
     -24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -24,   -24,   -24,     0,     0,     0,     0,     0,
       0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,   -24,
     -24,   -24,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -25,   -25,   -25,     0,     0,     0,     0,     0,
       0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,
     -25,   -25,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,
     -16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -16,   -16,   -16,     0,     0,     0,     0,     0,
       0,   -16,   -16,   -16,   -16,   -16,   -16,     0,     0,   -16,
     -16,   -16,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     -38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -38,   -38,   -38,     0,     0,     0,     0,     0,
       0,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,
     -38,   -38,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,
     -27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -27,   -27,   -27,     0,     0,     0,     0,     0,
       0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,
     -27,   -27,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,
     -41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -41,   -41,   -41,     0,     0,     0,     0,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,
     -41,   -41,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -32,   -32,   -32,     0,     0,     0,     0,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,
     -32,   -32,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -37,   -37,   -37,     0,     0,     0,     0,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,
     -37,   -37,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -42,   -42,   -42,     0,     0,     0,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,   -42,
     -42,   -42,   -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,
     -51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -51,   -51,   -51,     0,     0,     0,     0,     0,
       0,   -51,   -51,   -51,   -51,   -51,   -51,     0,     0,   -51,
     -51,   -51,   -52,   -52,   -52,     0,   -52,   -52,   -52,   -52,
     -52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -52,   -52,   -52,     0,     0,     0,     0,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,   -52,
     -52,   -52,   -53,   -53,   -53,     0,   -53,   -53,   -53,   -53,
     -53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -53,   -53,   -53,     0,     0,     0,     0,     0,
       0,   -53,   -53,   -53,   -53,   -53,   -53,     0,     0,   -53,
     -53,   -53,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -29,   -29,   -29,     0,     0,     0,     0,     0,
       0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,
     -29,   -29,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -30,   -30,   -30,     0,     0,     0,     0,     0,
       0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -31,   -31,   -31,     0,     0,     0,     0,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,
     -31,   -31,    24,   152,    25,     0,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,    38,    39,     0,     0,   153,
     257,    40,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,
      -7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -7,    -7,    -7,     0,     0,     0,     0,     0,
       0,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,
      -7,    -7,    24,   152,    25,     0,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,    38,    39,     0,     0,   153,
     279,    40,   -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,
     -15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -15,   -15,   -15,     0,     0,     0,     0,     0,
       0,   -15,   -15,   -15,   -15,   -15,   -15,     0,     0,   -15,
     -15,   -15,    24,   152,    25,     0,    26,    27,    28,    29,
      30,   -57,   -57,    91,    92,    93,    94,    95,    96,     0,
       0,     0,    31,    32,    33,   -57,     0,     0,     0,     0,
       0,    34,    35,    36,    37,    38,    39,     0,     0,   153,
     -57,    40,   187,   152,    25,     0,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,   188,     0,     0,     0,     0,     0,
       0,   189,   190,   191,   192,   193,   194,     0,     0,   195,
       0,    40,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,     0,
     -78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -78,     0,     0,   226,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
       0,     0,     0,   213,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   186,   -78,
       0,     0,     0,   -78,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,     0,   186,   -78,     0,
       0,     0,   -49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -49,     0,     0,     0,   -49,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
       0,     0,     0,     0,     0,     0,   -50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -50,     0,     0,
       0,   -50,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,     0,     0,     0,     0,     0,     0,
     -47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -47,     0,     0,     0,   -47,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,     0,
       0,     0,     0,     0,   -48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -48,     0,     0,     0,   -48,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,   -81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -81,
       0,     0,     0,   -81,   -70,   -70,   100,   101,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
       0,     0,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -70,     0,     0,     0,   -70,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,   -74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -74,     0,     0,
       0,   -74,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,     0,
     -79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -79,     0,     0,     0,   -79,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,   -75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -75,     0,     0,     0,   -75,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,     0,     0,   -83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -83,
       0,     0,     0,   -83,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,   -80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -80,     0,     0,     0,   -80,   -69,   -69,
     100,   101,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,   -69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -69,     0,     0,
       0,   -69,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
     -73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -73,     0,     0,     0,   -73,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,     0,     0,     0,   -82,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,     0,     0,     0,     0,     0,   -49,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,     0,     0,   -49,     0,     0,     0,   -50,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
       0,     0,   -50,     0,     0,     0,   -47,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
       0,   -47,     0,     0,     0,   -48,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
     -48,     0,     0,     0,   -81,   -70,   -70,   100,   101,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,   -81,
       0,     0,     0,   -70,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,   -70,     0,
       0,     0,   -74,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   -74,     0,     0,
       0,   -79,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,   -79,     0,     0,     0,
     -75,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,   -75,     0,     0,     0,   -83,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,   -83,     0,     0,     0,   -80,   -69,
     -69,   100,   101,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,   -80,     0,     0,     0,   -69,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,   -69,     0,     0,     0,   -73,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,   -73,     0,   168,   169,   -82,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,     0,
     -82,   -62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -62,   168,   169,     0,   -62,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,     0,     0,   168,
     169,   -61,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,     0,   -61,     0,     0,     0,   -61,   -62,   168,   169,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
       0,     0,   -62,     0,     0,     0,   -61,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,    69,
       0,   -61,     0,     0,    70,   -78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -78,     0,     0,     0,    71,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   240,     0,     0,     0,     0,    70,   -78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -78,     0,
       0,     0,    71,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,
      70,   -78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -78,     0,     0,     0,   185,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -56,
     -56,     0,     0,     0,   -78,   -57,   -57,    91,    92,    93,
      94,    95,    96,   -56,   -78,     0,     0,     0,   185,   -57,
       0,     0,     0,     0,   -56,     0,     0,     0,   -56,     0,
     -57,     0,     0,     0,   -57,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,     0,     0,   -79,   103,     0,     0,     0,     0,     0,
       0,     0,     0,   -79,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,     0,   -83,   -83,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
       0,   -82,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,     0,
     -79,   252,     0,     0,     0,     0,     0,     0,     0,     0,
     -79,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,     0,     0,     0,     0,     0,   -49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -49,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,     0,     0,     0,     0,     0,   -50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -50,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,     0,     0,     0,     0,     0,   -47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -47,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,     0,     0,     0,     0,     0,   -48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -48,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,     0,     0,   -81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -81,   -70,   -70,   100,   101,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,     0,     0,   -70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -70,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,     0,     0,   -74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -74,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
       0,     0,   -79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -79,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,
       0,   -75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -75,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
     -80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -80,   -69,   -69,   100,   101,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,   -69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -69,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,   -73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -73,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,     0,     0,     0,   -83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -83,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,   168,   169,     0,   -82,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   -82,     0,   168,   169,
       0,   -62,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
       0,   -62,     0,     0,     0,     0,   -61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -61
};

static const yytype_int16 yycheck[] =
{
       0,    15,     0,     3,    77,     3,    43,    39,    22,   153,
      20,    74,     0,    13,   127,   165,     4,    17,   127,   161,
       4,     3,    40,     4,   185,   186,    38,     4,     4,    39,
       4,     0,   182,    43,    42,   162,   178,    38,    70,     3,
      42,    42,     4,     3,   127,     5,     4,     7,     8,     9,
      40,   195,   179,    71,    64,    73,     3,     3,    76,    77,
      70,    71,    43,     3,    74,   226,    43,    43,     3,    43,
       3,    42,     5,   127,     7,     8,     9,    10,    11,   142,
     143,    43,    42,    42,    38,    43,    42,    97,    98,     0,
     127,    42,   102,     4,     3,   127,     5,    38,     7,     8,
       9,    10,    11,     3,   141,     3,    38,   125,    38,    42,
     260,   148,   149,   127,    38,   125,   266,   127,   128,   129,
       0,     0,    14,    15,     4,     4,     0,   127,     0,   127,
       4,   141,     4,    42,    43,    43,    28,     3,   148,   149,
       3,   159,     5,   153,     7,     8,     9,    10,    11,     0,
     213,    43,     0,     4,    38,    38,     4,     0,   176,   127,
      38,     4,   194,     3,   127,    40,    43,   185,   186,    38,
     283,   181,   245,   246,   283,   185,   186,    38,   215,    42,
     243,   213,    39,   296,   194,   195,    43,   296,   127,   302,
     303,    43,    27,   302,   303,   213,    71,    43,    73,    74,
     283,    76,    77,    39,    43,   215,    39,    43,   226,    43,
      43,   248,    43,   296,    39,    38,   226,   127,    43,   302,
     303,   127,   232,   233,   242,   235,    39,   245,   246,   283,
      43,    38,   127,   243,   297,   298,    39,    38,   248,    38,
      43,    38,   296,    14,    15,    43,   283,    43,   302,   303,
     125,   283,     3,   128,   129,    38,     3,    28,     5,   296,
       7,     8,     9,     3,   296,   302,   303,    42,    39,   283,
     302,   303,    43,   283,   284,   285,    40,    14,    15,    42,
      42,    42,   296,   283,   159,   283,   296,     3,   302,   303,
      42,    28,   302,   303,    40,    42,   296,    38,   296,    63,
      38,   176,   302,   303,   302,   303,    43,    71,    38,    73,
     185,   186,    76,    77,    43,   283,    43,     3,    14,    15,
     283,    38,     3,    14,    15,    71,    38,    73,   296,    40,
      76,    77,    28,   296,   302,   303,     3,    28,   213,   302,
     303,   127,    38,    43,   283,    14,    15,    40,    39,    43,
      38,   226,    43,    64,    43,    38,   120,   296,    43,    28,
      71,   125,    73,   302,   303,    76,    77,   242,   243,    43,
     245,   246,   127,   283,    43,    14,    15,   283,    71,   125,
      73,    38,    43,    76,    77,    43,   296,    38,   283,    28,
     296,   102,   302,   303,    38,   159,   302,   303,    43,   163,
      40,   296,    38,    38,    43,    98,    38,   302,   303,   284,
     285,    38,   176,   159,   125,    43,   180,     3,   164,    17,
      -1,   185,   186,    -1,    -1,    -1,    -1,    14,    15,    -1,
     176,    71,   125,    73,    -1,   181,    76,    77,    -1,   185,
     186,    28,    -1,    -1,    -1,    -1,    -1,    -1,   159,   213,
      -1,    -1,    39,   164,    -1,    -1,    43,    97,   222,   223,
      -1,    -1,   226,    -1,    -1,   176,   159,   213,   232,   233,
     181,    -1,    40,    -1,   185,   186,   222,   223,   242,   225,
     226,   245,   246,   176,    -1,   125,   232,   233,    -1,   235,
      -1,    -1,   185,   186,    -1,   259,   242,   283,    -1,   245,
     246,   265,   213,    71,    -1,    73,    -1,    -1,    76,    77,
     296,   222,   223,    -1,   225,   226,   302,   303,    -1,   159,
     213,   232,   233,    -1,   235,    -1,    -1,    -1,   283,   222,
     223,   242,    -1,   226,   245,   246,   176,    -1,    -1,   232,
     233,   296,    -1,    -1,    -1,   185,   186,   302,   303,   242,
      -1,    -1,   245,   246,     3,    -1,     5,   125,     7,     8,
       9,    10,    11,    -1,     3,    -1,     5,    -1,     7,     8,
       9,    10,    11,   213,    -1,    -1,    14,    15,    -1,    -1,
      -1,    -1,   222,    -1,    -1,    -1,   226,    14,    15,    -1,
      28,   159,   232,    42,    43,    -1,    14,    15,    -1,    -1,
      38,    28,   242,    42,    43,   245,   246,     3,   176,     5,
      28,     7,     8,     9,    10,    11,    43,   185,   186,    -1,
      -1,    39,     3,     4,     5,    43,     7,     8,     9,    10,
      11,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,   213,    42,    43,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,   226,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,    -1,    -1,   242,    -1,    -1,   245,   246,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    14,    15,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    28,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    38,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,     3,    -1,     5,    -1,     7,     8,     9,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    42,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    23,    24,    25,    -1,    -1,    -1,    28,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    38,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    28,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    38,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    28,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    38,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    23,    24,    25,    28,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      43,    42,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    42,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    42,    43,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    27,    28,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    42,    43,
      -1,    -1,    -1,    28,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    42,    43,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    43,    -1,    -1,    -1,    28,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    43,    -1,    -1,    -1,    28,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    43,    -1,    -1,    -1,    28,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      43,    -1,    -1,    -1,    28,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    43,
      -1,    -1,    -1,    28,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    43,    -1,
      -1,    -1,    28,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    43,    -1,    -1,
      -1,    28,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    43,    -1,    -1,    -1,
      28,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    43,    -1,    -1,    -1,    28,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    43,    -1,    -1,    -1,    28,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    43,    -1,    -1,    -1,    28,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    43,    -1,    -1,    -1,    28,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    43,    -1,    10,    11,    28,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      43,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    10,    11,    -1,    43,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    10,
      11,    28,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    39,    -1,    -1,    -1,    43,    28,    10,    11,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    43,    -1,    -1,    -1,    28,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    43,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    14,
      15,    -1,    -1,    -1,    28,    14,    15,    16,    17,    18,
      19,    20,    21,    28,    38,    -1,    -1,    -1,    42,    28,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,
      39,    -1,    -1,    -1,    43,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    10,    11,    -1,    28,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    38,    -1,    10,    11,
      -1,    28,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    38,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    45,    46,    47,    48,    49,    50,    51,     3,
       0,    47,    38,    42,     4,    43,    50,    52,    53,     3,
      40,    54,    43,    53,     3,     5,     7,     8,     9,    10,
      11,    23,    24,    25,    32,    33,    34,    35,    36,    37,
      42,    48,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    74,    76,    78,    79,    80,    82,    83,    54,    22,
      27,    42,     3,    42,    42,    42,    42,    42,     3,    67,
      83,     3,    69,    41,    56,     3,    38,    14,    15,    28,
      75,    16,    17,    18,    19,    20,    21,    77,    79,    82,
      12,    13,    81,    29,     3,    67,    43,    69,    84,    38,
      69,    68,    69,     3,     6,    69,    73,    73,    38,    43,
      78,    80,    82,     3,    38,    39,    43,    43,    38,    38,
      43,    43,    43,    38,    69,    56,    69,    69,    38,    38,
      38,    30,    38,    38,    56,     3,    68,    68,    43,    43,
      56,    56,     4,    40,    50,     5,     7,     8,     9,    42,
      70,    74,    76,    78,    79,    80,    82,    83,    10,    11,
       3,     3,     5,     7,     8,     9,    42,    70,    74,    76,
      78,    79,    80,    82,    83,    42,    42,     3,    25,    32,
      33,    34,    35,    36,    37,    40,    48,    50,    54,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      71,    72,    83,    27,     3,    55,    38,    69,    14,    15,
      28,    75,    77,    79,    82,    81,    42,    69,    14,    15,
      28,    75,    77,    79,    82,    81,    43,    84,    43,    84,
      22,     3,    42,    42,    42,    42,    42,    67,    55,    38,
       3,    38,    29,     3,    67,    68,    69,    41,    43,    78,
      80,    82,    43,    84,    43,    78,    80,    82,    43,    43,
       3,    38,    69,    68,    69,     3,    73,    73,    38,    41,
       3,    43,    38,    43,    38,    38,    43,    43,    43,    38,
      56,    69,    69,    38,    38,    38,    30,    38,    38,    56,
      68,    68,    43,    43,    56,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    49,    49,
      50,    51,    52,    52,    53,    54,    55,    55,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    57,    58,    58,
      59,    59,    60,    61,    61,    61,    61,    62,    63,    64,
      64,    65,    66,    67,    67,    68,    69,    70,    70,    70,
      70,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      75,    76,    76,    77,    77,    77,    77,    77,    77,    78,
      78,    79,    79,    80,    80,    80,    81,    81,    82,    82,
      82,    82,    83,    83,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     5,     4,
       2,     2,     2,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     7,
       9,     9,     3,     1,     1,     1,     1,     4,     2,     1,
       1,     3,     4,     1,     1,     3,     1,     1,     1,     1,
       1,     5,     5,     5,     1,     1,     2,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     2,     1,     1,     1,     1,
       3,     1,     4,     3,     3,     1
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
#line 2608 "guillex.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 69 "guillex.y"
                                    {
       (yyval.treeNode) = createNode2("declarationsList declaration", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
     }
#line 2616 "guillex.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 72 "guillex.y"
                      {
    (yyval.treeNode) = createNode1("declaration", (yyvsp[0].treeNode));
  }
#line 2624 "guillex.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 78 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
    }
#line 2632 "guillex.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 81 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("funcDeclaration", (yyvsp[0].treeNode));
    }
#line 2640 "guillex.tab.c"
    break;

  case 7: /* varDeclaration: simpleVarDeclaration SEMIC  */
#line 87 "guillex.y"
                               {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[-1].treeNode));}
#line 2647 "guillex.tab.c"
    break;

  case 8: /* funcDeclaration: simpleFuncDeclaration PARENL params PARENR compoundStmt  */
#line 92 "guillex.y"
                                                             {
      (yyval.treeNode) = createNode3("simpleFuncDeclaration PARENL params PARENR compoundStmt", (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
  }
#line 2655 "guillex.tab.c"
    break;

  case 9: /* funcDeclaration: simpleFuncDeclaration PARENL PARENR compoundStmt  */
#line 95 "guillex.y"
                                                     {
    symbolIdCounter++;
    (yyval.treeNode) = createNode2("simpleFuncDeclaration PARENL PARENR compoundStmt", (yyvsp[-3].treeNode), (yyvsp[0].treeNode));                                                                       
  }
#line 2664 "guillex.tab.c"
    break;

  case 10: /* simpleVarDeclaration: TYPE ID  */
#line 102 "guillex.y"
            {
      addSymbol(symbolIdCounter, (yyvsp[0].str), "var", (yyvsp[-1].str));
      symbolIdCounter++;
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      }
#line 2674 "guillex.tab.c"
    break;

  case 11: /* simpleFuncDeclaration: TYPE ID  */
#line 110 "guillex.y"
            {
      addSymbol(symbolIdCounter, (yyvsp[0].str), "func", (yyvsp[-1].str));
      symbolIdCounter++;
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      }
#line 2684 "guillex.tab.c"
    break;

  case 12: /* params: params param  */
#line 118 "guillex.y"
                 {
      (yyval.treeNode) = createNode2("params param", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
      }
#line 2692 "guillex.tab.c"
    break;

  case 13: /* params: param  */
#line 121 "guillex.y"
          { 
    (yyval.treeNode) = createNode1("param", (yyvsp[0].treeNode)); 
    }
#line 2700 "guillex.tab.c"
    break;

  case 14: /* param: simpleVarDeclaration  */
#line 127 "guillex.y"
                         {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[0].treeNode));
    }
#line 2708 "guillex.tab.c"
    break;

  case 15: /* compoundStmt: STFUNC stmtList ENDFUNC  */
#line 133 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[-1].treeNode));
    }
#line 2716 "guillex.tab.c"
    break;

  case 16: /* stmtList: stmtList primitiveStmt  */
#line 139 "guillex.y"
                              {
      (yyval.treeNode) = createNode2("stmtList primitiveStmt", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 2724 "guillex.tab.c"
    break;

  case 17: /* stmtList: primitiveStmt  */
#line 142 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("primitiveStmt", (yyvsp[0].treeNode));
  }
#line 2732 "guillex.tab.c"
    break;

  case 18: /* primitiveStmt: exprStmt  */
#line 148 "guillex.y"
             {
      (yyval.treeNode) = createNode1("exprStmt", (yyvsp[0].treeNode));
    }
#line 2740 "guillex.tab.c"
    break;

  case 19: /* primitiveStmt: compoundStmt  */
#line 151 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[0].treeNode));
  }
#line 2748 "guillex.tab.c"
    break;

  case 20: /* primitiveStmt: condStmt  */
#line 154 "guillex.y"
             {
    (yyval.treeNode) = createNode1("condStmt", (yyvsp[0].treeNode));
  }
#line 2756 "guillex.tab.c"
    break;

  case 21: /* primitiveStmt: iterStmt  */
#line 157 "guillex.y"
             {
    (yyval.treeNode) = createNode1("iterStmt", (yyvsp[0].treeNode));
  }
#line 2764 "guillex.tab.c"
    break;

  case 22: /* primitiveStmt: returnStmt  */
#line 160 "guillex.y"
               {
    (yyval.treeNode) = createNode1("returnStmt", (yyvsp[0].treeNode));
  }
#line 2772 "guillex.tab.c"
    break;

  case 23: /* primitiveStmt: listStmt  */
#line 163 "guillex.y"
             {
    (yyval.treeNode) = createNode1("listStmt", (yyvsp[0].treeNode));
  }
#line 2780 "guillex.tab.c"
    break;

  case 24: /* primitiveStmt: inOp  */
#line 166 "guillex.y"
         {
    (yyval.treeNode) = createNode1("inOp", (yyvsp[0].treeNode));
  }
#line 2788 "guillex.tab.c"
    break;

  case 25: /* primitiveStmt: outOp  */
#line 169 "guillex.y"
          {
    (yyval.treeNode) = createNode1("outOp", (yyvsp[0].treeNode));
  }
#line 2796 "guillex.tab.c"
    break;

  case 26: /* primitiveStmt: varDeclaration  */
#line 172 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
  }
#line 2804 "guillex.tab.c"
    break;

  case 27: /* exprStmt: expression SEMIC  */
#line 178 "guillex.y"
                     {
      (yyval.treeNode) = createNode1("expression SEMIC", (yyvsp[-1].treeNode));
    }
#line 2812 "guillex.tab.c"
    break;

  case 28: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt  */
#line 184 "guillex.y"
                                                        {
      (yyval.treeNode) = createNode3("IF PARENL simpleExp PARENR primitiveStmt", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 2820 "guillex.tab.c"
    break;

  case 29: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt ELSE primitiveStmt  */
#line 187 "guillex.y"
                                                                {
    (yyval.treeNode) = createNode5("IF PARENL primitiveExp PARENR primitiveStmt ELSE primitiveStmt", createNode0((yyvsp[-6].str)), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), createNode0((yyvsp[-1].str)), (yyvsp[0].treeNode));
  }
#line 2828 "guillex.tab.c"
    break;

  case 30: /* iterStmt: FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 193 "guillex.y"
                                                                              {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-8].str)), (yyvsp[-6].treeNode), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 2836 "guillex.tab.c"
    break;

  case 31: /* iterStmt: FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 196 "guillex.y"
                                                                              {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-8].str)), (yyvsp[-6].treeNode), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
  }
#line 2844 "guillex.tab.c"
    break;

  case 32: /* returnStmt: RETURN expression SEMIC  */
#line 202 "guillex.y"
                            {
      (yyval.treeNode) = createNode2("RETURN expression SEMIC", createNode0((yyvsp[-2].str)), (yyvsp[-1].treeNode));
    }
#line 2852 "guillex.tab.c"
    break;

  case 33: /* listStmt: appendOps  */
#line 208 "guillex.y"
              {
      (yyval.treeNode) = createNode1("appendOps", (yyvsp[0].treeNode));
    }
#line 2860 "guillex.tab.c"
    break;

  case 34: /* listStmt: returnListOps  */
#line 211 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("returnListOps", (yyvsp[0].treeNode));
  }
#line 2868 "guillex.tab.c"
    break;

  case 35: /* listStmt: destroyHeadOps  */
#line 214 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("destroyHeadOps", (yyvsp[0].treeNode));
  }
#line 2876 "guillex.tab.c"
    break;

  case 36: /* listStmt: mapFilterOps  */
#line 217 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("mapFilterOps", (yyvsp[0].treeNode));
  }
#line 2884 "guillex.tab.c"
    break;

  case 37: /* appendOps: ID APPEND ID SEMIC  */
#line 223 "guillex.y"
                       {
      (yyval.treeNode) = createNode3("ID APPEND ID SEMIC", createNode0((yyvsp[-3].str)), createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)));
    }
#line 2892 "guillex.tab.c"
    break;

  case 38: /* returnListOps: returnListOp ID  */
#line 229 "guillex.y"
                    {
      (yyval.treeNode) = createNode2("returnListOp ID", (yyvsp[-1].treeNode), createNode0((yyvsp[0].str)));
    }
#line 2900 "guillex.tab.c"
    break;

  case 39: /* returnListOp: HEADLIST  */
#line 235 "guillex.y"
             {
      (yyval.treeNode) = createNode1("HEADLIST", createNode0((yyvsp[0].str)));
    }
#line 2908 "guillex.tab.c"
    break;

  case 40: /* returnListOp: TAILLIST  */
#line 238 "guillex.y"
             {
      (yyval.treeNode) = createNode1("TAILLIST", createNode0((yyvsp[0].str)));
  }
#line 2916 "guillex.tab.c"
    break;

  case 41: /* destroyHeadOps: DESTROYHEAD ID SEMIC  */
#line 244 "guillex.y"
                         {
      (yyval.treeNode) = createNode2("DESTROYHEAD ID", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)));
    }
#line 2924 "guillex.tab.c"
    break;

  case 42: /* mapFilterOps: fCall MAP ID SEMIC  */
#line 250 "guillex.y"
                       {
      (yyval.treeNode) = createNode3("fCall MAP ID SEMIC", (yyvsp[-3].treeNode), createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)));
    }
#line 2932 "guillex.tab.c"
    break;

  case 43: /* expression: assignExp  */
#line 256 "guillex.y"
              {
      (yyval.treeNode) = createNode1("assignExp", (yyvsp[0].treeNode));
    }
#line 2940 "guillex.tab.c"
    break;

  case 44: /* expression: simpleExp  */
#line 259 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 2948 "guillex.tab.c"
    break;

  case 45: /* assignExp: ID ASSIGN expression  */
#line 265 "guillex.y"
                         {
      (yyval.treeNode) = createNode3("ID ASSIGN expression", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), (yyvsp[0].treeNode));
    }
#line 2956 "guillex.tab.c"
    break;

  case 46: /* simpleExp: binLogicalExp  */
#line 272 "guillex.y"
                  {
      (yyval.treeNode) = createNode1("binLogicalExp", (yyvsp[0].treeNode));
    }
#line 2964 "guillex.tab.c"
    break;

  case 47: /* constOp: INTEGER  */
#line 278 "guillex.y"
            {
      (yyval.treeNode) = createNode1("INTEGER", createNode0Int((yyvsp[0].integer), 'i'));
    }
#line 2972 "guillex.tab.c"
    break;

  case 48: /* constOp: DECIMAL  */
#line 281 "guillex.y"
            {
    (yyval.treeNode) = createNode1("DECIMAL", createNode0Dec((yyvsp[0].dec), 'd'));
  }
#line 2980 "guillex.tab.c"
    break;

  case 49: /* constOp: LIST  */
#line 284 "guillex.y"
         {
    (yyval.treeNode) = createNode1("LIST", createNode0List((yyvsp[0].str), 'l'));
  }
#line 2988 "guillex.tab.c"
    break;

  case 50: /* constOp: NIL  */
#line 287 "guillex.y"
        {
    (yyval.treeNode) = createNode1("NIL", createNode0Nil((yyvsp[0].str), 'n'));
  }
#line 2996 "guillex.tab.c"
    break;

  case 51: /* inOp: READ PARENL ID PARENR SEMIC  */
#line 293 "guillex.y"
                             {
    (yyval.treeNode) = createNode2("READ PARENL ID PARENR SEMIC", createNode0((yyvsp[-4].str)), createNode0((yyvsp[-2].str)));
  }
#line 3004 "guillex.tab.c"
    break;

  case 52: /* outOp: WRITE PARENL outConst PARENR SEMIC  */
#line 299 "guillex.y"
                                      {
      (yyval.treeNode) = createNode2("WRITE PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
    }
#line 3012 "guillex.tab.c"
    break;

  case 53: /* outOp: WRITELN PARENL outConst PARENR SEMIC  */
#line 302 "guillex.y"
                                         {
      (yyval.treeNode) = createNode2("WRITELN PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
  }
#line 3020 "guillex.tab.c"
    break;

  case 54: /* outConst: STRING  */
#line 308 "guillex.y"
           {
      (yyval.treeNode) = createNode1("STRING", createNode0((yyvsp[0].str)));
    }
#line 3028 "guillex.tab.c"
    break;

  case 55: /* outConst: simpleExp  */
#line 311 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3036 "guillex.tab.c"
    break;

  case 56: /* binLogicalExp: binLogicalExp binLogicalOp  */
#line 317 "guillex.y"
                              {
      (yyval.treeNode) = createNode2("binLogicalExp binLogicalOp", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3044 "guillex.tab.c"
    break;

  case 57: /* binLogicalExp: relationalExp  */
#line 320 "guillex.y"
                  {
      (yyval.treeNode) = createNode1("relationalExp", (yyvsp[0].treeNode));
  }
#line 3052 "guillex.tab.c"
    break;

  case 58: /* binLogicalOp: OR  */
#line 326 "guillex.y"
       {
      (yyval.treeNode) = createNode1("OR", createNode0((yyvsp[0].str)));
    }
#line 3060 "guillex.tab.c"
    break;

  case 59: /* binLogicalOp: AND  */
#line 329 "guillex.y"
        {
      (yyval.treeNode) = createNode1("AND", createNode0((yyvsp[0].str)));
  }
#line 3068 "guillex.tab.c"
    break;

  case 60: /* binLogicalOp: NEG  */
#line 332 "guillex.y"
        {
      (yyval.treeNode) = createNode1("NEG", createNode0((yyvsp[0].str)));
  }
#line 3076 "guillex.tab.c"
    break;

  case 61: /* relationalExp: relationalExp relationalOp sumExp  */
#line 339 "guillex.y"
                                      {
      (yyval.treeNode) = createNode3("relationalExp relationalOp sumExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3084 "guillex.tab.c"
    break;

  case 62: /* relationalExp: sumExp  */
#line 342 "guillex.y"
           {
      (yyval.treeNode) = createNode1("sumExp", (yyvsp[0].treeNode));
  }
#line 3092 "guillex.tab.c"
    break;

  case 63: /* relationalOp: SMALLER  */
#line 349 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLER", createNode0((yyvsp[0].str)));
    }
#line 3100 "guillex.tab.c"
    break;

  case 64: /* relationalOp: GREATER  */
#line 352 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATER", createNode0((yyvsp[0].str)));
  }
#line 3108 "guillex.tab.c"
    break;

  case 65: /* relationalOp: SMALLEQ  */
#line 355 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLEQ", createNode0((yyvsp[0].str)));
  }
#line 3116 "guillex.tab.c"
    break;

  case 66: /* relationalOp: GREATEQ  */
#line 358 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATEQ", createNode0((yyvsp[0].str)));
  }
#line 3124 "guillex.tab.c"
    break;

  case 67: /* relationalOp: EQUALS  */
#line 361 "guillex.y"
           {
      (yyval.treeNode) = createNode1("EQUALS", createNode0((yyvsp[0].str)));
  }
#line 3132 "guillex.tab.c"
    break;

  case 68: /* relationalOp: DIFFERENT  */
#line 364 "guillex.y"
              {
      (yyval.treeNode) = createNode1("DIFFERENT", createNode0((yyvsp[0].str)));
  }
#line 3140 "guillex.tab.c"
    break;

  case 69: /* sumExp: sumExp sumOp mulExp  */
#line 370 "guillex.y"
                        {
      (yyval.treeNode) = createNode3("sumExp sumOp mulExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3148 "guillex.tab.c"
    break;

  case 70: /* sumExp: mulExp  */
#line 373 "guillex.y"
           {
      (yyval.treeNode) = createNode1("mulExp", (yyvsp[0].treeNode));
  }
#line 3156 "guillex.tab.c"
    break;

  case 71: /* sumOp: ADD  */
#line 379 "guillex.y"
        {
      (yyval.treeNode) = createNode1("ADD", createNode0((yyvsp[0].str)));
    }
#line 3164 "guillex.tab.c"
    break;

  case 72: /* sumOp: SUB  */
#line 382 "guillex.y"
        {
      (yyval.treeNode) = createNode1("SUB", createNode0((yyvsp[0].str)));
  }
#line 3172 "guillex.tab.c"
    break;

  case 73: /* mulExp: mulExp mulOp factor  */
#line 388 "guillex.y"
                        {
      (yyval.treeNode) = createNode3("mulExp mulOp factor", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3180 "guillex.tab.c"
    break;

  case 74: /* mulExp: factor  */
#line 391 "guillex.y"
           {
      (yyval.treeNode) = createNode1("factor", (yyvsp[0].treeNode));
  }
#line 3188 "guillex.tab.c"
    break;

  case 75: /* mulExp: sumOp factor  */
#line 394 "guillex.y"
                 {
      (yyval.treeNode) = createNode2("sumOp factor", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
  }
#line 3196 "guillex.tab.c"
    break;

  case 76: /* mulOp: MULT  */
#line 400 "guillex.y"
         {
      (yyval.treeNode) = createNode1("MULT", createNode0((yyvsp[0].str)));
    }
#line 3204 "guillex.tab.c"
    break;

  case 77: /* mulOp: DIV  */
#line 403 "guillex.y"
        {
      (yyval.treeNode) = createNode1("DIV", createNode0((yyvsp[0].str)));
  }
#line 3212 "guillex.tab.c"
    break;

  case 78: /* factor: ID  */
#line 409 "guillex.y"
       {
      (yyval.treeNode) = createNode1("ID", createNode0((yyvsp[0].str)));
    }
#line 3220 "guillex.tab.c"
    break;

  case 79: /* factor: fCall  */
#line 412 "guillex.y"
          {
      (yyval.treeNode) = createNode1("fCall", (yyvsp[0].treeNode));
  }
#line 3228 "guillex.tab.c"
    break;

  case 80: /* factor: PARENL simpleExp PARENR  */
#line 415 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("PARENL simpleExp PARENR", (yyvsp[-1].treeNode));
  }
#line 3236 "guillex.tab.c"
    break;

  case 81: /* factor: constOp  */
#line 418 "guillex.y"
            {
      (yyval.treeNode) = createNode1("constOp", (yyvsp[0].treeNode));
  }
#line 3244 "guillex.tab.c"
    break;

  case 82: /* fCall: ID PARENL callParams PARENR  */
#line 424 "guillex.y"
                                 {
      (yyval.treeNode) = createNode2("ID PARENL callParams PARENR", createNode0((yyvsp[-3].str)), (yyvsp[-1].treeNode));
    }
#line 3252 "guillex.tab.c"
    break;

  case 83: /* fCall: ID PARENL PARENR  */
#line 427 "guillex.y"
                     {
    (yyval.treeNode) = createNode1("ID PARENL PARENR", createNode0((yyvsp[-2].str)));
  }
#line 3260 "guillex.tab.c"
    break;

  case 84: /* callParams: callParams COMMA simpleExp  */
#line 433 "guillex.y"
                               {
      (yyval.treeNode) = createNode2("callParams COMMA simpleExp", (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 3268 "guillex.tab.c"
    break;

  case 85: /* callParams: simpleExp  */
#line 436 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3276 "guillex.tab.c"
    break;


#line 3280 "guillex.tab.c"

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

#line 443 "guillex.y"


void yyerror(const char* msg) {
  printf("%s\n", msg);
  printf ("%s, linha: %d, coluna: %d\n", msg,line,wordPosition);
  errors++;
}

int main(int argc, char *argv[]) {

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
      // printf("-------------------------tree-----------------------\n");
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
