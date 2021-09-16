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
  YYSYMBOL_listExp = 59,                   /* listExp  */
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
#define YYLAST   3522

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  321

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
     365,   370,   378,   383,   392,   395,   401,   407,   413,   416,
     422,   425,   428,   431,   434,   437,   440,   443,   449,   455,
     458,   464,   467,   473,   479,   482,   485,   488,   494,   500,
     506,   509,   515,   521,   525,   531,   534,   537,   543,   550,
     556,   559,   562,   568,   574,   577,   583,   586,   589,   595,
     598,   605,   608,   614,   617,   624,   627,   630,   633,   636,
     639,   645,   648,   654,   657,   663,   666,   669,   675,   678,
     684,   687,   690,   693,   699,   702,   708,   711
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
  "iterStmt", "returnStmt", "listExp", "appendOps", "returnListOps",
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

#define YYPACT_NINF (-164)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      25,    19,    23,    37,    40,    95,   133,    18,    82,    62,
    -164,   151,   167,    11,   146,   115,    34,    15,    26,    28,
      29,    30,    63,  2355,   195,    34,    35,    34,    39,    46,
    3168,  3232,  3244,  3272,    84,   361,    77,    86,    87,    33,
      61,   118,   125,   145,   558,   343,  1458,  1497,  1536,  1575,
    1614,  1653,  1692,  1731,   159,   175,   184,   242,   210,   216,
     224,   237,   245,  3284,  1770,  1809,    94,  1069,  3457,   371,
    3312,  3324,  3352,   231,   239,    34,   265,   288,   558,   295,
      75,   268,   343,   629,   304,   513,   513,   271,  2492,   286,
     250,  1848,   297,  1887,  1103,  1142,  1181,   642,   727,   766,
     805,   844,   883,   922,   922,  3364,   382,   408,   371,   293,
     302,   310,   323,   328,  3392,   262,   284,   333,  3200,   345,
     350,   354,  2459,   362,   363,   366,   367,   372,  1926,  3404,
     139,  3485,  3432,  3444,   961,  3472,  2394,   922,   922,   355,
     384,   387,   298,   678,   391,   404,  1965,  2004,  2043,  2355,
     334,   334,  2082,   421,   409,   410,  2355,  2355,  2121,  2160,
     147,  2355,   422,  2795,  2828,  2840,   343,  2873,   120,  2353,
    3123,   568,  2885,  2918,  2930,  1000,  1039,  2445,  2478,  2511,
    2525,  2558,   343,  2570,   126,  3155,  3082,   588,  2603,  2615,
    2648,   457,   420,   428,   469,   435,   441,   119,   248,   431,
     461,   480,   535,   578,   486,   488,   490,   464,   466,   485,
     491,   492,   558,  2355,   717,   427,   756,   795,   834,   873,
     912,   465,   951,   990,   577,   503,   526,  2199,  2238,   500,
    1220,   343,   343,  2963,   568,   136,   501,  1259,   961,   961,
    2660,   588,   502,   504,  2975,   307,   506,   509,   515,   343,
     629,   531,   513,   513,   527,  2277,  1029,  1068,  2426,   547,
     552,   556,   561,   567,  2316,  3008,   316,   329,   380,   385,
     416,   423,   499,  3135,  3020,  3053,  2693,   319,  2705,   218,
     274,   300,   405,   442,   459,   497,  3094,  2738,  2750,  3065,
     565,   571,   573,   570,   572,   575,  1107,  1146,  2783,  2394,
     922,   922,   576,   582,   583,  1185,   585,   586,  1224,  1263,
    1302,  2394,   334,   334,  1341,   584,   589,  2394,  2394,  1380,
    1419
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,  -164,   621,     2,  -164,     0,   605,    36,   -15,
    -144,   -42,  -129,  -120,   -94,   -91,   -59,   -50,    12,    20,
      27,    71,   -40,   -75,   -34,   247,   -77,   -69,   -72,   381,
    -137,   445,   156,   -24,   124,   424,  -163,   201,   321,  -134
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    46,     6,   162,    18,    19,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,   126,    66,
      96,    67,   103,    68,    69,    70,   108,    71,    72,   116
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    24,     5,     7,    87,     5,    91,   217,   119,   234,
      73,    89,    74,    17,   127,    15,   218,   227,    17,   -16,
      17,   170,     8,    10,     9,   241,   124,   124,    17,     1,
      15,   230,   -15,    15,   -12,   192,   192,    -2,   112,   -14,
      -4,     1,   219,    15,    -4,   220,   115,   237,   117,   120,
     -13,   125,   125,    16,    26,    12,   186,   -16,   170,   222,
     109,   170,   170,   245,    26,    14,    29,   223,    25,   255,
     -15,    27,   -12,    23,    82,   154,   155,   -14,   178,   131,
     -40,    75,   179,   180,   181,    34,    35,   -73,   -13,   -41,
      81,   -73,   -73,   -73,   143,    -5,   221,   193,   193,    -5,
     142,   277,    83,   144,   145,   194,   194,   152,    94,    95,
     186,   234,   195,   195,   158,   159,   182,   114,    21,   -12,
      22,   216,   178,    13,   241,   -73,   179,   180,   181,    34,
      35,   -49,   229,    -6,    94,    95,   215,    -6,   214,   178,
      94,    95,   170,   179,   180,   181,    34,    35,   236,   261,
     225,    -3,   226,   -59,   -59,    -3,   196,   196,   170,    84,
     182,   244,   -49,   115,   -49,   259,    85,    -7,   -49,   171,
     217,    -7,   254,   186,   192,   291,   -59,   182,   276,   218,
     294,   295,   217,   -13,   260,    91,    86,    20,   217,   217,
     262,   218,   104,   124,   124,    -9,   -47,   218,   218,    -9,
     170,   115,   192,   192,   187,   219,   171,   273,   220,   171,
     171,   186,   -34,    91,   286,   290,   292,   219,   125,   125,
     220,   -35,   222,   219,   219,   170,   220,   220,   170,   170,
     223,    -8,   -65,   -65,   222,    -8,   193,   315,   316,   -11,
     222,   222,   223,   -11,   194,    92,   173,   -36,   223,   223,
     -17,   195,   130,   -37,   -17,   104,   -65,   305,   187,   221,
     -65,    93,   -65,   -65,   193,   193,   306,   307,   110,   314,
     105,   221,   194,   194,   -45,   319,   320,   221,   221,   195,
     195,   189,   -46,   173,   216,   -65,   173,   173,   -66,   -66,
     171,   111,   167,   -10,   232,   196,   216,   -10,   113,   215,
     -87,   214,   216,   216,   -87,   -42,   171,   121,   128,   133,
     239,   215,   -66,   214,   -67,   -67,   -66,   215,   215,   214,
     214,   187,   134,   196,   196,   231,   135,   183,   129,   167,
     -65,   -65,   167,   167,   -39,   189,   -86,   153,   -67,   -38,
     -86,   238,   -67,   -66,   -66,   134,    88,   -44,   171,   289,
     163,   164,   165,    34,    35,   171,   171,   134,   -65,   187,
     -48,   298,   187,   187,   -74,   -43,   174,   173,   -74,   -74,
     -74,   -66,   233,   171,   177,   136,   171,   171,    31,    32,
      33,   183,   137,   173,   166,   -78,   272,   138,   240,   -78,
     -78,   -78,   146,   285,   -67,   -67,   139,   232,   189,   -68,
     -68,   190,   -74,   174,   -56,   -58,   174,   174,   -57,   140,
     239,   -79,    45,   167,   141,   -79,   -79,   -79,   167,   -68,
     -68,   147,   -67,   -78,   148,   173,   168,   -68,   150,   167,
     -69,   -69,   173,   173,   183,   275,   189,   -70,   -70,   189,
     189,   151,   288,   -68,   183,   -66,   -66,   -68,   224,   -79,
     173,   156,   157,   173,   173,   190,   -69,   -69,   -69,   228,
     242,   184,   -34,   168,   256,   -70,   168,   168,   -66,   172,
     -35,   167,   243,   -70,   -70,   -67,   -67,   -36,   167,   167,
     -69,   167,   183,   -37,   -69,   183,   183,   174,   183,   246,
     169,   247,   174,   248,   -68,   -68,   167,   -70,   -67,   167,
     167,   -70,   257,   174,   188,   249,   172,   250,   190,   172,
     172,   -59,   -59,   -59,   -59,   184,   122,   -68,   190,   123,
     163,   164,   165,    34,    35,   185,   251,   169,   132,   263,
     169,   169,   252,   253,   293,   -59,    36,    37,   191,   -59,
     -12,   -59,   265,   278,   -42,   174,   -39,   168,   -38,   -69,
     -69,   -44,   174,   174,   166,   174,   190,   -43,   188,   190,
     190,    30,   190,   168,   296,    31,    32,    33,    34,    35,
     174,    88,   -69,   174,   174,   163,   164,   165,   184,   185,
     258,    36,    37,    38,   163,   164,   165,    34,    35,   -47,
     172,   178,   -70,   -70,   -48,   179,   180,   181,   -45,    45,
      36,    37,   191,   -46,   -13,   168,   172,   299,   300,   166,
     301,   169,   302,   308,   303,   -70,   184,   304,   166,   309,
     310,   188,   312,   313,    11,    28,   317,   169,     0,   182,
     168,   318,   118,   168,   168,     0,    31,    32,    33,    34,
      35,     0,   185,     0,     0,   -65,     0,     0,   172,   -65,
     -65,   -65,   -65,   -65,     0,   172,   274,     0,     0,   188,
       0,     0,   188,   287,     0,     0,     0,     0,     0,   169,
      45,     0,     0,   172,     0,     0,   172,   172,     0,     0,
     185,   -29,   -29,   -65,     0,   -29,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,   169,     0,     0,   169,   169,     0,
       0,   -29,   -29,   -29,     0,     0,     0,   149,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,
     -27,   -27,     0,     0,   -27,   -27,   -27,   -27,   -27,     0,
     -66,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,     0,
     -27,   -27,   -27,     0,     0,     0,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,   -21,
     -21,     0,     0,   -21,   -21,   -21,   -21,   -21,   -66,   -67,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,     0,   -21,
     -21,   -21,     0,     0,     0,   -21,     0,   -21,   -21,   -21,
     -21,   -21,   -21,     0,     0,   -21,   -21,   -21,   -20,   -20,
       0,     0,   -20,   -20,   -20,   -20,   -20,   -67,   -68,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,     0,   -20,   -20,
     -20,     0,     0,     0,   -20,     0,   -20,   -20,   -20,   -20,
     -20,   -20,     0,     0,   -20,   -20,   -20,   -22,   -22,     0,
       0,   -22,   -22,   -22,   -22,   -22,   -68,   -69,     0,     0,
       0,   -69,   -69,   -69,   -69,   -69,     0,   -22,   -22,   -22,
       0,     0,     0,   -22,     0,   -22,   -22,   -22,   -22,   -22,
     -22,     0,     0,   -22,   -22,   -22,   -23,   -23,     0,     0,
     -23,   -23,   -23,   -23,   -23,   -69,   -70,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,     0,   -23,   -23,   -23,     0,
       0,     0,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,   -23,   -23,   -23,   -24,   -24,     0,     0,   -24,
     -24,   -24,   -24,   -24,   -70,   177,     0,     0,     0,    31,
      32,    33,    34,    35,     0,   -24,   -24,   -24,     0,     0,
       0,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,
       0,   -24,   -24,   -24,   -25,   -25,     0,     0,   -25,   -25,
     -25,   -25,   -25,    45,   178,     0,     0,     0,   179,   180,
     181,    34,    35,     0,   -25,   -25,   -25,     0,     0,     0,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,
     -25,   -25,   -25,   -26,   -26,     0,     0,   -26,   -26,   -26,
     -26,   -26,   182,   -73,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,     0,   -26,   -26,   -26,     0,     0,     0,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,
     -26,   -26,    -7,    -7,     0,     0,    -7,    -7,    -7,    -7,
      -7,   -73,   -74,     0,     0,     0,   -74,   -74,   -74,   -74,
     -74,     0,    -7,    -7,    -7,     0,     0,     0,    -7,     0,
      -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,    -7,
      -7,   -28,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,
     -74,     0,     0,   -60,   -60,    97,    98,    99,   100,   101,
     102,   -28,   -28,   -28,     0,     0,     0,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -60,   -28,   -28,   -28,
     -33,   -33,     0,     0,   -33,   -33,   -33,   -33,   -33,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,     0,     0,     0,
     -33,   -33,   -33,     0,     0,     0,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,   -17,
     -17,     0,     0,   -17,   -17,   -17,   -17,   -17,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,     0,     0,     0,   -17,
     -17,   -17,     0,     0,     0,   -17,     0,   -17,   -17,   -17,
     -17,   -17,   -17,     0,     0,   -17,   -17,   -17,   -29,   -29,
       0,     0,   -29,   -29,   -29,   -29,   -29,   198,   199,   200,
     201,   202,   203,     0,     0,     0,     0,     0,   -29,   -29,
     -29,     0,     0,     0,   311,     0,   -29,   -29,   -29,   -29,
     -29,   -29,     0,     0,   -29,   -29,   -29,   -53,   -53,     0,
       0,   -53,   -53,   -53,   -53,   -53,   266,   267,   268,   269,
     270,   271,     0,     0,     0,     0,     0,   -53,   -53,   -53,
       0,     0,     0,   -53,     0,   -53,   -53,   -53,   -53,   -53,
     -53,     0,     0,   -53,   -53,   -53,   -54,   -54,     0,     0,
     -54,   -54,   -54,   -54,   -54,   279,   280,   281,   282,   283,
     284,     0,     0,     0,     0,     0,   -54,   -54,   -54,     0,
       0,     0,   -54,     0,   -54,   -54,   -54,   -54,   -54,   -54,
       0,     0,   -54,   -54,   -54,   -55,   -55,     0,     0,   -55,
     -55,   -55,   -55,   -55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -55,   -55,   -55,     0,     0,
       0,   -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,     0,
       0,   -55,   -55,   -55,   -30,   -30,     0,     0,   -30,   -30,
     -30,   -30,   -30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -30,   -30,   -30,     0,     0,     0,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
     -30,   -30,   -30,   -31,   -31,     0,     0,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -31,   -31,   -31,     0,     0,     0,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,
     -31,   -31,   -32,   -32,     0,     0,   -32,   -32,   -32,   -32,
     -32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -32,   -32,   -32,     0,     0,     0,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,
     -32,   -27,   -27,     0,     0,   -27,   -27,   -27,   -27,   -27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,   -27,   -27,     0,     0,     0,     0,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,
     -21,   -21,     0,     0,   -21,   -21,   -21,   -21,   -21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -21,   -21,   -21,     0,     0,     0,     0,     0,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,   -21,   -21,   -21,    30,
     160,     0,     0,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      37,    38,     0,     0,     0,     0,     0,    39,    40,    41,
      42,    43,    44,     0,     0,   161,    90,    45,   -19,   -19,
       0,     0,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -19,   -19,
     -19,     0,     0,     0,     0,     0,   -19,   -19,   -19,   -19,
     -19,   -19,     0,     0,   -19,   -19,   -19,   -20,   -20,     0,
       0,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -20,   -20,   -20,
       0,     0,     0,     0,     0,   -20,   -20,   -20,   -20,   -20,
     -20,     0,     0,   -20,   -20,   -20,   -22,   -22,     0,     0,
     -22,   -22,   -22,   -22,   -22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -22,   -22,   -22,     0,
       0,     0,     0,     0,   -22,   -22,   -22,   -22,   -22,   -22,
       0,     0,   -22,   -22,   -22,   -23,   -23,     0,     0,   -23,
     -23,   -23,   -23,   -23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -23,   -23,   -23,     0,     0,
       0,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
       0,   -23,   -23,   -23,   -24,   -24,     0,     0,   -24,   -24,
     -24,   -24,   -24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -24,   -24,   -24,     0,     0,     0,
       0,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
     -24,   -24,   -24,   -25,   -25,     0,     0,   -25,   -25,   -25,
     -25,   -25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -25,   -25,   -25,     0,     0,     0,     0,
       0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,
     -25,   -25,   -26,   -26,     0,     0,   -26,   -26,   -26,   -26,
     -26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -26,   -26,   -26,     0,     0,     0,     0,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,   -26,
     -26,   -18,   -18,     0,     0,   -18,   -18,   -18,   -18,   -18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -18,   -18,   -18,     0,     0,     0,     0,     0,   -18,
     -18,   -18,   -18,   -18,   -18,     0,     0,   -18,   -18,   -18,
     -28,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,   -28,   -28,     0,     0,     0,     0,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,   -33,
     -33,     0,     0,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -33,
     -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,   -33,   -33,   -33,   -53,   -53,
       0,     0,   -53,   -53,   -53,   -53,   -53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -53,   -53,
     -53,     0,     0,     0,     0,     0,   -53,   -53,   -53,   -53,
     -53,   -53,     0,     0,   -53,   -53,   -53,   -54,   -54,     0,
       0,   -54,   -54,   -54,   -54,   -54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -54,   -54,   -54,
       0,     0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,
     -54,     0,     0,   -54,   -54,   -54,   -55,   -55,     0,     0,
     -55,   -55,   -55,   -55,   -55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -55,   -55,   -55,     0,
       0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,
       0,     0,   -55,   -55,   -55,   -30,   -30,     0,     0,   -30,
     -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -30,   -30,   -30,     0,     0,
       0,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,   -30,   -30,   -30,   -31,   -31,     0,     0,   -31,   -31,
     -31,   -31,   -31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -31,   -31,   -31,     0,     0,     0,
       0,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
     -31,   -31,   -31,   -32,   -32,     0,     0,   -32,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -32,   -32,   -32,     0,     0,     0,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,
     -32,   -32,    30,   160,     0,     0,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    37,    38,     0,     0,     0,     0,     0,
      39,    40,    41,    42,    43,    44,     0,     0,   161,   264,
      45,    -7,    -7,     0,     0,    -7,    -7,    -7,    -7,    -7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    -7,    -7,    -7,     0,     0,     0,     0,     0,    -7,
      -7,    -7,    -7,    -7,    -7,     0,     0,    -7,    -7,    -7,
      30,   160,     0,     0,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,    37,    38,     0,     0,     0,     0,     0,    39,    40,
      41,    42,    43,    44,     0,     0,   161,   297,    45,   -17,
     -17,     0,     0,   -17,   -17,   -17,   -17,   -17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -17,
     -17,   -17,     0,     0,     0,     0,     0,   -17,   -17,   -17,
     -17,   -17,   -17,     0,     0,   -17,   -17,   -17,    30,   160,
       0,     0,    31,    32,    33,    34,    35,   -60,   -60,    97,
      98,    99,   100,   101,   102,     0,     0,     0,    36,    37,
      38,     0,     0,     0,     0,     0,    39,    40,    41,    42,
      43,    44,     0,     0,   161,   -60,    45,    30,   160,     0,
       0,    31,    32,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,    37,    38,
       0,     0,     0,     0,     0,   207,   208,   209,   210,   211,
     212,     0,     0,   213,     0,    45,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   204,     0,
       0,     0,   205,   224,   206,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   197,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   204,   -80,     0,     0,   205,    80,   206,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     197,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,   -80,     0,     0,   235,
     -80,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   197,   -80,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,   -52,
       0,     0,     0,   -52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -50,     0,     0,     0,   -50,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,   -51,     0,     0,     0,
     -51,     0,     0,     0,     0,     0,     0,     0,   -83,     0,
       0,     0,   -83,   -72,   -72,   106,   107,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,   -72,     0,     0,     0,   -72,     0,     0,     0,     0,
       0,     0,     0,   -76,     0,     0,     0,   -76,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,   -81,     0,     0,     0,
     -81,     0,     0,     0,     0,     0,     0,     0,   -77,     0,
       0,     0,   -77,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,   -85,     0,     0,     0,   -85,     0,     0,     0,     0,
       0,     0,     0,   -82,     0,     0,     0,   -82,   -71,   -71,
     106,   107,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,   -71,     0,     0,     0,
     -71,     0,     0,     0,     0,     0,     0,     0,   -75,     0,
       0,     0,   -75,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,
       0,   -84,     0,     0,     0,   -84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -52,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,     0,     0,     0,     0,     0,     0,     0,     0,
     -50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -51,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -72,   -72,   106,   107,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,   -83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -72,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,     0,     0,   -77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -85,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -71,   -71,   106,   107,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,     0,
     -82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -71,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,     0,   175,   176,     0,   -75,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   175,   176,     0,   -84,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,
     -64,     0,     0,     0,   -64,     0,     0,     0,     0,     0,
       0,     0,   -63,   175,   176,     0,   -63,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   175,   176,     0,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,     0,     0,     0,     0,   -64,     0,     0,     0,   -60,
     -60,    97,    98,    99,   100,   101,   102,   -63,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
      76,     0,     0,   -60,    77,    78,    79,   -60,     0,     0,
       0,     0,     0,     0,     0,   -80,     0,     0,     0,    80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,     0,     0,
       0,    80,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,     0,     0,     0,   -52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -50,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,   -51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -83,   -72,   -72,   106,   107,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,   -72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -76,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,   -81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -77,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,   -85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -71,   -71,   106,   107,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,   175,   176,   -71,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,   -75,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -64,   175,   176,     0,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   -84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -63
};

