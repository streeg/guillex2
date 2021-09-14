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
#include "../lib/uthash.h"


extern int yylex();
extern int yylex_destroy();
extern int yyparse();
void yyerror(const char* text);
extern int line;
extern int wordPosition;
extern FILE* yyin;
int errors = 0; 
int symbolIdCounter = 0;



typedef struct node {
  int integer;
  float decimal;
  char *nodeValue;
  char nodeType;
  struct node *left;
  struct node *leftMiddle;
  struct node *middle;
  struct node *rightMiddle;
  struct node *right;
}Node;


Node* createNode0(char *nodeValue) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> nodeValue = nodeValue;
  node -> nodeType = 's';
  node -> left = NULL;
  node -> leftMiddle = NULL;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode0Int(int nodeValue, char nodeType) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> integer = nodeValue;
  node -> nodeType = 'i';
  node -> left = NULL;
  node -> leftMiddle = NULL;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode0Dec(float nodeValue, char nodeType) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> decimal = nodeValue;
  node -> nodeType = 'd';
  node -> left = NULL;
  node -> leftMiddle = NULL;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode0List(char *nodeValue, char nodeType) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> nodeValue = nodeValue;
  node -> nodeType = 'l';
  node -> left = NULL;
  node -> leftMiddle = NULL;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode0Nil(char *nodeValue, char nodeType) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> nodeValue = nodeValue;
  node -> nodeType = 'n';
  node -> left = NULL;
  node -> leftMiddle = NULL;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}


Node* createNode1(char *nodeValue, Node* left) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> nodeValue = nodeValue;
  node -> nodeType = 's';
  node -> left = left;
  node -> leftMiddle = NULL;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode2(char *nodeValue, Node* left, Node* leftMiddle) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> nodeValue = nodeValue;
  node -> nodeType = 's';
  node -> left = left;
  node -> leftMiddle = leftMiddle;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode3(char *nodeValue, Node* left, Node* leftMiddle, Node* middle) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> nodeValue = nodeValue;
  node -> nodeType = 's';
  node -> left = left;
  node -> leftMiddle = leftMiddle;
  node -> middle = middle;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode4(char *nodeValue, Node* left, Node* leftMiddle, Node* middle, Node* rightMiddle) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> nodeValue = nodeValue;
  node -> nodeType = 's';
  node -> left = left;
  node -> leftMiddle = leftMiddle;
  node -> middle = middle;
  node -> rightMiddle = rightMiddle;
  node -> right = NULL;

  return node;
}

Node* createNode5(char *nodeValue, Node* left, Node* leftMiddle, Node* middle, Node* rightMiddle, Node* right) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> nodeValue = nodeValue;
  node -> nodeType = 's';
  node -> left = left;
  node -> leftMiddle = leftMiddle;
  node -> middle = middle;
  node -> rightMiddle = rightMiddle;
  node -> right = right;

  return node;
}

void printAndFreeTree(int indentCount, Node *node) {

  int i;

  if(node == NULL)
    return;

  if (indentCount == 0) {
    printf("\n%s",node-> nodeValue);
  }else{
    printf("\n");
    for(i=0;i<indentCount+1;i++){
            printf("-");
        }
        if(node -> nodeType == 's')
          printf(">   %s\n", node -> nodeValue); 
        if(node -> nodeType == 'i')
          printf(">   %d\n", node -> integer);
        if(node -> nodeType == 'd')
          printf(">   %f\n", node -> decimal);
        if(node -> nodeType == 'l')
          printf(">   %s\n", node -> nodeValue);
        if(node -> nodeType == 'n')
          printf(">   %s\n", node -> nodeValue);
    }
  if(node -> left != NULL){
    indentCount += 1;
    printAndFreeTree(indentCount, node -> left);
  }
  if(node -> leftMiddle != NULL){
    indentCount += 1;
    printAndFreeTree(indentCount, node -> leftMiddle);
  }
  if(node -> middle != NULL){
    indentCount += 1;
    printAndFreeTree(indentCount, node -> middle);
  }
  if(node -> rightMiddle != NULL){
    indentCount += 1;
    printAndFreeTree(indentCount, node -> rightMiddle);
  }
  if(node -> right != NULL){
    indentCount += 1;
    printAndFreeTree(indentCount, node -> right);
  }
  free(node);
}


Node* createNode0(char *nodeValue);
Node* createNode0Int(int nodeValue, char nodeType); 
Node* createNode0Dec(float nodeValue, char nodeType);
Node* createNode0List(char *nodeValue, char nodeType);
Node* createNode0Nil(char *nodeValue, char nodeType);
Node* createNode1(char *nodeValue, Node* left);
Node* createNode2(char *nodeValue, Node* left, Node* leftMiddle);
Node* createNode3(char *nodeValue, Node* left, Node* leftMiddle, Node* middle);
Node* createNode4(char *nodeValue, Node* left, Node* leftMiddle, Node* middle, Node* rightMiddle);
Node* createNode5(char *nodeValue, Node* left, Node* leftMiddle, Node* middle, Node* rightMiddle, Node* right);
void printAndFreeTree(int indentCount, Node *node);
Node *abstractSyntaxTree = NULL;

typedef struct symbol {
  int id;
  char *symbolType; // var or func
  char *varFuncName; // var or func name
  char *nameId; // var or func id
  int scope;
  UT_hash_handle hh;
}Symbol;

Symbol *symbolTable = NULL;

void addSymbol(int id, char *nameId, char *symbolType, char *varFuncName) {
  struct symbol *s;

  HASH_FIND_INT(symbolTable, &id, s);
  if (s == NULL){
    s = (Symbol*)malloc(sizeof(Symbol));
    s -> id = id;
    s -> nameId = nameId;
    s -> symbolType = symbolType;
    s -> varFuncName = varFuncName;
    HASH_ADD_INT(symbolTable, id, s);
  } else {
    printf("cannot add symbol to table\n");
  }
}


void freeSymbols() {
  Symbol *currentSymbol, *tmp;

  HASH_ITER(hh, symbolTable, currentSymbol, tmp) {
    HASH_DEL(symbolTable, currentSymbol); 
    free(currentSymbol);
  }
}

void printSymbols() {
    Symbol *s;

    for (s = symbolTable; s != NULL; s = s -> hh.next) {
        printf("|   %d    |    %s     |      %s    |    %s    |\n", s -> id, s -> nameId, s -> symbolType, s -> varFuncName);
    }
}


void addSymbol(int id, char *name, char *symbolType, char *varFuncName);
void freeSymbols();
void printSymbols();
extern Symbol *symbol;

