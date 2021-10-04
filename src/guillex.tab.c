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
int parentScope = 0;



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

Node* createNodeE() {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> nodeValue = NULL;
  node -> nodeType = 'e';
  node -> left = NULL;
  node -> leftMiddle = NULL;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

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
  char *name; // var or func id
  char *symbolType; // var or func
  char *varFuncName; // var or func name
  int scope;
  int originScope;
  UT_hash_handle hh;
}Symbol;

Symbol *symbolTable = NULL;

void addSymbol(char *name, char *symbolType, char *varFuncName, int scope, int originScope) {
  struct symbol *s;
  
  HASH_FIND_STR(symbolTable, name, s);
  if (s == NULL){
    s = (Symbol*)malloc(sizeof(Symbol));
    s -> name = name;
    s -> symbolType = symbolType;
    s -> varFuncName = varFuncName;
    s -> scope = scope;
    s -> originScope = originScope;
    HASH_ADD_STR(symbolTable, name, s);
  } else {
     if (s -> scope != scope) {
      s = (Symbol*)malloc(sizeof(Symbol));
      s -> name = name;
      s -> symbolType = symbolType;
      s -> varFuncName = varFuncName;
      s -> scope = scope;
      s -> originScope = originScope;
      HASH_ADD_STR(symbolTable, name, s);
    } else {
      printf("cannot add symbol to table\n");
    }
  }
}

struct symbol *findSymbol(char *name, int scope, int originScope) {
    struct symbol *s;

    for (s = symbolTable; s != NULL; s = s -> hh.next){
    if ((strcmp(s -> name, name) == 0 && s -> scope == scope) && (strcmp(s -> symbolType, "var") == 0 || strcmp(s -> symbolType, "param") == 0)){
      return s;
    } else {
      if ((strcmp(s -> name, name) == 0 && s -> scope == originScope) && strcmp(s -> symbolType, "var") == 0){
        return s;
      }
    }
  }
  return NULL;
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
        printf("|   %-16s    |    %-24s     |      %-20s    |    %-3d    |    %d    |\n", s -> name, s -> symbolType, s -> varFuncName, s -> scope, s -> originScope);
    }
}


void addSymbol(char *name, char *symbolType, char *varFuncName, int scope, int originScope);
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

void pushStack(int value);
void popStack();
void freeStack();
extern Scope *stackScope;


#line 431 "guillex.tab.c"

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
#define YYLAST   3743

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  334

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
       0,   398,   398,   404,   407,   410,   416,   419,   425,   430,
     430,   430,   434,   434,   434,   439,   439,   439,   443,   443,
     443,   450,   458,   470,   473,   479,   487,   498,   504,   507,
     513,   516,   519,   522,   525,   528,   531,   534,   540,   546,
     549,   555,   558,   564,   570,   573,   576,   579,   585,   591,
     597,   600,   606,   612,   616,   622,   625,   628,   634,   647,
     653,   656,   659,   665,   671,   674,   680,   683,   686,   692,
     695,   702,   705,   711,   714,   721,   724,   727,   730,   733,
     736,   742,   745,   751,   754,   760,   763,   766,   772,   775,
     781,   784,   787,   790,   796,   799,   805,   808
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

