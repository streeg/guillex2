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
#include "../lib/utstack.h"


extern int yylex();
extern int yylex_destroy();
extern int yyparse();
void yyerror(const char* text);
extern int line;
extern int wordPosition;
extern FILE* yyin;
int errors = 0; 
int scope = 0;



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
  char *symbolType; // var or func
  char *varFuncName; // var or func name
  char *name; // var or func id
  int scope;
  UT_hash_handle hh;
}Symbol;

Symbol *symbolTable = NULL;

void addSymbol(char *name, char *symbolType, char *varFuncName, int scope) {
  struct symbol *s;
  
  HASH_FIND_STR(symbolTable, name, s);
  if (s == NULL){
    s = (Symbol*)malloc(sizeof(Symbol));
    s -> name = name;
    s -> symbolType = symbolType;
    s -> varFuncName = varFuncName;
    s -> scope = scope;
    HASH_ADD_STR(symbolTable, name, s);
  } else {
     if (s -> scope != scope) {
      s = (Symbol*)malloc(sizeof(Symbol));
      s -> name = name;
      s -> symbolType = symbolType;
      s -> varFuncName = varFuncName;
      s -> scope = scope;
      HASH_ADD_STR(symbolTable, name, s);
    } else {
      printf("cannot add symbol to table\n");
    }
  }
}

struct symbol *findSymbol(char *name) {
    struct symbol *s;

    HASH_FIND_STR(symbolTable, name, s); 
    return s;
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
        printf("|   %-16s    |    %-24s     |      %-20s    |    %d    |\n", s -> name, s -> symbolType, s -> varFuncName, s -> scope);
    }
}


void addSymbol(char *name, char *symbolType, char *varFuncName, int scope);
void freeSymbols();
void printSymbols();
extern Symbol *symbol;


typedef struct scope {
    int value;
    struct scope *next;
} Scope;

Scope *stackScope = NULL;

void pushStack(int value) {
  Scope *scope = (Scope*)malloc(sizeof(Scope));
  scope -> value = value;
  STACK_PUSH(stackScope, scope);
}

void popStack() {
  Scope *scope;
  STACK_POP(stackScope, scope);
  free(scope);
}

void freeStack() {
  while(!STACK_EMPTY(stackScope))
    popStack();
}


#line 401 "guillex.tab.c"

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
  YYSYMBOL_49_1 = 49,                      /* $@1  */
  YYSYMBOL_50_2 = 50,                      /* $@2  */
  YYSYMBOL_51_3 = 51,                      /* $@3  */
  YYSYMBOL_52_4 = 52,                      /* $@4  */
  YYSYMBOL_53_5 = 53,                      /* $@5  */
  YYSYMBOL_54_6 = 54,                      /* $@6  */
  YYSYMBOL_55_7 = 55,                      /* $@7  */
  YYSYMBOL_56_8 = 56,                      /* $@8  */
  YYSYMBOL_simpleVarDeclaration = 57,      /* simpleVarDeclaration  */
  YYSYMBOL_params = 58,                    /* params  */
  YYSYMBOL_param = 59,                     /* param  */
  YYSYMBOL_compoundStmt = 60,              /* compoundStmt  */
  YYSYMBOL_stmtList = 61,                  /* stmtList  */
  YYSYMBOL_primitiveStmt = 62,             /* primitiveStmt  */
  YYSYMBOL_exprStmt = 63,                  /* exprStmt  */
  YYSYMBOL_condStmt = 64,                  /* condStmt  */
  YYSYMBOL_iterStmt = 65,                  /* iterStmt  */
  YYSYMBOL_returnStmt = 66,                /* returnStmt  */
  YYSYMBOL_listExp = 67,                   /* listExp  */
  YYSYMBOL_appendOps = 68,                 /* appendOps  */
  YYSYMBOL_returnListOps = 69,             /* returnListOps  */
  YYSYMBOL_returnListOp = 70,              /* returnListOp  */
  YYSYMBOL_destroyHeadOps = 71,            /* destroyHeadOps  */
  YYSYMBOL_mapFilterOps = 72,              /* mapFilterOps  */
  YYSYMBOL_expression = 73,                /* expression  */
  YYSYMBOL_assignExp = 74,                 /* assignExp  */
  YYSYMBOL_simpleExp = 75,                 /* simpleExp  */
  YYSYMBOL_constOp = 76,                   /* constOp  */
  YYSYMBOL_inOp = 77,                      /* inOp  */
  YYSYMBOL_outOp = 78,                     /* outOp  */
  YYSYMBOL_outConst = 79,                  /* outConst  */
  YYSYMBOL_binLogicalExp = 80,             /* binLogicalExp  */
  YYSYMBOL_binLogicalOp = 81,              /* binLogicalOp  */
  YYSYMBOL_relationalExp = 82,             /* relationalExp  */
  YYSYMBOL_relationalOp = 83,              /* relationalOp  */
  YYSYMBOL_sumExp = 84,                    /* sumExp  */
  YYSYMBOL_sumOp = 85,                     /* sumOp  */
  YYSYMBOL_mulExp = 86,                    /* mulExp  */
  YYSYMBOL_mulOp = 87,                     /* mulOp  */
  YYSYMBOL_factor = 88,                    /* factor  */
  YYSYMBOL_fCall = 89,                     /* fCall  */
  YYSYMBOL_callParams = 90                 /* callParams  */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3720

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  335

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
       0,   368,   368,   374,   377,   380,   386,   389,   395,   400,
     400,   400,   404,   404,   404,   409,   409,   409,   413,   413,
     413,   420,   424,   432,   435,   441,   447,   453,   456,   462,
     465,   468,   471,   474,   477,   480,   483,   489,   495,   498,
     504,   507,   513,   519,   522,   525,   528,   534,   540,   546,
     549,   555,   561,   565,   571,   574,   577,   583,   590,   596,
     599,   602,   608,   614,   617,   623,   626,   629,   635,   638,
     645,   648,   654,   657,   664,   667,   670,   673,   676,   679,
     685,   688,   694,   697,   703,   706,   709,   715,   718,   724,
     727,   730,   733,   739,   742,   748,   751
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
  "funcDeclaration", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7",
  "$@8", "simpleVarDeclaration", "params", "param", "compoundStmt",
  "stmtList", "primitiveStmt", "exprStmt", "condStmt", "iterStmt",
  "returnStmt", "listExp", "appendOps", "returnListOps", "returnListOp",
  "destroyHeadOps", "mapFilterOps", "expression", "assignExp", "simpleExp",
  "constOp", "inOp", "outOp", "outConst", "binLogicalExp", "binLogicalOp",
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
     295,   296,   297
};
#endif