static const yytype_int16 yycheck[] =
{
       0,    16,     0,     3,    44,     3,    48,   136,    83,   172,
      25,    45,    27,    13,    86,     4,   136,   161,    18,     4,
      20,    45,     3,     0,     5,   188,    85,    86,    28,     4,
       4,   168,     4,     4,     4,    85,    86,     0,    78,     4,
       0,     4,   136,     4,     4,   136,    80,   184,    82,    83,
       4,    85,    86,    42,    18,    37,    80,    42,    82,   136,
      75,    85,    86,   197,    28,     3,     3,   136,    42,   213,
      42,    42,    42,    39,    41,   150,   151,    42,     3,   103,
       3,    42,     7,     8,     9,    10,    11,     3,    42,     3,
       3,     7,     8,     9,   136,     0,   136,    85,    86,     4,
     134,   235,    41,   137,   138,    85,    86,   149,    14,    15,
     134,   274,    85,    86,   156,   157,    41,    42,     3,    37,
       5,   136,     3,    41,   287,    41,     7,     8,     9,    10,
      11,    37,   166,     0,    14,    15,   136,     4,   136,     3,
      14,    15,   166,     7,     8,     9,    10,    11,   182,   224,
       3,     0,     5,    14,    15,     4,    85,    86,   182,    41,
      41,    42,    42,   197,    38,   224,    41,     0,    42,    45,
     299,     4,   212,   197,   224,   250,    37,    41,    42,   299,
     252,   253,   311,    37,   224,   227,    41,    41,   317,   318,
     224,   311,    68,   252,   253,     0,    37,   317,   318,     4,
     224,   235,   252,   253,    80,   299,    82,   231,   299,    85,
      86,   235,    37,   255,   238,   249,   250,   311,   252,   253,
     311,    37,   299,   317,   318,   249,   317,   318,   252,   253,
     299,     0,    14,    15,   311,     4,   224,   312,   313,     0,
     317,   318,   311,     4,   224,     3,    45,    37,   317,   318,
       0,   224,    96,    37,     4,   131,    38,   299,   134,   299,
      42,    37,    14,    15,   252,   253,   300,   301,     3,   311,
      69,   311,   252,   253,    37,   317,   318,   317,   318,   252,
     253,    80,    37,    82,   299,    37,    85,    86,    14,    15,
     166,     3,    45,     0,   170,   224,   311,     4,     3,   299,
      38,   299,   317,   318,    42,    37,   182,     3,    37,   108,
     186,   311,    38,   311,    14,    15,    42,   317,   318,   317,
     318,   197,    38,   252,   253,   169,    42,    80,    42,    82,
      14,    15,    85,    86,    37,   134,    38,     3,    38,    37,
      42,   185,    42,    14,    15,    38,     3,    37,   224,    42,
       7,     8,     9,    10,    11,   231,   232,    38,    42,   235,
      37,    42,   238,   239,     3,    37,    45,   166,     7,     8,
       9,    42,   171,   249,     3,    42,   252,   253,     7,     8,
       9,   134,    37,   182,    41,     3,   230,    37,   187,     7,
       8,     9,    37,   237,    14,    15,    42,   273,   197,    14,
      15,    80,    41,    82,    42,    42,    85,    86,    42,    42,
     286,     3,    41,   166,    42,     7,     8,     9,   171,    14,
      15,    37,    42,    41,    37,   224,    45,    42,    37,   182,
      14,    15,   231,   232,   187,   234,   235,    14,    15,   238,
     239,    37,   241,    38,   197,    14,    15,    42,    27,    41,
     249,    42,    42,   252,   253,   134,    14,    15,    42,    37,
       3,    80,    42,    82,    37,    42,    85,    86,    37,    45,
      42,   224,     3,    14,    15,    14,    15,    42,   231,   232,
      38,   234,   235,    42,    42,   238,   239,   166,   241,     3,
      45,     3,   171,     3,    14,    15,   249,    38,    37,   252,
     253,    42,    37,   182,    80,    41,    82,    41,   187,    85,
      86,    14,    15,    14,    15,   134,     3,    37,   197,     6,
       7,     8,     9,    10,    11,    80,    41,    82,   104,     3,
      85,    86,    41,    41,     3,    38,    23,    24,    25,    42,
      37,    42,    42,    42,    42,   224,    42,   166,    42,    14,
      15,    42,   231,   232,    41,   234,   235,    42,   134,   238,
     239,     3,   241,   182,    37,     7,     8,     9,    10,    11,
     249,     3,    37,   252,   253,     7,     8,     9,   197,   134,
       3,    23,    24,    25,     7,     8,     9,    10,    11,    42,
     166,     3,    14,    15,    42,     7,     8,     9,    42,    41,
      23,    24,    25,    42,    37,   224,   182,    42,    37,    41,
      37,   166,    42,    37,    42,    37,   235,    42,    41,    37,
      37,   197,    37,    37,     3,    20,    42,   182,    -1,    41,
     249,    42,     3,   252,   253,    -1,     7,     8,     9,    10,
      11,    -1,   197,    -1,    -1,     3,    -1,    -1,   224,     7,
       8,     9,    10,    11,    -1,   231,   232,    -1,    -1,   235,
      -1,    -1,   238,   239,    -1,    -1,    -1,    -1,    -1,   224,
      41,    -1,    -1,   249,    -1,    -1,   252,   253,    -1,    -1,
     235,     3,     4,    41,    -1,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,   249,    -1,    -1,   252,   253,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    -1,
       3,    -1,    -1,    -1,     7,     8,     9,    10,    11,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,    -1,     7,     8,     9,    10,    11,    41,     3,
      -1,    -1,    -1,     7,     8,     9,    10,    11,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,    -1,     7,     8,     9,    10,    11,    41,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    41,     3,    -1,    -1,
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
       9,    10,    11,    -1,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,    -1,     7,     8,     9,
      10,    11,    41,     3,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,    -1,     7,     8,     9,    10,
      11,    41,     3,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,    -1,     7,     8,     9,    10,    11,
      41,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    37,    39,    40,    41,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,    -1,     7,     8,     9,    10,    11,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,    -1,     7,     8,     9,    10,    11,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,
       7,     8,     9,    10,    11,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
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
      -1,    -1,     7,     8,     9,    10,    11,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    42,    41,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    41,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    41,    42,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    37,    -1,    -1,    26,    41,    28,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      41,    42,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    38,    -1,    -1,    41,
      42,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    41,    42,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    38,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    10,    11,    -1,    42,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    -1,    42,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    10,    11,    -1,    42,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    42,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    38,    26,    27,    28,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    41,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    10,    11,    37,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    37,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    37,    10,    11,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    44,    45,    46,    47,    48,    49,     3,     5,
       0,    46,    37,    41,     3,     4,    42,    49,    50,    51,
      41,     3,     5,    39,    52,    42,    51,    42,    50,     3,
       3,     7,     8,     9,    10,    11,    23,    24,    25,    31,
      32,    33,    34,    35,    36,    41,    47,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    72,    74,    76,    77,
      78,    80,    81,    52,    52,    42,    22,    26,    27,    28,
      41,     3,    41,    41,    41,    41,    41,    65,     3,    67,
      40,    54,     3,    37,    14,    15,    73,    16,    17,    18,
      19,    20,    21,    75,    77,    80,    12,    13,    79,    52,
       3,     3,    65,     3,    42,    67,    82,    67,     3,    66,
      67,     3,     3,     6,    59,    67,    71,    71,    37,    42,
      75,    76,    78,    80,    38,    42,    42,    37,    37,    42,
      42,    42,    67,    54,    67,    67,    37,    37,    37,    29,
      37,    37,    54,     3,    66,    66,    42,    42,    54,    54,
       4,    39,    49,     7,     8,     9,    41,    68,    72,    74,
      76,    77,    78,    80,    81,    10,    11,     3,     3,     7,
       8,     9,    41,    68,    72,    74,    76,    77,    78,    80,
      81,    25,    60,    61,    62,    63,    64,    41,    16,    17,
      18,    19,    20,    21,    22,    26,    28,    31,    32,    33,
      34,    35,    36,    39,    47,    49,    52,    55,    56,    57,
      58,    65,    69,    70,    27,     3,     5,    53,    37,    67,
      73,    75,    77,    80,    79,    41,    67,    73,    75,    77,
      80,    79,     3,     3,    42,    82,     3,     3,     3,    41,
      41,    41,    41,    41,    65,    53,    37,    37,     3,    59,
      65,    66,    67,     3,    40,    42,    16,    17,    18,    19,
      20,    21,    75,    76,    78,    80,    42,    82,    42,    16,
      17,    18,    19,    20,    21,    75,    76,    78,    80,    42,
      67,    66,    67,     3,    71,    71,    37,    40,    42,    42,
      37,    37,    42,    42,    42,    54,    67,    67,    37,    37,
      37,    29,    37,    37,    54,    66,    66,    42,    42,    54,
      54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    47,    48,    48,
      48,    48,    49,    49,    50,    50,    51,    52,    53,    53,
      54,    54,    54,    54,    54,    54,    54,    54,    55,    56,
      56,    57,    57,    58,    59,    59,    59,    59,    60,    61,
      62,    62,    63,    64,    64,    65,    65,    65,    66,    67,
      68,    68,    68,    69,    70,    70,    71,    71,    71,    72,
      72,    73,    73,    74,    74,    75,    75,    75,    75,    75,
      75,    76,    76,    77,    77,    78,    78,    78,    79,    79,
      80,    80,    80,    80,    81,    81,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     6,     5,
       7,     6,     2,     3,     2,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     5,
       7,     9,     9,     3,     1,     1,     1,     1,     3,     2,
       1,     1,     2,     3,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     5,     5,     5,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
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
#line 326 "guillex.y"
                        {
        abstractSyntaxTree = (yyval.treeNode);
    }
#line 2630 "guillex.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 332 "guillex.y"
                                    {
       (yyval.treeNode) = createNode2("declarationsList declaration", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
     }
#line 2638 "guillex.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 335 "guillex.y"
                      {
    (yyval.treeNode) = createNode1("declaration", (yyvsp[0].treeNode));
  }
#line 2646 "guillex.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 341 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
    }
#line 2654 "guillex.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 344 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("funcDeclaration", (yyvsp[0].treeNode));
    }