#define YYPACT_NINF (-189)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      39,    10,   140,    11,    94,   120,   303,   313,    -9,    -6,
      55,  -189,   336,   338,    33,   348,    30,    25,    34,   209,
      35,    37,   112,    30,    73,    85,   163,   153,    93,  2417,
      95,   158,   102,  2456,  2495,   188,  2534,  2495,  3389,   236,
    3453,  3465,  3493,    12,    52,   170,   176,   182,   206,   207,
     217,   239,   242,   123,  2495,    63,  1403,  1442,  1481,  1520,
    1559,  1598,  1637,  1676,   240,   257,   263,   302,   271,   285,
     290,   291,   309,  3505,  1715,  1754,    76,   897,  3678,   288,
    3533,  3545,  3573,  2573,  2495,  1793,   322,   349,   123,   363,
      15,   330,   370,   354,    63,    75,   372,   573,   573,   359,
    1832,  2713,   361,   404,  1871,   369,  1910,   931,   970,  1009,
     416,   475,   510,   546,   596,   672,   711,   711,  3585,   312,
     451,   288,  2495,  1949,   437,   380,   395,   397,   398,  3613,
     413,   493,   408,   373,  3421,   411,   426,   419,  2680,   428,
     429,   434,   439,   449,  1988,  2027,  3625,   135,  3706,  3653,
    3665,  2066,   558,   750,  3693,  2612,   711,   711,   442,   462,
     467,   589,   570,   623,   472,   486,  2105,  2144,  2183,  2495,
     450,   450,  2222,   485,   483,   490,  2495,  2495,  2261,  2300,
     505,  3016,  3049,  3061,    63,  3094,   146,  2415,  3344,   837,
    3106,  3139,  3151,   789,   828,  2666,  2699,  2732,  2746,  2779,
      63,  2791,   344,  3376,  3303,   867,  2824,  2836,  2869,   540,
     508,   518,   560,   529,   530,   353,   156,   222,   453,   473,
     492,   630,   575,   592,   608,   569,   574,   577,   582,   588,
     123,  2495,   662,   598,   701,   740,   779,   818,   857,   599,
     896,   935,  2631,  2339,   609,  1048,    63,    63,  3184,   837,
     402,   611,  1087,   750,   750,  2881,   867,   618,   619,  3196,
     636,   634,   635,   647,    63,    75,   687,   573,   573,   601,
    2378,   974,  1013,  2647,   650,   657,   658,   664,  3229,   161,
     191,   357,   414,   424,   607,   626,  3356,  3241,  3274,  2914,
     646,  2926,   378,   460,   523,   526,   531,   571,   586,  3315,
    2959,  2971,  3286,   665,   613,   678,   674,   675,   681,  1052,
    1091,  3004,  2612,   711,   711,   690,   691,   692,  1130,   694,
     702,  1169,  1208,  1247,  2612,   450,   450,  1286,   696,   703,
    2612,  2612,  1325,  1364
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -189,  -189,  -189,   742,     0,  -189,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,     2,   731,   133,  -150,   -21,   -55,
    -147,  -101,   -86,   -63,   -33,   -17,    14,    21,    31,    42,
     -52,   -83,   -48,   101,   -60,   -38,   -81,   352,   -61,   375,
      59,   324,   -46,   280,  -177,   134,   247,  -188
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    56,     7,    16,    37,    17,    34,
      23,   122,    24,    84,   180,    20,    21,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,   142,    76,   109,    77,
     116,    78,    79,    80,   121,    81,    82,   131
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    99,     8,   104,     6,   234,     8,   102,   235,   189,
      -5,    11,   135,   249,    -5,   -83,    85,   143,   196,   -83,
     -83,   -83,   197,   198,   199,    43,    44,   260,    13,   256,
     104,   -21,   117,   100,    19,    14,   127,    -9,   -15,    19,
       1,   -24,   130,     2,   205,   104,   133,   136,   189,   141,
     141,   189,   189,   -83,   236,   -84,   200,   129,    15,   -84,
     -84,   -84,   290,   123,   140,   140,   101,    22,   104,   237,
     181,   182,   183,    43,    44,   -12,   -18,    27,   134,   -24,
     210,   210,    40,    41,    42,    43,    44,   174,   175,   -25,
     107,   108,   238,   -84,    -2,   240,   104,   -23,     2,    19,
     163,   151,   117,   239,   184,   162,   -26,   205,   164,   165,
     249,   211,   211,   -59,   172,    31,    55,   241,   212,   212,
      -4,   178,   179,   256,    -4,   245,    38,   -25,   213,   213,
      40,    41,    42,    43,    44,   -23,   244,    35,   189,   214,
     214,   252,   247,     9,   -26,    10,    45,    46,    47,   -69,
     -69,    29,   251,    28,   189,   232,   185,   233,   254,   276,
     107,   108,   234,    28,    55,   235,    32,   130,   147,   205,
     -75,   -75,   -69,   -50,   234,   -75,   -75,   235,   269,   -51,
     234,   234,   304,   235,   235,    93,   307,   308,   -59,   191,
     275,   201,    33,   -75,   277,   185,   189,    36,   185,   185,
     189,   189,   130,   -75,   205,   -76,   -76,   205,   205,   274,
     270,   236,    25,   118,    26,   104,   303,   305,   189,   141,
     141,   189,   189,   236,   207,   210,   237,    83,   191,   236,
     236,   191,   191,   -76,   140,   140,   -76,   -76,   237,    91,
     247,    92,   328,   329,   237,   237,   246,    94,    95,   238,
     210,   210,   240,   254,   201,   150,   211,   318,    96,   -76,
     239,   238,   253,   212,   240,   319,   320,   238,   238,   327,
     240,   240,   239,   213,   241,   332,   333,   -57,   239,   239,
      97,   211,   211,    98,   214,   185,   241,   207,   212,   212,
     185,   195,   241,   241,   -44,    40,    41,    42,   213,   213,
     -45,   185,   192,    -6,   285,   105,   201,    -6,   -46,   214,
     214,   298,   232,    -7,   233,   -88,   201,    -7,   191,   -88,
     -88,   -88,   -47,   248,   232,   125,   233,   106,   -55,    55,
     232,   232,   233,   233,   191,   190,    -3,   208,    -8,   255,
      -3,   192,    -8,   185,   192,   192,   -56,   185,   185,   207,
     185,   201,   126,   -88,   201,   201,   196,   201,   107,   108,
     197,   198,   199,    43,    44,   185,   128,   -21,   185,   185,
     206,   -77,   -77,   132,   190,   137,   191,   190,   190,   188,
     191,   191,   -59,   288,   207,   -22,   -59,   207,   207,    18,
     301,   -52,   -75,   -75,   200,   259,   144,   149,   191,   -77,
     208,   191,   191,   146,   -14,   196,   -49,   186,   -14,   197,
     198,   199,    43,    44,   204,   155,   -75,   -48,   188,   -75,
     -75,   188,   188,   -75,   -75,   -75,   -75,   -75,   -78,   -78,
     187,   192,   -54,   206,   -58,   -53,   192,   -11,   -79,   -79,
     148,   -11,   202,   200,   289,   -22,   186,   192,   156,   186,
     186,   -97,   208,   173,   -89,   -97,   -78,   -75,   -89,   -89,
     -89,   158,   208,   157,   190,   203,   -79,   -77,   -77,   187,
     -66,   -68,   187,   187,   -76,   -76,   -67,   204,   -76,   166,
     190,   159,   -76,   -76,   -76,   -76,   -76,   -78,   -78,   192,
     -77,   160,   -89,   192,   192,   206,   192,   208,   -76,   167,
     208,   208,   -76,   208,   168,   202,   -79,   -79,   188,   170,
     -78,   192,   242,   -77,   192,   192,   -76,   -77,   -77,   -77,
     -77,   -77,   190,   171,   188,   176,   190,   287,   203,   -79,
     206,   153,   177,   206,   300,   154,   186,   -77,   -77,   204,
     -78,   -78,   243,   257,   190,   -79,   -79,   190,   190,   -78,
     -44,   -77,   186,   -78,   -78,   -78,   -78,   -78,   -20,   187,
     -45,   -77,   -20,   258,   -78,   -77,   188,   202,   -78,   -79,
     286,   -46,   -47,   -79,   204,   187,   138,   299,   261,   139,
     181,   182,   183,    43,    44,   -80,   -80,   -78,   188,   -17,
     203,   188,   188,   -17,   186,   262,    45,    46,   209,   -79,
     -69,   -69,   202,   -79,   -79,   -79,   -79,   -79,   -96,   -80,
     264,   263,   -96,   -80,   184,   265,   186,   187,   266,   186,
     186,   -80,   -80,   267,   -69,   203,   -39,   -39,   -69,   268,
     -39,   -39,   -39,   -39,   -39,   271,   272,   -79,   309,   187,
     -69,   -69,   187,   187,   -80,   -80,   -39,   -39,   -39,   -80,
     313,   278,   169,   291,   -39,   -39,   -39,   -39,   -39,   -39,
     -52,   -49,   -39,   -39,   -39,   -37,   -37,   -80,   -69,   -37,
     -37,   -37,   -37,   -37,   153,   -80,   -48,   -54,   302,   -80,
     -80,   -80,   -80,   -80,   153,   -37,   -37,   -37,   311,   -53,
     306,   -37,   -57,   -37,   -37,   -37,   -37,   -37,   -37,   -58,
     -55,   -37,   -37,   -37,   -31,   -31,   -56,   312,   -31,   -31,
     -31,   -31,   -31,   -80,   195,   314,   315,   316,    40,    41,
      42,    43,    44,   317,   -31,   -31,   -31,   321,   322,   323,
     -31,   325,   -31,   -31,   -31,   -31,   -31,   -31,   330,   326,
     -31,   -31,   -31,   -30,   -30,   331,    12,   -30,   -30,   -30,
     -30,   -30,    55,   196,    30,     0,     0,   197,   198,   199,
      43,    44,     0,   -30,   -30,   -30,     0,     0,     0,   -30,
       0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,   -32,   -32,     0,     0,   -32,   -32,   -32,   -32,
     -32,   200,   -83,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,     0,   -32,   -32,   -32,     0,     0,     0,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,
     -32,   -33,   -33,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -83,   -84,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     101,   -33,   -33,   -33,   181,   182,   183,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,
     -34,   -34,     0,     0,   -34,   -34,   -34,   -34,   -34,   -84,
     196,     0,     0,     0,   197,   198,   199,     0,   184,     0,
     -34,   -34,   -34,     0,     0,     0,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,   -35,
     -35,     0,     0,   -35,   -35,   -35,   -35,   -35,   200,     0,
       0,   -70,   -70,   110,   111,   112,   113,   114,   115,   -35,
     -35,   -35,     0,     0,     0,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,     0,   -70,   -35,   -35,   -35,   -36,   -36,
       0,     0,   -36,   -36,   -36,   -36,   -36,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,   -36,   -36,
     -36,     0,     0,     0,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,   -36,   -36,   -36,    -8,    -8,     0,
       0,    -8,    -8,    -8,    -8,    -8,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,    -8,    -8,    -8,
       0,     0,     0,    -8,     0,    -8,    -8,    -8,    -8,    -8,
      -8,     0,     0,    -8,    -8,    -8,   -38,   -38,     0,     0,
     -38,   -38,   -38,   -38,   -38,   216,   217,   218,   219,   220,
     221,     0,     0,     0,     0,     0,   -38,   -38,   -38,     0,
       0,     0,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
       0,     0,   -38,   -38,   -38,   -43,   -43,     0,     0,   -43,
     -43,   -43,   -43,   -43,   279,   280,   281,   282,   283,   284,
       0,     0,     0,     0,     0,   -43,   -43,   -43,     0,     0,
       0,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,
       0,   -43,   -43,   -43,   -27,   -27,     0,     0,   -27,   -27,
     -27,   -27,   -27,   292,   293,   294,   295,   296,   297,     0,
       0,     0,     0,     0,   -27,   -27,   -27,     0,     0,     0,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,
     -27,   -27,   -27,   -39,   -39,     0,     0,   -39,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -39,   -39,   -39,     0,     0,     0,   324,
       0,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,   -39,
     -39,   -39,   -63,   -63,     0,     0,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -63,   -63,   -63,     0,     0,     0,   -63,     0,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   -63,   -63,
     -63,   -64,   -64,     0,     0,   -64,   -64,   -64,   -64,   -64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -64,   -64,   -64,     0,     0,     0,   -64,     0,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,   -64,   -64,   -64,
     -65,   -65,     0,     0,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,   -65,     0,     0,     0,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,   -65,   -65,   -65,   -40,
     -40,     0,     0,   -40,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -40,
     -40,   -40,     0,     0,     0,   -40,     0,   -40,   -40,   -40,
     -40,   -40,   -40,     0,     0,   -40,   -40,   -40,   -41,   -41,
       0,     0,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -41,   -41,
     -41,     0,     0,     0,   -41,     0,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,   -41,   -41,   -41,   -42,   -42,     0,
       0,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -42,   -42,   -42,
       0,     0,     0,   -42,     0,   -42,   -42,   -42,   -42,   -42,
     -42,     0,     0,   -42,   -42,   -42,   -37,   -37,     0,     0,
     -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -37,   -37,   -37,     0,
       0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
       0,     0,   -37,   -37,   -37,   -31,   -31,     0,     0,   -31,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -31,   -31,   -31,     0,     0,
       0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,   -31,   -31,   -31,    38,    39,     0,     0,    40,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,    46,    47,     0,     0,     0,
       0,     0,    48,    49,    50,    51,    52,    53,     0,     0,
      54,   103,    55,   -29,   -29,     0,     0,   -29,   -29,   -29,
     -29,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -29,   -29,   -29,     0,     0,     0,     0,
       0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,
     -29,   -29,   -30,   -30,     0,     0,   -30,   -30,   -30,   -30,
     -30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -30,   -30,   -30,     0,     0,     0,     0,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,   -30,
     -30,   -32,   -32,     0,     0,   -32,   -32,   -32,   -32,   -32,
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
     -35,   -35,     0,     0,   -35,   -35,   -35,   -36,   -36,     0,
       0,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -36,   -36,   -36,
       0,     0,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,     0,     0,   -36,   -36,   -36,    38,    39,     0,     0,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    46,    47,     0,
       0,     0,     0,     0,    48,    49,    50,    51,    52,    53,
       0,     0,    54,   124,    55,    38,    39,     0,     0,    40,
      41,    42,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,    46,    47,     0,     0,
       0,     0,     0,    48,    49,    50,    51,    52,    53,     0,
       0,    54,   145,    55,   -28,   -28,     0,     0,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -28,   -28,   -28,     0,     0,     0,
       0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
     -28,   -28,   -28,   -38,   -38,     0,     0,   -38,   -38,   -38,
     -38,   -38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -38,   -38,   -38,     0,     0,     0,     0,
       0,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,
     -38,   -38,    38,    39,     0,     0,    40,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,    46,    47,     0,     0,     0,     0,     0,
      48,    49,    50,    51,    52,    53,     0,     0,    54,   152,
      55,   -43,   -43,     0,     0,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -43,   -43,   -43,     0,     0,     0,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,     0,     0,   -43,   -43,   -43,
     -27,   -27,     0,     0,   -27,   -27,   -27,   -27,   -27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -27,   -27,   -27,     0,     0,     0,     0,     0,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,    38,
      39,     0,     0,    40,    41,    42,    43,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
      46,    47,     0,     0,     0,     0,     0,    48,    49,    50,
      51,    52,    53,     0,     0,    54,   161,    55,   -63,   -63,
       0,     0,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -63,   -63,
     -63,     0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,   -63,   -63,   -63,   -64,   -64,     0,
       0,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -64,   -64,   -64,
       0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,   -64,   -64,   -64,   -65,   -65,     0,     0,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -65,   -65,   -65,     0,
       0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,   -65,   -65,   -65,   -40,   -40,     0,     0,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -40,   -40,   -40,     0,     0,
       0,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,
       0,   -40,   -40,   -40,   -41,   -41,     0,     0,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -41,   -41,   -41,     0,     0,     0,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
     -41,   -41,   -41,   -42,   -42,     0,     0,   -42,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -42,   -42,   -42,     0,     0,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,   -42,
     -42,   -42,    -8,    -8,     0,     0,    -8,    -8,    -8,    -8,
      -8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -8,    -8,    -8,     0,     0,     0,     0,     0,
      -8,    -8,    -8,    -8,    -8,    -8,     0,     0,    -8,    -8,
      -8,    38,    39,     0,     0,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,    46,    47,     0,     0,     0,     0,     0,    48,
      49,    50,    51,    52,    53,     0,     0,    54,   310,    55,
     -13,   -13,     0,     0,   -13,   -13,   -13,   -13,   -13,   -70,
     -70,   110,   111,   112,   113,   114,   115,     0,     0,     0,
     -13,   -13,   -13,     0,     0,     0,     0,     0,   -13,   -13,
     -13,   -13,   -13,   -13,     0,     0,   -13,   -70,   -13,   -10,
     -10,     0,     0,   -10,   -10,   -10,   -10,   -10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -10,
     -10,   -10,     0,     0,     0,     0,     0,   -10,   -10,   -10,
     -10,   -10,   -10,     0,     0,   -10,     0,   -10,    38,    39,
       0,     0,    40,    41,    42,    43,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,    46,
      47,     0,     0,     0,     0,     0,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,    55,   -19,   -19,     0,
       0,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -19,   -19,   -19,
       0,     0,     0,     0,     0,   -19,   -19,   -19,   -19,   -19,
     -19,     0,     0,   -19,     0,   -19,   -16,   -16,     0,     0,
     -16,   -16,   -16,   -16,   -16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -16,   -16,   -16,     0,
       0,     0,     0,     0,   -16,   -16,   -16,   -16,   -16,   -16,
       0,     0,   -16,     0,   -16,    38,    39,     0,     0,    40,
      41,    42,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   273,    45,    46,    47,   181,   182,
     183,    43,    44,   225,   226,   227,   228,   229,   230,     0,
       0,   231,     0,    55,    45,    46,   209,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   222,
       0,     0,   184,   223,   242,   224,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   215,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   222,   -90,     0,     0,   223,    90,   224,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   215,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,     0,   -90,     0,     0,
     250,   -90,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   215,   -90,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,
     -62,     0,     0,     0,   -62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -60,     0,     0,     0,   -60,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,     0,     0,     0,   -61,     0,     0,
       0,   -61,     0,     0,     0,     0,     0,     0,     0,   -93,
       0,     0,     0,   -93,   -82,   -82,   119,   120,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,   -82,     0,     0,     0,   -82,     0,     0,     0,
       0,     0,     0,     0,   -86,     0,     0,     0,   -86,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,     0,   -91,     0,     0,
       0,   -91,     0,     0,     0,     0,     0,     0,     0,   -87,
       0,     0,     0,   -87,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
       0,     0,   -95,     0,     0,     0,   -95,     0,     0,     0,
       0,     0,     0,     0,   -92,     0,     0,     0,   -92,   -81,
     -81,   119,   120,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,   -81,     0,     0,
       0,   -81,     0,     0,     0,     0,     0,     0,     0,   -85,
       0,     0,     0,   -85,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,     0,   -94,     0,     0,     0,   -94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -62,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,   -60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -61,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -82,   -82,   119,   120,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,   -93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -82,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,     0,     0,     0,     0,     0,     0,
       0,   -86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -91,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,
       0,     0,     0,     0,     0,     0,   -87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -95,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -81,   -81,   119,   120,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,   -92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
       0,     0,     0,   193,   194,     0,   -85,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   193,   194,     0,   -94,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,   -74,     0,     0,     0,   -74,     0,     0,     0,     0,
       0,     0,     0,   -73,   193,   194,     0,   -73,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   193,   194,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,     0,     0,     0,   -74,     0,     0,     0,
     -70,   -70,   110,   111,   112,   113,   114,   115,   -73,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,    86,     0,     0,   -70,    87,    88,    89,   -70,     0,
       0,     0,     0,     0,     0,     0,   -90,     0,     0,     0,
      90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -90,     0,
       0,     0,    90,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,
     -62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -60,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,     0,
     -61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -93,   -82,   -82,   119,   120,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
     -82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -86,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
     -91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -87,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,
     -95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -92,   -81,   -81,   119,   120,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   193,   194,
     -81,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,   -85,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -74,   193,   194,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
     -94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -73
};