#define YYPACT_NINF (-201)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-97)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     152,     5,   205,    20,   103,   129,   143,   181,    22,   150,
       8,  -201,   218,   243,    11,   228,    35,    36,    15,   257,
      19,    21,    23,    51,    35,    56,    28,    61,    69,    34,
    2368,    37,    78,    42,  2407,  2446,    97,  2485,  2446,  3343,
    3419,  3447,  3459,    26,   123,   134,   148,   160,   127,   130,
     137,   138,   155,   400,  2446,   584,  1354,  1393,  1432,  1471,
    1510,  1549,  1588,  1627,   109,   174,   191,   226,   197,   200,
     217,   220,   234,  3487,  1666,  1705,   280,  1082,  3671,   166,
    3499,  3527,  3539,  2524,  2446,  1744,   275,   278,   400,   294,
     411,   269,   584,   623,   306,  2600,  2600,   277,  1783,  2707,
     279,   316,  1822,   303,  1861,  1116,  1155,  1194,   662,   701,
     740,   779,   818,   857,   896,   896,  3567,   359,   463,   166,
    2446,  1900,   319,   309,   312,   326,   342,  3579,   128,   288,
     347,  3375,   355,   364,   370,  2674,   373,   385,   387,   388,
     395,  1939,  1978,  3607,   287,  3683,  3619,  3647,  2017,   335,
     935,  3659,  2563,   896,   896,   408,   414,   419,   360,   332,
     574,   421,   422,  2056,  2095,  2134,  2446,   464,   464,  2173,
     437,   427,   432,  2446,  2446,  2212,  2251,   392,   448,  3010,
    3043,  3055,   584,  3088,    54,  2366,  3309,  1022,  3100,  3133,
    3145,   974,  1013,  3407,  2693,  2726,  2740,  2773,   584,  2785,
      74,  2659,  2628,  1052,  2818,  2830,  2863,   474,   446,   452,
     492,   456,   458,   514,   491,   604,   614,   643,   653,   682,
     498,   504,   509,   486,   488,   490,   493,   496,   400,  2446,
     613,   478,   652,   691,   730,   769,   808,   506,   847,   886,
    2609,   510,   538,  2290,   471,  1233,   584,   584,  3178,  1022,
     560,   507,  1272,   935,   935,  2875,  1052,   517,   518,  3190,
     441,   519,   522,   532,   584,   623,   543,  2600,  2600,   539,
    2329,   925,   964,  2641,   533,   537,   544,   546,   552,  3223,
      59,    71,   144,   384,   402,   461,   476,  3326,  3235,  3268,
    2908,   455,  2920,   100,   106,   390,   440,   472,   558,   597,
    3297,  2953,  2965,  3280,   548,   567,   590,   598,   601,   608,
    1003,  1042,  2998,  2563,   896,   896,   629,   637,   641,  1081,
     642,   645,  1120,  1159,  1198,  2563,   464,   464,  1237,   647,
     663,  2563,  2563,  1276,  1315
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,  -201,  -201,   576,     2,  -201,  -201,  -201,  -201,  -201,
    -201,  -201,  -201,  -201,     0,   683,    31,   -92,   -26,   -55,
     -81,   -57,   -27,    -3,   -78,    -4,    44,   195,   241,   290,
     -52,   -85,   -48,   193,    25,    52,   -74,    32,  -128,   252,
     186,   -15,   -41,   298,  -178,   105,   286,  -200
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    56,     7,    16,    38,    17,    35,
      24,   120,    25,    84,   178,    21,    22,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,   139,    76,   107,    77,
     114,    78,    79,    80,   119,    81,    82,   129
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    97,     6,   102,     8,    -5,     6,   100,   132,    -5,
     249,    15,    85,   260,   187,    -9,    20,   137,   137,   -15,
      11,    20,   140,   -25,    20,    19,   256,   -24,    98,   -82,
     102,    20,   -21,   -82,   -82,   -82,   125,   115,   -23,    19,
     186,    19,   128,   102,   130,   133,   -22,   138,   138,   203,
     291,   187,    29,   -12,   187,   187,   245,   -18,   121,    13,
     232,   -25,    29,    28,    33,   -24,   102,   -82,   105,   106,
     -21,   233,   252,   -74,   -74,   202,   -23,   186,    23,    36,
     186,   186,   171,   172,   -22,   -75,   -75,   184,   105,   106,
      30,   208,   208,   102,   148,   234,   -58,   160,    32,   145,
     237,   -74,   159,    -2,   115,   161,   162,     2,    34,   203,
     249,   169,   -58,   -75,   -74,   -74,   -58,    37,   175,   176,
     -75,   -75,   200,   256,   184,   235,   -83,   184,   184,    -4,
     -83,   -83,   -83,    -4,   244,   202,    83,   -49,   -74,   209,
     209,   187,   -74,    -6,   -75,   247,   -56,    -6,   -75,   236,
     251,   -50,   231,     1,   230,   276,     2,   187,   -76,   -76,
     189,   254,   274,    91,   -83,   128,   -96,   186,    92,   193,
     -96,    93,   203,    40,    41,    42,   269,   238,    94,    95,
     305,    -7,   200,   186,   116,    -7,   -76,   -21,   275,   137,
     137,    14,   277,   308,   309,   205,    96,   189,   202,   187,
     189,   189,   128,   270,   239,   187,   187,    55,     9,   203,
      10,   -43,   203,   203,   184,   102,   304,   306,    -3,   138,
     138,   232,    -3,   187,   147,   186,   187,   187,   -44,   103,
     184,   287,   233,   232,   -45,   202,   208,   -46,   300,   232,
     232,   329,   330,    -8,   233,   200,   247,    -8,   183,   186,
     233,   233,   186,   186,   104,   205,   234,   -54,   319,   254,
      26,   237,    27,   208,   208,   -22,   320,   321,   234,    18,
     328,   -55,   184,   237,   234,   234,   333,   334,   123,   237,
     237,   124,   200,   199,   209,   183,   235,   189,   183,   183,
     210,   210,   248,   144,   105,   106,   184,   126,   235,   184,
     184,   -68,   -68,   189,   235,   235,   -51,   185,   255,   134,
     236,   209,   209,   231,   141,   230,   -14,   -58,   205,   -11,
     -14,   143,   236,   -11,   -68,   231,   150,   230,   236,   236,
     151,   231,   231,   230,   230,   -20,   211,   211,   238,   -20,
     -48,   190,   201,   199,   185,   189,   -47,   185,   185,   -53,
     238,   189,   189,   188,   289,   205,   238,   238,   205,   205,
     -17,   302,   -87,   -57,   -17,   239,   -87,   -87,   -87,   189,
     -95,   246,   189,   189,   -95,   183,   206,   239,   190,   -52,
     183,   190,   190,   239,   239,   212,   212,   253,   204,   152,
     188,   183,   153,   188,   188,   241,   199,   242,   -77,   -77,
     -87,   154,   201,    39,   -76,   -76,   199,    40,    41,    42,
      43,    44,   155,   146,   194,   -65,   -78,   -78,   195,   196,
     197,    43,    44,    45,    46,    47,   -77,   -67,   -76,   -66,
     156,   286,   -76,   183,   185,   210,   206,   157,   299,   183,
     183,    55,   183,   199,   -78,   163,   199,   199,   204,   199,
     185,   164,   198,   127,   -77,   -77,   165,   183,   167,   168,
     183,   183,   210,   210,   240,   201,   -88,   170,   190,   173,
     -88,   -88,   -88,   190,   174,   -79,   -79,   257,   -77,   150,
     188,   211,   -77,   303,   190,   243,   -78,   -78,   -43,   206,
     -68,   -68,   185,   150,   -44,   258,   188,   312,   -45,   206,
     -46,   261,   201,   -79,   -88,   -74,   -74,   262,   211,   211,
     -78,   204,   263,   279,   -78,   271,   185,   194,   -68,   185,
     185,   195,   196,   197,    43,    44,   190,   264,   -74,   265,
     212,   266,   190,   190,   267,   190,   206,   268,   188,   206,
     206,   278,   206,   272,   188,   288,   307,   -21,   204,   292,
     190,   204,   301,   190,   190,   198,   259,   212,   212,   -51,
     -48,   -47,   188,   194,   -53,   188,   188,   195,   196,   197,
      43,    44,   -79,   -79,   -52,   -56,   310,   -38,   -38,   -57,
      12,   -38,   -38,   -38,   -38,   -38,   -54,    99,   -55,   -22,
     313,   179,   180,   181,    43,    44,   -79,   -38,   -38,   -38,
     -79,   198,   290,   166,   314,   -38,   -38,   -38,   -38,   -38,
     -38,   -68,   -68,   -38,   -38,   -38,   -36,   -36,   -75,   -75,
     -36,   -36,   -36,   -36,   -36,   182,   131,   315,   -76,   -76,
      40,    41,    42,    43,    44,   -68,   -36,   -36,   -36,   -68,
     316,   -75,   -36,   317,   -36,   -36,   -36,   -36,   -36,   -36,
     318,   -76,   -36,   -36,   -36,   -30,   -30,   -77,   -77,   -30,
     -30,   -30,   -30,   -30,    55,   -74,   322,   -78,   -78,   -74,
     -74,   -74,   -74,   -74,   323,   -30,   -30,   -30,   324,   326,
     -77,   -30,   327,   -30,   -30,   -30,   -30,   -30,   -30,   331,
     -78,   -30,   -30,   -30,   -29,   -29,   -79,   -79,   -29,   -29,
     -29,   -29,   -29,   -74,   -75,   332,     0,    31,   -75,   -75,
     -75,   -75,   -75,     0,   -29,   -29,   -29,     0,     0,   -79,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
     -29,   -29,   -29,   -31,   -31,     0,     0,   -31,   -31,   -31,
     -31,   -31,   -75,   -76,     0,     0,     0,   -76,   -76,   -76,
     -76,   -76,     0,   -31,   -31,   -31,     0,     0,     0,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,
     -31,   -31,   -32,   -32,     0,     0,   -32,   -32,   -32,   -32,
     -32,   -76,   -77,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,     0,   -32,   -32,   -32,     0,     0,     0,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,
     -32,   -33,   -33,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -77,   -78,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
       0,   -33,   -33,   -33,     0,     0,     0,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,
     -34,   -34,     0,     0,   -34,   -34,   -34,   -34,   -34,   -78,
     -79,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,     0,
     -34,   -34,   -34,     0,     0,     0,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,   -35,
     -35,     0,     0,   -35,   -35,   -35,   -35,   -35,   -79,   193,
       0,     0,     0,    40,    41,    42,    43,    44,     0,   -35,
     -35,   -35,     0,     0,     0,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,   -35,   -35,   -35,    -8,    -8,
       0,     0,    -8,    -8,    -8,    -8,    -8,    55,   194,     0,
       0,     0,   195,   196,   197,    43,    44,     0,    -8,    -8,
      -8,     0,     0,     0,    -8,     0,    -8,    -8,    -8,    -8,
      -8,    -8,     0,     0,    -8,    -8,    -8,   -37,   -37,     0,
       0,   -37,   -37,   -37,   -37,   -37,   198,   -82,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,     0,   -37,   -37,   -37,
       0,     0,     0,   -37,     0,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,   -37,   -37,   -37,   -42,   -42,     0,     0,
     -42,   -42,   -42,   -42,   -42,   -82,   -83,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,    99,   -42,   -42,   -42,   179,
     180,   181,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,   -42,   -42,   -42,   -26,   -26,     0,     0,   -26,
     -26,   -26,   -26,   -26,   -83,   194,     0,     0,     0,   195,
     196,   197,     0,   182,     0,   -26,   -26,   -26,     0,     0,
       0,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,
       0,   -26,   -26,   -26,   -38,   -38,     0,     0,   -38,   -38,
     -38,   -38,   -38,   198,     0,     0,   -69,   -69,   108,   109,
     110,   111,   112,   113,   -38,   -38,   -38,     0,     0,     0,
     325,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -69,
     -38,   -38,   -38,   -62,   -62,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,     0,   -62,   -62,   -62,     0,     0,     0,   -62,
       0,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,   -62,
     -62,   -62,   -63,   -63,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,     0,   -63,   -63,   -63,     0,     0,     0,   -63,     0,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   -63,   -63,
     -63,   -64,   -64,     0,     0,   -64,   -64,   -64,   -64,   -64,
     214,   215,   216,   217,   218,   219,     0,     0,     0,     0,
       0,   -64,   -64,   -64,     0,     0,     0,   -64,     0,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,   -64,   -64,   -64,
     -39,   -39,     0,     0,   -39,   -39,   -39,   -39,   -39,   280,
     281,   282,   283,   284,   285,     0,     0,     0,     0,     0,
     -39,   -39,   -39,     0,     0,     0,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,   -39,   -39,   -39,   -40,
     -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   293,   294,
     295,   296,   297,   298,     0,     0,     0,     0,     0,   -40,
     -40,   -40,     0,     0,     0,   -40,     0,   -40,   -40,   -40,
     -40,   -40,   -40,     0,     0,   -40,   -40,   -40,   -41,   -41,
       0,     0,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -41,   -41,
     -41,     0,     0,     0,   -41,     0,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,   -41,   -41,   -41,   -36,   -36,     0,
       0,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -36,   -36,   -36,
       0,     0,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,     0,     0,   -36,   -36,   -36,   -30,   -30,     0,     0,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -30,   -30,   -30,     0,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,   -30,   -30,   -30,    39,   177,     0,     0,    40,
      41,    42,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,    46,    47,     0,     0,
       0,     0,     0,    48,    49,    50,    51,    52,    53,     0,
       0,    54,   101,    55,   -28,   -28,     0,     0,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -28,   -28,   -28,     0,     0,     0,
       0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
     -28,   -28,   -28,   -29,   -29,     0,     0,   -29,   -29,   -29,
     -29,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -29,   -29,   -29,     0,     0,     0,     0,
       0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,
     -29,   -29,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -31,   -31,   -31,     0,     0,     0,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,   -31,
     -31,   -32,   -32,     0,     0,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -32,   -32,   -32,     0,     0,     0,     0,     0,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,   -32,
     -33,   -33,     0,     0,   -33,   -33,   -33,   -33,   -33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -33,   -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,   -34,
     -34,     0,     0,   -34,   -34,   -34,   -34,   -34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -34,
     -34,   -34,     0,     0,     0,     0,     0,   -34,   -34,   -34,
     -34,   -34,   -34,     0,     0,   -34,   -34,   -34,   -35,   -35,
       0,     0,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -35,   -35,
     -35,     0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,   -35,   -35,   -35,    39,   177,     0,
       0,    40,    41,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,    46,    47,
       0,     0,     0,     0,     0,    48,    49,    50,    51,    52,
      53,     0,     0,    54,   122,    55,    39,   177,     0,     0,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    46,    47,     0,
       0,     0,     0,     0,    48,    49,    50,    51,    52,    53,
       0,     0,    54,   142,    55,   -27,   -27,     0,     0,   -27,
     -27,   -27,   -27,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,   -27,   -27,     0,     0,
       0,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -27,   -27,   -37,   -37,     0,     0,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -37,   -37,   -37,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
     -37,   -37,   -37,    39,   177,     0,     0,    40,    41,    42,
      43,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,    46,    47,     0,     0,     0,     0,
       0,    48,    49,    50,    51,    52,    53,     0,     0,    54,
     149,    55,   -42,   -42,     0,     0,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -42,   -42,   -42,     0,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,   -42,   -42,     0,     0,   -42,   -42,
     -42,   -26,   -26,     0,     0,   -26,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -26,   -26,   -26,     0,     0,     0,     0,     0,   -26,
     -26,   -26,   -26,   -26,   -26,     0,     0,   -26,   -26,   -26,
      39,   177,     0,     0,    40,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,    46,    47,     0,     0,     0,     0,     0,    48,    49,
      50,    51,    52,    53,     0,     0,    54,   158,    55,   -62,
     -62,     0,     0,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -62,
     -62,   -62,     0,     0,     0,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,   -62,   -62,   -62,   -63,   -63,
       0,     0,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -63,   -63,
     -63,     0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,   -63,   -63,   -63,   -64,   -64,     0,
       0,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -64,   -64,   -64,
       0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,   -64,   -64,   -64,   -39,   -39,     0,     0,
     -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -39,   -39,   -39,     0,
       0,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
       0,     0,   -39,   -39,   -39,   -40,   -40,     0,     0,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -40,   -40,   -40,     0,     0,
       0,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,
       0,   -40,   -40,   -40,   -41,   -41,     0,     0,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -41,   -41,   -41,     0,     0,     0,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
     -41,   -41,   -41,    -8,    -8,     0,     0,    -8,    -8,    -8,
      -8,    -8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    -8,    -8,    -8,     0,     0,     0,     0,
       0,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,    -8,
      -8,    -8,    39,   177,     0,     0,    40,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,    46,    47,     0,     0,     0,     0,     0,
      48,    49,    50,    51,    52,    53,     0,     0,    54,   311,
      55,   -13,   -13,     0,     0,   -13,   -13,   -13,   -13,   -13,
     -69,   -69,   108,   109,   110,   111,   112,   113,     0,     0,
       0,   -13,   -13,   -13,     0,     0,     0,     0,     0,   -13,
     -13,   -13,   -13,   -13,   -13,     0,     0,   -13,   -69,   -13,
     -10,   -10,     0,     0,   -10,   -10,   -10,   -10,   -10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -10,   -10,   -10,     0,     0,     0,     0,     0,   -10,   -10,
     -10,   -10,   -10,   -10,     0,     0,   -10,     0,   -10,    39,
     177,     0,     0,    40,    41,    42,    43,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
      46,    47,     0,     0,     0,     0,     0,    48,    49,    50,
      51,    52,    53,     0,     0,    54,     0,    55,   -19,   -19,
       0,     0,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -19,   -19,
     -19,     0,     0,     0,     0,     0,   -19,   -19,   -19,   -19,
     -19,   -19,     0,     0,   -19,     0,   -19,   -16,   -16,     0,
       0,   -16,   -16,   -16,   -16,   -16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -16,   -16,   -16,
       0,     0,     0,     0,     0,   -16,   -16,   -16,   -16,   -16,
     -16,     0,     0,   -16,     0,   -16,    39,   177,     0,     0,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    46,    47,     0,
       0,     0,     0,     0,   223,   224,   225,   226,   227,   228,
       0,     0,   229,   135,    55,     0,   136,   179,   180,   181,
      43,    44,   273,     0,     0,     0,   179,   180,   181,    43,
      44,     0,     0,    45,    46,   207,     0,     0,     0,     0,
       0,     0,    45,    46,   207,     0,     0,     0,   191,   192,
       0,   182,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     182,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   220,     0,     0,   -73,   221,   240,   222,
     -73,     0,     0,   -69,   -69,   108,   109,   110,   111,   112,
     113,     0,   213,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   220,   -69,     0,     0,
     221,   -69,   222,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   213,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,   -89,     0,     0,   250,   -89,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   213,   -89,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,     0,     0,   -61,     0,     0,     0,   -61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -59,     0,
       0,     0,   -59,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,
       0,   -60,     0,     0,     0,   -60,     0,     0,     0,     0,
       0,     0,     0,   -92,     0,     0,     0,   -92,   -81,   -81,
     117,   118,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,   -81,     0,     0,     0,
     -81,     0,     0,     0,     0,     0,     0,     0,   -85,     0,
       0,     0,   -85,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,   -90,     0,     0,     0,   -90,     0,     0,     0,     0,
       0,     0,     0,   -86,     0,     0,     0,   -86,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,     0,     0,     0,   -94,     0,     0,     0,
     -94,     0,     0,     0,     0,     0,     0,     0,   -91,     0,
       0,     0,   -91,   -80,   -80,   117,   118,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,   -80,     0,     0,     0,   -80,     0,     0,     0,     0,
       0,     0,     0,   -84,     0,     0,     0,   -84,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,     0,   -93,     0,     0,     0,
     -93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -61,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,
       0,     0,     0,     0,     0,   -59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -60,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -81,   -81,   117,   118,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
     -92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -90,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,     0,     0,     0,     0,     0,     0,     0,     0,
     -86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -94,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -80,   -80,   117,   118,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,   -91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,     0,     0,     0,     0,     0,   191,   192,     0,
     -84,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   191,
     192,     0,   -93,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,   -72,   191,   192,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,   -73,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,    86,     0,     0,   -72,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
     -89,     0,     0,     0,    90,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -89,     0,     0,     0,    90,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,     0,     0,     0,   -89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,   -61,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,     0,     0,     0,   -59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -60,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -81,
     -81,   117,   118,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,   -92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -81,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,     0,   -85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -90,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,     0,     0,     0,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -94,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -80,
     -80,   117,   118,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,   -91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   191,   192,     0,   -84,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   191,   192,     0,   -93,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,   -73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -72
};