#line 359 "guillex.tab.c"

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
  YYSYMBOL_MAP = 28,                       /* MAP  */
  YYSYMBOL_ELSE = 29,                      /* ELSE  */
  YYSYMBOL_THEN = 30,                      /* THEN  */
  YYSYMBOL_IF = 31,                        /* IF  */
  YYSYMBOL_FOR = 32,                       /* FOR  */
  YYSYMBOL_READ = 33,                      /* READ  */
  YYSYMBOL_WRITE = 34,                     /* WRITE  */
  YYSYMBOL_WRITELN = 35,                   /* WRITELN  */
  YYSYMBOL_RETURN = 36,                    /* RETURN  */
  YYSYMBOL_SEMIC = 37,                     /* SEMIC  */
  YYSYMBOL_COMMA = 38,                     /* COMMA  */
  YYSYMBOL_STFUNC = 39,                    /* STFUNC  */
  YYSYMBOL_ENDFUNC = 40,                   /* ENDFUNC  */
  YYSYMBOL_PARENL = 41,                    /* PARENL  */
  YYSYMBOL_PARENR = 42,                    /* PARENR  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_declarationList = 45,           /* declarationList  */
  YYSYMBOL_declaration = 46,               /* declaration  */
  YYSYMBOL_varDeclaration = 47,            /* varDeclaration  */
  YYSYMBOL_funcDeclaration = 48,           /* funcDeclaration  */
  YYSYMBOL_simpleVarDeclaration = 49,      /* simpleVarDeclaration  */
  YYSYMBOL_params = 50,                    /* params  */
  YYSYMBOL_param = 51,                     /* param  */
  YYSYMBOL_compoundStmt = 52,              /* compoundStmt  */
  YYSYMBOL_stmtList = 53,                  /* stmtList  */
  YYSYMBOL_primitiveStmt = 54,             /* primitiveStmt  */
  YYSYMBOL_exprStmt = 55,                  /* exprStmt  */
  YYSYMBOL_condStmt = 56,                  /* condStmt  */
  YYSYMBOL_iterStmt = 57,                  /* iterStmt  */
  YYSYMBOL_returnStmt = 58,                /* returnStmt  */
  YYSYMBOL_listStmt = 59,                  /* listStmt  */
  YYSYMBOL_appendOps = 60,                 /* appendOps  */
  YYSYMBOL_returnListOps = 61,             /* returnListOps  */
  YYSYMBOL_returnListOp = 62,              /* returnListOp  */
  YYSYMBOL_destroyHeadOps = 63,            /* destroyHeadOps  */
  YYSYMBOL_mapFilterOps = 64,              /* mapFilterOps  */
  YYSYMBOL_expression = 65,                /* expression  */
  YYSYMBOL_assignExp = 66,                 /* assignExp  */
  YYSYMBOL_simpleExp = 67,                 /* simpleExp  */
  YYSYMBOL_constOp = 68,                   /* constOp  */
  YYSYMBOL_inOp = 69,                      /* inOp  */
  YYSYMBOL_outOp = 70,                     /* outOp  */
  YYSYMBOL_outConst = 71,                  /* outConst  */
  YYSYMBOL_binLogicalExp = 72,             /* binLogicalExp  */
  YYSYMBOL_binLogicalOp = 73,              /* binLogicalOp  */
  YYSYMBOL_relationalExp = 74,             /* relationalExp  */
  YYSYMBOL_relationalOp = 75,              /* relationalOp  */
  YYSYMBOL_sumExp = 76,                    /* sumExp  */
  YYSYMBOL_sumOp = 77,                     /* sumOp  */
  YYSYMBOL_mulExp = 78,                    /* mulExp  */
  YYSYMBOL_mulOp = 79,                     /* mulOp  */
  YYSYMBOL_factor = 80,                    /* factor  */
  YYSYMBOL_fCall = 81,                     /* fCall  */
  YYSYMBOL_callParams = 82                 /* callParams  */
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
#define YYLAST   4500

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  326

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   326,   326,   332,   335,   341,   344,   350,   355,   360,
     367,   372,   379,   382,   388,   394,   400,   403,   409,   412,
     415,   418,   421,   424,   427,   430,   433,   439,   445,   448,
     454,   457,   463,   469,   472,   475,   478,   484,   490,   496,
     499,   505,   511,   515,   521,   524,   530,   537,   543,   546,
     549,   555,   561,   564,   570,   573,   579,   582,   589,   592,
     598,   601,   608,   611,   614,   617,   620,   623,   629,   632,
     638,   641,   647,   650,   653,   659,   662,   668,   671,   674,
     677,   683,   686,   692,   695
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
  "LISTTYPE", "STRING", "NIL", "INTEGER", "DECIMAL", "ADD", "SUB", "MULT",
  "DIV", "OR", "AND", "SMALLER", "GREATER", "SMALLEQ", "GREATEQ", "EQUALS",
  "DIFFERENT", "APPEND", "HEADLIST", "TAILLIST", "DESTROYHEAD", "FILTER",
  "ASSIGN", "MAP", "ELSE", "THEN", "IF", "FOR", "READ", "WRITE", "WRITELN",
  "RETURN", "SEMIC", "COMMA", "STFUNC", "ENDFUNC", "PARENL", "PARENR",
  "$accept", "program", "declarationList", "declaration", "varDeclaration",
  "funcDeclaration", "simpleVarDeclaration", "params", "param",
  "compoundStmt", "stmtList", "primitiveStmt", "exprStmt", "condStmt",
  "iterStmt", "returnStmt", "listStmt", "appendOps", "returnListOps",
  "returnListOp", "destroyHeadOps", "mapFilterOps", "expression",
  "assignExp", "simpleExp", "constOp", "inOp", "outOp", "outConst",
  "binLogicalExp", "binLogicalOp", "relationalExp", "relationalOp",
  "sumExp", "sumOp", "mulExp", "mulOp", "factor", "fCall", "callParams", YY_NULLPTR
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
     295,   296,   297
};
#endif