static const yytype_int16 yycheck[] =
{
       0,    53,     0,    58,     4,   155,     4,    55,   155,    55,
       0,     0,    95,   190,     4,     3,    37,    98,     3,     7,
       8,     9,     7,     8,     9,    10,    11,   215,    37,   206,
      85,    37,    78,    54,     4,    41,    88,     4,     4,     4,
       1,     4,    90,     4,    90,   100,    94,    95,    94,    97,
      98,    97,    98,    41,   155,     3,    41,    42,     3,     7,
       8,     9,   250,    84,    97,    98,     3,    42,   123,   155,
       7,     8,     9,    10,    11,    42,    42,    42,     3,    42,
      97,    98,     7,     8,     9,    10,    11,   170,   171,     4,
      14,    15,   155,    41,     0,   155,   151,     4,     4,     4,
     155,   122,   148,   155,    41,   153,     4,   153,   156,   157,
     287,    97,    98,    37,   169,    42,    41,   155,    97,    98,
       0,   176,   177,   300,     4,   186,     3,    42,    97,    98,
       7,     8,     9,    10,    11,    42,   184,    42,   184,    97,
      98,   202,   188,     3,    42,     5,    23,    24,    25,    14,
      15,    39,   200,    20,   200,   155,    55,   155,   204,   242,
      14,    15,   312,    30,    41,   312,     3,   215,   109,   215,
      14,    15,    37,     3,   324,    14,    15,   324,   230,     3,
     330,   331,   265,   330,   331,     3,   267,   268,    42,    55,
     242,    90,    39,    37,   242,    94,   242,    39,    97,    98,
     246,   247,   250,    42,   250,    14,    15,   253,   254,   242,
     231,   312,     3,    79,     5,   270,   264,   265,   264,   267,
     268,   267,   268,   324,    90,   242,   312,    39,    94,   330,
     331,    97,    98,    42,   267,   268,    14,    15,   324,     3,
     286,     5,   325,   326,   330,   331,   187,    41,    41,   312,
     267,   268,   312,   299,   153,   121,   242,   312,    41,    37,
     312,   324,   203,   242,   324,   313,   314,   330,   331,   324,
     330,   331,   324,   242,   312,   330,   331,    37,   330,   331,
      41,   267,   268,    41,   242,   184,   324,   153,   267,   268,
     189,     3,   330,   331,    37,     7,     8,     9,   267,   268,
      37,   200,    55,     0,   245,     3,   205,     4,    37,   267,
     268,   252,   312,     0,   312,     3,   215,     4,   184,     7,
       8,     9,    37,   189,   324,     3,   324,    37,    37,    41,
     330,   331,   330,   331,   200,    55,     0,    90,     0,   205,
       4,    94,     4,   242,    97,    98,    37,   246,   247,   215,
     249,   250,     3,    41,   253,   254,     3,   256,    14,    15,
       7,     8,     9,    10,    11,   264,     3,    37,   267,   268,
      90,    14,    15,     3,    94,     3,   242,    97,    98,    55,
     246,   247,    38,   249,   250,    37,    42,   253,   254,    41,
     256,    37,    14,    15,    41,    42,    37,   117,   264,    42,
     153,   267,   268,    42,     0,     3,    37,    55,     4,     7,
       8,     9,    10,    11,    90,    42,    38,    37,    94,     3,
      42,    97,    98,     7,     8,     9,    10,    11,    14,    15,
      55,   184,    37,   153,    37,    37,   189,     0,    14,    15,
     116,     4,    90,    41,    42,    37,    94,   200,    37,    97,
      98,    38,   205,     3,     3,    42,    42,    41,     7,     8,
       9,    42,   215,    37,   184,    90,    42,    14,    15,    94,
      42,    42,    97,    98,    14,    15,    42,   153,     3,    37,
     200,    42,     7,     8,     9,    10,    11,    14,    15,   242,
      37,    42,    41,   246,   247,   215,   249,   250,    38,    37,
     253,   254,    42,   256,    37,   153,    14,    15,   184,    37,
      37,   264,    27,     3,   267,   268,    41,     7,     8,     9,
      10,    11,   242,    37,   200,    42,   246,   247,   153,    37,
     250,    38,    42,   253,   254,    42,   184,    14,    15,   215,
      14,    15,    37,     3,   264,    14,    15,   267,   268,     3,
      42,    41,   200,     7,     8,     9,    10,    11,     0,   184,
      42,    38,     4,     3,    38,    42,   242,   215,    42,    38,
     246,    42,    42,    42,   250,   200,     3,   253,     3,     6,
       7,     8,     9,    10,    11,    14,    15,    41,   264,     0,
     215,   267,   268,     4,   242,     3,    23,    24,    25,     3,
      14,    15,   250,     7,     8,     9,    10,    11,    38,    38,
      41,     3,    42,    42,    41,    41,   264,   242,    41,   267,
     268,    14,    15,    41,    38,   250,     3,     4,    42,    41,
       7,     8,     9,    10,    11,    37,    37,    41,    37,   264,
      14,    15,   267,   268,    14,    15,    23,    24,    25,    42,
      37,    42,    29,    42,    31,    32,    33,    34,    35,    36,
      42,    42,    39,    40,    41,     3,     4,    37,    42,     7,
       8,     9,    10,    11,    38,     3,    42,    42,    42,     7,
       8,     9,    10,    11,    38,    23,    24,    25,    42,    42,
       3,    29,    42,    31,    32,    33,    34,    35,    36,    42,
      42,    39,    40,    41,     3,     4,    42,    42,     7,     8,
       9,    10,    11,    41,     3,    37,    42,    42,     7,     8,
       9,    10,    11,    42,    23,    24,    25,    37,    37,    37,
      29,    37,    31,    32,    33,    34,    35,    36,    42,    37,
      39,    40,    41,     3,     4,    42,     4,     7,     8,     9,
      10,    11,    41,     3,    23,    -1,    -1,     7,     8,     9,
      10,    11,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,    -1,     7,     8,     9,    10,
      11,    41,     3,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,    -1,     7,     8,     9,    10,    11,
      41,     3,    -1,    -1,    -1,     7,     8,     9,    10,    11,
       3,    23,    24,    25,     7,     8,     9,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    41,
       3,    -1,    -1,    -1,     7,     8,     9,    -1,    41,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,    -1,     7,     8,     9,    10,    11,    41,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    37,    39,    40,    41,     3,     4,
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
       8,     9,    10,    11,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,    -1,     7,     8,
       9,    10,    11,    16,    17,    18,    19,    20,    21,    -1,
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
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    42,    41,     3,
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
      -1,    -1,    39,    -1,    41,     3,     4,    -1,    -1,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    23,    24,    25,     7,     8,
       9,    10,    11,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    41,    23,    24,    25,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    41,    26,    27,    28,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    41,    42,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    37,    -1,    -1,    26,    41,    28,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    41,    42,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    38,    -1,    -1,
      41,    42,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    41,    42,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    10,    11,    -1,    42,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    -1,    42,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    10,    11,    -1,    42,    14,    15,
      16,    17,    18,    19,    20,    21,    10,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    42,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    38,    26,    27,    28,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    41,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    10,    11,
      37,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    37,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    37,    10,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,    44,    45,    46,    47,    48,    57,     3,
       5,     0,    46,    37,    41,     3,    49,    51,    41,     4,
      58,    59,    42,    53,    55,     3,     5,    42,    59,    39,
      58,    42,     3,    39,    52,    42,    39,    50,     3,     4,
       7,     8,     9,    10,    11,    23,    24,    25,    31,    32,
      33,    34,    35,    36,    39,    41,    47,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    80,    82,    84,    85,
      86,    88,    89,    39,    56,    61,    22,    26,    27,    28,
      41,     3,     5,     3,    41,    41,    41,    41,    41,    73,
      61,     3,    75,    40,    62,     3,    37,    14,    15,    81,
      16,    17,    18,    19,    20,    21,    83,    85,    88,    12,
      13,    87,    54,    61,    40,     3,     3,    73,     3,    42,
      75,    90,     3,    75,     3,    74,    75,     3,     3,     6,
      67,    75,    79,    79,    37,    40,    42,    83,    84,    86,
      88,    61,    40,    38,    42,    42,    37,    37,    42,    42,
      42,    40,    75,    62,    75,    75,    37,    37,    37,    29,
      37,    37,    62,     3,    74,    74,    42,    42,    62,    62,
      57,     7,     8,     9,    41,    76,    80,    82,    84,    85,
      86,    88,    89,    10,    11,     3,     3,     7,     8,     9,
      41,    76,    80,    82,    84,    85,    86,    88,    89,    25,
      68,    69,    70,    71,    72,    41,    16,    17,    18,    19,
      20,    21,    22,    26,    28,    31,    32,    33,    34,    35,
      36,    39,    47,    57,    60,    63,    64,    65,    66,    73,
      77,    78,    27,    37,    75,    81,    83,    85,    88,    87,
      41,    75,    81,    83,    85,    88,    87,     3,     3,    42,
      90,     3,     3,     3,    41,    41,    41,    41,    41,    73,
      61,    37,    37,     3,    67,    73,    74,    75,    42,    16,
      17,    18,    19,    20,    21,    83,    84,    86,    88,    42,
      90,    42,    16,    17,    18,    19,    20,    21,    83,    84,
      86,    88,    42,    75,    74,    75,     3,    79,    79,    37,
      40,    42,    42,    37,    37,    42,    42,    42,    62,    75,
      75,    37,    37,    37,    29,    37,    37,    62,    74,    74,
      42,    42,    62,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    46,    47,    49,
      50,    48,    51,    52,    48,    53,    54,    48,    55,    56,
      48,    57,    57,    58,    58,    59,    59,    60,    61,    61,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    64,
      64,    65,    65,    66,    67,    67,    67,    67,    68,    69,
      70,    70,    71,    72,    72,    73,    73,    73,    74,    75,
      76,    76,    76,    77,    78,    78,    79,    79,    79,    80,
      80,    81,    81,    82,    82,    83,    83,    83,    83,    83,
      83,    84,    84,    85,    85,    86,    86,    86,    87,    87,
      88,    88,    88,    88,    89,    89,    90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     0,
       0,    10,     0,     0,     9,     0,     0,    11,     0,     0,
      10,     2,     3,     2,     1,     2,     3,     3,     2,     1,
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
#line 398 "guillex.y"
                        {
        abstractSyntaxTree = (yyval.treeNode);
    }
#line 2763 "guillex.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 404 "guillex.y"
                                    {
       (yyval.treeNode) = createNode2("declarationsList declaration", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
     }
#line 2771 "guillex.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 407 "guillex.y"
                      {
    (yyval.treeNode) = createNode1("declaration", (yyvsp[0].treeNode));
  }
#line 2779 "guillex.tab.c"
    break;

  case 5: /* declarationList: error  */
#line 410 "guillex.y"
          {
    printf("Semantic error");
  }
#line 2787 "guillex.tab.c"
    break;

  case 6: /* declaration: varDeclaration  */
#line 416 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
    }
#line 2795 "guillex.tab.c"
    break;

  case 7: /* declaration: funcDeclaration  */
#line 419 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("funcDeclaration", (yyvsp[0].treeNode));
    }