static const yytype_int16 yycheck[] =
{
       0,    53,     0,    58,     4,     0,     4,    55,    93,     4,
     188,     3,    38,   213,    55,     4,    16,    95,    96,     4,
       0,    21,    96,     4,    24,     4,   204,     4,    54,     3,
      85,    31,     4,     7,     8,     9,    88,    78,     4,     4,
      55,     4,    90,    98,    92,    93,     4,    95,    96,    90,
     250,    92,    21,    42,    95,    96,   184,    42,    84,    37,
     152,    42,    31,    42,     3,    42,   121,    41,    14,    15,
      42,   152,   200,    14,    15,    90,    42,    92,    42,    42,
      95,    96,   167,   168,    42,    14,    15,    55,    14,    15,
      39,    95,    96,   148,   120,   152,    42,   152,    42,   114,
     152,    42,   150,     0,   145,   153,   154,     4,    39,   150,
     288,   166,    38,    42,    14,    15,    42,    39,   173,   174,
      14,    15,    90,   301,    92,   152,     3,    95,    96,     0,
       7,     8,     9,     4,   182,   150,    39,     3,    38,    95,
      96,   182,    42,     0,    38,   186,    37,     4,    42,   152,
     198,     3,   152,     1,   152,   240,     4,   198,    14,    15,
      55,   202,   240,     3,    41,   213,    38,   182,    41,     3,
      42,    41,   213,     7,     8,     9,   228,   152,    41,    41,
     265,     0,   150,   198,    79,     4,    42,    37,   240,   267,
     268,    41,   240,   267,   268,    90,    41,    92,   213,   240,
      95,    96,   250,   229,   152,   246,   247,    41,     3,   250,
       5,    37,   253,   254,   182,   270,   264,   265,     0,   267,
     268,   313,     4,   264,   119,   240,   267,   268,    37,     3,
     198,   246,   313,   325,    37,   250,   240,    37,   253,   331,
     332,   326,   327,     0,   325,   213,   287,     4,    55,   264,
     331,   332,   267,   268,    37,   150,   313,    37,   313,   300,
       3,   313,     5,   267,   268,    37,   314,   315,   325,    41,
     325,    37,   240,   325,   331,   332,   331,   332,     3,   331,
     332,     3,   250,    90,   240,    92,   313,   182,    95,    96,
      95,    96,   187,   107,    14,    15,   264,     3,   325,   267,
     268,    14,    15,   198,   331,   332,    37,    55,   203,     3,
     313,   267,   268,   313,    37,   313,     0,    37,   213,     0,
       4,    42,   325,     4,    37,   325,    38,   325,   331,   332,
      42,   331,   332,   331,   332,     0,    95,    96,   313,     4,
      37,    55,    90,   150,    92,   240,    37,    95,    96,    37,
     325,   246,   247,    55,   249,   250,   331,   332,   253,   254,
       0,   256,     3,    37,     4,   313,     7,     8,     9,   264,
      38,   185,   267,   268,    42,   182,    90,   325,    92,    37,
     187,    95,    96,   331,   332,    95,    96,   201,    90,    42,
      92,   198,    37,    95,    96,     3,   203,     5,    14,    15,
      41,    37,   150,     3,    14,    15,   213,     7,     8,     9,
      10,    11,    42,   115,     3,    42,    14,    15,     7,     8,
       9,    10,    11,    23,    24,    25,    42,    42,    38,    42,
      42,   245,    42,   240,   182,   240,   150,    42,   252,   246,
     247,    41,   249,   250,    42,    37,   253,   254,   150,   256,
     198,    37,    41,    42,    14,    15,    37,   264,    37,    37,
     267,   268,   267,   268,    27,   213,     3,     3,   182,    42,
       7,     8,     9,   187,    42,    14,    15,     3,    38,    38,
     182,   240,    42,    42,   198,    37,    14,    15,    42,   203,
      14,    15,   240,    38,    42,     3,   198,    42,    42,   213,
      42,     3,   250,    42,    41,    14,    15,     3,   267,   268,
      38,   213,     3,    42,    42,    37,   264,     3,    42,   267,
     268,     7,     8,     9,    10,    11,   240,    41,    37,    41,
     240,    41,   246,   247,    41,   249,   250,    41,   240,   253,
     254,     3,   256,    37,   246,   247,     3,    37,   250,    42,
     264,   253,   254,   267,   268,    41,    42,   267,   268,    42,
      42,    42,   264,     3,    42,   267,   268,     7,     8,     9,
      10,    11,    14,    15,    42,    42,    37,     3,     4,    42,
       4,     7,     8,     9,    10,    11,    42,     3,    42,    37,
      42,     7,     8,     9,    10,    11,    38,    23,    24,    25,
      42,    41,    42,    29,    37,    31,    32,    33,    34,    35,
      36,    14,    15,    39,    40,    41,     3,     4,    14,    15,
       7,     8,     9,    10,    11,    41,     3,    37,    14,    15,
       7,     8,     9,    10,    11,    38,    23,    24,    25,    42,
      42,    37,    29,    42,    31,    32,    33,    34,    35,    36,
      42,    37,    39,    40,    41,     3,     4,    14,    15,     7,
       8,     9,    10,    11,    41,     3,    37,    14,    15,     7,
       8,     9,    10,    11,    37,    23,    24,    25,    37,    37,
      37,    29,    37,    31,    32,    33,    34,    35,    36,    42,
      37,    39,    40,    41,     3,     4,    14,    15,     7,     8,
       9,    10,    11,    41,     3,    42,    -1,    24,     7,     8,
       9,    10,    11,    -1,    23,    24,    25,    -1,    -1,    37,
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
      41,     3,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    41,
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
       7,     8,     9,    10,    11,     3,    23,    24,    25,     7,
       8,     9,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    41,     3,    -1,    -1,    -1,     7,
       8,     9,    -1,    41,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,    -1,     7,     8,
       9,    10,    11,    41,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    23,    24,    25,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    37,
      39,    40,    41,     3,     4,    -1,    -1,     7,     8,     9,
      10,    11,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,    -1,     7,     8,     9,    10,
      11,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
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
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    42,    41,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    41,     3,
       4,    -1,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    41,     3,     4,
      -1,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    41,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    41,     3,     4,    -1,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,     3,    41,    -1,     6,     7,     8,     9,
      10,    11,     3,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    10,    11,
      -1,    41,    14,    15,    16,    17,    18,    19,    20,    21,
      41,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    38,    26,    27,    28,
      42,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    41,    42,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    38,    -1,    -1,
      26,    42,    28,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    41,    42,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    38,    -1,    -1,    41,    42,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    41,    42,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
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
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,
      42,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    -1,    42,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    38,    10,    11,    -1,    42,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    42,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    42,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    10,    11,    -1,    37,    14,    15,    16,    17,    18,
      19,    20,    21,    10,    11,    -1,    37,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,    44,    45,    46,    47,    48,    57,     3,
       5,     0,    46,    37,    41,     3,    49,    51,    41,     4,
      57,    58,    59,    42,    53,    55,     3,     5,    42,    59,
      39,    58,    42,     3,    39,    52,    42,    39,    50,     3,
       7,     8,     9,    10,    11,    23,    24,    25,    31,    32,
      33,    34,    35,    36,    39,    41,    47,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    80,    82,    84,    85,
      86,    88,    89,    39,    56,    61,    22,    26,    27,    28,
      41,     3,    41,    41,    41,    41,    41,    73,    61,     3,
      75,    40,    62,     3,    37,    14,    15,    81,    16,    17,
      18,    19,    20,    21,    83,    85,    88,    12,    13,    87,
      54,    61,    40,     3,     3,    73,     3,    42,    75,    90,
      75,     3,    74,    75,     3,     3,     6,    67,    75,    79,
      79,    37,    40,    42,    83,    84,    86,    88,    61,    40,
      38,    42,    42,    37,    37,    42,    42,    42,    40,    75,
      62,    75,    75,    37,    37,    37,    29,    37,    37,    62,
       3,    74,    74,    42,    42,    62,    62,     4,    57,     7,
       8,     9,    41,    76,    80,    82,    84,    85,    86,    88,
      89,    10,    11,     3,     3,     7,     8,     9,    41,    76,
      80,    82,    84,    85,    86,    88,    89,    25,    68,    69,
      70,    71,    72,    41,    16,    17,    18,    19,    20,    21,
      22,    26,    28,    31,    32,    33,    34,    35,    36,    39,
      47,    57,    60,    63,    64,    65,    66,    73,    77,    78,
      27,     3,     5,    37,    75,    81,    83,    85,    88,    87,
      41,    75,    81,    83,    85,    88,    87,     3,     3,    42,
      90,     3,     3,     3,    41,    41,    41,    41,    41,    73,
      61,    37,    37,     3,    67,    73,    74,    75,     3,    42,
      16,    17,    18,    19,    20,    21,    83,    84,    86,    88,
      42,    90,    42,    16,    17,    18,    19,    20,    21,    83,
      84,    86,    88,    42,    75,    74,    75,     3,    79,    79,
      37,    40,    42,    42,    37,    37,    42,    42,    42,    62,
      75,    75,    37,    37,    37,    29,    37,    37,    62,    74,
      74,    42,    42,    62,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    46,    47,    49,
      50,    48,    51,    52,    48,    53,    54,    48,    55,    56,
      48,    57,    57,    58,    58,    59,    60,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    63,    64,    64,
      65,    65,    66,    67,    67,    67,    67,    68,    69,    70,
      70,    71,    72,    72,    73,    73,    73,    74,    75,    76,
      76,    76,    77,    78,    78,    79,    79,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    83,    83,    83,    83,
      84,    84,    85,    85,    86,    86,    86,    87,    87,    88,
      88,    88,    88,    89,    89,    90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     0,
       0,    10,     0,     0,     9,     0,     0,    11,     0,     0,
      10,     2,     3,     2,     1,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     7,
       9,     9,     3,     1,     1,     1,     1,     3,     2,     1,
       1,     2,     3,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     5,     5,     5,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     2,     1,     1,     1,
       1,     3,     1,     4,     3,     3,     1
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
#line 368 "guillex.y"
                        {
        abstractSyntaxTree = (yyval.treeNode);
    }
#line 2729 "guillex.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 374 "guillex.y"
                                    {
       (yyval.treeNode) = createNode2("declarationsList declaration", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
     }
#line 2737 "guillex.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 377 "guillex.y"
                      {
    (yyval.treeNode) = createNode1("declaration", (yyvsp[0].treeNode));
  }
#line 2745 "guillex.tab.c"
    break;

  case 5: /* declarationList: error  */
#line 380 "guillex.y"
          {
    printf("Semantic error");
  }
#line 2753 "guillex.tab.c"
    break;

  case 6: /* declaration: varDeclaration  */
#line 386 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
    }
#line 2761 "guillex.tab.c"
    break;

  case 7: /* declaration: funcDeclaration  */
#line 389 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("funcDeclaration", (yyvsp[0].treeNode));
    }