#define YYPACT_NINF (-169)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,   110,    21,    29,    43,    95,   195,    32,    -6,    55,
    -169,   216,   228,    12,    37,   140,   -17,    19,    20,    23,
      41,  3211,   254,   -17,    42,  3987,  4210,  4222,  4250,    31,
      48,    63,    85,    94,    61,    67,    81,    93,   103,   371,
     472,  1924,  1963,  2002,  2041,  2080,  2119,  2158,  2197,  2236,
    2275,  2314,   149,  2353,  2392,   134,   136,   142,  4262,  2431,
    2470,    91,   950,  4435,   129,  4290,  4302,  4098,   284,   184,
     371,    68,   159,   472,   371,   190,   422,   422,  4051,   166,
    4330,  3327,    40,   299,  2509,  2548,  2587,   709,   907,   984,
     582,   638,   651,   661,   675,   700,   712,   712,  4342,   156,
     408,   129,   223,   230,   199,   202,  4126,    10,   268,  2626,
     200,   207,   208,   205,   214,   226,   229,   235,  2665,  4370,
     111,  4463,  4382,  4410,   233,   243,  2704,   764,  4154,  3250,
     712,   712,   260,   261,   276,  2743,  2782,   296,   754,   278,
     300,  2821,  2860,  2899,  3211,   341,   341,  2938,   314,   305,
     313,  3211,  3211,  2977,  3016,   353,   163,  3211,   333,  3642,
    3654,  3687,   472,  3699,    79,  3209,  3941,   458,  3732,  3744,
    3777,   803,   842,  3974,  3282,  3339,  3372,  3384,   472,  3417,
      97,  4065,  3896,   890,  3429,  3462,  3474,   382,   395,   147,
     171,   280,   321,   338,   457,  4019,   365,   335,   345,   355,
     358,   368,   371,  3211,   793,   383,   832,   871,   910,   949,
     988,  1027,  1066,  1105,   436,  1144,  1183,   405,  1222,  1261,
    4182,   881,    45,   409,  3055,  3094,   403,  1023,   472,   472,
    3789,   458,   594,   415,  1062,   764,   764,  3507,   890,  4422,
     301,  3822,   346,   444,   421,   472,   371,   459,   422,   422,
     423,  3133,  1300,  1339,  1378,   467,   473,  3294,   417,   445,
     447,  3172,  3834,   160,   192,   267,   352,   393,   412,   426,
    3954,  3867,  3879,  3519,   372,  3552,   109,   236,   331,   523,
     533,   625,   698,  3925,  3564,  3597,  4450,  3912,   441,  1417,
     448,   460,   461,   451,   453,   466,  1456,  1495,   463,   479,
    3609,  1534,  3250,   712,   712,   482,   483,   486,  1573,  1612,
    1651,   488,   491,  1690,  1729,  1768,  3250,   341,   341,  1807,
     468,   494,  3250,  3250,  1846,  1885
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -169,   500,     2,  -169,     0,  -169,   512,   -15,
    -153,    -2,  -122,  -112,  -104,   -93,   -85,   -61,   -59,   -56,
     -37,    26,   -33,   -65,    27,   379,    38,    49,   -66,   456,
    -138,   511,   -74,   503,   256,   324,  -154,   286,   -11,  -168
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    41,     6,   158,    18,    19,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,   116,    61,
      89,    62,    96,    63,    64,    65,   101,    66,   170,   108
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    22,     5,     7,   224,     5,    79,   207,    68,   111,
      67,   117,     1,    17,   231,   120,    15,   208,    17,   240,
     242,    10,    21,   -14,    15,   209,   227,   -13,    80,    -2,
     238,   -10,    67,     1,   -70,    13,   210,   105,   -70,   -70,
     -70,    84,   234,    -4,   211,   -10,   -12,    -4,   -84,   -11,
     251,   -71,   -84,    80,    16,   -71,   -71,   -71,    14,    80,
     186,   -14,    23,    80,   274,   -13,   -39,    82,   212,    12,
     213,   174,   -70,   214,   -11,   175,   176,   177,    29,    30,
     149,   150,   119,   -10,   -12,    80,    80,   -11,   -40,   -71,
      80,   228,   215,    87,    88,    -5,   217,    72,   107,    -5,
     110,   112,    73,   115,   115,    87,    88,   235,    74,   178,
     106,    87,    88,     8,   206,     9,   186,   231,   220,    80,
      80,   -47,    75,   -62,   -62,   -56,   -56,   138,   -47,   205,
     238,   204,   173,    67,    76,   -47,    26,    27,    28,   -47,
      67,    67,   147,    20,    77,   155,    67,   -62,   -56,   153,
     154,   -62,    85,   269,   137,   216,   259,   139,   140,   -75,
     282,   -62,   -62,   -75,   -75,   -75,   223,   218,     9,   250,
      40,    86,   186,   -44,   -62,   -62,   186,   186,   219,   -45,
     207,   291,   294,   295,   -62,   -63,   -63,   104,   258,   226,
     208,    80,    67,   113,   207,    -6,   109,   -75,   209,    -6,
     207,   207,   -62,   118,   208,   233,   -63,   -63,   -63,   210,
     208,   208,   209,    67,   107,   107,    -3,   211,   209,   209,
      -3,   186,    84,   210,   186,   186,   124,   186,    -7,   210,
     210,   211,    -7,   125,   -63,    80,   126,   211,   211,   -46,
      67,   212,   129,   213,   130,   131,   214,   132,   260,    84,
     -63,   -63,   320,   321,    -9,   212,   -54,   213,    -9,   107,
     214,   212,   212,   213,   213,   215,   214,   214,   -55,   217,
     135,   133,   290,   292,   -63,   115,   115,   134,   -63,   215,
     136,   -64,   -64,   217,    -8,   215,   215,   206,    -8,   217,
     217,   220,    80,    80,   -64,   -64,   167,   141,   142,   -15,
     310,   206,   205,   -15,   204,   220,   127,   206,   206,   -64,
     128,   220,   220,   143,   319,   145,   205,   -64,   204,    97,
     324,   325,   205,   205,   204,   204,   169,   183,   216,   167,
     311,   312,   167,   167,   -83,   -65,   -65,   146,   -83,   127,
     218,   221,   216,   286,   148,   -64,   -64,   151,   216,   216,
      98,   219,   -66,   -66,   218,   152,   222,   185,   -65,   169,
     218,   218,   169,   169,   168,   219,   -65,   -65,   244,   -64,
     225,   219,   219,   -64,    78,   -66,   245,    97,    26,    27,
      28,    29,    30,   183,   127,   174,   246,   123,   287,   175,
     176,   177,    29,    30,   -65,   184,   247,   168,   174,   248,
     168,   168,   175,   176,   177,    29,    30,   -66,   -66,   249,
     127,   -76,    40,   185,   300,   -76,   -76,   -76,   167,   163,
     252,   122,   229,   178,   239,    81,   -67,   -67,   114,   159,
     160,   161,    29,    30,   167,   -66,   178,   241,   236,   253,
     -56,   -56,   254,   183,   183,   262,   -10,   288,   169,   -76,
     179,   184,   163,   230,   -67,   163,   163,   275,   289,   -46,
     296,    81,   293,   162,   169,   159,   160,   161,   -56,   237,
     298,   -67,   -67,   185,   185,    81,   299,   167,   301,   159,
     160,   161,    29,    30,   167,   167,   168,   -44,   183,   -45,
     302,   183,   183,   305,   -67,   306,   164,   303,   304,   162,
     308,   167,   168,    11,   167,   167,   179,   169,   307,     0,
     322,   184,   184,   162,   169,   169,   309,   272,   185,   313,
     314,   185,   185,   315,   285,   317,   229,   180,   318,   164,
      24,   169,   164,   164,   169,   169,   323,   -65,   -65,   236,
       0,   163,     0,   166,     0,   168,   163,   -66,   -66,     0,
       0,   165,   168,   271,     0,     0,   184,   163,     0,   184,
     284,   -65,   179,     0,     0,   -65,   179,   179,     0,   168,
       0,   -66,   168,   168,   182,   -66,   166,     0,     0,   166,
     166,     0,   181,   180,   165,   -62,     0,   165,   165,   -62,
     -62,   -62,   -62,   -62,     0,     0,     0,   174,     0,   121,
     163,   175,   176,   177,    29,    30,     0,   163,   163,     0,
     163,   179,     0,     0,   179,   179,     0,   179,   164,     0,
       0,     0,     0,   -62,   163,     0,     0,   163,   163,     0,
     182,     0,     0,     0,   164,   178,   273,     0,   181,   -67,
     -67,   -63,     0,   180,   180,   -63,   -63,   -63,   -63,   -63,
       0,     0,     0,     0,   -64,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -67,   -65,   166,     0,   -67,   -65,   -65,
     -65,   -65,   -65,   165,     0,     0,     0,   164,   -66,   -63,
       0,   166,   -66,   -66,   -66,   -66,   -66,     0,   180,   165,
     182,   182,   -64,     0,     0,     0,     0,     0,   181,   181,
       0,   164,   -65,   -67,   164,   164,     0,   -67,   -67,   -67,
     -67,   -67,   -56,   -56,     0,   173,   -66,     0,     0,    26,
      27,    28,    29,    30,   166,   -58,   -58,   -58,   -58,   -58,
     -58,   270,   165,     0,     0,   182,   -56,     0,   283,     0,
     -56,   -67,     0,   181,     0,     0,     0,     0,   166,     0,
       0,   166,   166,    40,     0,     0,   165,   -28,   -28,   165,
     165,   -28,   -28,   -28,   -28,   -28,     0,   174,     0,     0,
       0,   175,   176,   177,    29,    30,     0,   -28,   -28,   -28,
       0,     0,     0,   144,     0,   -28,   -28,   -28,   -28,   -28,
     -28,     0,     0,   -28,   -28,   -28,   -26,   -26,     0,     0,
     -26,   -26,   -26,   -26,   -26,   178,   -70,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,     0,   -26,   -26,   -26,     0,
       0,     0,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,   -26,   -26,   -26,   -19,   -19,     0,     0,   -19,
     -19,   -19,   -19,   -19,   -70,   -71,     0,     0,     0,   -71,
     -71,   -71,   -71,   -71,     0,   -19,   -19,   -19,     0,     0,
       0,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,     0,
       0,   -19,   -19,   -19,   -18,   -18,     0,     0,   -18,   -18,
     -18,   -18,   -18,   -71,   257,     0,     0,     0,   159,   160,
     161,    29,    30,   174,   -18,   -18,   -18,   175,   176,   177,
     -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,
     -18,   -18,   -18,   -20,   -20,     0,     0,   -20,   -20,   -20,
     -20,   -20,   162,   -59,   -59,   -59,   -59,   -59,   -59,     0,
       0,   178,     0,   -20,   -20,   -20,     0,     0,     0,   -20,
       0,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,
     -20,   -20,   -21,   -21,     0,     0,   -21,   -21,   -21,   -21,
     -21,     0,     0,     0,   -57,   -57,    90,    91,    92,    93,
      94,    95,   -21,   -21,   -21,     0,     0,     0,   -21,     0,
     -21,   -21,   -21,   -21,   -21,   -21,     0,   -57,   -21,   -21,
     -21,   -22,   -22,     0,     0,   -22,   -22,   -22,   -22,   -22,
     189,   190,   191,   192,   193,   194,     0,     0,     0,     0,
       0,   -22,   -22,   -22,     0,     0,     0,   -22,     0,   -22,
     -22,   -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -22,
     -23,   -23,     0,     0,   -23,   -23,   -23,   -23,   -23,   263,
     264,   265,   266,   267,   268,     0,     0,     0,     0,     0,
     -23,   -23,   -23,     0,     0,     0,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -23,     0,     0,   -23,   -23,   -23,   -33,
     -33,     0,     0,   -33,   -33,   -33,   -33,   -33,   276,   277,
     278,   279,   280,   281,     0,     0,     0,     0,     0,   -33,
     -33,   -33,     0,     0,     0,   -33,     0,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,   -33,   -33,   -33,   -34,   -34,
       0,     0,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -34,   -34,
     -34,     0,     0,     0,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,   -34,   -34,   -34,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -35,   -35,   -35,
       0,     0,     0,   -35,     0,   -35,   -35,   -35,   -35,   -35,
     -35,     0,     0,   -35,   -35,   -35,   -36,   -36,     0,     0,
     -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -36,   -36,   -36,     0,
       0,     0,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,   -36,   -36,   -36,   -24,   -24,     0,     0,   -24,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -24,   -24,   -24,     0,     0,
       0,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,
       0,   -24,   -24,   -24,   -25,   -25,     0,     0,   -25,   -25,
     -25,   -25,   -25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -25,   -25,   -25,     0,     0,     0,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,
     -25,   -25,   -25,    -7,    -7,     0,     0,    -7,    -7,    -7,
      -7,    -7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    -7,    -7,    -7,     0,     0,     0,    -7,
       0,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,
      -7,    -7,   -38,   -38,     0,     0,   -38,   -38,   -38,   -38,
     -38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -38,   -38,   -38,     0,     0,     0,   -38,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,   -38,
     -38,   -27,   -27,     0,     0,   -27,   -27,   -27,   -27,   -27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,   -27,   -27,     0,     0,     0,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,
     -41,   -41,     0,     0,   -41,   -41,   -41,   -41,   -41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -41,   -41,   -41,     0,     0,     0,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,   -41,   -41,   -41,   -32,
     -32,     0,     0,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -32,
     -32,   -32,     0,     0,     0,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -32,   -32,   -15,   -15,
       0,     0,   -15,   -15,   -15,   -15,   -15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -15,   -15,
     -15,     0,     0,     0,   -15,     0,   -15,   -15,   -15,   -15,
     -15,   -15,     0,     0,   -15,   -15,   -15,   -37,   -37,     0,
       0,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,   -37,
       0,     0,     0,   -37,     0,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,   -37,   -37,   -37,   -43,   -43,     0,     0,
     -43,   -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -43,   -43,   -43,     0,
       0,     0,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,   -43,   -43,   -43,   -42,   -42,     0,     0,   -42,
     -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,   -42,   -42,     0,     0,
       0,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,   -42,   -42,   -42,   -28,   -28,     0,     0,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -28,   -28,   -28,     0,     0,     0,
     316,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
     -28,   -28,   -28,   -51,   -51,     0,     0,   -51,   -51,   -51,
     -51,   -51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -51,   -51,   -51,     0,     0,     0,   -51,
       0,   -51,   -51,   -51,   -51,   -51,   -51,     0,     0,   -51,
     -51,   -51,   -52,   -52,     0,     0,   -52,   -52,   -52,   -52,
     -52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -52,   -52,   -52,     0,     0,     0,   -52,     0,
     -52,   -52,   -52,   -52,   -52,   -52,     0,     0,   -52,   -52,
     -52,   -53,   -53,     0,     0,   -53,   -53,   -53,   -53,   -53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -53,   -53,   -53,     0,     0,     0,   -53,     0,   -53,
     -53,   -53,   -53,   -53,   -53,     0,     0,   -53,   -53,   -53,
     -29,   -29,     0,     0,   -29,   -29,   -29,   -29,   -29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -29,   -29,   -29,     0,     0,     0,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,   -30,
     -30,     0,     0,   -30,   -30,   -30,   -30,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -30,
     -30,   -30,     0,     0,     0,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,   -31,   -31,
       0,     0,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -31,   -31,
     -31,     0,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,   -31,   -31,   -31,   -26,   -26,     0,
       0,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -26,   -26,   -26,
       0,     0,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,
     -26,     0,     0,   -26,   -26,   -26,   -19,   -19,     0,     0,
     -19,   -19,   -19,   -19,   -19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -19,   -19,   -19,     0,
       0,     0,     0,     0,   -19,   -19,   -19,   -19,   -19,   -19,
       0,     0,   -19,   -19,   -19,    25,   156,     0,     0,    26,
      27,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,     0,     0,
       0,     0,     0,    34,    35,    36,    37,    38,    39,     0,
       0,   157,    83,    40,   -17,   -17,     0,     0,   -17,   -17,
     -17,   -17,   -17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -17,   -17,   -17,     0,     0,     0,
       0,     0,   -17,   -17,   -17,   -17,   -17,   -17,     0,     0,
     -17,   -17,   -17,   -18,   -18,     0,     0,   -18,   -18,   -18,
     -18,   -18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -18,   -18,   -18,     0,     0,     0,     0,
       0,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,   -18,
     -18,   -18,   -20,   -20,     0,     0,   -20,   -20,   -20,   -20,
     -20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -20,   -20,   -20,     0,     0,     0,     0,     0,
     -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,   -20,
     -20,   -21,   -21,     0,     0,   -21,   -21,   -21,   -21,   -21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -21,   -21,   -21,     0,     0,     0,     0,     0,   -21,
     -21,   -21,   -21,   -21,   -21,     0,     0,   -21,   -21,   -21,
     -22,   -22,     0,     0,   -22,   -22,   -22,   -22,   -22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -22,   -22,   -22,     0,     0,     0,     0,     0,   -22,   -22,
     -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -22,   -23,
     -23,     0,     0,   -23,   -23,   -23,   -23,   -23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -23,
     -23,   -23,     0,     0,     0,     0,     0,   -23,   -23,   -23,
     -23,   -23,   -23,     0,     0,   -23,   -23,   -23,   -33,   -33,
       0,     0,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -33,   -33,
     -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,   -33,   -33,   -33,   -34,   -34,     0,
       0,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -34,   -34,   -34,
       0,     0,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -34,   -34,   -35,   -35,     0,     0,
     -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -35,   -35,   -35,     0,
       0,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,   -35,   -35,   -35,   -36,   -36,     0,     0,   -36,
     -36,   -36,   -36,   -36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -36,   -36,   -36,     0,     0,
       0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,   -36,   -36,   -36,   -24,   -24,     0,     0,   -24,   -24,
     -24,   -24,   -24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -24,   -24,   -24,     0,     0,     0,
       0,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
     -24,   -24,   -24,   -25,   -25,     0,     0,   -25,   -25,   -25,
     -25,   -25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -25,   -25,   -25,     0,     0,     0,     0,
       0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,
     -25,   -25,   -16,   -16,     0,     0,   -16,   -16,   -16,   -16,
     -16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -16,   -16,   -16,     0,     0,     0,     0,     0,
     -16,   -16,   -16,   -16,   -16,   -16,     0,     0,   -16,   -16,
     -16,   -38,   -38,     0,     0,   -38,   -38,   -38,   -38,   -38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -38,   -38,   -38,     0,     0,     0,     0,     0,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,   -38,   -38,   -38,
     -27,   -27,     0,     0,   -27,   -27,   -27,   -27,   -27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -27,   -27,   -27,     0,     0,     0,     0,     0,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,   -41,
     -41,     0,     0,   -41,   -41,   -41,   -41,   -41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -41,
     -41,   -41,     0,     0,     0,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,     0,     0,   -41,   -41,   -41,   -32,   -32,
       0,     0,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -32,   -32,
     -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,
     -32,   -32,     0,     0,   -32,   -32,   -32,   -37,   -37,     0,
       0,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,   -37,
       0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,   -37,   -37,   -37,   -43,   -43,     0,     0,
     -43,   -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -43,   -43,   -43,     0,
       0,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,   -43,   -43,   -43,   -42,   -42,     0,     0,   -42,
     -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,   -42,   -42,     0,     0,
       0,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,   -42,   -42,   -42,   -51,   -51,     0,     0,   -51,   -51,
     -51,   -51,   -51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -51,   -51,   -51,     0,     0,     0,
       0,     0,   -51,   -51,   -51,   -51,   -51,   -51,     0,     0,
     -51,   -51,   -51,   -52,   -52,     0,     0,   -52,   -52,   -52,
     -52,   -52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -52,   -52,   -52,     0,     0,     0,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,   -52,
     -52,   -52,   -53,   -53,     0,     0,   -53,   -53,   -53,   -53,
     -53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -53,   -53,   -53,     0,     0,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,     0,     0,   -53,   -53,
     -53,   -29,   -29,     0,     0,   -29,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -29,   -29,   -29,     0,     0,     0,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,
     -30,   -30,     0,     0,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -30,   -30,   -30,     0,     0,     0,     0,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,     0,   -30,   -30,   -30,   -31,
     -31,     0,     0,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -31,
     -31,   -31,     0,     0,     0,     0,     0,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,   -31,   -31,   -31,    25,   156,
       0,     0,    26,    27,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
      33,     0,     0,     0,     0,     0,    34,    35,    36,    37,
      38,    39,     0,     0,   157,   261,    40,    -7,    -7,     0,
       0,    -7,    -7,    -7,    -7,    -7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -7,    -7,    -7,
       0,     0,     0,     0,     0,    -7,    -7,    -7,    -7,    -7,
      -7,     0,     0,    -7,    -7,    -7,    25,   156,     0,     0,
      26,    27,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,    33,     0,
       0,     0,     0,     0,    34,    35,    36,    37,    38,    39,
       0,     0,   157,   297,    40,   -15,   -15,     0,     0,   -15,
     -15,   -15,   -15,   -15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -15,   -15,   -15,     0,     0,
       0,     0,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,
       0,   -15,   -15,   -15,    25,   156,     0,     0,    26,    27,
      28,    29,    30,   -57,   -57,    90,    91,    92,    93,    94,
      95,     0,     0,     0,    31,    32,    33,     0,     0,     0,
       0,     0,    34,    35,    36,    37,    38,    39,     0,     0,
     157,   -57,    40,   195,   156,     0,     0,    26,    27,    28,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,   196,     0,     0,     0,     0,
       0,   197,   198,   199,   200,   201,   202,     0,     0,   203,
       0,    40,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
     -77,   221,     0,   232,   -77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   188,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,     0,     0,     0,     0,     0,     0,     0,   188,   -77,
       0,     0,     0,     0,     0,     0,     0,   -50,     0,     0,
       0,   -50,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,     0,     0,     0,     0,
     -48,     0,     0,     0,   -48,     0,     0,     0,     0,     0,
       0,     0,   -49,     0,     0,     0,   -49,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -69,
     -69,    99,   100,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,   -80,     0,     0,     0,   -80,
       0,     0,     0,     0,     0,     0,     0,   -69,     0,     0,
       0,   -69,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
     -73,     0,     0,     0,   -73,     0,     0,     0,     0,     0,
       0,     0,   -78,     0,     0,     0,   -78,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,   -74,     0,     0,     0,   -74,
       0,     0,     0,     0,     0,     0,     0,   -82,     0,     0,
       0,   -82,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -68,   -68,    99,   100,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
     -79,     0,     0,     0,   -79,     0,     0,     0,     0,     0,
       0,     0,   -68,     0,     0,     0,   -68,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,   -72,     0,     0,     0,   -72,
       0,     0,     0,     0,     0,     0,     0,   -81,     0,     0,
       0,   -81,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,
       0,     0,     0,     0,   -50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -48,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,     0,     0,     0,     0,   -49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -80,   -69,   -69,    99,   100,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,     0,   -69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -73,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,     0,     0,     0,     0,     0,   -78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -74,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
       0,     0,     0,     0,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -79,   -68,   -68,    99,
     100,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,     0,   171,   172,     0,   -68,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,
       0,   -72,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -61,   171,   172,     0,   -61,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,
       0,   171,   172,     0,   -81,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -60,   171,   172,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,     0,
       0,     0,     0,   -61,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -60,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,    69,
       0,   -77,     0,     0,    70,   187,     0,     0,     0,     0,
       0,     0,     0,     0,   -77,     0,     0,     0,    71,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   243,     0,     0,     0,     0,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -77,     0,     0,     0,
      71,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,    70,   -57,
     -57,    90,    91,    92,    93,    94,    95,     0,   -77,     0,
       0,     0,   187,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -57,     0,     0,     0,   -57,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,   102,     0,   103,     0,     0,     0,
       0,     0,     0,     0,     0,   -78,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,   -82,     0,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,   -82,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
     -81,     0,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,   -81,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,   255,     0,
     256,     0,     0,     0,     0,     0,     0,     0,     0,   -78,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,     0,     0,   -50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -48,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,   -49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -80,
     -69,   -69,    99,   100,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,   -69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -73,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,   -78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -74,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -68,   -68,    99,   100,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,   -79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -68,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,   171,   172,   -72,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,   -82,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -61,   171,   172,     0,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,     0,     0,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -60
};