#line 2803 "guillex.tab.c"
    break;

  case 8: /* varDeclaration: simpleVarDeclaration SEMIC  */
#line 425 "guillex.y"
                               {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[-1].treeNode));}
#line 2810 "guillex.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 430 "guillex.y"
                   {parentScope = STACK_TOP(stackScope) -> value; scope++; pushStack(scope);}
#line 2816 "guillex.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 430 "guillex.y"
                                                                                                                   {addSymbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stackScope) -> value, parentScope);}
#line 2822 "guillex.tab.c"
    break;

  case 11: /* funcDeclaration: TYPE ID PARENL $@1 params PARENR STFUNC $@2 stmtList ENDFUNC  */
#line 430 "guillex.y"
                                                                                                                                                                                                              {
      (yyval.treeNode) = createNode4("TYPE ID PARENL params PARENR STFUNC stmtList ENDFUNC", createNode0((yyvsp[-9].str)), createNode0((yyvsp[-8].str)), (yyvsp[-5].treeNode), (yyvsp[-1].treeNode));
      popStack();
  }
#line 2831 "guillex.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 434 "guillex.y"
                   {parentScope = STACK_TOP(stackScope) -> value; scope; pushStack(scope);}
#line 2837 "guillex.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 434 "guillex.y"
                                                                                                          {addSymbol((yyvsp[-4].str), "func", (yyvsp[-5].str), STACK_TOP(stackScope) -> value, parentScope);}