#line 2769 "guillex.tab.c"
    break;

  case 8: /* varDeclaration: simpleVarDeclaration SEMIC  */
#line 395 "guillex.y"
                               {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[-1].treeNode));}
#line 2776 "guillex.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 400 "guillex.y"
                   {scope++; pushStack(scope);}
#line 2782 "guillex.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 400 "guillex.y"
                                                                     {addSymbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stackScope) -> value);}
#line 2788 "guillex.tab.c"
    break;

  case 11: /* funcDeclaration: TYPE ID PARENL $@1 params PARENR STFUNC $@2 stmtList ENDFUNC  */
#line 400 "guillex.y"
                                                                                                                                                   {
      (yyval.treeNode) = createNode4("TYPE ID PARENL params PARENR STFUNC stmtList ENDFUNC", createNode0((yyvsp[-9].str)), createNode0((yyvsp[-8].str)), (yyvsp[-5].treeNode), (yyvsp[-1].treeNode));
      popStack();
  }
#line 2797 "guillex.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 404 "guillex.y"
                   {scope; pushStack(scope);}
#line 2803 "guillex.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 404 "guillex.y"
                                                            {addSymbol((yyvsp[-4].str), "func", (yyvsp[-5].str), STACK_TOP(stackScope) -> value);}
#line 2809 "guillex.tab.c"
    break;

  case 14: /* funcDeclaration: TYPE ID PARENL $@3 PARENR STFUNC $@4 stmtList ENDFUNC  */