#line 2662 "guillex.tab.c"
    break;

  case 7: /* varDeclaration: simpleVarDeclaration SEMIC  */
#line 350 "guillex.y"
                               {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[-1].treeNode));}
#line 2669 "guillex.tab.c"
    break;

  case 8: /* funcDeclaration: TYPE ID PARENL params PARENR compoundStmt  */
#line 355 "guillex.y"
                                              {
      addSymbol(symbolIdCounter, (yyvsp[-4].str), "func", (yyvsp[-5].str));
      symbolIdCounter++;
      (yyval.treeNode) = createNode4("TYPE ID PARENL params PARENR compoundStmt", createNode0((yyvsp[-5].str)), createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
  }
#line 2679 "guillex.tab.c"
    break;

  case 9: /* funcDeclaration: TYPE ID PARENL PARENR compoundStmt  */
#line 360 "guillex.y"
                                       {
    addSymbol(symbolIdCounter, (yyvsp[-3].str), "func", (yyvsp[-4].str));
    symbolIdCounter++;
    (yyval.treeNode) = createNode3("TYPE ID PARENL PARENR compoundStmt", createNode0((yyvsp[-4].str)), createNode0((yyvsp[-3].str)), (yyvsp[0].treeNode));                                                                       
  }
#line 2689 "guillex.tab.c"
    break;

  case 10: /* funcDeclaration: TYPE LISTTYPE ID PARENL params PARENR compoundStmt  */
#line 365 "guillex.y"
                                                      {
      addSymbol(symbolIdCounter, (yyvsp[-4].str), "func", (yyvsp[-5].str));
      symbolIdCounter++;
      (yyval.treeNode) = createNode5("TYPE LISTTYPE ID PARENL params PARENR compoundStmt", createNode0((yyvsp[-6].str)), createNode0List((yyvsp[-5].str), 'l'), createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
  }
#line 2699 "guillex.tab.c"
    break;

  case 11: /* funcDeclaration: TYPE LISTTYPE ID PARENL PARENR compoundStmt  */
#line 370 "guillex.y"
                                               {
      addSymbol(symbolIdCounter, (yyvsp[-3].str), "func", (yyvsp[-4].str));
      symbolIdCounter++;
      (yyval.treeNode) = createNode4("TYPE LISTTYPE ID PARENL PARENR compoundStmt", createNode0((yyvsp[-5].str)), createNode0List((yyvsp[-4].str), 'l'), createNode0((yyvsp[-3].str)), (yyvsp[0].treeNode));
    }
#line 2709 "guillex.tab.c"
    break;

  case 12: /* simpleVarDeclaration: TYPE ID  */
#line 378 "guillex.y"
            {
      addSymbol(symbolIdCounter, (yyvsp[0].str), "var", (yyvsp[-1].str));
      symbolIdCounter++;
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      }
#line 2719 "guillex.tab.c"
    break;

  case 13: /* simpleVarDeclaration: TYPE LISTTYPE ID  */
#line 383 "guillex.y"
                       {
      addSymbol(symbolIdCounter, (yyvsp[0].str), "var", (yyvsp[-1].str));
      symbolIdCounter++;
      (yyval.treeNode) = createNode3("TYPE ID", createNode0((yyvsp[-2].str)), createNode0List((yyvsp[-1].str), 'l'), createNode0((yyvsp[0].str)));
    }
#line 2729 "guillex.tab.c"
    break;

  case 14: /* params: params param  */
#line 392 "guillex.y"
                 {
      (yyval.treeNode) = createNode2("params param", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
      }
#line 2737 "guillex.tab.c"
    break;

  case 15: /* params: param  */
#line 395 "guillex.y"
          { 
    (yyval.treeNode) = createNode1("param", (yyvsp[0].treeNode)); 
    }
#line 2745 "guillex.tab.c"
    break;

  case 16: /* param: simpleVarDeclaration  */
#line 401 "guillex.y"
                         {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[0].treeNode));
    }
#line 2753 "guillex.tab.c"
    break;

  case 17: /* compoundStmt: STFUNC stmtList ENDFUNC  */
#line 407 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[-1].treeNode));
    }