#line 2843 "guillex.tab.c"
    break;

  case 14: /* funcDeclaration: TYPE ID PARENL $@3 PARENR STFUNC $@4 stmtList ENDFUNC  */
#line 434 "guillex.y"
                                                                                                                                                                                                     {
    
      (yyval.treeNode) = createNode3("TYPE ID PARENL PARENR compoundStmt", createNode0((yyvsp[-8].str)), createNode0((yyvsp[-7].str)), (yyvsp[-1].treeNode)); 
      popStack();                                                                      
  }
#line 2853 "guillex.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 439 "guillex.y"
                            {parentScope = STACK_TOP(stackScope) -> value; scope++; pushStack(scope);}
#line 2859 "guillex.tab.c"
    break;

  case 16: /* $@6: %empty  */
#line 439 "guillex.y"
                                                                                                                            {addSymbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stackScope) -> value, parentScope);}
#line 2865 "guillex.tab.c"
    break;

  case 17: /* funcDeclaration: TYPE LISTTYPE ID PARENL $@5 params PARENR STFUNC $@6 stmtList ENDFUNC  */
#line 439 "guillex.y"
                                                                                                                                                                                                                      {
      (yyval.treeNode) = createNode5("TYPE LISTTYPE ID PARENL params PARENR compoundStmt", createNode0((yyvsp[-10].str)), createNode0List((yyvsp[-9].str), 'l'), createNode0((yyvsp[-8].str)), (yyvsp[-5].treeNode), (yyvsp[-1].treeNode));
      popStack();
  }