static const yytype_int16 yycheck[] =
{
       0,    16,     0,     3,   157,     3,    39,   129,    23,    74,
      21,    77,     4,    13,   168,    89,     4,   129,    18,   187,
     188,     0,    39,     4,     4,   129,   164,     4,    39,     0,
     184,    37,    43,     4,     3,    41,   129,    70,     7,     8,
       9,    43,   180,     0,   129,     4,     4,     4,    38,     4,
     203,     3,    42,    64,    42,     7,     8,     9,     3,    70,
      71,    42,    42,    74,   232,    42,     3,    40,   129,    37,
     129,     3,    41,   129,    37,     7,     8,     9,    10,    11,
     145,   146,    42,    42,    42,    96,    97,    42,     3,    41,
     101,   165,   129,    14,    15,     0,   129,     3,    71,     4,
      73,    74,    41,    76,    77,    14,    15,   181,    41,    41,
      42,    14,    15,     3,   129,     5,   127,   271,   129,   130,
     131,    42,    41,    14,    15,    14,    15,   129,    37,   129,
     284,   129,     3,   144,    41,    38,     7,     8,     9,    42,
     151,   152,   144,     3,    41,     5,   157,    38,    37,   151,
     152,    42,     3,   227,   127,   129,   221,   130,   131,     3,
     234,    14,    15,     7,     8,     9,     3,   129,     5,   202,
      41,    37,   183,    37,    14,    15,   187,   188,   129,    37,
     302,   246,   248,   249,    37,    14,    15,     3,   221,   162,
     302,   202,   203,     3,   316,     0,    37,    41,   302,     4,
     322,   323,    42,    37,   316,   178,    14,    15,    37,   302,
     322,   323,   316,   224,   187,   188,     0,   302,   322,   323,
       4,   232,   224,   316,   235,   236,     3,   238,     0,   322,
     323,   316,     4,     3,    42,   246,    37,   322,   323,    37,
     251,   302,    42,   302,    37,    37,   302,    42,   221,   251,
      14,    15,   317,   318,     0,   316,    42,   316,     4,   232,
     316,   322,   323,   322,   323,   302,   322,   323,    42,   302,
      37,    42,   245,   246,    38,   248,   249,    42,    42,   316,
      37,    14,    15,   316,     0,   322,   323,   302,     4,   322,
     323,   302,   303,   304,    14,    15,    40,    37,    37,     0,
     302,   316,   302,     4,   302,   316,    38,   322,   323,    42,
      42,   322,   323,    37,   316,    37,   316,    37,   316,    63,
     322,   323,   322,   323,   322,   323,    40,    71,   302,    73,
     303,   304,    76,    77,    38,    14,    15,    37,    42,    38,
     302,    27,   316,    42,     3,    14,    15,    42,   322,   323,
      64,   302,    14,    15,   316,    42,     3,    71,    37,    73,
     322,   323,    76,    77,    40,   316,    14,    15,     3,    38,
      37,   322,   323,    42,     3,    37,    41,   121,     7,     8,
       9,    10,    11,   127,    38,     3,    41,   101,    42,     7,
       8,     9,    10,    11,    42,    71,    41,    73,     3,    41,
      76,    77,     7,     8,     9,    10,    11,    14,    15,    41,
      38,     3,    41,   127,    42,     7,     8,     9,   162,    40,
      37,    97,   166,    41,    42,     3,    14,    15,     6,     7,
       8,     9,    10,    11,   178,    42,    41,    42,   182,     3,
      14,    15,    37,   187,   188,    42,    37,     3,   162,    41,
      71,   127,    73,   167,    42,    76,    77,    42,    37,    42,
      37,     3,     3,    41,   178,     7,     8,     9,    42,   183,
       3,    14,    15,   187,   188,     3,     3,   221,    37,     7,
       8,     9,    10,    11,   228,   229,   162,    42,   232,    42,
      42,   235,   236,    42,    37,    42,    40,    37,    37,    41,
      37,   245,   178,     3,   248,   249,   127,   221,    42,    -1,
      42,   187,   188,    41,   228,   229,    37,   231,   232,    37,
      37,   235,   236,    37,   238,    37,   270,    71,    37,    73,
      18,   245,    76,    77,   248,   249,    42,    14,    15,   283,
      -1,   162,    -1,    40,    -1,   221,   167,    14,    15,    -1,
      -1,    40,   228,   229,    -1,    -1,   232,   178,    -1,   235,
     236,    38,   183,    -1,    -1,    42,   187,   188,    -1,   245,
      -1,    38,   248,   249,    71,    42,    73,    -1,    -1,    76,
      77,    -1,    71,   127,    73,     3,    -1,    76,    77,     7,
       8,     9,    10,    11,    -1,    -1,    -1,     3,    -1,    96,
     221,     7,     8,     9,    10,    11,    -1,   228,   229,    -1,
     231,   232,    -1,    -1,   235,   236,    -1,   238,   162,    -1,
      -1,    -1,    -1,    41,   245,    -1,    -1,   248,   249,    -1,
     127,    -1,    -1,    -1,   178,    41,    42,    -1,   127,    14,
      15,     3,    -1,   187,   188,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    38,     3,   162,    -1,    42,     7,     8,
       9,    10,    11,   162,    -1,    -1,    -1,   221,     3,    41,
      -1,   178,     7,     8,     9,    10,    11,    -1,   232,   178,
     187,   188,    41,    -1,    -1,    -1,    -1,    -1,   187,   188,
      -1,   245,    41,     3,   248,   249,    -1,     7,     8,     9,
      10,    11,    14,    15,    -1,     3,    41,    -1,    -1,     7,
       8,     9,    10,    11,   221,    16,    17,    18,    19,    20,
      21,   228,   221,    -1,    -1,   232,    38,    -1,   235,    -1,
      42,    41,    -1,   232,    -1,    -1,    -1,    -1,   245,    -1,
      -1,   248,   249,    41,    -1,    -1,   245,     3,     4,   248,
     249,     7,     8,     9,    10,    11,    -1,     3,    -1,    -1,
      -1,     7,     8,     9,    10,    11,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,
       7,     8,     9,    10,    11,    41,     3,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    41,     3,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,    -1,     7,     8,
       9,    10,    11,    41,     3,    -1,    -1,    -1,     7,     8,
       9,    10,    11,     3,    23,    24,    25,     7,     8,     9,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,    -1,     7,     8,     9,
      10,    11,    41,    16,    17,    18,    19,    20,    21,    -1,
      -1,    41,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    37,    39,    40,
      41,     3,     4,    -1,    -1,     7,     8,     9,    10,    11,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,    -1,     7,     8,     9,    10,    11,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,    -1,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,    -1,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,    -1,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,    -1,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,    -1,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,    -1,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,    -1,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,    -1,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,    -1,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,    -1,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,    -1,     7,     8,
       9,    10,    11,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    42,    41,     3,     4,    -1,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    41,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      38,    27,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,    42,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    42,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    38,    10,    11,    -1,    42,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    10,    11,    -1,    42,    14,    15,    16,    17,    18,
      19,    20,    21,    38,    10,    11,    -1,    42,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    42,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    37,    -1,    -1,    27,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    37,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    10,    11,    37,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    37,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    37,    10,    11,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    44,    45,    46,    47,    48,    49,     3,     5,
       0,    46,    37,    41,     3,     4,    42,    49,    50,    51,
       3,    39,    52,    42,    51,     3,     7,     8,     9,    10,
      11,    23,    24,    25,    31,    32,    33,    34,    35,    36,
      41,    47,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    72,    74,    76,    77,    78,    80,    81,    52,    22,
      27,    41,     3,    41,    41,    41,    41,    41,     3,    65,
      81,     3,    67,    40,    54,     3,    37,    14,    15,    73,
      16,    17,    18,    19,    20,    21,    75,    77,    80,    12,
      13,    79,    26,    28,     3,    65,    42,    67,    82,    37,
      67,    66,    67,     3,     6,    67,    71,    71,    37,    42,
      75,    76,    78,    80,     3,     3,    37,    38,    42,    42,
      37,    37,    42,    42,    42,    37,    37,    67,    54,    67,
      67,    37,    37,    37,    29,    37,    37,    54,     3,    66,
      66,    42,    42,    54,    54,     5,     4,    39,    49,     7,
       8,     9,    41,    68,    72,    74,    76,    77,    78,    80,
      81,    10,    11,     3,     3,     7,     8,     9,    41,    68,
      72,    74,    76,    77,    78,    80,    81,    41,    41,    16,
      17,    18,    19,    20,    21,     3,    25,    31,    32,    33,
      34,    35,    36,    39,    47,    49,    52,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    69,    70,
      81,    27,     3,     3,    53,    37,    67,    73,    75,    77,
      80,    79,    41,    67,    73,    75,    77,    80,    79,    42,
      82,    42,    82,    22,     3,    41,    41,    41,    41,    41,
      65,    53,    37,     3,    37,    26,    28,     3,    65,    66,
      67,    40,    42,    16,    17,    18,    19,    20,    21,    75,
      76,    78,    80,    42,    82,    42,    16,    17,    18,    19,
      20,    21,    75,    76,    78,    80,    42,    42,     3,    37,
      67,    66,    67,     3,    71,    71,    37,    40,     3,     3,
      42,    37,    42,    37,    37,    42,    42,    42,    37,    37,
      54,    67,    67,    37,    37,    37,    29,    37,    37,    54,
      66,    66,    42,    42,    54,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    47,    48,    48,
      49,    49,    50,    50,    51,    52,    53,    53,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    55,    56,    56,
      57,    57,    58,    59,    59,    59,    59,    60,    61,    62,
      62,    63,    64,    64,    65,    65,    66,    67,    68,    68,
      68,    69,    70,    70,    71,    71,    72,    72,    73,    73,
      74,    74,    75,    75,    75,    75,    75,    75,    76,    76,
      77,    77,    78,    78,    78,    79,    79,    80,    80,    80,
      80,    81,    81,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     6,     5,
       2,     3,     2,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     7,
       9,     9,     3,     1,     1,     1,     1,     4,     2,     1,
       1,     3,     4,     4,     1,     1,     3,     1,     1,     1,
       1,     5,     5,     5,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     2,     1,     1,     1,     1,     3,
       1,     4,     3,     3,     1
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
#line 326 "guillex.y"
                        {
        abstractSyntaxTree = (yyval.treeNode);
    }
#line 2826 "guillex.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 332 "guillex.y"
                                    {
       (yyval.treeNode) = createNode2("declarationsList declaration", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
     }
#line 2834 "guillex.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 335 "guillex.y"
                      {
    (yyval.treeNode) = createNode1("declaration", (yyvsp[0].treeNode));
  }
#line 2842 "guillex.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 341 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
    }
#line 2850 "guillex.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 344 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("funcDeclaration", (yyvsp[0].treeNode));
    }