#line 2761 "guillex.tab.c"
    break;

  case 18: /* stmtList: stmtList primitiveStmt  */
#line 413 "guillex.y"
                              {
      (yyval.treeNode) = createNode2("stmtList primitiveStmt", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 2769 "guillex.tab.c"
    break;

  case 19: /* stmtList: primitiveStmt  */
#line 416 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("primitiveStmt", (yyvsp[0].treeNode));
  }
#line 2777 "guillex.tab.c"
    break;

  case 20: /* primitiveStmt: exprStmt  */
#line 422 "guillex.y"
             {
      (yyval.treeNode) = createNode1("exprStmt", (yyvsp[0].treeNode));
    }
#line 2785 "guillex.tab.c"
    break;

  case 21: /* primitiveStmt: compoundStmt  */
#line 425 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[0].treeNode));
  }
#line 2793 "guillex.tab.c"
    break;

  case 22: /* primitiveStmt: condStmt  */
#line 428 "guillex.y"
             {
    (yyval.treeNode) = createNode1("condStmt", (yyvsp[0].treeNode));
  }
#line 2801 "guillex.tab.c"
    break;

  case 23: /* primitiveStmt: iterStmt  */
#line 431 "guillex.y"
             {
    (yyval.treeNode) = createNode1("iterStmt", (yyvsp[0].treeNode));
  }