#line 2874 "guillex.tab.c"
    break;

  case 18: /* $@7: %empty  */
#line 443 "guillex.y"
                            {parentScope = STACK_TOP(stackScope) -> value; scope; pushStack(scope);}
#line 2880 "guillex.tab.c"
    break;

  case 19: /* $@8: %empty  */
#line 443 "guillex.y"
                                                                                                                   {addSymbol((yyvsp[-4].str), "func", (yyvsp[-5].str), STACK_TOP(stackScope) -> value, parentScope);}
#line 2886 "guillex.tab.c"
    break;

  case 20: /* funcDeclaration: TYPE LISTTYPE ID PARENL $@7 PARENR STFUNC $@8 stmtList ENDFUNC  */
#line 443 "guillex.y"
                                                                                                                                                                                                             {
      (yyval.treeNode) = createNode4("TYPE LISTTYPE ID PARENL PARENR compoundStmt", createNode0((yyvsp[-9].str)), createNode0List((yyvsp[-8].str), 'l'), createNode0((yyvsp[-7].str)), (yyvsp[-1].treeNode));
      popStack();
    }
#line 2895 "guillex.tab.c"
    break;

  case 21: /* simpleVarDeclaration: TYPE ID  */
#line 450 "guillex.y"
            {

      parentScope = STACK_TOP(stackScope) -> value;
      pushStack(scope);
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      addSymbol((yyvsp[0].str), "var", (yyvsp[-1].str), STACK_TOP(stackScope) -> value, parentScope);
      popStack();
      }
#line 2908 "guillex.tab.c"
    break;

  case 22: /* simpleVarDeclaration: TYPE LISTTYPE ID  */
#line 458 "guillex.y"
                       {

      parentScope = STACK_TOP(stackScope) -> value;
      pushStack(scope);
      addSymbol((yyvsp[0].str), "var", (yyvsp[-1].str), STACK_TOP(stackScope) -> value, parentScope);
      (yyval.treeNode) = createNode3("TYPE ID", createNode0((yyvsp[-2].str)), createNode0List((yyvsp[-1].str), 'l'), createNode0((yyvsp[0].str)));
      popStack();
    }
#line 2921 "guillex.tab.c"
    break;

  case 23: /* params: params param  */
#line 470 "guillex.y"
                 {
      (yyval.treeNode) = createNode2("params param", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
      }
#line 2929 "guillex.tab.c"
    break;

  case 24: /* params: param  */
#line 473 "guillex.y"
          { 
    (yyval.treeNode) = createNode1("param", (yyvsp[0].treeNode)); 
    }
#line 2937 "guillex.tab.c"
    break;

  case 25: /* param: TYPE ID  */
#line 479 "guillex.y"
            {

      parentScope = STACK_TOP(stackScope) -> value;
      pushStack(scope);
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      addSymbol((yyvsp[0].str), "param", (yyvsp[-1].str), STACK_TOP(stackScope) -> value, parentScope);
      popStack();
      }
#line 2950 "guillex.tab.c"
    break;

  case 26: /* param: TYPE LISTTYPE ID  */
#line 487 "guillex.y"
                       {

      parentScope = STACK_TOP(stackScope) -> value;
      pushStack(scope);
      addSymbol((yyvsp[0].str), "param", (yyvsp[-1].str), STACK_TOP(stackScope) -> value, parentScope);
      (yyval.treeNode) = createNode3("TYPE ID", createNode0((yyvsp[-2].str)), createNode0List((yyvsp[-1].str), 'l'), createNode0((yyvsp[0].str)));
      popStack();
    }
#line 2963 "guillex.tab.c"
    break;

  case 27: /* compoundStmt: STFUNC stmtList ENDFUNC  */
#line 498 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[-1].treeNode));
    }
#line 2971 "guillex.tab.c"
    break;

  case 28: /* stmtList: stmtList primitiveStmt  */
#line 504 "guillex.y"
                              {
      (yyval.treeNode) = createNode2("stmtList primitiveStmt", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 2979 "guillex.tab.c"
    break;

  case 29: /* stmtList: primitiveStmt  */
#line 507 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("primitiveStmt", (yyvsp[0].treeNode));
  }
#line 2987 "guillex.tab.c"
    break;

  case 30: /* primitiveStmt: exprStmt  */
#line 513 "guillex.y"
             {
      (yyval.treeNode) = createNode1("exprStmt", (yyvsp[0].treeNode));
    }
#line 2995 "guillex.tab.c"
    break;

  case 31: /* primitiveStmt: compoundStmt  */
#line 516 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[0].treeNode));
  }
#line 3003 "guillex.tab.c"
    break;

  case 32: /* primitiveStmt: condStmt  */
#line 519 "guillex.y"
             {
    (yyval.treeNode) = createNode1("condStmt", (yyvsp[0].treeNode));
  }
#line 3011 "guillex.tab.c"
    break;

  case 33: /* primitiveStmt: iterStmt  */
#line 522 "guillex.y"
             {
    (yyval.treeNode) = createNode1("iterStmt", (yyvsp[0].treeNode));
  }
#line 3019 "guillex.tab.c"
    break;

  case 34: /* primitiveStmt: returnStmt  */
#line 525 "guillex.y"
               {
    (yyval.treeNode) = createNode1("returnStmt", (yyvsp[0].treeNode));
  }
#line 3027 "guillex.tab.c"
    break;

  case 35: /* primitiveStmt: inOp  */
#line 528 "guillex.y"
         {
    (yyval.treeNode) = createNode1("inOp", (yyvsp[0].treeNode));
  }
#line 3035 "guillex.tab.c"
    break;

  case 36: /* primitiveStmt: outOp  */
#line 531 "guillex.y"
          {
    (yyval.treeNode) = createNode1("outOp", (yyvsp[0].treeNode));
  }
#line 3043 "guillex.tab.c"
    break;

  case 37: /* primitiveStmt: varDeclaration  */
#line 534 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
  }
#line 3051 "guillex.tab.c"
    break;

  case 38: /* exprStmt: expression SEMIC  */