#line 2858 "guillex.tab.c"
    break;

  case 7: /* varDeclaration: simpleVarDeclaration SEMIC  */
#line 350 "guillex.y"
                               {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[-1].treeNode));}
#line 2865 "guillex.tab.c"
    break;

  case 8: /* funcDeclaration: TYPE ID PARENL params PARENR compoundStmt  */
#line 355 "guillex.y"
                                              {
      addSymbol(symbolIdCounter, (yyvsp[-4].str), "func", (yyvsp[-5].str));
      symbolIdCounter++;
      (yyval.treeNode) = createNode4("TYPE ID PARENL params PARENR compoundStmt", createNode0((yyvsp[-5].str)), createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
  }
#line 2875 "guillex.tab.c"
    break;

  case 9: /* funcDeclaration: TYPE ID PARENL PARENR compoundStmt  */
#line 360 "guillex.y"
                                       {
    symbolIdCounter++;
    (yyval.treeNode) = createNode3("TYPE ID PARENL PARENR compoundStmt", createNode0((yyvsp[-4].str)), createNode0((yyvsp[-3].str)), (yyvsp[0].treeNode));                                                                       
  }
#line 2884 "guillex.tab.c"
    break;

  case 10: /* simpleVarDeclaration: TYPE ID  */
#line 367 "guillex.y"
            {
      addSymbol(symbolIdCounter, (yyvsp[0].str), "var", (yyvsp[-1].str));
      symbolIdCounter++;
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      }
#line 2894 "guillex.tab.c"
    break;

  case 11: /* simpleVarDeclaration: TYPE LISTTYPE ID  */
#line 372 "guillex.y"
                       {
      symbolIdCounter++;
      (yyval.treeNode) = createNode3("TYPE ID", createNode0((yyvsp[-2].str)), createNode0List((yyvsp[-1].str), 'l'), createNode0((yyvsp[0].str)));
    }
#line 2903 "guillex.tab.c"
    break;

  case 12: /* params: params param  */
#line 379 "guillex.y"
                 {
      (yyval.treeNode) = createNode2("params param", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
      }
#line 2911 "guillex.tab.c"
    break;

  case 13: /* params: param  */
#line 382 "guillex.y"
          { 
    (yyval.treeNode) = createNode1("param", (yyvsp[0].treeNode)); 
    }
#line 2919 "guillex.tab.c"
    break;

  case 14: /* param: simpleVarDeclaration  */
#line 388 "guillex.y"
                         {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[0].treeNode));
    }