#line 2809 "guillex.tab.c"
    break;

  case 24: /* primitiveStmt: returnStmt  */
#line 434 "guillex.y"
               {
    (yyval.treeNode) = createNode1("returnStmt", (yyvsp[0].treeNode));
  }
#line 2817 "guillex.tab.c"
    break;

  case 25: /* primitiveStmt: inOp  */
#line 437 "guillex.y"
         {
    (yyval.treeNode) = createNode1("inOp", (yyvsp[0].treeNode));
  }
#line 2825 "guillex.tab.c"
    break;

  case 26: /* primitiveStmt: outOp  */
#line 440 "guillex.y"
          {
    (yyval.treeNode) = createNode1("outOp", (yyvsp[0].treeNode));
  }
#line 2833 "guillex.tab.c"
    break;

  case 27: /* primitiveStmt: varDeclaration  */
#line 443 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
  }
#line 2841 "guillex.tab.c"
    break;

  case 28: /* exprStmt: expression SEMIC  */
#line 449 "guillex.y"
                     {
      (yyval.treeNode) = createNode1("expression SEMIC", (yyvsp[-1].treeNode));
    }
#line 2849 "guillex.tab.c"
    break;

  case 29: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt  */
#line 455 "guillex.y"
                                                        {
      (yyval.treeNode) = createNode3("IF PARENL simpleExp PARENR primitiveStmt", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 2857 "guillex.tab.c"
    break;

  case 30: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt ELSE primitiveStmt  */
#line 458 "guillex.y"
                                                                {
    (yyval.treeNode) = createNode5("IF PARENL primitiveExp PARENR primitiveStmt ELSE primitiveStmt", createNode0((yyvsp[-6].str)), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), createNode0((yyvsp[-1].str)), (yyvsp[0].treeNode));
  }
#line 2865 "guillex.tab.c"
    break;

  case 31: /* iterStmt: FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 464 "guillex.y"
                                                                              {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-8].str)), (yyvsp[-6].treeNode), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 2873 "guillex.tab.c"
    break;

  case 32: /* iterStmt: FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 467 "guillex.y"
                                                                              {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-8].str)), (yyvsp[-6].treeNode), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
  }
#line 2881 "guillex.tab.c"
    break;

  case 33: /* returnStmt: RETURN expression SEMIC  */
#line 473 "guillex.y"
                            {
      (yyval.treeNode) = createNode2("RETURN expression SEMIC", createNode0((yyvsp[-2].str)), (yyvsp[-1].treeNode));
    }
#line 2889 "guillex.tab.c"
    break;

  case 34: /* listExp: appendOps  */
#line 479 "guillex.y"
              {
      (yyval.treeNode) = createNode1("appendOps", (yyvsp[0].treeNode));
    }
#line 2897 "guillex.tab.c"
    break;

  case 35: /* listExp: returnListOps  */
#line 482 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("returnListOps", (yyvsp[0].treeNode));
  }