#line 540 "guillex.y"
                     {
      (yyval.treeNode) = createNode1("expression SEMIC", (yyvsp[-1].treeNode));
    }
#line 3059 "guillex.tab.c"
    break;

  case 39: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt  */
#line 546 "guillex.y"
                                                        {
      (yyval.treeNode) = createNode3("IF PARENL simpleExp PARENR primitiveStmt", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 3067 "guillex.tab.c"
    break;

  case 40: /* condStmt: IF PARENL simpleExp PARENR primitiveStmt ELSE primitiveStmt  */
#line 549 "guillex.y"
                                                                {
    (yyval.treeNode) = createNode5("IF PARENL primitiveExp PARENR primitiveStmt ELSE primitiveStmt", createNode0((yyvsp[-6].str)), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), createNode0((yyvsp[-1].str)), (yyvsp[0].treeNode));
  }
#line 3075 "guillex.tab.c"
    break;

  case 41: /* iterStmt: FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 555 "guillex.y"
                                                                              {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-8].str)), (yyvsp[-6].treeNode), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 3083 "guillex.tab.c"
    break;

  case 42: /* iterStmt: FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 558 "guillex.y"
                                                                              {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-8].str)), (yyvsp[-6].treeNode), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
  }
#line 3091 "guillex.tab.c"
    break;

  case 43: /* returnStmt: RETURN expression SEMIC  */
#line 564 "guillex.y"
                            {
      (yyval.treeNode) = createNode2("RETURN expression SEMIC", createNode0((yyvsp[-2].str)), (yyvsp[-1].treeNode));
    }
#line 3099 "guillex.tab.c"
    break;

  case 44: /* listExp: appendOps  */
#line 570 "guillex.y"
              {
      (yyval.treeNode) = createNode1("appendOps", (yyvsp[0].treeNode));
    }
#line 3107 "guillex.tab.c"
    break;

  case 45: /* listExp: returnListOps  */
#line 573 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("returnListOps", (yyvsp[0].treeNode));
  }
#line 3115 "guillex.tab.c"
    break;

  case 46: /* listExp: destroyHeadOps  */
#line 576 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("destroyHeadOps", (yyvsp[0].treeNode));
  }
#line 3123 "guillex.tab.c"
    break;

  case 47: /* listExp: mapFilterOps  */
#line 579 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("mapFilterOps", (yyvsp[0].treeNode));
  }
#line 3131 "guillex.tab.c"
    break;

  case 48: /* appendOps: ID APPEND ID  */