#line 2927 "guillex.tab.c"
    break;

  case 15: /* compoundStmt: STFUNC stmtList ENDFUNC  */
#line 394 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[-1].treeNode));
    }
#line 2935 "guillex.tab.c"
    break;

  case 16: /* stmtList: stmtList primitiveStmt  */
#line 400 "guillex.y"
                              {
      (yyval.treeNode) = createNode2("stmtList primitiveStmt", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 2943 "guillex.tab.c"
    break;

  case 17: /* stmtList: primitiveStmt  */
#line 403 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("primitiveStmt", (yyvsp[0].treeNode));
  }
#line 2951 "guillex.tab.c"
    break;

  case 18: /* primitiveStmt: exprStmt  */
#line 409 "guillex.y"
             {
      (yyval.treeNode) = createNode1("exprStmt", (yyvsp[0].treeNode));
    }
#line 2959 "guillex.tab.c"
    break;

  case 19: /* primitiveStmt: compoundStmt  */
#line 412 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[0].treeNode));
  }
#line 2967 "guillex.tab.c"
    break;

  case 20: /* primitiveStmt: condStmt  */
#line 415 "guillex.y"
             {
    (yyval.treeNode) = createNode1("condStmt", (yyvsp[0].treeNode));
  }
#line 2975 "guillex.tab.c"
    break;

  case 21: /* primitiveStmt: iterStmt  */