#line 404 "guillex.y"
                                                                                                                                          {
    
      (yyval.treeNode) = createNode3("TYPE ID PARENL PARENR compoundStmt", createNode0((yyvsp[-8].str)), createNode0((yyvsp[-7].str)), (yyvsp[-1].treeNode)); 
      popStack();                                                                      
  }
#line 2819 "guillex.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 409 "guillex.y"
                            {scope++; pushStack(scope);}
#line 2825 "guillex.tab.c"
    break;

  case 16: /* $@6: %empty  */
#line 409 "guillex.y"
                                                                              {addSymbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stackScope) -> value);}
#line 2831 "guillex.tab.c"
    break;

  case 17: /* funcDeclaration: TYPE LISTTYPE ID PARENL $@5 params PARENR STFUNC $@6 stmtList ENDFUNC  */
#line 409 "guillex.y"
                                                                                                                                                           {
      (yyval.treeNode) = createNode5("TYPE LISTTYPE ID PARENL params PARENR compoundStmt", createNode0((yyvsp[-10].str)), createNode0List((yyvsp[-9].str), 'l'), createNode0((yyvsp[-8].str)), (yyvsp[-5].treeNode), (yyvsp[-1].treeNode));
      popStack();
  }
#line 2840 "guillex.tab.c"
    break;

  case 18: /* $@7: %empty  */