#line 585 "guillex.y"
                 {
      (yyval.treeNode) = createNode3("ID APPEND ID SEMIC", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 3139 "guillex.tab.c"
    break;

  case 49: /* returnListOps: returnListOp ID  */
#line 591 "guillex.y"
                   {
      (yyval.treeNode) = createNode2("returnListOp ID", (yyvsp[-1].treeNode), createNode0((yyvsp[0].str)));
    }
#line 3147 "guillex.tab.c"
    break;

  case 50: /* returnListOp: HEADLIST  */
#line 597 "guillex.y"
             {
      (yyval.treeNode) = createNode1("HEADLIST", createNode0((yyvsp[0].str)));
    }
#line 3155 "guillex.tab.c"
    break;

  case 51: /* returnListOp: TAILLIST  */
#line 600 "guillex.y"
             {
      (yyval.treeNode) = createNode1("TAILLIST", createNode0((yyvsp[0].str)));
  }
#line 3163 "guillex.tab.c"
    break;

  case 52: /* destroyHeadOps: DESTROYHEAD ID  */
#line 606 "guillex.y"
                   {
      (yyval.treeNode) = createNode2("DESTROYHEAD ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 3171 "guillex.tab.c"
    break;

  case 53: /* mapFilterOps: ID MAP ID  */
#line 612 "guillex.y"
              {
      (yyval.treeNode) = createNode3("ID MAP ID SEMIC", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 3179 "guillex.tab.c"
    break;

  case 54: /* mapFilterOps: ID FILTER ID  */
#line 616 "guillex.y"
                 {
      (yyval.treeNode) = createNode3("ID FILTER ID SEMIC", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 3187 "guillex.tab.c"
    break;

  case 55: /* expression: assignExp  */
#line 622 "guillex.y"
              {
      (yyval.treeNode) = createNode1("assignExp", (yyvsp[0].treeNode));
    }
#line 3195 "guillex.tab.c"
    break;

  case 56: /* expression: simpleExp  */
#line 625 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3203 "guillex.tab.c"
    break;

  case 57: /* expression: listExp  */
#line 628 "guillex.y"
            {
    (yyval.treeNode) = createNode1("listExp", (yyvsp[0].treeNode));
  }
#line 3211 "guillex.tab.c"
    break;

  case 58: /* assignExp: ID ASSIGN expression  */
#line 634 "guillex.y"
                         {
      if (findSymbol((yyvsp[-2].str), scope, parentScope) != NULL)
        (yyval.treeNode) = createNode3("ID ASSIGN expression", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), (yyvsp[0].treeNode));
      else{
        printf("Semantic error");
        printf("Var: <%s> Not Declared, line %d, column %d\n\n", (yyvsp[-2].str), line, wordPosition);
        (yyval.treeNode) = createNodeE();
      }
    }
#line 3225 "guillex.tab.c"
    break;

  case 59: /* simpleExp: binLogicalExp  */
#line 647 "guillex.y"
                  {
      (yyval.treeNode) = createNode1("binLogicalExp", (yyvsp[0].treeNode));
    }
#line 3233 "guillex.tab.c"
    break;

  case 60: /* constOp: INTEGER  */
#line 653 "guillex.y"
            {
      (yyval.treeNode) = createNode0Int((yyvsp[0].integer), 'i');
    }
#line 3241 "guillex.tab.c"
    break;

  case 61: /* constOp: DECIMAL  */
#line 656 "guillex.y"
            {
    (yyval.treeNode) = createNode0Dec((yyvsp[0].dec), 'd');
  }
#line 3249 "guillex.tab.c"
    break;

  case 62: /* constOp: NIL  */
#line 659 "guillex.y"
        {
    (yyval.treeNode) = createNode0Nil((yyvsp[0].str), 'n');
  }
#line 3257 "guillex.tab.c"
    break;

  case 63: /* inOp: READ PARENL ID PARENR SEMIC  */
#line 665 "guillex.y"
                             {
    (yyval.treeNode) = createNode2("READ PARENL ID PARENR SEMIC", createNode0((yyvsp[-4].str)), createNode0((yyvsp[-2].str)));
  }
#line 3265 "guillex.tab.c"
    break;

  case 64: /* outOp: WRITE PARENL outConst PARENR SEMIC  */
#line 671 "guillex.y"
                                      {
      (yyval.treeNode) = createNode2("WRITE PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
    }
#line 3273 "guillex.tab.c"
    break;

  case 65: /* outOp: WRITELN PARENL outConst PARENR SEMIC  */
#line 674 "guillex.y"
                                         {
      (yyval.treeNode) = createNode2("WRITELN PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
  }
#line 3281 "guillex.tab.c"
    break;

  case 66: /* outConst: STRING  */
#line 680 "guillex.y"
           {
      (yyval.treeNode) = createNode1("STRING", createNode0((yyvsp[0].str)));
    }
#line 3289 "guillex.tab.c"
    break;

  case 67: /* outConst: simpleExp  */
#line 683 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3297 "guillex.tab.c"
    break;

  case 68: /* outConst: listExp  */
#line 686 "guillex.y"
            {
    (yyval.treeNode) = createNode1("listExp", (yyvsp[0].treeNode));
  }
#line 3305 "guillex.tab.c"
    break;

  case 69: /* binLogicalExp: binLogicalExp binLogicalOp relationalOp  */
#line 692 "guillex.y"
                                           {
      (yyval.treeNode) = createNode3("binLogicalExp binLogicalOp relationalOp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3313 "guillex.tab.c"
    break;

  case 70: /* binLogicalExp: relationalExp  */
#line 695 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("relationalExp", (yyvsp[0].treeNode));
  }
#line 3321 "guillex.tab.c"
    break;

  case 71: /* binLogicalOp: OR  */
#line 702 "guillex.y"
       {
      (yyval.treeNode) = createNode1("OR", createNode0((yyvsp[0].str)));
    }
#line 3329 "guillex.tab.c"
    break;

  case 72: /* binLogicalOp: AND  */
#line 705 "guillex.y"
        {
      (yyval.treeNode) = createNode1("AND", createNode0((yyvsp[0].str)));
  }
#line 3337 "guillex.tab.c"
    break;

  case 73: /* relationalExp: relationalExp relationalOp sumExp  */
#line 711 "guillex.y"
                                      {
      (yyval.treeNode) = createNode3("relationalExp relationalOp sumExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3345 "guillex.tab.c"
    break;

  case 74: /* relationalExp: sumExp  */
#line 714 "guillex.y"
           {
      (yyval.treeNode) = createNode1("sumExp", (yyvsp[0].treeNode));
  }
#line 3353 "guillex.tab.c"
    break;

  case 75: /* relationalOp: SMALLER  */
#line 721 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLER", createNode0((yyvsp[0].str)));
    }
#line 3361 "guillex.tab.c"
    break;

  case 76: /* relationalOp: GREATER  */
#line 724 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATER", createNode0((yyvsp[0].str)));
  }
#line 3369 "guillex.tab.c"
    break;

  case 77: /* relationalOp: SMALLEQ  */
#line 727 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLEQ", createNode0((yyvsp[0].str)));
  }
#line 3377 "guillex.tab.c"
    break;

  case 78: /* relationalOp: GREATEQ  */
#line 730 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATEQ", createNode0((yyvsp[0].str)));
  }
#line 3385 "guillex.tab.c"
    break;

  case 79: /* relationalOp: EQUALS  */
#line 733 "guillex.y"
           {
      (yyval.treeNode) = createNode1("EQUALS", createNode0((yyvsp[0].str)));
  }
#line 3393 "guillex.tab.c"
    break;

  case 80: /* relationalOp: DIFFERENT  */
#line 736 "guillex.y"
              {
      (yyval.treeNode) = createNode1("DIFFERENT", createNode0((yyvsp[0].str)));
  }
#line 3401 "guillex.tab.c"
    break;

  case 81: /* sumExp: sumExp sumOp mulExp  */
#line 742 "guillex.y"
                        {
      (yyval.treeNode) = createNode3("sumExp sumOp mulExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3409 "guillex.tab.c"
    break;

  case 82: /* sumExp: mulExp  */
#line 745 "guillex.y"
           {
      (yyval.treeNode) = createNode1("mulExp", (yyvsp[0].treeNode));
  }
#line 3417 "guillex.tab.c"
    break;

  case 83: /* sumOp: ADD  */
#line 751 "guillex.y"
        {
      (yyval.treeNode) = createNode1("ADD", createNode0((yyvsp[0].str)));
    }
#line 3425 "guillex.tab.c"
    break;

  case 84: /* sumOp: SUB  */
#line 754 "guillex.y"
        {
      (yyval.treeNode) = createNode1("SUB", createNode0((yyvsp[0].str)));
  }
#line 3433 "guillex.tab.c"
    break;

  case 85: /* mulExp: mulExp mulOp factor  */
#line 760 "guillex.y"
                        {
      (yyval.treeNode) = createNode3("mulExp mulOp factor", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3441 "guillex.tab.c"
    break;

  case 86: /* mulExp: factor  */
#line 763 "guillex.y"
           {
      (yyval.treeNode) = createNode1("factor", (yyvsp[0].treeNode));
  }
#line 3449 "guillex.tab.c"
    break;

  case 87: /* mulExp: sumOp factor  */
#line 766 "guillex.y"
                 {
      (yyval.treeNode) = createNode2("sumOp factor", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
  }
#line 3457 "guillex.tab.c"
    break;

  case 88: /* mulOp: MULT  */
#line 772 "guillex.y"
         {
      (yyval.treeNode) = createNode1("MULT", createNode0((yyvsp[0].str)));
    }
#line 3465 "guillex.tab.c"
    break;

  case 89: /* mulOp: DIV  */
#line 775 "guillex.y"
        {
      (yyval.treeNode) = createNode1("DIV", createNode0((yyvsp[0].str)));
  }
#line 3473 "guillex.tab.c"
    break;

  case 90: /* factor: ID  */
#line 781 "guillex.y"
       {
      (yyval.treeNode) = createNode1("ID", createNode0((yyvsp[0].str)));
    }
#line 3481 "guillex.tab.c"
    break;

  case 91: /* factor: fCall  */
#line 784 "guillex.y"
          {
      (yyval.treeNode) = createNode1("fCall", (yyvsp[0].treeNode));
  }
#line 3489 "guillex.tab.c"
    break;

  case 92: /* factor: PARENL simpleExp PARENR  */
#line 787 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("PARENL simpleExp PARENR", (yyvsp[-1].treeNode));
  }
#line 3497 "guillex.tab.c"
    break;

  case 93: /* factor: constOp  */
#line 790 "guillex.y"
            {
      (yyval.treeNode) = createNode1("constOp", (yyvsp[0].treeNode));
  }
#line 3505 "guillex.tab.c"
    break;

  case 94: /* fCall: ID PARENL callParams PARENR  */
#line 796 "guillex.y"
                                 {
      (yyval.treeNode) = createNode2("ID PARENL callParams PARENR", createNode0((yyvsp[-3].str)), (yyvsp[-1].treeNode));
    }
#line 3513 "guillex.tab.c"
    break;

  case 95: /* fCall: ID PARENL PARENR  */
#line 799 "guillex.y"
                     {
    (yyval.treeNode) = createNode1("ID PARENL PARENR", createNode0((yyvsp[-2].str)));
  }
#line 3521 "guillex.tab.c"
    break;

  case 96: /* callParams: callParams COMMA simpleExp  */
#line 805 "guillex.y"
                               {
      (yyval.treeNode) = createNode2("callParams COMMA simpleExp", (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
    }
#line 3529 "guillex.tab.c"
    break;

  case 97: /* callParams: simpleExp  */
#line 808 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
  }
#line 3537 "guillex.tab.c"
    break;


#line 3541 "guillex.tab.c"

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

#line 815 "guillex.y"


void yyerror(const char* msg) {
  printf("%s\n", msg);
  printf ("%s, linha: %d, coluna: %d\n", msg,line,wordPosition);
  errors++;
}

int main(int argc, char *argv[]) {
  // #ifdef YYDEBUG
  // yydebug = 1;
  // #endif
  pushStack(0);
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