#line 418 "guillex.y"
             {
    (yyval.treeNode) = createNode1("iterStmt", (yyvsp[0].treeNode));
  }
#line 2983 "guillex.tab.c"
    break;

  case 22: /* primitiveStmt: returnStmt  */
#line 421 "guillex.y"
               {
    (yyval.treeNode) = createNode1("returnStmt", (yyvsp[0].treeNode));
  }
#line 2991 "guillex.tab.c"
    break;

  case 23: /* primitiveStmt: listStmt  */
#line 424 "guillex.y"
             {
    (yyval.treeNode) = createNode1("listStmt", (yyvsp[0].treeNode));
  }
#line 2999 "guillex.tab.c"
    break;

  case 24: /* primitiveStmt: inOp  */
#line 427 "guillex.y"
         {
    (yyval.treeNode) = createNode1("inOp", (yyvsp[0].treeNode));
  }
#line 3007 "guillex.tab.c"
    break;

  case 25: /* primitiveStmt: outOp  */
#line 430 "guillex.y"
          {
    (yyval.treeNode) = createNode1("outOp", (yyvsp[0].treeNode));
  }
#line 3015 "guillex.tab.c"
    break;

  case 26: /* primitiveStmt: varDeclaration  */
#line 433 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
  }
#line 3023 "guillex.tab.c"
    break;

  case 27: /* exprStmt: expression SEMIC  */
#line 439 "guillex.y"
                     {
      (yyval.treeNode) = createNode1("expression SEMIC", (yyvsp[-1].treeNode));
    }
#line 3031 "guillex.tab.c"
    break;

  case 28: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt  */
#line 445 "guillex.y"
                                                        {
      (yyval.treeNode) = createNode3("IF PARENL simpleExp PARENR primitiveStmt", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 3039 "guillex.tab.c"
    break;

  case 29: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt ELSE primitiveStmt  */
#line 448 "guillex.y"
                                                                {
    (yyval.treeNode) = createNode5("IF PARENL primitiveExp PARENR primitiveStmt ELSE primitiveStmt", createNode0((yyvsp[-6].str)), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), createNode0((yyvsp[-1].str)), (yyvsp[0].treeNode));
  }
#line 3047 "guillex.tab.c"
    break;

  case 30: /* iterStmt: FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 454 "guillex.y"
                                                                              {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-8].str)), (yyvsp[-6].treeNode), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 3055 "guillex.tab.c"
    break;

  case 31: /* iterStmt: FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 457 "guillex.y"
                                                                              {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-8].str)), (yyvsp[-6].treeNode), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
  }
#line 3063 "guillex.tab.c"
    break;

  case 32: /* returnStmt: RETURN expression SEMIC  */
#line 463 "guillex.y"
                            {
      (yyval.treeNode) = createNode2("RETURN expression SEMIC", createNode0((yyvsp[-2].str)), (yyvsp[-1].treeNode));
    }
#line 3071 "guillex.tab.c"
    break;

  case 33: /* listStmt: appendOps  */
#line 469 "guillex.y"
              {
      (yyval.treeNode) = createNode1("appendOps", (yyvsp[0].treeNode));
    }
#line 3079 "guillex.tab.c"
    break;

  case 34: /* listStmt: returnListOps  */
#line 472 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("returnListOps", (yyvsp[0].treeNode));
  }
#line 3087 "guillex.tab.c"
    break;

  case 35: /* listStmt: destroyHeadOps  */
#line 475 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("destroyHeadOps", (yyvsp[0].treeNode));
  }
#line 3095 "guillex.tab.c"
    break;

  case 36: /* listStmt: mapFilterOps  */
#line 478 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("mapFilterOps", (yyvsp[0].treeNode));
  }
#line 3103 "guillex.tab.c"
    break;

  case 37: /* appendOps: ID APPEND ID SEMIC  */
#line 484 "guillex.y"
                       {
      (yyval.treeNode) = createNode3("ID APPEND ID SEMIC", createNode0((yyvsp[-3].str)), createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)));
    }
#line 3111 "guillex.tab.c"
    break;

  case 38: /* returnListOps: returnListOp ID  */
#line 490 "guillex.y"
                    {
      (yyval.treeNode) = createNode2("returnListOp ID", (yyvsp[-1].treeNode), createNode0((yyvsp[0].str)));
    }
#line 3119 "guillex.tab.c"
    break;

  case 39: /* returnListOp: HEADLIST  */
#line 496 "guillex.y"
             {
      (yyval.treeNode) = createNode1("HEADLIST", createNode0((yyvsp[0].str)));
    }
#line 3127 "guillex.tab.c"
    break;

  case 40: /* returnListOp: TAILLIST  */
#line 499 "guillex.y"
             {
      (yyval.treeNode) = createNode1("TAILLIST", createNode0((yyvsp[0].str)));
  }
#line 3135 "guillex.tab.c"
    break;

  case 41: /* destroyHeadOps: DESTROYHEAD ID SEMIC  */
#line 505 "guillex.y"
                         {
      (yyval.treeNode) = createNode2("DESTROYHEAD ID", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)));
    }
#line 3143 "guillex.tab.c"
    break;

  case 42: /* mapFilterOps: fCall MAP ID SEMIC  */
#line 511 "guillex.y"
                       {
      (yyval.treeNode) = createNode3("fCall MAP ID SEMIC", (yyvsp[-3].treeNode), createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)));
    }
#line 3151 "guillex.tab.c"
    break;

  case 43: /* mapFilterOps: fCall FILTER ID SEMIC  */
#line 515 "guillex.y"
                          {
      (yyval.treeNode) = createNode3("fCall FILTER ID SEMIC", (yyvsp[-3].treeNode), createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)));
    }
#line 3159 "guillex.tab.c"
    break;

  case 44: /* expression: assignExp  */
#line 521 "guillex.y"
              {
      (yyval.treeNode) = createNode1("assignExp", (yyvsp[0].treeNode));
    }
#line 3167 "guillex.tab.c"
    break;

  case 45: /* expression: simpleExp  */
#line 524 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3175 "guillex.tab.c"
    break;

  case 46: /* assignExp: ID ASSIGN expression  */
#line 530 "guillex.y"
                         {
      (yyval.treeNode) = createNode3("ID ASSIGN expression", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), (yyvsp[0].treeNode));
    }
#line 3183 "guillex.tab.c"
    break;

  case 47: /* simpleExp: binLogicalExp  */
#line 537 "guillex.y"
                  {
      (yyval.treeNode) = createNode1("binLogicalExp", (yyvsp[0].treeNode));
    }
#line 3191 "guillex.tab.c"
    break;

  case 48: /* constOp: INTEGER  */
#line 543 "guillex.y"
            {
      (yyval.treeNode) = createNode0Int((yyvsp[0].integer), 'i');
    }
#line 3199 "guillex.tab.c"
    break;

  case 49: /* constOp: DECIMAL  */
#line 546 "guillex.y"
            {
    (yyval.treeNode) = createNode0Dec((yyvsp[0].dec), 'd');
  }
#line 3207 "guillex.tab.c"
    break;

  case 50: /* constOp: NIL  */
#line 549 "guillex.y"
        {
    (yyval.treeNode) = createNode0Nil((yyvsp[0].str), 'n');
  }
#line 3215 "guillex.tab.c"
    break;

  case 51: /* inOp: READ PARENL ID PARENR SEMIC  */