#line 413 "guillex.y"
                            {scope; pushStack(scope);}
#line 2846 "guillex.tab.c"
    break;

  case 19: /* $@8: %empty  */
#line 413 "guillex.y"
                                                                     {addSymbol((yyvsp[-4].str), "func", (yyvsp[-5].str), STACK_TOP(stackScope) -> value);}
#line 2852 "guillex.tab.c"
    break;

  case 20: /* funcDeclaration: TYPE LISTTYPE ID PARENL $@7 PARENR STFUNC $@8 stmtList ENDFUNC  */
#line 413 "guillex.y"
                                                                                                                                                  {
      (yyval.treeNode) = createNode4("TYPE LISTTYPE ID PARENL PARENR compoundStmt", createNode0((yyvsp[-9].str)), createNode0List((yyvsp[-8].str), 'l'), createNode0((yyvsp[-7].str)), (yyvsp[-1].treeNode));
      popStack();
    }
#line 2861 "guillex.tab.c"
    break;

  case 21: /* simpleVarDeclaration: TYPE ID  */
#line 420 "guillex.y"
            {
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      // addSymbol($2, "var", $1, STACK_TOP(stackScope) -> value);
      }
#line 2870 "guillex.tab.c"
    break;

  case 22: /* simpleVarDeclaration: TYPE LISTTYPE ID  */
#line 424 "guillex.y"
                       {
      //addSymbol($3, "var", $2, STACK_TOP(stackScope) -> value);
      (yyval.treeNode) = createNode3("TYPE ID", createNode0((yyvsp[-2].str)), createNode0List((yyvsp[-1].str), 'l'), createNode0((yyvsp[0].str)));
    }
#line 2879 "guillex.tab.c"
    break;

  case 23: /* params: params param  */
#line 432 "guillex.y"
                 {
      (yyval.treeNode) = createNode2("params param", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
      }
#line 2887 "guillex.tab.c"
    break;

  case 24: /* params: param  */
#line 435 "guillex.y"
          { 
    (yyval.treeNode) = createNode1("param", (yyvsp[0].treeNode)); 
    }
#line 2895 "guillex.tab.c"
    break;

  case 25: /* param: simpleVarDeclaration  */
#line 441 "guillex.y"
                         {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[0].treeNode));
    }
#line 2903 "guillex.tab.c"
    break;

  case 26: /* compoundStmt: STFUNC stmtList ENDFUNC  */
#line 447 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[-1].treeNode));
    }
#line 2911 "guillex.tab.c"
    break;

  case 27: /* stmtList: stmtList primitiveStmt  */
#line 453 "guillex.y"
                              {
      (yyval.treeNode) = createNode2("stmtList primitiveStmt", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 2919 "guillex.tab.c"
    break;

  case 28: /* stmtList: primitiveStmt  */
#line 456 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("primitiveStmt", (yyvsp[0].treeNode));
  }
#line 2927 "guillex.tab.c"
    break;

  case 29: /* primitiveStmt: exprStmt  */
#line 462 "guillex.y"
             {
      (yyval.treeNode) = createNode1("exprStmt", (yyvsp[0].treeNode));
    }
#line 2935 "guillex.tab.c"
    break;

  case 30: /* primitiveStmt: compoundStmt  */
#line 465 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[0].treeNode));
  }
#line 2943 "guillex.tab.c"
    break;

  case 31: /* primitiveStmt: condStmt  */
#line 468 "guillex.y"
             {
    (yyval.treeNode) = createNode1("condStmt", (yyvsp[0].treeNode));
  }
#line 2951 "guillex.tab.c"
    break;

  case 32: /* primitiveStmt: iterStmt  */