#line 2905 "guillex.tab.c"
    break;

  case 36: /* listExp: destroyHeadOps  */
#line 485 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("destroyHeadOps", (yyvsp[0].treeNode));
  }
#line 2913 "guillex.tab.c"
    break;

  case 37: /* listExp: mapFilterOps  */
#line 488 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("mapFilterOps", (yyvsp[0].treeNode));
  }
#line 2921 "guillex.tab.c"
    break;

  case 38: /* appendOps: ID APPEND ID  */
#line 494 "guillex.y"
                 {
      (yyval.treeNode) = createNode3("ID APPEND ID SEMIC", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 2929 "guillex.tab.c"
    break;

  case 39: /* returnListOps: returnListOp ID  */
#line 500 "guillex.y"
                   {
      (yyval.treeNode) = createNode2("returnListOp ID", (yyvsp[-1].treeNode), createNode0((yyvsp[0].str)));
    }
#line 2937 "guillex.tab.c"
    break;

  case 40: /* returnListOp: HEADLIST  */
#line 506 "guillex.y"
             {
      (yyval.treeNode) = createNode1("HEADLIST", createNode0((yyvsp[0].str)));
    }
#line 2945 "guillex.tab.c"
    break;

  case 41: /* returnListOp: TAILLIST  */
#line 509 "guillex.y"
             {
      (yyval.treeNode) = createNode1("TAILLIST", createNode0((yyvsp[0].str)));
  }
#line 2953 "guillex.tab.c"
    break;

  case 42: /* destroyHeadOps: DESTROYHEAD ID  */
#line 515 "guillex.y"
                   {
      (yyval.treeNode) = createNode2("DESTROYHEAD ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 2961 "guillex.tab.c"
    break;

  case 43: /* mapFilterOps: ID MAP ID  */
#line 521 "guillex.y"
              {
      (yyval.treeNode) = createNode3("ID MAP ID SEMIC", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 2969 "guillex.tab.c"
    break;

  case 44: /* mapFilterOps: ID FILTER ID  */
#line 525 "guillex.y"
                 {
      (yyval.treeNode) = createNode3("ID FILTER ID SEMIC", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 2977 "guillex.tab.c"
    break;

  case 45: /* expression: assignExp  */
#line 531 "guillex.y"
              {
      (yyval.treeNode) = createNode1("assignExp", (yyvsp[0].treeNode));
    }
#line 2985 "guillex.tab.c"
    break;

  case 46: /* expression: simpleExp  */
#line 534 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 2993 "guillex.tab.c"
    break;

  case 47: /* expression: listExp  */
#line 537 "guillex.y"
            {
    (yyval.treeNode) = createNode1("listExp", (yyvsp[0].treeNode));
  }
#line 3001 "guillex.tab.c"
    break;

  case 48: /* assignExp: ID ASSIGN expression  */
#line 543 "guillex.y"
                         {
      (yyval.treeNode) = createNode3("ID ASSIGN expression", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), (yyvsp[0].treeNode));
    }
#line 3009 "guillex.tab.c"
    break;

  case 49: /* simpleExp: binLogicalExp  */
#line 550 "guillex.y"
                  {
      (yyval.treeNode) = createNode1("binLogicalExp", (yyvsp[0].treeNode));
    }
#line 3017 "guillex.tab.c"
    break;

  case 50: /* constOp: INTEGER  */
#line 556 "guillex.y"
            {
      (yyval.treeNode) = createNode0Int((yyvsp[0].integer), 'i');
    }
#line 3025 "guillex.tab.c"
    break;

  case 51: /* constOp: DECIMAL  */
#line 559 "guillex.y"
            {
    (yyval.treeNode) = createNode0Dec((yyvsp[0].dec), 'd');
  }
#line 3033 "guillex.tab.c"
    break;

  case 52: /* constOp: NIL  */
#line 562 "guillex.y"
        {
    (yyval.treeNode) = createNode0Nil((yyvsp[0].str), 'n');
  }
#line 3041 "guillex.tab.c"
    break;

  case 53: /* inOp: READ PARENL ID PARENR SEMIC  */
#line 568 "guillex.y"
                             {
    (yyval.treeNode) = createNode2("READ PARENL ID PARENR SEMIC", createNode0((yyvsp[-4].str)), createNode0((yyvsp[-2].str)));
  }
#line 3049 "guillex.tab.c"
    break;

  case 54: /* outOp: WRITE PARENL outConst PARENR SEMIC  */
#line 574 "guillex.y"
                                      {
      (yyval.treeNode) = createNode2("WRITE PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
    }
#line 3057 "guillex.tab.c"
    break;

  case 55: /* outOp: WRITELN PARENL outConst PARENR SEMIC  */
#line 577 "guillex.y"
                                         {
      (yyval.treeNode) = createNode2("WRITELN PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
  }
#line 3065 "guillex.tab.c"
    break;

  case 56: /* outConst: STRING  */
#line 583 "guillex.y"
           {
      (yyval.treeNode) = createNode1("STRING", createNode0((yyvsp[0].str)));
    }
#line 3073 "guillex.tab.c"
    break;

  case 57: /* outConst: simpleExp  */
#line 586 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3081 "guillex.tab.c"
    break;

  case 58: /* outConst: listExp  */
#line 589 "guillex.y"
            {
    (yyval.treeNode) = createNode1("listExp", (yyvsp[0].treeNode));
  }
#line 3089 "guillex.tab.c"
    break;

  case 59: /* binLogicalExp: binLogicalExp binLogicalOp relationalOp  */
#line 595 "guillex.y"
                                           {
      (yyval.treeNode) = createNode3("binLogicalExp binLogicalOp relationalOp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3097 "guillex.tab.c"
    break;

  case 60: /* binLogicalExp: relationalExp  */
#line 598 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("relationalExp", (yyvsp[0].treeNode));
  }
#line 3105 "guillex.tab.c"
    break;

  case 61: /* binLogicalOp: OR  */
#line 605 "guillex.y"
       {
      (yyval.treeNode) = createNode1("OR", createNode0((yyvsp[0].str)));
    }
#line 3113 "guillex.tab.c"
    break;

  case 62: /* binLogicalOp: AND  */
#line 608 "guillex.y"
        {
      (yyval.treeNode) = createNode1("AND", createNode0((yyvsp[0].str)));
  }
#line 3121 "guillex.tab.c"
    break;

  case 63: /* relationalExp: relationalExp relationalOp sumExp  */
#line 614 "guillex.y"
                                      {
      (yyval.treeNode) = createNode3("relationalExp relationalOp sumExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3129 "guillex.tab.c"
    break;

  case 64: /* relationalExp: sumExp  */
#line 617 "guillex.y"
           {
      (yyval.treeNode) = createNode1("sumExp", (yyvsp[0].treeNode));
  }
#line 3137 "guillex.tab.c"
    break;

  case 65: /* relationalOp: SMALLER  */
#line 624 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLER", createNode0((yyvsp[0].str)));
    }
#line 3145 "guillex.tab.c"
    break;

  case 66: /* relationalOp: GREATER  */
#line 627 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATER", createNode0((yyvsp[0].str)));
  }
#line 3153 "guillex.tab.c"
    break;

  case 67: /* relationalOp: SMALLEQ  */
#line 630 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLEQ", createNode0((yyvsp[0].str)));
  }
#line 3161 "guillex.tab.c"
    break;

  case 68: /* relationalOp: GREATEQ  */
#line 633 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATEQ", createNode0((yyvsp[0].str)));
  }
#line 3169 "guillex.tab.c"
    break;

  case 69: /* relationalOp: EQUALS  */
#line 636 "guillex.y"
           {
      (yyval.treeNode) = createNode1("EQUALS", createNode0((yyvsp[0].str)));
  }
#line 3177 "guillex.tab.c"
    break;

  case 70: /* relationalOp: DIFFERENT  */
#line 639 "guillex.y"
              {
      (yyval.treeNode) = createNode1("DIFFERENT", createNode0((yyvsp[0].str)));
  }
#line 3185 "guillex.tab.c"
    break;

  case 71: /* sumExp: sumExp sumOp mulExp  */
#line 645 "guillex.y"
                        {
      (yyval.treeNode) = createNode3("sumExp sumOp mulExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3193 "guillex.tab.c"
    break;

  case 72: /* sumExp: mulExp  */
#line 648 "guillex.y"
           {
      (yyval.treeNode) = createNode1("mulExp", (yyvsp[0].treeNode));
  }
#line 3201 "guillex.tab.c"
    break;

  case 73: /* sumOp: ADD  */
#line 654 "guillex.y"
        {
      (yyval.treeNode) = createNode1("ADD", createNode0((yyvsp[0].str)));
    }
#line 3209 "guillex.tab.c"
    break;

  case 74: /* sumOp: SUB  */
#line 657 "guillex.y"
        {
      (yyval.treeNode) = createNode1("SUB", createNode0((yyvsp[0].str)));
  }
#line 3217 "guillex.tab.c"
    break;

  case 75: /* mulExp: mulExp mulOp factor  */
#line 663 "guillex.y"
                        {
      (yyval.treeNode) = createNode3("mulExp mulOp factor", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3225 "guillex.tab.c"
    break;

  case 76: /* mulExp: factor  */
#line 666 "guillex.y"
           {
      (yyval.treeNode) = createNode1("factor", (yyvsp[0].treeNode));
  }
#line 3233 "guillex.tab.c"
    break;

  case 77: /* mulExp: sumOp factor  */
#line 669 "guillex.y"
                 {
      (yyval.treeNode) = createNode2("sumOp factor", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
  }
#line 3241 "guillex.tab.c"
    break;

  case 78: /* mulOp: MULT  */
#line 675 "guillex.y"
         {
      (yyval.treeNode) = createNode1("MULT", createNode0((yyvsp[0].str)));
    }
#line 3249 "guillex.tab.c"
    break;

  case 79: /* mulOp: DIV  */
#line 678 "guillex.y"
        {
      (yyval.treeNode) = createNode1("DIV", createNode0((yyvsp[0].str)));
  }
#line 3257 "guillex.tab.c"
    break;

  case 80: /* factor: ID  */
#line 684 "guillex.y"
       {
      (yyval.treeNode) = createNode1("ID", createNode0((yyvsp[0].str)));
    }
#line 3265 "guillex.tab.c"
    break;

  case 81: /* factor: fCall  */
#line 687 "guillex.y"
          {
      (yyval.treeNode) = createNode1("fCall", (yyvsp[0].treeNode));
  }
#line 3273 "guillex.tab.c"
    break;

  case 82: /* factor: PARENL simpleExp PARENR  */
#line 690 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("PARENL simpleExp PARENR", (yyvsp[-1].treeNode));
  }
#line 3281 "guillex.tab.c"
    break;

  case 83: /* factor: constOp  */
#line 693 "guillex.y"
            {
      (yyval.treeNode) = createNode1("constOp", (yyvsp[0].treeNode));
  }
#line 3289 "guillex.tab.c"
    break;

  case 84: /* fCall: ID PARENL callParams PARENR  */
#line 699 "guillex.y"
                                 {
      (yyval.treeNode) = createNode2("ID PARENL callParams PARENR", createNode0((yyvsp[-3].str)), (yyvsp[-1].treeNode));
    }
#line 3297 "guillex.tab.c"
    break;

  case 85: /* fCall: ID PARENL PARENR  */
#line 702 "guillex.y"
                     {
    (yyval.treeNode) = createNode1("ID PARENL PARENR", createNode0((yyvsp[-2].str)));
  }
#line 3305 "guillex.tab.c"
    break;

  case 86: /* callParams: callParams COMMA simpleExp  */
#line 708 "guillex.y"
                               {
      (yyval.treeNode) = createNode2("callParams COMMA simpleExp", (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 3313 "guillex.tab.c"
    break;

  case 87: /* callParams: simpleExp  */
#line 711 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3321 "guillex.tab.c"
    break;


#line 3325 "guillex.tab.c"

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

#line 718 "guillex.y"


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