#line 555 "guillex.y"
                             {
    (yyval.treeNode) = createNode2("READ PARENL ID PARENR SEMIC", createNode0((yyvsp[-4].str)), createNode0((yyvsp[-2].str)));
  }
#line 3223 "guillex.tab.c"
    break;

  case 52: /* outOp: WRITE PARENL outConst PARENR SEMIC  */
#line 561 "guillex.y"
                                      {
      (yyval.treeNode) = createNode2("WRITE PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
    }
#line 3231 "guillex.tab.c"
    break;

  case 53: /* outOp: WRITELN PARENL outConst PARENR SEMIC  */
#line 564 "guillex.y"
                                         {
      (yyval.treeNode) = createNode2("WRITELN PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
  }
#line 3239 "guillex.tab.c"
    break;

  case 54: /* outConst: STRING  */
#line 570 "guillex.y"
           {
      (yyval.treeNode) = createNode1("STRING", createNode0((yyvsp[0].str)));
    }
#line 3247 "guillex.tab.c"
    break;

  case 55: /* outConst: simpleExp  */
#line 573 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3255 "guillex.tab.c"
    break;

  case 56: /* binLogicalExp: binLogicalExp binLogicalOp relationalOp  */
#line 579 "guillex.y"
                                           {
      (yyval.treeNode) = createNode3("binLogicalExp binLogicalOp relationalOp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3263 "guillex.tab.c"
    break;

  case 57: /* binLogicalExp: relationalExp  */
#line 582 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("relationalExp", (yyvsp[0].treeNode));
  }
#line 3271 "guillex.tab.c"
    break;

  case 58: /* binLogicalOp: OR  */
#line 589 "guillex.y"
       {
      (yyval.treeNode) = createNode1("OR", createNode0((yyvsp[0].str)));
    }
#line 3279 "guillex.tab.c"
    break;

  case 59: /* binLogicalOp: AND  */
#line 592 "guillex.y"
        {
      (yyval.treeNode) = createNode1("AND", createNode0((yyvsp[0].str)));
  }
#line 3287 "guillex.tab.c"
    break;

  case 60: /* relationalExp: relationalExp relationalOp sumExp  */
#line 598 "guillex.y"
                                      {
      (yyval.treeNode) = createNode3("relationalExp relationalOp sumExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3295 "guillex.tab.c"
    break;

  case 61: /* relationalExp: sumExp  */
#line 601 "guillex.y"
           {
      (yyval.treeNode) = createNode1("sumExp", (yyvsp[0].treeNode));
  }
#line 3303 "guillex.tab.c"
    break;

  case 62: /* relationalOp: SMALLER  */
#line 608 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLER", createNode0((yyvsp[0].str)));
    }
#line 3311 "guillex.tab.c"
    break;

  case 63: /* relationalOp: GREATER  */
#line 611 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATER", createNode0((yyvsp[0].str)));
  }
#line 3319 "guillex.tab.c"
    break;

  case 64: /* relationalOp: SMALLEQ  */
#line 614 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLEQ", createNode0((yyvsp[0].str)));
  }
#line 3327 "guillex.tab.c"
    break;

  case 65: /* relationalOp: GREATEQ  */
#line 617 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATEQ", createNode0((yyvsp[0].str)));
  }
#line 3335 "guillex.tab.c"
    break;

  case 66: /* relationalOp: EQUALS  */
#line 620 "guillex.y"
           {
      (yyval.treeNode) = createNode1("EQUALS", createNode0((yyvsp[0].str)));
  }
#line 3343 "guillex.tab.c"
    break;

  case 67: /* relationalOp: DIFFERENT  */
#line 623 "guillex.y"
              {
      (yyval.treeNode) = createNode1("DIFFERENT", createNode0((yyvsp[0].str)));
  }
#line 3351 "guillex.tab.c"
    break;

  case 68: /* sumExp: sumExp sumOp mulExp  */
#line 629 "guillex.y"
                        {
      (yyval.treeNode) = createNode3("sumExp sumOp mulExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3359 "guillex.tab.c"
    break;

  case 69: /* sumExp: mulExp  */
#line 632 "guillex.y"
           {
      (yyval.treeNode) = createNode1("mulExp", (yyvsp[0].treeNode));
  }
#line 3367 "guillex.tab.c"
    break;

  case 70: /* sumOp: ADD  */
#line 638 "guillex.y"
        {
      (yyval.treeNode) = createNode1("ADD", createNode0((yyvsp[0].str)));
    }
#line 3375 "guillex.tab.c"
    break;

  case 71: /* sumOp: SUB  */
#line 641 "guillex.y"
        {
      (yyval.treeNode) = createNode1("SUB", createNode0((yyvsp[0].str)));
  }
#line 3383 "guillex.tab.c"
    break;

  case 72: /* mulExp: mulExp mulOp factor  */
#line 647 "guillex.y"
                        {
      (yyval.treeNode) = createNode3("mulExp mulOp factor", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3391 "guillex.tab.c"
    break;

  case 73: /* mulExp: factor  */
#line 650 "guillex.y"
           {
      (yyval.treeNode) = createNode1("factor", (yyvsp[0].treeNode));
  }
#line 3399 "guillex.tab.c"
    break;

  case 74: /* mulExp: sumOp factor  */
#line 653 "guillex.y"
                 {
      (yyval.treeNode) = createNode2("sumOp factor", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
  }
#line 3407 "guillex.tab.c"
    break;

  case 75: /* mulOp: MULT  */
#line 659 "guillex.y"
         {
      (yyval.treeNode) = createNode1("MULT", createNode0((yyvsp[0].str)));
    }
#line 3415 "guillex.tab.c"
    break;

  case 76: /* mulOp: DIV  */
#line 662 "guillex.y"
        {
      (yyval.treeNode) = createNode1("DIV", createNode0((yyvsp[0].str)));
  }
#line 3423 "guillex.tab.c"
    break;

  case 77: /* factor: ID  */
#line 668 "guillex.y"
       {
      (yyval.treeNode) = createNode1("ID", createNode0((yyvsp[0].str)));
    }
#line 3431 "guillex.tab.c"
    break;

  case 78: /* factor: fCall  */
#line 671 "guillex.y"
          {
      (yyval.treeNode) = createNode1("fCall", (yyvsp[0].treeNode));
  }
#line 3439 "guillex.tab.c"
    break;

  case 79: /* factor: PARENL simpleExp PARENR  */
#line 674 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("PARENL simpleExp PARENR", (yyvsp[-1].treeNode));
  }
#line 3447 "guillex.tab.c"
    break;

  case 80: /* factor: constOp  */
#line 677 "guillex.y"
            {
      (yyval.treeNode) = createNode1("constOp", (yyvsp[0].treeNode));
  }
#line 3455 "guillex.tab.c"
    break;

  case 81: /* fCall: ID PARENL callParams PARENR  */
#line 683 "guillex.y"
                                 {
      (yyval.treeNode) = createNode2("ID PARENL callParams PARENR", createNode0((yyvsp[-3].str)), (yyvsp[-1].treeNode));
    }
#line 3463 "guillex.tab.c"
    break;

  case 82: /* fCall: ID PARENL PARENR  */
#line 686 "guillex.y"
                     {
    (yyval.treeNode) = createNode1("ID PARENL PARENR", createNode0((yyvsp[-2].str)));
  }
#line 3471 "guillex.tab.c"
    break;

  case 83: /* callParams: callParams COMMA simpleExp  */
#line 692 "guillex.y"
                               {
      (yyval.treeNode) = createNode2("callParams COMMA simpleExp", (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 3479 "guillex.tab.c"
    break;

  case 84: /* callParams: simpleExp  */
#line 695 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3487 "guillex.tab.c"
    break;


#line 3491 "guillex.tab.c"

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

#line 702 "guillex.y"


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
  printf("------------------------Syntax analysis---------------------\n");
  abstractSyntaxTree = NULL;
  FILE *file;
  file = fopen(argv[1], "r");
  if(argc > 1){
    if(file){
      yyin = file;
      yyparse();
      printf("\n\n#### EOF ####\n\n");
      if(errors == 0){
        printf("\n\n--------------------------------symbols--------------------------------\n\n");
        printSymbols();
        printf("\n\n--------------------------------tree--------------------------------\n\n");
        printAndFreeTree(0, abstractSyntaxTree);
        freeSymbols();
      }
    }else{
      printf("File not found\n");
    }
  }
  else{
    printf("No file specified\n");
  }
  fclose(yyin);
  yylex_destroy();
  return 0;
}