#line 471 "guillex.y"
             {
    (yyval.treeNode) = createNode1("iterStmt", (yyvsp[0].treeNode));
  }
#line 2959 "guillex.tab.c"
    break;

  case 33: /* primitiveStmt: returnStmt  */
#line 474 "guillex.y"
               {
    (yyval.treeNode) = createNode1("returnStmt", (yyvsp[0].treeNode));
  }
#line 2967 "guillex.tab.c"
    break;

  case 34: /* primitiveStmt: inOp  */
#line 477 "guillex.y"
         {
    (yyval.treeNode) = createNode1("inOp", (yyvsp[0].treeNode));
  }
#line 2975 "guillex.tab.c"
    break;

  case 35: /* primitiveStmt: outOp  */
#line 480 "guillex.y"
          {
    (yyval.treeNode) = createNode1("outOp", (yyvsp[0].treeNode));
  }
#line 2983 "guillex.tab.c"
    break;

  case 36: /* primitiveStmt: varDeclaration  */
#line 483 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
  }
#line 2991 "guillex.tab.c"
    break;

  case 37: /* exprStmt: expression SEMIC  */
#line 489 "guillex.y"
                     {
      (yyval.treeNode) = createNode1("expression SEMIC", (yyvsp[-1].treeNode));
    }
#line 2999 "guillex.tab.c"
    break;

  case 38: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt  */
#line 495 "guillex.y"
                                                        {
      (yyval.treeNode) = createNode3("IF PARENL simpleExp PARENR primitiveStmt", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 3007 "guillex.tab.c"
    break;

  case 39: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt ELSE primitiveStmt  */
#line 498 "guillex.y"
                                                                {
    (yyval.treeNode) = createNode5("IF PARENL primitiveExp PARENR primitiveStmt ELSE primitiveStmt", createNode0((yyvsp[-6].str)), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), createNode0((yyvsp[-1].str)), (yyvsp[0].treeNode));
  }
#line 3015 "guillex.tab.c"
    break;

  case 40: /* iterStmt: FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 504 "guillex.y"
                                                                              {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-8].str)), (yyvsp[-6].treeNode), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 3023 "guillex.tab.c"
    break;

  case 41: /* iterStmt: FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 507 "guillex.y"
                                                                              {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-8].str)), (yyvsp[-6].treeNode), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
  }
#line 3031 "guillex.tab.c"
    break;

  case 42: /* returnStmt: RETURN expression SEMIC  */
#line 513 "guillex.y"
                            {
      (yyval.treeNode) = createNode2("RETURN expression SEMIC", createNode0((yyvsp[-2].str)), (yyvsp[-1].treeNode));
    }
#line 3039 "guillex.tab.c"
    break;

  case 43: /* listExp: appendOps  */
#line 519 "guillex.y"
              {
      (yyval.treeNode) = createNode1("appendOps", (yyvsp[0].treeNode));
    }
#line 3047 "guillex.tab.c"
    break;

  case 44: /* listExp: returnListOps  */
#line 522 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("returnListOps", (yyvsp[0].treeNode));
  }
#line 3055 "guillex.tab.c"
    break;

  case 45: /* listExp: destroyHeadOps  */
#line 525 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("destroyHeadOps", (yyvsp[0].treeNode));
  }
#line 3063 "guillex.tab.c"
    break;

  case 46: /* listExp: mapFilterOps  */
#line 528 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("mapFilterOps", (yyvsp[0].treeNode));
  }
#line 3071 "guillex.tab.c"
    break;

  case 47: /* appendOps: ID APPEND ID  */
#line 534 "guillex.y"
                 {
      (yyval.treeNode) = createNode3("ID APPEND ID SEMIC", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 3079 "guillex.tab.c"
    break;

  case 48: /* returnListOps: returnListOp ID  */
#line 540 "guillex.y"
                   {
      (yyval.treeNode) = createNode2("returnListOp ID", (yyvsp[-1].treeNode), createNode0((yyvsp[0].str)));
    }
#line 3087 "guillex.tab.c"
    break;

  case 49: /* returnListOp: HEADLIST  */
#line 546 "guillex.y"
             {
      (yyval.treeNode) = createNode1("HEADLIST", createNode0((yyvsp[0].str)));
    }
#line 3095 "guillex.tab.c"
    break;

  case 50: /* returnListOp: TAILLIST  */
#line 549 "guillex.y"
             {
      (yyval.treeNode) = createNode1("TAILLIST", createNode0((yyvsp[0].str)));
  }
#line 3103 "guillex.tab.c"
    break;

  case 51: /* destroyHeadOps: DESTROYHEAD ID  */
#line 555 "guillex.y"
                   {
      (yyval.treeNode) = createNode2("DESTROYHEAD ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 3111 "guillex.tab.c"
    break;

  case 52: /* mapFilterOps: ID MAP ID  */
#line 561 "guillex.y"
              {
      (yyval.treeNode) = createNode3("ID MAP ID SEMIC", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 3119 "guillex.tab.c"
    break;

  case 53: /* mapFilterOps: ID FILTER ID  */
#line 565 "guillex.y"
                 {
      (yyval.treeNode) = createNode3("ID FILTER ID SEMIC", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 3127 "guillex.tab.c"
    break;

  case 54: /* expression: assignExp  */
#line 571 "guillex.y"
              {
      (yyval.treeNode) = createNode1("assignExp", (yyvsp[0].treeNode));
    }
#line 3135 "guillex.tab.c"
    break;

  case 55: /* expression: simpleExp  */
#line 574 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3143 "guillex.tab.c"
    break;

  case 56: /* expression: listExp  */
#line 577 "guillex.y"
            {
    (yyval.treeNode) = createNode1("listExp", (yyvsp[0].treeNode));
  }
#line 3151 "guillex.tab.c"
    break;

  case 57: /* assignExp: ID ASSIGN expression  */
#line 583 "guillex.y"
                         {
      (yyval.treeNode) = createNode3("ID ASSIGN expression", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), (yyvsp[0].treeNode));
    }
#line 3159 "guillex.tab.c"
    break;

  case 58: /* simpleExp: binLogicalExp  */
#line 590 "guillex.y"
                  {
      (yyval.treeNode) = createNode1("binLogicalExp", (yyvsp[0].treeNode));
    }
#line 3167 "guillex.tab.c"
    break;

  case 59: /* constOp: INTEGER  */
#line 596 "guillex.y"
            {
      (yyval.treeNode) = createNode0Int((yyvsp[0].integer), 'i');
    }
#line 3175 "guillex.tab.c"
    break;

  case 60: /* constOp: DECIMAL  */
#line 599 "guillex.y"
            {
    (yyval.treeNode) = createNode0Dec((yyvsp[0].dec), 'd');
  }
#line 3183 "guillex.tab.c"
    break;

  case 61: /* constOp: NIL  */
#line 602 "guillex.y"
        {
    (yyval.treeNode) = createNode0Nil((yyvsp[0].str), 'n');
  }
#line 3191 "guillex.tab.c"
    break;

  case 62: /* inOp: READ PARENL ID PARENR SEMIC  */
#line 608 "guillex.y"
                             {
    (yyval.treeNode) = createNode2("READ PARENL ID PARENR SEMIC", createNode0((yyvsp[-4].str)), createNode0((yyvsp[-2].str)));
  }
#line 3199 "guillex.tab.c"
    break;

  case 63: /* outOp: WRITE PARENL outConst PARENR SEMIC  */
#line 614 "guillex.y"
                                      {
      (yyval.treeNode) = createNode2("WRITE PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
    }
#line 3207 "guillex.tab.c"
    break;

  case 64: /* outOp: WRITELN PARENL outConst PARENR SEMIC  */
#line 617 "guillex.y"
                                         {
      (yyval.treeNode) = createNode2("WRITELN PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
  }
#line 3215 "guillex.tab.c"
    break;

  case 65: /* outConst: STRING  */
#line 623 "guillex.y"
           {
      (yyval.treeNode) = createNode1("STRING", createNode0((yyvsp[0].str)));
    }
#line 3223 "guillex.tab.c"
    break;

  case 66: /* outConst: simpleExp  */
#line 626 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3231 "guillex.tab.c"
    break;

  case 67: /* outConst: listExp  */
#line 629 "guillex.y"
            {
    (yyval.treeNode) = createNode1("listExp", (yyvsp[0].treeNode));
  }
#line 3239 "guillex.tab.c"
    break;

  case 68: /* binLogicalExp: binLogicalExp binLogicalOp relationalOp  */
#line 635 "guillex.y"
                                           {
      (yyval.treeNode) = createNode3("binLogicalExp binLogicalOp relationalOp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3247 "guillex.tab.c"
    break;

  case 69: /* binLogicalExp: relationalExp  */
#line 638 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("relationalExp", (yyvsp[0].treeNode));
  }
#line 3255 "guillex.tab.c"
    break;

  case 70: /* binLogicalOp: OR  */
#line 645 "guillex.y"
       {
      (yyval.treeNode) = createNode1("OR", createNode0((yyvsp[0].str)));
    }
#line 3263 "guillex.tab.c"
    break;

  case 71: /* binLogicalOp: AND  */
#line 648 "guillex.y"
        {
      (yyval.treeNode) = createNode1("AND", createNode0((yyvsp[0].str)));
  }
#line 3271 "guillex.tab.c"
    break;

  case 72: /* relationalExp: relationalExp relationalOp sumExp  */
#line 654 "guillex.y"
                                      {
      (yyval.treeNode) = createNode3("relationalExp relationalOp sumExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3279 "guillex.tab.c"
    break;

  case 73: /* relationalExp: sumExp  */
#line 657 "guillex.y"
           {
      (yyval.treeNode) = createNode1("sumExp", (yyvsp[0].treeNode));
  }
#line 3287 "guillex.tab.c"
    break;

  case 74: /* relationalOp: SMALLER  */
#line 664 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLER", createNode0((yyvsp[0].str)));
    }
#line 3295 "guillex.tab.c"
    break;

  case 75: /* relationalOp: GREATER  */
#line 667 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATER", createNode0((yyvsp[0].str)));
  }
#line 3303 "guillex.tab.c"
    break;

  case 76: /* relationalOp: SMALLEQ  */
#line 670 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLEQ", createNode0((yyvsp[0].str)));
  }
#line 3311 "guillex.tab.c"
    break;

  case 77: /* relationalOp: GREATEQ  */
#line 673 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATEQ", createNode0((yyvsp[0].str)));
  }
#line 3319 "guillex.tab.c"
    break;

  case 78: /* relationalOp: EQUALS  */
#line 676 "guillex.y"
           {
      (yyval.treeNode) = createNode1("EQUALS", createNode0((yyvsp[0].str)));
  }
#line 3327 "guillex.tab.c"
    break;

  case 79: /* relationalOp: DIFFERENT  */
#line 679 "guillex.y"
              {
      (yyval.treeNode) = createNode1("DIFFERENT", createNode0((yyvsp[0].str)));
  }
#line 3335 "guillex.tab.c"
    break;

  case 80: /* sumExp: sumExp sumOp mulExp  */
#line 685 "guillex.y"
                        {
      (yyval.treeNode) = createNode3("sumExp sumOp mulExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3343 "guillex.tab.c"
    break;

  case 81: /* sumExp: mulExp  */
#line 688 "guillex.y"
           {
      (yyval.treeNode) = createNode1("mulExp", (yyvsp[0].treeNode));
  }
#line 3351 "guillex.tab.c"
    break;

  case 82: /* sumOp: ADD  */
#line 694 "guillex.y"
        {
      (yyval.treeNode) = createNode1("ADD", createNode0((yyvsp[0].str)));
    }
#line 3359 "guillex.tab.c"
    break;

  case 83: /* sumOp: SUB  */
#line 697 "guillex.y"
        {
      (yyval.treeNode) = createNode1("SUB", createNode0((yyvsp[0].str)));
  }
#line 3367 "guillex.tab.c"
    break;

  case 84: /* mulExp: mulExp mulOp factor  */
#line 703 "guillex.y"
                        {
      (yyval.treeNode) = createNode3("mulExp mulOp factor", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3375 "guillex.tab.c"
    break;

  case 85: /* mulExp: factor  */
#line 706 "guillex.y"
           {
      (yyval.treeNode) = createNode1("factor", (yyvsp[0].treeNode));
  }
#line 3383 "guillex.tab.c"
    break;

  case 86: /* mulExp: sumOp factor  */
#line 709 "guillex.y"
                 {
      (yyval.treeNode) = createNode2("sumOp factor", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
  }
#line 3391 "guillex.tab.c"
    break;

  case 87: /* mulOp: MULT  */
#line 715 "guillex.y"
         {
      (yyval.treeNode) = createNode1("MULT", createNode0((yyvsp[0].str)));
    }
#line 3399 "guillex.tab.c"
    break;

  case 88: /* mulOp: DIV  */
#line 718 "guillex.y"
        {
      (yyval.treeNode) = createNode1("DIV", createNode0((yyvsp[0].str)));
  }
#line 3407 "guillex.tab.c"
    break;

  case 89: /* factor: ID  */
#line 724 "guillex.y"
       {
      (yyval.treeNode) = createNode1("ID", createNode0((yyvsp[0].str)));
    }
#line 3415 "guillex.tab.c"
    break;

  case 90: /* factor: fCall  */
#line 727 "guillex.y"
          {
      (yyval.treeNode) = createNode1("fCall", (yyvsp[0].treeNode));
  }
#line 3423 "guillex.tab.c"
    break;

  case 91: /* factor: PARENL simpleExp PARENR  */
#line 730 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("PARENL simpleExp PARENR", (yyvsp[-1].treeNode));
  }
#line 3431 "guillex.tab.c"
    break;

  case 92: /* factor: constOp  */
#line 733 "guillex.y"
            {
      (yyval.treeNode) = createNode1("constOp", (yyvsp[0].treeNode));
  }
#line 3439 "guillex.tab.c"
    break;

  case 93: /* fCall: ID PARENL callParams PARENR  */
#line 739 "guillex.y"
                                 {
      (yyval.treeNode) = createNode2("ID PARENL callParams PARENR", createNode0((yyvsp[-3].str)), (yyvsp[-1].treeNode));
    }
#line 3447 "guillex.tab.c"
    break;

  case 94: /* fCall: ID PARENL PARENR  */
#line 742 "guillex.y"
                     {
    (yyval.treeNode) = createNode1("ID PARENL PARENR", createNode0((yyvsp[-2].str)));
  }
#line 3455 "guillex.tab.c"
    break;

  case 95: /* callParams: callParams COMMA simpleExp  */
#line 748 "guillex.y"
                               {
      (yyval.treeNode) = createNode2("callParams COMMA simpleExp", (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 3463 "guillex.tab.c"
    break;

  case 96: /* callParams: simpleExp  */
#line 751 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3471 "guillex.tab.c"
    break;


#line 3475 "guillex.tab.c"

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

#line 758 "guillex.y"


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
