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
#include "../lib/utstring.h"
#include "../lib/utlist.h"
#include <stdbool.h>
#define _GNU_SOURCE


extern int yylex();
extern int yylex_destroy();
extern int yyparse();
void yyerror(const char* text);
extern int line;
extern int wordPosition;
extern FILE* yyin;
int errors = 0; 
int semanticErrors = 0;
int parameters = 0;
int argsParams = 0;
int scope = 0;
int varReg = 1;



typedef struct node {
  int integer;
  float decimal;
  char *nodeValue;
  char nodeType;
  char *saved;
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

Node* createNode0Int(int nodeValue) {
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

Node* createNode0Dec(float nodeValue) {
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

Node* createNode0List(char *nodeValue) {
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

Node* createNode0Nil(char *nodeValue) {
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
Node* createNode0Int(int nodeValue); 
Node* createNode0Dec(float nodeValue);
Node* createNode0List(char *nodeValue);
Node* createNode0Nil(char *nodeValue);
Node* createNode1(char *nodeValue, Node* left);
Node* createNode2(char *nodeValue, Node* left, Node* leftMiddle);
Node* createNode3(char *nodeValue, Node* left, Node* leftMiddle, Node* middle);
Node* createNode4(char *nodeValue, Node* left, Node* leftMiddle, Node* middle, Node* rightMiddle);
Node* createNode5(char *nodeValue, Node* left, Node* leftMiddle, Node* middle, Node* rightMiddle, Node* right);
void printAndFreeTree(int indentCount, Node *node);
Node *abstractSyntaxTree = NULL;


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


typedef struct symbol {
  char *name; // var or func id
  char *symbolType; // var or func
  char *varFuncName; // var or func name
  int scope;
  int parameters;
  UT_string *varReg;
  UT_hash_handle hh;
}Symbol;

Symbol *symbolTable = NULL;

int addSymbol(char *name, char *symbolType, char *varFuncName, int scope, int parameters, UT_string *varReg) {
  struct symbol *s;
  
  HASH_FIND_STR(symbolTable, name, s);
  if (s == NULL){
    s = (Symbol*)malloc(sizeof(Symbol));
    s -> name = name;
    s -> symbolType = symbolType;
    s -> varFuncName = varFuncName;
    s -> scope = scope;
    s -> parameters = parameters;
    s -> varReg = varReg;
    HASH_ADD_STR(symbolTable, name, s);
    return 0;
  } else {
     if (s -> scope != scope) {
      s = (Symbol*)malloc(sizeof(Symbol));
      s -> name = name;
      s -> symbolType = symbolType;
      s -> varFuncName = varFuncName;
      s -> scope = scope;
      s -> parameters = parameters;
      s -> varReg = varReg;
      HASH_ADD_STR(symbolTable, name, s);
      return 0;
    } else {
      printf("Semantic Error\n");
      printf("Variable or Function already declared in this scope\n\n");    
      return 1;}
  }
  return 1;
}



extern int findSymbolMain(char *namecomp) {
    struct symbol *s;
    int hasMain = 0;

    for (s = symbolTable; s != NULL; s = s -> hh.next){
      if ((strcmp(s -> name, namecomp) == 0 && (strcmp(s -> symbolType, "func") == 0 ))){
        hasMain++;
      }
    }
    if(!hasMain){
      printf("Semantic Error --> Undefined reference to 'main'\n");
        return 1;
    }
    if(hasMain>1){
      printf("Semantic Error --> More than one 'main'\n");
        return 1;
    }
  return 0;
}

extern struct symbol *findSymbolFunc(char *name) {
  struct symbol *s;

  for (s = symbolTable; s != NULL; s = s -> hh.next){
    if (strcmp(s -> name, name) == 0 && strcmp(s -> symbolType, "func") == 0){
      return s;
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
        printf("|   %-16s    |    %-24s     |      %-20s    |         %-3d          |         %d          |\n", s -> name, s -> symbolType, s -> varFuncName, s -> scope, s -> parameters);
    }
}

bool checkNumberOfParams(int argsParams, char* funcName) {
  struct symbol *s = findSymbolFunc(funcName);

  if(s -> parameters == argsParams)
    return true;
  return false;
}

bool checkIsInScope(char *name) {
  struct symbol *s;
  Scope *scope;
  Scope *scopeAux;

  for (scope = stackScope; !STACK_EMPTY(scope);){
    for (s = symbolTable; s != NULL; s = s -> hh.next){
      if (strcmp(s -> name, name) == 0 && s -> scope == scope -> value && (strcmp(s -> symbolType, "var") == 0 || strcmp(s -> symbolType, "param") == 0)){
        return true;
      }
    }
    STACK_POP(scope, scopeAux);
  }
  return false;
  free(scopeAux);
}



int addSymbol(char *name, char *symbolType, char *varFuncName, int scope, int parameters, UT_string *varReg);
void freeSymbols();
void printSymbols();
extern Symbol *symbol;

typedef struct codegen{
  UT_string *line;
  struct codegen *prev;
  struct codegen *next;
} Codegen;

FILE *tacfile;
Codegen *currentLine = NULL;

void addFunc(char *name) {
  Codegen *code = (Codegen *)malloc(sizeof *code);

  utstring_new(code -> line);
  utstring_printf(code -> line, "%s:\n", name);
  DL_APPEND(currentLine, code);
}

void varDecAssign(char *name, char *value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "mov %s, %s\n", name, value);
  DL_APPEND(currentLine, code);
}

void writeFunc(char *value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "print %s\n", value);
  DL_APPEND(currentLine, code);
}

void writelnFunc(char *value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "println %s\n", value);
  DL_APPEND(currentLine, code);
}

void mathOpFile(char *op, char *dest, char *operand1, char *operand2) {
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "%s %s, %s, %s\n", op, dest, operand1, operand2);
  DL_APPEND(currentLine, code);
}

void writeTacFile(Codegen *originalNode) {
  if(originalNode == NULL)
    return;

  fprintf(tacfile, "%s", utstring_body(originalNode -> line));
  writeTacFile(originalNode -> next);
}

UT_string *create_new_reg(int varReg) {
  UT_string *r;
  utstring_new(r);
  utstring_printf(r, "$%d", varReg);

  return r;
}

UT_string *int_as_str(int value) {
  UT_string *r;
  utstring_new(r);
  utstring_printf(r, "%d", value);

  return r;
}

UT_string *float_as_str(float value) {
  UT_string *r;
  utstring_new(r);
  utstring_printf(r, "%f", value);

  return r;
}


#line 567 "guillex.tab.c"

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
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_NIL = 6,                        /* NIL  */
  YYSYMBOL_INTEGER = 7,                    /* INTEGER  */
  YYSYMBOL_DECIMAL = 8,                    /* DECIMAL  */
  YYSYMBOL_ERRORTOKEN = 9,                 /* ERRORTOKEN  */
  YYSYMBOL_THEN = 10,                      /* THEN  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_ADD = 12,                       /* ADD  */
  YYSYMBOL_SUB = 13,                       /* SUB  */
  YYSYMBOL_MULT = 14,                      /* MULT  */
  YYSYMBOL_DIV = 15,                       /* DIV  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_AND = 17,                       /* AND  */
  YYSYMBOL_SMALLER = 18,                   /* SMALLER  */
  YYSYMBOL_GREATER = 19,                   /* GREATER  */
  YYSYMBOL_SMALLEQ = 20,                   /* SMALLEQ  */
  YYSYMBOL_GREATEQ = 21,                   /* GREATEQ  */
  YYSYMBOL_EQUALS = 22,                    /* EQUALS  */
  YYSYMBOL_DIFFERENT = 23,                 /* DIFFERENT  */
  YYSYMBOL_APPEND = 24,                    /* APPEND  */
  YYSYMBOL_HEADLIST = 25,                  /* HEADLIST  */
  YYSYMBOL_TAILLIST = 26,                  /* TAILLIST  */
  YYSYMBOL_DESTROYHEAD = 27,               /* DESTROYHEAD  */
  YYSYMBOL_FILTER = 28,                    /* FILTER  */
  YYSYMBOL_ASSIGN = 29,                    /* ASSIGN  */
  YYSYMBOL_MAP = 30,                       /* MAP  */
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
  YYSYMBOL_simpleVarDeclaration = 53,      /* simpleVarDeclaration  */
  YYSYMBOL_params = 54,                    /* params  */
  YYSYMBOL_param = 55,                     /* param  */
  YYSYMBOL_compoundStmt = 56,              /* compoundStmt  */
  YYSYMBOL_stmtList = 57,                  /* stmtList  */
  YYSYMBOL_primitiveStmt = 58,             /* primitiveStmt  */
  YYSYMBOL_exprStmt = 59,                  /* exprStmt  */
  YYSYMBOL_condStmt = 60,                  /* condStmt  */
  YYSYMBOL_ifStmt = 61,                    /* ifStmt  */
  YYSYMBOL_elseStmt = 62,                  /* elseStmt  */
  YYSYMBOL_63_5 = 63,                      /* $@5  */
  YYSYMBOL_iterStmt = 64,                  /* iterStmt  */
  YYSYMBOL_65_6 = 65,                      /* $@6  */
  YYSYMBOL_66_7 = 66,                      /* $@7  */
  YYSYMBOL_returnStmt = 67,                /* returnStmt  */
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_assignExp = 69,                 /* assignExp  */
  YYSYMBOL_simpleExp = 70,                 /* simpleExp  */
  YYSYMBOL_constOp = 71,                   /* constOp  */
  YYSYMBOL_inOp = 72,                      /* inOp  */
  YYSYMBOL_outOp = 73,                     /* outOp  */
  YYSYMBOL_outConst = 74,                  /* outConst  */
  YYSYMBOL_binListExp = 75,                /* binListExp  */
  YYSYMBOL_unaryListExp = 76,              /* unaryListExp  */
  YYSYMBOL_binLogicalExp = 77,             /* binLogicalExp  */
  YYSYMBOL_binLogicalOp = 78,              /* binLogicalOp  */
  YYSYMBOL_relationalExp = 79,             /* relationalExp  */
  YYSYMBOL_relationalOp = 80,              /* relationalOp  */
  YYSYMBOL_sumExp = 81,                    /* sumExp  */
  YYSYMBOL_mulExp = 82,                    /* mulExp  */
  YYSYMBOL_factor = 83,                    /* factor  */
  YYSYMBOL_fCall = 84,                     /* fCall  */
  YYSYMBOL_callParams = 85                 /* callParams  */
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
#define YYLAST   6368

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  413

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
       0,   535,   535,   541,   544,   547,   555,   558,   564,   569,
     569,   569,   579,   579,   579,   592,   621,   624,   627,   635,
     646,   652,   655,   661,   664,   667,   670,   673,   676,   679,
     682,   688,   694,   701,   704,   711,   718,   726,   726,   742,
     742,   753,   753,   766,   773,   777,   784,   802,   807,   814,
     819,   824,   830,   836,   841,   849,   853,   860,   864,   869,
     875,   879,   886,   889,   897,   900,   906,   909,   917,   920,
     923,   926,   929,   932,   938,   945,   951,   958,   965,   971,
     975,   978,   981,   988,   992,   996,  1000,  1004,  1010,  1031,
    1053,  1058
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "TYPE", "STRING",
  "NIL", "INTEGER", "DECIMAL", "ERRORTOKEN", "THEN", "ELSE", "ADD", "SUB",
  "MULT", "DIV", "OR", "AND", "SMALLER", "GREATER", "SMALLEQ", "GREATEQ",
  "EQUALS", "DIFFERENT", "APPEND", "HEADLIST", "TAILLIST", "DESTROYHEAD",
  "FILTER", "ASSIGN", "MAP", "IF", "FOR", "READ", "WRITE", "WRITELN",
  "RETURN", "SEMIC", "COMMA", "STFUNC", "ENDFUNC", "PARENL", "PARENR",
  "$accept", "program", "declarationList", "declaration", "varDeclaration",
  "funcDeclaration", "$@1", "$@2", "$@3", "$@4", "simpleVarDeclaration",
  "params", "param", "compoundStmt", "stmtList", "primitiveStmt",
  "exprStmt", "condStmt", "ifStmt", "elseStmt", "$@5", "iterStmt", "$@6",
  "$@7", "returnStmt", "expression", "assignExp", "simpleExp", "constOp",
  "inOp", "outOp", "outConst", "binListExp", "unaryListExp",
  "binLogicalExp", "binLogicalOp", "relationalExp", "relationalOp",
  "sumExp", "mulExp", "factor", "fCall", "callParams", YY_NULLPTR
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

#define YYPACT_NINF (-210)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-92)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,    13,    27,    51,    45,    59,   136,   141,     3,    49,
    -210,   144,   165,    22,   280,    12,   149,    71,   159,   164,
      44,   175,    84,    57,  1199,   195,  3565,  3604,  3604,  5611,
     109,  5683,  5709,  5735,  5761,    86,    86,    86,    86,    87,
      92,    93,    98,   106,   522,  3604,   659,  2473,  2512,  2551,
    2590,  2629,  2668,  3643,  2707,  2746,   116,   126,   134,  5787,
    2785,  2824,   135,  5943,    94,    50,  6319,  5955,  5813,  5839,
    2863,   522,    35,   151,  5671,  5981,  5993,  6019,  6031,   659,
     522,   170,   432,   432,   152,  2902,   153,   234,  2941,  2980,
     562,  3019,   702,   792,   800,   931,  1055,  1260,  1481,  1489,
    1541,   800,   800,   800,    86,    86,   143,   143,   143,   273,
     157,  5865,   225,   236,   158,   174,   182,   183,   197,   220,
     226,   255,  3058,  3097,  5891,   601,  3682,  3136,  1686,  6057,
    6331,  6069,  6095,  6107,  6133,   257,   269,   271,  1572,  5917,
    3721,  1598,  1598,   294,   305,   312,  3175,  3604,   241,   320,
     321,  3214,  3253,  3292,  3331,   209,   209,   288,   317,   323,
    3760,  3799,  3604,  3604,  3370,  3409,   348,  6145,  6171,  6183,
    6209,   659,  6221,  6247,  4030,  4371,  4402,  4433,  4464,   201,
     201,   201,   201,   659,  4495,   344,  5123,    40,   602,   657,
    5154,  4526,  4557,   137,   352,   353,   364,   522,   872,   369,
    1643,  1685,  1730,  3838,  1771,  1810,   370,  1849,  1888,  3968,
    4061,  4092,  4123,  4154,   244,   244,   244,   244,   659,  4185,
     254,  4681,    20,   520,  5553,  4693,  4216,  4247,    72,  3448,
     245,   371,   381,   382,   384,   659,   397,   417,  5641,  3914,
    3487,   385,    96,  4724,  5166,  5197,  5209,  5240,   659,  5252,
    5283,  5295,  5326,  5338,  5369,   418,  3922,  3922,  3922,  3922,
     201,   201,   252,   252,   252,   522,   458,   432,   432,   425,
    1927,  3526,  1966,  2005,   117,   306,  4736,  4767,  4779,  4810,
     659,  4822,  4853,  4865,  4896,  4908,  4939,   443,  3953,  3953,
    3953,  3953,   244,   244,   292,   292,   292,  6259,   265,  2044,
     173,   444,  3999,   445,   447,   448,  6285,  4588,   296,   215,
     449,  4619,   929,  5381,  3563,  5412,  5424,  5455,  5467,   -20,
     450,   451,   452,   453,   659,   463,   464,   465,   467,   468,
     474,   475,   476,   477,   479,  2083,  2122,  3682,  2161,  4278,
     298,   223,   480,  4309,   849,  4951,  5580,  4982,  4994,  5025,
    5037,    77,   313,   318,   361,   362,   659,   375,   378,   390,
     391,   404,  6297,   483,   410,   486,  4650,  5498,   411,  5510,
     263,   484,  1598,  1598,   490,   496,   507,  2200,  3877,  4340,
    5068,   413,  5080,   389,   503,   509,  5541,   510,   421,   511,
     514,   517,  2239,  2278,  2317,  3604,  2356,  5111,   436,   439,
     441,   513,   209,   209,   442,   525,   534,  3760,  3799,  3877,
    3877,  2395,  2434
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -210,  -210,  -210,   552,     0,  -210,  -210,  -210,  -210,  -210,
       2,  -210,   537,   -48,     7,   -46,   -41,   -39,   -37,  -116,
     240,   -35,   185,   181,   -33,   -43,   -49,  1056,   208,   -28,
     -26,   -75,  1303,   817,  1390,  -172,  1176,  -177,  1078,   895,
     478,   748,  -209
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    47,     7,    14,    28,    15,    27,
     166,    18,    19,    48,   229,    50,    51,    52,    53,   127,
     147,    54,   162,   163,    55,    56,    57,    58,    59,    60,
      61,   120,    62,    63,    64,    94,    65,   101,    66,    67,
      68,    69,   113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    84,     8,    88,     6,   200,     8,    90,   121,   146,
     206,   257,   201,    -5,   202,   256,   203,    -5,   204,   298,
     205,   370,   -83,    -9,    88,   207,    -9,   208,   110,     1,
       9,   115,     2,   308,    49,    70,    92,    93,   209,    88,
      12,   210,   211,   212,   213,    -2,   289,   214,   215,     2,
     288,    10,    85,   198,    20,   199,    92,    93,   -47,    -4,
     216,   217,   -47,    -4,   -12,   340,   -63,   -63,    95,    96,
      97,    98,    99,   100,    21,   209,   218,   111,   210,   211,
     212,   213,   -47,    24,   214,   215,   -15,   -63,    17,    74,
      13,   364,   167,   168,   169,   170,    26,   216,   217,   209,
     368,   154,   210,   211,   212,   213,   158,   159,   214,   215,
      92,    93,    73,   218,   297,   -83,   164,   165,   383,   -83,
     209,   216,   217,   210,   211,   212,   213,   171,    79,   214,
     215,   -47,   381,    80,    81,   257,    -6,   218,   307,    82,
      -6,    -7,   216,   217,    -3,    -7,   230,    83,    -3,   231,
     232,   233,   234,    91,   269,   200,   338,   272,   218,   339,
     206,   388,   201,   -44,   202,    -8,   203,   289,   204,    -8,
     205,   -45,   -48,   117,   399,   207,   209,   208,   265,   210,
     211,   212,   213,    88,   235,   214,   215,   -18,   -15,   122,
     304,   -18,   333,   334,   -46,   124,   303,    22,   216,   217,
     140,    23,   -17,   198,   243,   199,   -17,   244,   245,   246,
     247,   141,   157,   -19,   218,   363,   330,   -19,   209,   142,
     377,   210,   211,   212,   213,   143,   209,   214,   215,   210,
     211,   212,   213,   -16,   -14,   214,   215,   -16,   -14,   -55,
     216,   217,   248,   172,   172,   172,   172,   275,   216,   217,
     276,   277,   278,   279,   184,   319,   218,   367,   320,   321,
     322,   323,   -56,   -91,   218,   380,   209,   -91,   144,   210,
     211,   212,   213,   -11,   138,   214,   215,   -11,   139,   -90,
     219,    16,   -83,   -90,    17,   280,   300,   184,   216,   217,
     184,   184,   -48,   324,   -57,   351,   -48,   145,   352,   353,
     354,   355,   172,   138,   218,   387,   -59,   362,   -58,   172,
     172,   172,   172,   172,   236,   236,   236,   239,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     200,   151,   396,   356,   138,   206,   138,   201,   366,   202,
     379,   203,   152,   204,   -83,   205,   219,   341,   -83,   153,
     207,   -51,   208,   405,   406,   -51,   -49,   155,   156,   160,
     -49,   200,   200,   411,   412,   161,   206,   206,   201,   201,
     202,   202,   203,   203,   204,   204,   205,   205,   198,   184,
     199,   207,   207,   208,   208,   240,   -48,   249,   249,   249,
     249,   184,   209,   266,   267,   210,   211,   212,   213,   -50,
     -87,   214,   215,   -50,   -87,   268,   270,   273,   -51,   198,
     198,   199,   199,   -86,   216,   217,   -57,   -86,   -49,   -50,
     -57,   -87,   281,   281,   281,   281,   184,   306,   -84,   -59,
     218,   398,   -84,   -59,   -86,   174,   219,   118,   175,   176,
     177,   178,   -58,   184,   179,   180,   -58,   184,   138,   138,
     219,   138,   385,   386,   -84,   397,   184,   181,   182,   138,
     311,   332,   335,   401,   249,   249,   249,   249,   249,   249,
     325,   325,   325,   183,   -89,   184,   184,   138,   -89,   -85,
     -88,   404,   219,   -85,   -88,   343,   365,   -46,   184,   -44,
     -45,   369,   -51,   -49,   -50,   -87,   281,   281,   281,   281,
     281,   281,   357,   357,   357,   -86,   -57,   -84,   219,   -59,
     -58,   372,   373,    75,    76,    77,    78,   219,   374,   375,
     -89,   376,   382,   -85,   191,    29,   389,   392,    31,    32,
      33,    34,   184,   393,    35,    36,   -63,   -63,    95,    96,
      97,    98,    99,   100,   394,   400,   -88,    37,    38,   219,
     226,   402,   -89,   -85,   403,   -88,    11,   191,   -63,    25,
     191,   191,   -63,    46,   184,   -32,   -32,   407,   -32,   -32,
     -32,   -32,   129,   126,   -32,   -32,   408,   378,   219,   129,
     129,   129,   133,   134,   135,   136,   137,   -32,   -32,   410,
       0,   219,   409,   -32,   -32,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -32,   -32,   -34,   -34,     0,   -34,   -34,   -34,
     -34,     0,   126,   -34,   -34,     0,   226,     0,   -63,   -63,
      95,    96,    97,    98,    99,   100,   -34,   -34,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,
     -34,   -34,   -34,     0,   -63,     0,     0,     0,     0,   191,
       0,     0,     0,     0,     0,     0,     0,   250,   252,   253,
     254,   191,   174,     0,     0,   175,   176,   177,   178,   258,
     259,   179,   180,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,     0,     0,   181,   182,     0,     0,     0,     0,
       0,     0,   282,   284,   285,   286,   191,     0,     0,   -67,
     183,     0,     0,     0,     0,   -64,   226,     0,   -64,   -64,
     -64,   -64,     0,   191,   -64,   -64,     0,   191,     0,     0,
     226,     0,     0,     0,     0,     0,   191,   -64,   -64,     0,
       0,     0,     0,     0,   313,   313,   313,   313,   317,   318,
     326,   328,   329,   -64,     0,   191,   191,     0,     0,     0,
       0,     0,   226,     0,     0,     0,     0,     0,   191,     0,
       0,     0,     0,     0,     0,     0,   345,   345,   345,   345,
     349,   350,   358,   360,   361,     0,     0,     0,   226,     0,
       0,     0,     0,   173,   173,   173,   173,   226,     0,     0,
       0,     0,     0,     0,   192,   -65,     0,     0,   -65,   -65,
     -65,   -65,   191,    74,   -65,   -65,   167,   168,   169,   170,
       0,     0,    35,    36,     0,     0,     0,   -65,   -65,   226,
     227,     0,     0,     0,     0,    37,    38,   192,     0,     0,
     192,   192,     0,   -65,   191,     0,     0,     0,     0,     0,
       0,   171,   173,     0,     0,     0,     0,     0,   226,   173,
     173,   173,   173,   173,   237,   237,   237,     0,     0,     0,
       0,   226,     0,   186,     0,   -62,   -62,    95,    96,    97,
      98,    99,   100,     0,     0,   -30,   -30,     0,   -30,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   227,   -62,     0,   221,
       0,   -62,     0,     0,     0,     0,   186,   -30,   -30,   186,
     186,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,   -30,   -30,   -30,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,     0,     0,     0,   251,   251,   251,
     251,   192,     0,     0,   -68,     0,     0,   -68,   -68,   -68,
     -68,   190,     0,   -68,   -68,   -62,   -62,    95,    96,    97,
      98,    99,   100,     0,     0,   221,   -68,   -68,     0,     0,
       0,     0,   283,   283,   283,   283,   192,   225,     0,     0,
       0,   -62,   -68,     0,   190,     0,   227,   190,   190,     0,
       0,     0,     0,   192,     0,     0,     0,   192,   186,     0,
     227,     0,     0,     0,     0,     0,   192,   131,   132,     0,
     186,     0,     0,     0,   251,   251,   251,   251,   251,   251,
     327,   327,   327,     0,     0,   192,   192,     0,     0,     0,
       0,     0,   227,     0,     0,     0,     0,     0,   192,     0,
       0,     0,     0,   225,     0,   186,   283,   283,   283,   283,
     283,   283,   359,   359,   359,   221,     0,     0,   227,     0,
       0,     0,   186,     0,     0,     0,   186,   227,   -69,   221,
       0,   -69,   -69,   -69,   -69,   186,   190,   -69,   -69,     0,
       0,     0,   192,   186,   186,   186,   186,     0,   190,     0,
     -69,   -69,     0,     0,   186,   186,     0,     0,     0,   227,
       0,   221,     0,     0,     0,     0,   -69,   186,     0,     0,
       0,     0,    86,     0,   192,   221,   221,   221,   221,     0,
       0,     0,     0,   190,     0,     0,     0,   221,   227,     0,
       0,     0,     0,   225,   189,     0,   221,     0,   112,     0,
     190,   227,     0,     0,   190,   114,   116,   225,   119,   119,
       0,   186,     0,   190,     0,     0,     0,     0,     0,     0,
     224,   190,   190,   315,   316,     0,     0,   189,   221,     0,
     189,   189,   190,   190,     0,     0,     0,     0,     0,   225,
       0,     0,     0,   186,     0,   190,     0,     0,     0,   130,
       0,     0,     0,   225,   225,   347,   348,   221,     0,     0,
       0,     0,     0,     0,   148,   225,     0,   149,   150,     0,
     221,     0,   -13,   -13,   225,   -13,   -13,   -13,   -13,     0,
       0,   -13,   -13,     0,     0,     0,   224,     0,     0,   190,
       0,     0,   188,     0,   -13,   -13,     0,   241,     0,     0,
     -13,   -13,   -13,   -13,   -13,   -13,   225,     0,   -13,   255,
     -13,     0,     0,     0,     0,     0,     0,     0,   223,   189,
       0,   190,     0,     0,     0,   188,     0,     0,   188,   188,
       0,   189,     0,   -70,     0,   225,   -70,   -70,   -70,   -70,
     128,     0,   -70,   -70,   287,     0,     0,     0,   225,     0,
       0,     0,     0,     0,   112,   -70,   -70,     0,     0,     0,
       0,   301,     0,     0,     0,   305,   189,     0,   112,     0,
       0,   -70,     0,     0,   310,     0,   224,     0,     0,     0,
       0,     0,     0,   189,   223,     0,     0,   189,     0,     0,
     224,   331,     0,   119,   119,     0,   189,     0,     0,     0,
     112,     0,     0,     0,   189,   314,   342,     0,     0,     0,
       0,     0,     0,     0,     0,   189,   189,   188,     0,   185,
       0,     0,   224,     0,     0,     0,   112,     0,   189,   188,
       0,     0,     0,     0,     0,   112,   224,   346,     0,     0,
       0,     0,     0,     0,     0,   220,     0,     0,   224,     0,
     371,     0,   185,     0,     0,   185,   185,   224,     0,     0,
       0,     0,     0,     0,   188,     0,     0,   112,     0,     0,
       0,     0,   189,     0,   223,     0,     0,     0,     0,     0,
       0,   188,   384,     0,     0,   188,     0,     0,   223,   224,
       0,     0,     0,     0,   188,     0,   112,     0,   390,   391,
       0,     0,   312,     0,   189,     0,   187,     0,     0,   112,
       0,   220,     0,   188,   188,     0,     0,     0,   224,     0,
     223,     0,     0,     0,     0,     0,   188,     0,     0,     0,
       0,   224,   222,     0,   344,     0,     0,     0,     0,   187,
       0,     0,   187,   187,   185,     0,   223,     0,     0,     0,
       0,     0,     0,     0,   -71,   223,   185,   -71,   -71,   -71,
     -71,     0,   -72,   -71,   -71,   -72,   -72,   -72,   -72,     0,
     188,   -72,   -72,     0,     0,     0,   -71,   -71,     0,     0,
       0,     0,     0,     0,   -72,   -72,     0,   223,     0,     0,
       0,   185,   -71,     0,     0,     0,     0,     0,   222,     0,
     -72,   220,   188,     0,     0,     0,     0,     0,   185,     0,
       0,     0,   185,     0,   -73,   220,   223,   -73,   -73,   -73,
     -73,   185,     0,   -73,   -73,     0,     0,     0,     0,   223,
       0,   187,     0,     0,     0,     0,   -73,   -73,     0,     0,
     185,   185,     0,   187,     0,   209,     0,   220,   210,   211,
     212,   213,   -73,   185,   214,   215,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   216,   217,     0,
       0,   238,     0,   220,    31,    32,    33,    34,   187,     0,
      35,    36,   220,   218,     0,     0,     0,     0,   222,     0,
       0,     0,     0,    37,    38,   187,     0,   185,     0,   187,
       0,     0,   222,     0,     0,     0,     0,     0,   187,    46,
       0,     0,     0,     0,   220,     0,   -24,   -24,     0,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   187,   187,   185,
       0,     0,     0,     0,   222,     0,     0,     0,   -24,   -24,
     187,     0,     0,   220,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,   -24,   -24,   -24,     0,   220,     0,   -23,   -23,
     222,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,   222,
       0,     0,   -62,   -62,    95,    96,    97,    98,    99,   100,
     -23,   -23,     0,     0,   187,     0,   -23,   -23,   -23,   -23,
     -23,   -23,     0,   -62,   -23,   -23,   -23,     0,     0,     0,
       0,   222,     0,   -25,   -25,     0,   -25,   -25,   -25,   -25,
       0,   -25,   -25,   -25,     0,     0,   187,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,   -25,     0,     0,     0,
     222,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,
     -25,   -25,     0,   222,   -26,   -26,     0,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -26,   -26,     0,     0,
       0,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,
     -26,   -26,   -26,   -27,   -27,     0,   -27,   -27,   -27,   -27,
       0,   -27,   -27,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,   -27,     0,     0,     0,
       0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,
     -27,   -27,   -28,   -28,     0,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -28,   -28,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,
     -28,   -29,   -29,     0,   -29,   -29,   -29,   -29,     0,   -29,
     -29,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -29,   -29,     0,     0,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,
      -8,    -8,     0,    -8,    -8,    -8,    -8,     0,    -8,    -8,
      -8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,    -8,    -8,    -8,   -32,
     -32,     0,   -32,   -32,   -32,   -32,     0,   337,   -32,   -32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -32,   -32,     0,     0,     0,     0,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -32,   -32,   -31,   -31,
       0,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -31,   -31,     0,     0,     0,     0,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,   -31,   -31,   -31,   -20,   -20,     0,
     -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -20,
     -20,     0,     0,     0,     0,   -20,   -20,   -20,   -20,   -20,
     -20,     0,     0,   -20,   -20,   -20,   -43,   -43,     0,   -43,
     -43,   -43,   -43,     0,   -43,   -43,   -43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -43,   -43,
       0,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,   -43,   -43,   -43,   -34,   -34,     0,   -34,   -34,
     -34,   -34,     0,   337,   -34,   -34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -34,   -34,     0,
       0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,
       0,   -34,   -34,   -34,   -33,   -33,     0,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -33,   -33,     0,     0,
       0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
     -33,   -33,   -33,   -35,   -35,     0,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -35,   -35,     0,     0,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
     -35,   -35,   -52,   -52,     0,   -52,   -52,   -52,   -52,     0,
     -52,   -52,   -52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -52,   -52,     0,     0,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,     0,     0,   -52,   -52,
     -52,   -53,   -53,     0,   -53,   -53,   -53,   -53,     0,   -53,
     -53,   -53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -53,   -53,     0,     0,     0,     0,   -53,
     -53,   -53,   -53,   -53,   -53,     0,     0,   -53,   -53,   -53,
     -54,   -54,     0,   -54,   -54,   -54,   -54,     0,   -54,   -54,
     -54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -54,   -54,     0,     0,     0,     0,   -54,   -54,
     -54,   -54,   -54,   -54,     0,     0,   -54,   -54,   -54,   -38,
     -38,     0,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -38,   -38,     0,     0,     0,     0,   -38,   -38,   -38,
     -38,   -38,   -38,     0,     0,   -38,   -38,   -38,   -40,   -40,
       0,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -40,   -40,     0,     0,     0,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,     0,   -40,   -40,   -40,   -42,   -42,     0,
     -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -42,
     -42,     0,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,
     -42,     0,     0,   -42,   -42,   -42,   -30,   -30,     0,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -30,   -30,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,   -30,   -30,   -30,   -24,   -24,     0,   -24,   -24,
     -24,   -24,     0,     0,   -24,   -24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -24,   -24,     0,
       0,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,
       0,   -24,   -24,   -24,    29,    30,     0,    31,    32,    33,
      34,     0,     0,    35,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,    38,     0,     0,
       0,     0,    39,    40,    41,    42,    43,    44,     0,     0,
      45,    87,    46,   -22,   -22,     0,   -22,   -22,   -22,   -22,
       0,     0,   -22,   -22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -22,   -22,     0,     0,     0,
       0,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,
     -22,   -22,   -23,   -23,     0,   -23,   -23,   -23,   -23,     0,
       0,   -23,   -23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -23,   -23,     0,     0,     0,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,   -23,
     -23,   -25,   -25,     0,   -25,   -25,   -25,   -25,     0,     0,
     -25,   -25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -25,   -25,     0,     0,     0,     0,   -25,
     -25,   -25,   -25,   -25,   -25,     0,     0,   -25,   -25,   -25,
     -26,   -26,     0,   -26,   -26,   -26,   -26,     0,     0,   -26,
     -26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -26,   -26,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,   -26,   -26,   -26,   -27,
     -27,     0,   -27,   -27,   -27,   -27,     0,     0,   -27,   -27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,   -27,     0,     0,     0,     0,   -27,   -27,   -27,
     -27,   -27,   -27,     0,     0,   -27,   -27,   -27,   -28,   -28,
       0,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,   -28,     0,     0,     0,     0,   -28,   -28,   -28,   -28,
     -28,   -28,     0,     0,   -28,   -28,   -28,   -29,   -29,     0,
     -29,   -29,   -29,   -29,     0,     0,   -29,   -29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -29,
     -29,     0,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,   -29,   -29,   -29,    29,    30,     0,    31,
      32,    33,    34,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    38,
       0,     0,     0,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,   109,    46,    29,    30,     0,    31,    32,
      33,    34,     0,     0,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    38,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,     0,
       0,    45,   123,    46,   -21,   -21,     0,   -21,   -21,   -21,
     -21,     0,     0,   -21,   -21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -21,   -21,     0,     0,
       0,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,   -21,   -21,    29,    30,     0,    31,    32,    33,    34,
       0,     0,    35,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    38,     0,     0,     0,
       0,    39,    40,    41,    42,    43,    44,     0,     0,    45,
     125,    46,   -31,   -31,     0,   -31,   -31,   -31,   -31,     0,
       0,   -31,   -31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -31,   -31,     0,     0,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,   -31,
     -31,   -43,   -43,     0,   -43,   -43,   -43,   -43,     0,     0,
     -43,   -43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -43,   -43,     0,     0,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,     0,     0,   -43,   -43,   -43,
     -20,   -20,     0,   -20,   -20,   -20,   -20,     0,     0,   -20,
     -20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -20,   -20,     0,     0,     0,     0,   -20,   -20,
     -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,   -33,
     -33,     0,   -33,   -33,   -33,   -33,     0,     0,   -33,   -33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -33,   -33,     0,     0,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,   -33,   -33,   -33,   -35,   -35,
       0,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -35,   -35,     0,     0,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,   -35,   -35,   -35,   -52,   -52,     0,
     -52,   -52,   -52,   -52,     0,     0,   -52,   -52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -52,
     -52,     0,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,
     -52,     0,     0,   -52,   -52,   -52,   -53,   -53,     0,   -53,
     -53,   -53,   -53,     0,     0,   -53,   -53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -53,   -53,
       0,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,
       0,     0,   -53,   -53,   -53,   -54,   -54,     0,   -54,   -54,
     -54,   -54,     0,     0,   -54,   -54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -54,   -54,     0,
       0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,     0,
       0,   -54,   -54,   -54,   -38,   -38,     0,   -38,   -38,   -38,
     -38,     0,     0,   -38,   -38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -38,   -38,     0,     0,
       0,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
     -38,   -38,   -38,   -40,   -40,     0,   -40,   -40,   -40,   -40,
       0,     0,   -40,   -40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -40,   -40,     0,     0,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,   -40,
     -40,   -40,   -42,   -42,     0,   -42,   -42,   -42,   -42,     0,
       0,   -42,   -42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -42,   -42,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,   -42,   -42,     0,     0,   -42,   -42,
     -42,    29,    30,     0,    31,    32,    33,    34,     0,     0,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,    38,     0,     0,     0,     0,    39,
      40,    41,    42,    43,    44,     0,     0,    45,   299,    46,
      -8,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,    -8,
      -8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,    -8,    -8,    -8,    29,
      30,     0,    31,    32,    33,    34,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,    38,     0,     0,     0,     0,    39,    40,    41,
      42,    43,    44,     0,     0,    45,   336,    46,   -10,   -10,
       0,   -10,   -10,   -10,   -10,   258,   259,   -10,   -10,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
     -10,   -10,     0,     0,     0,     0,   -10,   -10,   -10,   -10,
     -10,   -10,     0,     0,   -10,   -66,   -10,    29,    30,     0,
      31,    32,    33,    34,     0,     0,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      38,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,     0,     0,    45,     0,    46,    29,    30,     0,    31,
      32,    33,    34,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    38,
       0,     0,     0,     0,    39,   193,   194,   195,   196,   197,
       0,     0,    89,     0,    46,   -37,   -37,     0,   -37,   -37,
     -37,   -37,     0,     0,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,     0,
       0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,
       0,   -37,     0,   -37,   -36,   -36,     0,   -36,   -36,   -36,
     -36,     0,     0,   -36,   -36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -36,   -36,     0,     0,
       0,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
     -36,     0,   -36,   -39,   -39,     0,   -39,   -39,   -39,   -39,
       0,     0,   -39,   -39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -39,   -39,     0,     0,     0,
       0,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,   -39,
       0,   -39,   -41,   -41,     0,   -41,   -41,   -41,   -41,     0,
       0,   -41,   -41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -41,   -41,     0,     0,     0,     0,
     -41,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,     0,
     -41,    29,    30,     0,    31,    32,    33,    34,     0,     0,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,    38,     0,     0,     0,     0,    39,
     193,   194,   195,   196,   197,     0,     0,   271,     0,    46,
      29,    30,     0,    31,    32,    33,    34,     0,     0,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    38,     0,     0,     0,     0,    39,   193,
     194,   195,   196,   197,     0,     0,   395,   302,    46,     0,
     175,   176,   177,   178,     0,   243,   179,   180,   244,   245,
     246,   247,     0,     0,   179,   180,     0,     0,     0,   181,
     182,     0,     0,     0,     0,     0,     0,   181,   182,     0,
       0,     0,     0,     0,     0,   183,   275,     0,     0,   276,
     277,   278,   279,   248,     0,   214,   215,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   217,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,   280,     0,   -83,     0,   -83,     0,
       0,     0,     0,     0,     0,     0,   -83,     0,     0,   274,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,     0,   -83,   239,   -83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     242,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,   -83,     0,
     -83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,   -83,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,     0,     0,     0,   -51,
       0,   -51,     0,     0,     0,     0,     0,     0,     0,   -51,
       0,     0,     0,   -51,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,     0,     0,
     -49,     0,   -49,     0,     0,     0,     0,     0,     0,     0,
     -49,     0,     0,     0,   -49,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,
       0,   -50,     0,   -50,     0,     0,     0,     0,     0,     0,
       0,   -50,     0,     0,     0,   -50,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,   -87,     0,   -87,     0,     0,     0,     0,     0,
       0,     0,   -87,     0,     0,     0,   -87,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,   -86,     0,   -86,     0,     0,     0,     0,
       0,     0,     0,   -86,     0,     0,     0,   -86,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     294,     0,     0,     0,   295,     0,   296,     0,     0,     0,
       0,     0,     0,     0,   -79,     0,     0,     0,   -79,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,   -84,     0,   -84,     0,     0,
       0,     0,     0,     0,     0,   -84,     0,     0,     0,   -84,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,     0,   -89,     0,   -89,     0,
       0,     0,     0,     0,     0,     0,   -89,     0,     0,     0,
     -89,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,   -85,     0,   -85,
       0,     0,     0,     0,     0,     0,     0,   -85,     0,     0,
       0,   -85,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,   -88,     0,
     -88,     0,     0,     0,     0,     0,     0,     0,   -88,     0,
       0,     0,   -88,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,     0,     0,     0,   -51,
       0,   -51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -51,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,     0,     0,
     -49,     0,   -49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -49,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,
       0,   -50,     0,   -50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -50,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,   -87,     0,   -87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -87,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,   -86,     0,   -86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -86,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     262,     0,     0,     0,   263,     0,   264,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -79,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,   -84,     0,   -84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -84,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,     0,   -89,     0,   -89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -89,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,   -85,     0,   -85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,   -88,     0,
     -88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -88,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -76,   -76,   292,   293,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,   -82,
       0,     0,     0,   -82,     0,     0,     0,     0,     0,     0,
       0,   -76,     0,     0,     0,   -76,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
       0,     0,     0,     0,     0,   309,   -83,     0,     0,     0,
       0,     0,     0,     0,   -51,     0,     0,     0,   -51,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,     0,     0,   -49,     0,     0,     0,   -49,
       0,     0,     0,     0,     0,     0,     0,   -50,     0,     0,
       0,   -50,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,   -87,     0,
       0,     0,   -87,     0,     0,     0,     0,     0,     0,     0,
     -86,     0,     0,     0,   -86,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,   -80,     0,     0,     0,   -80,     0,     0,     0,     0,
       0,     0,     0,   -84,     0,     0,     0,   -84,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,   -81,     0,     0,     0,   -81,     0,
       0,     0,     0,     0,     0,     0,   -60,     0,     0,     0,
     -60,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   -61,     0,     0,
       0,   -61,     0,     0,     0,     0,     0,     0,     0,   -79,
       0,     0,     0,   -79,   -74,   -74,   292,   293,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -75,   -75,   292,   293,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
     -74,     0,     0,     0,   -74,     0,     0,     0,     0,     0,
       0,     0,   -75,     0,     0,     0,   -75,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,   -77,     0,     0,     0,   -77,     0,     0,
       0,     0,     0,     0,     0,   -78,     0,     0,     0,   -78,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,   -89,     0,     0,     0,
     -89,     0,     0,     0,     0,     0,     0,     0,   -85,     0,
       0,     0,   -85,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,   -88,
       0,     0,     0,   -88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,   -76,   -76,   260,   261,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
       0,     0,     0,     0,     0,     0,   -76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -51,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,     0,     0,     0,     0,     0,     0,   -49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -50,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
       0,     0,   -87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -86,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,     0,     0,   -81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -60,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,
       0,   -61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -79,   -74,   -74,   260,   261,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -75,   -75,   260,   261,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,   -74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -75,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,     0,     0,   -77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -78,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,     0,
     -89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -85,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   290,   291,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,   -88,     0,     0,     0,     0,     0,     0,
       0,   -67,   290,   291,     0,   -67,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -66,     0,
       0,     0,   -66,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,   -83,
      71,   -83,     0,     0,     0,     0,     0,     0,   -83,     0,
       0,     0,    72,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,   -83,
       0,   -83,     0,     0,     0,     0,     0,     0,   -83,     0,
       0,     0,    72,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -83,     0,
       0,   -51,   228,   -51,     0,     0,     0,     0,     0,     0,
     -51,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,     0,     0,     0,   -49,     0,   -49,
       0,     0,     0,     0,     0,     0,   -49,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
       0,     0,     0,   -50,     0,   -50,     0,     0,     0,     0,
       0,     0,   -50,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,   -87,
       0,   -87,     0,     0,     0,     0,     0,     0,   -87,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,   -86,     0,   -86,     0,     0,
       0,     0,     0,     0,   -86,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   106,     0,     0,
       0,   107,     0,   108,     0,     0,     0,     0,     0,     0,
     -79,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,   -84,     0,   -84,
       0,     0,     0,     0,     0,     0,   -84,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,   -89,     0,   -89,     0,     0,     0,     0,
       0,     0,   -89,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,   -85,
       0,   -85,     0,     0,     0,     0,     0,     0,   -85,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,     0,   -88,     0,   -88,     0,     0,
       0,     0,     0,     0,   -88,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -76,   -76,   104,
     105,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -76,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,     0,   -60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -61,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -74,   -74,   104,   105,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,   -79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -74,   -75,   -75,   104,
     105,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,   -75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -77,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,
     -78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -51,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -50,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -86,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,   -84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -89,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,   -85,     0,     0,     0,     0,     0,     0,     0,
       0,   102,   103,     0,   -88,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   102,   103,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,     0,   -67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -66
};

static const yytype_int16 yycheck[] =
{
       0,    44,     0,    49,     4,    53,     4,    53,    83,   125,
      53,   188,    53,     0,    53,   187,    53,     4,    53,   228,
      53,    41,    42,     1,    70,    53,     4,    53,    71,     1,
       3,    80,     4,   242,    27,    28,    16,    17,     3,    85,
      37,     6,     7,     8,     9,     0,   223,    12,    13,     4,
     222,     0,    45,    53,    42,    53,    16,    17,    38,     0,
      25,    26,    42,     4,    42,   274,    16,    17,    18,    19,
      20,    21,    22,    23,     3,     3,    41,    42,     6,     7,
       8,     9,    42,    39,    12,    13,    37,    37,     4,     3,
      41,   300,     6,     7,     8,     9,    39,    25,    26,     3,
     309,   147,     6,     7,     8,     9,   155,   156,    12,    13,
      16,    17,     3,    41,    42,    38,   162,   163,    41,    42,
       3,    25,    26,     6,     7,     8,     9,    41,    41,    12,
      13,    37,   341,    41,    41,   312,     0,    41,    42,    41,
       4,     0,    25,    26,     0,     4,     3,    41,     4,     6,
       7,     8,     9,    37,   197,   203,   272,   203,    41,    42,
     203,   370,   203,    37,   203,     0,   203,   344,   203,     4,
     203,    37,    37,     3,   383,   203,     3,   203,    41,     6,
       7,     8,     9,   229,    41,    12,    13,    38,    37,    37,
     239,    42,   267,   268,    37,    42,   239,    38,    25,    26,
      42,    42,    38,   203,     3,   203,    42,     6,     7,     8,
       9,    37,     3,    38,    41,    42,   265,    42,     3,    37,
     336,     6,     7,     8,     9,    42,     3,    12,    13,     6,
       7,     8,     9,    38,     0,    12,    13,    42,     4,    42,
      25,    26,    41,    35,    36,    37,    38,     3,    25,    26,
       6,     7,     8,     9,    46,     3,    41,    42,     6,     7,
       8,     9,    42,    38,    41,    42,     3,    42,    42,     6,
       7,     8,     9,     0,    38,    12,    13,     4,    42,    38,
      72,     1,    37,    42,     4,    41,    41,    79,    25,    26,
      82,    83,    38,    41,    37,     3,    42,    42,     6,     7,
       8,     9,    94,    38,    41,    42,    37,    42,    37,   101,
     102,   103,   104,   105,   106,   107,   108,    29,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     378,    37,   378,    41,    38,   378,    38,   378,    42,   378,
      42,   378,    37,   378,    38,   378,   138,    41,    42,    37,
     378,    38,   378,   402,   403,    42,    38,    37,    37,    42,
      42,   409,   410,   409,   410,    42,   409,   410,   409,   410,
     409,   410,   409,   410,   409,   410,   409,   410,   378,   171,
     378,   409,   410,   409,   410,    37,    42,   179,   180,   181,
     182,   183,     3,    41,    41,     6,     7,     8,     9,    38,
      38,    12,    13,    42,    42,    41,    37,    37,    37,   409,
     410,   409,   410,    38,    25,    26,    38,    42,    37,    37,
      42,    37,   214,   215,   216,   217,   218,    42,    38,    38,
      41,    42,    42,    42,    37,     3,   228,     5,     6,     7,
       8,     9,    38,   235,    12,    13,    42,   239,    38,    38,
     242,    38,    42,    42,    37,    42,   248,    25,    26,    38,
      42,     3,    37,    42,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    41,    38,   267,   268,    38,    42,    38,
      38,    42,   274,    42,    42,    42,    42,    42,   280,    42,
      42,    42,    42,    42,    42,    42,   288,   289,   290,   291,
     292,   293,   294,   295,   296,    42,    42,    42,   300,    42,
      42,    37,    37,    35,    36,    37,    38,   309,    42,    42,
      37,    42,    42,    37,    46,     3,    42,    37,     6,     7,
       8,     9,   324,    37,    12,    13,    16,    17,    18,    19,
      20,    21,    22,    23,    37,    42,    37,    25,    26,   341,
      72,    37,    42,    42,    37,    42,     4,    79,    38,    22,
      82,    83,    42,    41,   356,     3,     4,    42,     6,     7,
       8,     9,    94,    11,    12,    13,    42,   337,   370,   101,
     102,   103,   104,   105,   106,   107,   108,    25,    26,   408,
      -1,   383,   407,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,     6,     7,     8,
       9,    -1,    11,    12,    13,    -1,   138,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,    -1,    42,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,   181,
     182,   183,     3,    -1,    -1,     6,     7,     8,     9,    12,
      13,    12,    13,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,   214,   215,   216,   217,   218,    -1,    -1,    42,
      41,    -1,    -1,    -1,    -1,     3,   228,    -1,     6,     7,
       8,     9,    -1,   235,    12,    13,    -1,   239,    -1,    -1,
     242,    -1,    -1,    -1,    -1,    -1,   248,    25,    26,    -1,
      -1,    -1,    -1,    -1,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    41,    -1,   267,   268,    -1,    -1,    -1,
      -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,   280,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   288,   289,   290,   291,
     292,   293,   294,   295,   296,    -1,    -1,    -1,   300,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,   309,    -1,    -1,
      -1,    -1,    -1,    -1,    46,     3,    -1,    -1,     6,     7,
       8,     9,   324,     3,    12,    13,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    -1,    -1,    25,    26,   341,
      72,    -1,    -1,    -1,    -1,    25,    26,    79,    -1,    -1,
      82,    83,    -1,    41,   356,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    94,    -1,    -1,    -1,    -1,    -1,   370,   101,
     102,   103,   104,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,   383,    -1,    46,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    -1,    11,    12,    13,   138,    38,    -1,    72,
      -1,    42,    -1,    -1,    -1,    -1,    79,    25,    26,    82,
      83,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,   181,
     182,   183,    -1,    -1,     3,    -1,    -1,     6,     7,     8,
       9,    46,    -1,    12,    13,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,   138,    25,    26,    -1,    -1,
      -1,    -1,   214,   215,   216,   217,   218,    72,    -1,    -1,
      -1,    42,    41,    -1,    79,    -1,   228,    82,    83,    -1,
      -1,    -1,    -1,   235,    -1,    -1,    -1,   239,   171,    -1,
     242,    -1,    -1,    -1,    -1,    -1,   248,   102,   103,    -1,
     183,    -1,    -1,    -1,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,    -1,   267,   268,    -1,    -1,    -1,
      -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,   280,    -1,
      -1,    -1,    -1,   138,    -1,   218,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   228,    -1,    -1,   300,    -1,
      -1,    -1,   235,    -1,    -1,    -1,   239,   309,     3,   242,
      -1,     6,     7,     8,     9,   248,   171,    12,    13,    -1,
      -1,    -1,   324,   256,   257,   258,   259,    -1,   183,    -1,
      25,    26,    -1,    -1,   267,   268,    -1,    -1,    -1,   341,
      -1,   274,    -1,    -1,    -1,    -1,    41,   280,    -1,    -1,
      -1,    -1,    46,    -1,   356,   288,   289,   290,   291,    -1,
      -1,    -1,    -1,   218,    -1,    -1,    -1,   300,   370,    -1,
      -1,    -1,    -1,   228,    46,    -1,   309,    -1,    72,    -1,
     235,   383,    -1,    -1,   239,    79,    80,   242,    82,    83,
      -1,   324,    -1,   248,    -1,    -1,    -1,    -1,    -1,    -1,
      72,   256,   257,   258,   259,    -1,    -1,    79,   341,    -1,
      82,    83,   267,   268,    -1,    -1,    -1,    -1,    -1,   274,
      -1,    -1,    -1,   356,    -1,   280,    -1,    -1,    -1,   101,
      -1,    -1,    -1,   288,   289,   290,   291,   370,    -1,    -1,
      -1,    -1,    -1,    -1,   138,   300,    -1,   141,   142,    -1,
     383,    -1,     3,     4,   309,     6,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    -1,    -1,   138,    -1,    -1,   324,
      -1,    -1,    46,    -1,    25,    26,    -1,   171,    -1,    -1,
      31,    32,    33,    34,    35,    36,   341,    -1,    39,   183,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,   171,
      -1,   356,    -1,    -1,    -1,    79,    -1,    -1,    82,    83,
      -1,   183,    -1,     3,    -1,   370,     6,     7,     8,     9,
      94,    -1,    12,    13,   218,    -1,    -1,    -1,   383,    -1,
      -1,    -1,    -1,    -1,   228,    25,    26,    -1,    -1,    -1,
      -1,   235,    -1,    -1,    -1,   239,   218,    -1,   242,    -1,
      -1,    41,    -1,    -1,   248,    -1,   228,    -1,    -1,    -1,
      -1,    -1,    -1,   235,   138,    -1,    -1,   239,    -1,    -1,
     242,   265,    -1,   267,   268,    -1,   248,    -1,    -1,    -1,
     274,    -1,    -1,    -1,   256,   257,   280,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   267,   268,   171,    -1,    46,
      -1,    -1,   274,    -1,    -1,    -1,   300,    -1,   280,   183,
      -1,    -1,    -1,    -1,    -1,   309,   288,   289,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,   300,    -1,
     324,    -1,    79,    -1,    -1,    82,    83,   309,    -1,    -1,
      -1,    -1,    -1,    -1,   218,    -1,    -1,   341,    -1,    -1,
      -1,    -1,   324,    -1,   228,    -1,    -1,    -1,    -1,    -1,
      -1,   235,   356,    -1,    -1,   239,    -1,    -1,   242,   341,
      -1,    -1,    -1,    -1,   248,    -1,   370,    -1,   372,   373,
      -1,    -1,   256,    -1,   356,    -1,    46,    -1,    -1,   383,
      -1,   138,    -1,   267,   268,    -1,    -1,    -1,   370,    -1,
     274,    -1,    -1,    -1,    -1,    -1,   280,    -1,    -1,    -1,
      -1,   383,    72,    -1,   288,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    83,   171,    -1,   300,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,   309,   183,     6,     7,     8,
       9,    -1,     3,    12,    13,     6,     7,     8,     9,    -1,
     324,    12,    13,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,   341,    -1,    -1,
      -1,   218,    41,    -1,    -1,    -1,    -1,    -1,   138,    -1,
      41,   228,   356,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,    -1,   239,    -1,     3,   242,   370,     6,     7,     8,
       9,   248,    -1,    12,    13,    -1,    -1,    -1,    -1,   383,
      -1,   171,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
     267,   268,    -1,   183,    -1,     3,    -1,   274,     6,     7,
       8,     9,    41,   280,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,     3,    -1,   300,     6,     7,     8,     9,   218,    -1,
      12,    13,   309,    41,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,    -1,    25,    26,   235,    -1,   324,    -1,   239,
      -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,   248,    41,
      -1,    -1,    -1,    -1,   341,    -1,     3,     4,    -1,     6,
       7,     8,     9,    -1,    11,    12,    13,   267,   268,   356,
      -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    25,    26,
     280,    -1,    -1,   370,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    -1,   383,    -1,     3,     4,
     300,     6,     7,     8,     9,    -1,    11,    12,    13,   309,
      -1,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      25,    26,    -1,    -1,   324,    -1,    31,    32,    33,    34,
      35,    36,    -1,    37,    39,    40,    41,    -1,    -1,    -1,
      -1,   341,    -1,     3,     4,    -1,     6,     7,     8,     9,
      -1,    11,    12,    13,    -1,    -1,   356,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
     370,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    -1,   383,     3,     4,    -1,     6,     7,     8,
       9,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,     6,     7,     8,     9,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,     6,     7,     8,     9,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
       6,     7,     8,     9,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,     6,
       7,     8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,     6,     7,     8,
       9,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,     6,     7,     8,     9,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,     6,     7,     8,     9,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
       6,     7,     8,     9,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,     6,
       7,     8,     9,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,     6,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,     6,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    -1,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,     6,
       7,     8,     9,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,     6,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,     6,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    -1,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,     6,
       7,     8,     9,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,     6,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,     6,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    -1,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    12,    13,    12,    13,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    42,    41,     3,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    41,     3,     4,    -1,     6,
       7,     8,     9,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    41,     3,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    41,     3,     4,    -1,     6,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    41,     3,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    41,     3,     4,    -1,     6,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      41,     3,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    41,
       3,     4,    -1,     6,     7,     8,     9,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,     3,    41,    -1,
       6,     7,     8,     9,    -1,     3,    12,    13,     6,     7,
       8,     9,    -1,    -1,    12,    13,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    41,     3,    -1,    -1,     6,
       7,     8,     9,    41,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    41,    -1,    28,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      42,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    28,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    28,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    28,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    28,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    28,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    38,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    38,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    38,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    38,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    38,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    38,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    12,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    12,    13,    -1,    42,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    41,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    41,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    37,    -1,
      -1,    28,    41,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    28,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    28,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    13,    -1,    37,    16,    17,    18,    19,    20,
      21,    22,    23,    12,    13,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,    44,    45,    46,    47,    48,    53,     3,
       0,    46,    37,    41,    49,    51,     1,     4,    54,    55,
      42,     3,    38,    42,    39,    55,    39,    52,    50,     3,
       4,     6,     7,     8,     9,    12,    13,    25,    26,    31,
      32,    33,    34,    35,    36,    39,    41,    47,    56,    57,
      58,    59,    60,    61,    64,    67,    68,    69,    70,    71,
      72,    73,    75,    76,    77,    79,    81,    82,    83,    84,
      57,    29,    41,     3,     3,    83,    83,    83,    83,    41,
      41,    41,    41,    41,    68,    57,    70,    40,    58,    39,
      58,    37,    16,    17,    78,    18,    19,    20,    21,    22,
      23,    80,    12,    13,    14,    15,    24,    28,    30,    40,
      68,    42,    70,    85,    70,    69,    70,     3,     5,    70,
      74,    74,    37,    40,    42,    40,    11,    62,    79,    83,
      81,    82,    82,    83,    83,    83,    83,    83,    38,    42,
      42,    37,    37,    42,    42,    42,    62,    63,    70,    70,
      70,    37,    37,    37,    58,    37,    37,     3,    69,    69,
      42,    42,    65,    66,    58,    58,    53,     6,     7,     8,
       9,    41,    71,    84,     3,     6,     7,     8,     9,    12,
      13,    25,    26,    41,    71,    75,    76,    77,    79,    81,
      82,    83,    84,    32,    33,    34,    35,    36,    47,    53,
      56,    59,    60,    61,    64,    67,    68,    72,    73,     3,
       6,     7,     8,     9,    12,    13,    25,    26,    41,    71,
      75,    76,    77,    79,    81,    82,    83,    84,    41,    57,
       3,     6,     7,     8,     9,    41,    71,    84,     3,    29,
      37,    70,    41,     3,     6,     7,     8,     9,    41,    71,
      83,    84,    83,    83,    83,    70,    78,    80,    12,    13,
      14,    15,    24,    28,    30,    41,    41,    41,    41,    68,
      37,    39,    58,    37,    41,     3,     6,     7,     8,     9,
      41,    71,    83,    84,    83,    83,    83,    70,    78,    80,
      12,    13,    14,    15,    24,    28,    30,    42,    85,    40,
      41,    70,     3,    68,    69,    70,    42,    42,    85,    41,
      70,    42,    79,    83,    81,    82,    82,    83,    83,     3,
       6,     7,     8,     9,    41,    71,    83,    84,    83,    83,
      69,    70,     3,    74,    74,    37,    40,    11,    62,    42,
      85,    41,    70,    42,    79,    83,    81,    82,    82,    83,
      83,     3,     6,     7,     8,     9,    41,    71,    83,    84,
      83,    83,    42,    42,    85,    42,    42,    42,    85,    42,
      41,    70,    37,    37,    42,    42,    42,    62,    63,    42,
      42,    85,    42,    41,    70,    42,    42,    42,    85,    42,
      70,    70,    37,    37,    37,    39,    58,    42,    42,    85,
      42,    42,    37,    37,    42,    69,    69,    42,    42,    65,
      66,    58,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    46,    47,    49,
      50,    48,    51,    52,    48,    53,    54,    54,    54,    55,
      56,    57,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    60,    60,    60,    60,    61,    63,    62,    65,
      64,    66,    64,    67,    68,    68,    69,    70,    70,    71,
      71,    71,    72,    73,    73,    74,    74,    75,    75,    75,
      76,    76,    77,    77,    78,    78,    79,    79,    80,    80,
      80,    80,    80,    80,    81,    81,    81,    82,    82,    82,
      82,    82,    82,    83,    83,    83,    83,    83,    84,    84,
      85,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     0,
       0,    10,     0,     0,     9,     2,     3,     1,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     4,     4,     0,     3,     0,
      10,     0,    10,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     5,     5,     5,     1,     1,     3,     3,     3,
       2,     2,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     1,
       2,     2,     1,     1,     1,     3,     1,     1,     4,     3,
       3,     1
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
#line 535 "guillex.y"
                        {
        abstractSyntaxTree = (yyval.treeNode);
    }
#line 3441 "guillex.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 541 "guillex.y"
                                    {
       (yyval.treeNode) = createNode2("declarationsList declaration", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
     }
#line 3449 "guillex.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 544 "guillex.y"
                      {
    (yyval.treeNode) = createNode1("declaration", (yyvsp[0].treeNode));
  }
#line 3457 "guillex.tab.c"
    break;

  case 5: /* declarationList: error  */
#line 547 "guillex.y"
          {
    (yyval.treeNode) = createNodeE();
    errors++;
    yyerror(yymsg);
  }
#line 3467 "guillex.tab.c"
    break;

  case 6: /* declaration: varDeclaration  */
#line 555 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
    }
#line 3475 "guillex.tab.c"
    break;

  case 7: /* declaration: funcDeclaration  */
#line 558 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("funcDeclaration", (yyvsp[0].treeNode));
    }
#line 3483 "guillex.tab.c"
    break;

  case 8: /* varDeclaration: simpleVarDeclaration SEMIC  */
#line 564 "guillex.y"
                               {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[-1].treeNode));}
#line 3490 "guillex.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 569 "guillex.y"
                   {scope++; pushStack(scope);}
#line 3496 "guillex.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 569 "guillex.y"
                                                                     {
      UT_string *r;
      utstring_new(r);
      errors += addSymbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stackScope) -> value, parameters, 0);
      addFunc((yyvsp[-5].str));
      parameters = 0;
      }
#line 3508 "guillex.tab.c"
    break;

  case 11: /* funcDeclaration: TYPE ID PARENL $@1 params PARENR STFUNC $@2 stmtList ENDFUNC  */
#line 575 "guillex.y"
                         {
      (yyval.treeNode) = createNode4("TYPE ID PARENL params PARENR STFUNC stmtList ENDFUNC", createNode0((yyvsp[-9].str)), createNode0((yyvsp[-8].str)), (yyvsp[-5].treeNode), (yyvsp[-1].treeNode));
      popStack();
  }
#line 3517 "guillex.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 579 "guillex.y"
                   {pushStack(scope);}
#line 3523 "guillex.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 579 "guillex.y"
                                                     {
    UT_string *r;
    utstring_new(r);
    errors += addSymbol((yyvsp[-4].str), "func", (yyvsp[-5].str), STACK_TOP(stackScope) -> value, parameters, 0);
    parameters = 0;
    addFunc((yyvsp[-4].str));
    }
#line 3535 "guillex.tab.c"
    break;

  case 14: /* funcDeclaration: TYPE ID PARENL $@3 PARENR STFUNC $@4 stmtList ENDFUNC  */
#line 585 "guillex.y"
                       {
    
      (yyval.treeNode) = createNode3("TYPE ID PARENL PARENR compoundStmt", createNode0((yyvsp[-8].str)), createNode0((yyvsp[-7].str)), (yyvsp[-1].treeNode)); 
      popStack();                                                                      
  }
#line 3545 "guillex.tab.c"
    break;

  case 15: /* simpleVarDeclaration: TYPE ID  */
#line 592 "guillex.y"
            {

      pushStack(scope);
      semanticErrors += addSymbol((yyvsp[0].str), "var", (yyvsp[-1].str), STACK_TOP(stackScope) -> value, 0, create_new_reg(varReg));
       UT_string *s;
      if((yyvsp[-1].str)[0] == 'i' || (yyvsp[-1].str)[0] == 'e') {
        utstring_new(s);
        utstring_printf(s, "$%d", varReg);

        varDecAssign(utstring_body(s), "0");
      } else if((yyvsp[-1].str)[0] == 'f') {
        utstring_new(s);
        utstring_printf(s, "$%d", varReg);

        varDecAssign(utstring_body(s), "0.0");
      } else if((yyvsp[-1].str)[0] == 's') {
        utstring_new(s);
        utstring_printf(s, "$%d", varReg);

        varDecAssign(utstring_body(s), "0");
      }
      varReg++;
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      popStack();
      }
#line 3575 "guillex.tab.c"
    break;

  case 16: /* params: params COMMA param  */
#line 621 "guillex.y"
                       {
      (yyval.treeNode) = createNode2("params COMMA param", (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
      }
#line 3583 "guillex.tab.c"
    break;

  case 17: /* params: param  */
#line 624 "guillex.y"
          { 
    (yyval.treeNode) = createNode1("param", (yyvsp[0].treeNode)); 
    }
#line 3591 "guillex.tab.c"
    break;

  case 18: /* params: error  */
#line 627 "guillex.y"
          {
      (yyval.treeNode) = createNodeE();
      errors++;
      yyerror(yymsg);
    }
#line 3601 "guillex.tab.c"
    break;

  case 19: /* param: TYPE ID  */
#line 635 "guillex.y"
            {
      parameters++;
      pushStack(scope);
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      semanticErrors += addSymbol((yyvsp[0].str), "param", (yyvsp[-1].str), STACK_TOP(stackScope) -> value, 0, create_new_reg(varReg));
      varReg++;
      popStack();
      }
#line 3614 "guillex.tab.c"
    break;

  case 20: /* compoundStmt: STFUNC stmtList ENDFUNC  */
#line 646 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[-1].treeNode));
    }
#line 3622 "guillex.tab.c"
    break;

  case 21: /* stmtList: stmtList primitiveStmt  */
#line 652 "guillex.y"
                              {
      (yyval.treeNode) = createNode2("stmtList primitiveStmt", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3630 "guillex.tab.c"
    break;

  case 22: /* stmtList: primitiveStmt  */
#line 655 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("primitiveStmt", (yyvsp[0].treeNode));
  }
#line 3638 "guillex.tab.c"
    break;

  case 23: /* primitiveStmt: exprStmt  */
#line 661 "guillex.y"
             {
      (yyval.treeNode) = createNode1("exprStmt", (yyvsp[0].treeNode));
    }
#line 3646 "guillex.tab.c"
    break;

  case 24: /* primitiveStmt: compoundStmt  */
#line 664 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[0].treeNode));
  }
#line 3654 "guillex.tab.c"
    break;

  case 25: /* primitiveStmt: condStmt  */
#line 667 "guillex.y"
             {
    (yyval.treeNode) = createNode1("condStmt", (yyvsp[0].treeNode));
  }
#line 3662 "guillex.tab.c"
    break;

  case 26: /* primitiveStmt: iterStmt  */
#line 670 "guillex.y"
             {
    (yyval.treeNode) = createNode1("iterStmt", (yyvsp[0].treeNode));
  }
#line 3670 "guillex.tab.c"
    break;

  case 27: /* primitiveStmt: returnStmt  */
#line 673 "guillex.y"
               {
    (yyval.treeNode) = createNode1("returnStmt", (yyvsp[0].treeNode));
  }
#line 3678 "guillex.tab.c"
    break;

  case 28: /* primitiveStmt: inOp  */
#line 676 "guillex.y"
         {
    (yyval.treeNode) = createNode1("inOp", (yyvsp[0].treeNode));
  }
#line 3686 "guillex.tab.c"
    break;

  case 29: /* primitiveStmt: outOp  */
#line 679 "guillex.y"
          {
    (yyval.treeNode) = createNode1("outOp", (yyvsp[0].treeNode));
  }
#line 3694 "guillex.tab.c"
    break;

  case 30: /* primitiveStmt: varDeclaration  */
#line 682 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
  }
#line 3702 "guillex.tab.c"
    break;

  case 31: /* exprStmt: expression SEMIC  */
#line 688 "guillex.y"
                     {
      (yyval.treeNode) = createNode1("expression SEMIC", (yyvsp[-1].treeNode));
    }
#line 3710 "guillex.tab.c"
    break;

  case 32: /* condStmt: ifStmt primitiveStmt  */
#line 694 "guillex.y"
                                    {
      (yyval.treeNode) = createNode2("ifStmt primitiveStmt", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
      popStack();
      scope--;
      pushStack(scope);
      popStack();
    }
#line 3722 "guillex.tab.c"
    break;

  case 33: /* condStmt: ifStmt primitiveStmt elseStmt  */
#line 701 "guillex.y"
                                   {
    (yyval.treeNode) = createNode3("ifStmt primitiveStmt elseStmt", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
  }
#line 3730 "guillex.tab.c"
    break;

  case 34: /* condStmt: ifStmt STFUNC ENDFUNC  */
#line 704 "guillex.y"
                                    {
    (yyval.treeNode) = createNode1("ifStmt", (yyvsp[-2].treeNode));
    popStack();
    scope--;
    pushStack(scope);
    popStack();
  }
#line 3742 "guillex.tab.c"
    break;

  case 35: /* condStmt: ifStmt STFUNC ENDFUNC elseStmt  */
#line 711 "guillex.y"
                                    {
    (yyval.treeNode) = createNode2("ifStmt primitiveStmt elseStmt", (yyvsp[-3].treeNode), (yyvsp[0].treeNode));
  }
#line 3750 "guillex.tab.c"
    break;

  case 36: /* ifStmt: IF PARENL simpleExp PARENR  */
#line 718 "guillex.y"
                              {
      scope++;
      pushStack(scope);
      (yyval.treeNode) = createNode2("IF PARENL simpleExp PARENR", createNode0((yyvsp[-3].str)), (yyvsp[-1].treeNode));
    }
#line 3760 "guillex.tab.c"
    break;

  case 37: /* $@5: %empty  */
#line 726 "guillex.y"
      {
    popStack();
    scope--;
    pushStack(scope);
    popStack();
    scope++;
    pushStack(scope);
  }
#line 3773 "guillex.tab.c"
    break;

  case 38: /* elseStmt: ELSE $@5 primitiveStmt  */
#line 733 "guillex.y"
                  {
    popStack();
    scope--;
    pushStack(scope);
    popStack();
    (yyval.treeNode) = createNode2("ELSE primitiveStmt", createNode0((yyvsp[-2].str)), (yyvsp[0].treeNode));
  }
#line 3785 "guillex.tab.c"
    break;

  case 39: /* $@6: %empty  */
#line 742 "guillex.y"
                                                                {      
      scope++;
      pushStack(scope);
      }
#line 3794 "guillex.tab.c"
    break;

  case 40: /* iterStmt: FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR $@6 primitiveStmt  */
#line 745 "guillex.y"
                      {

      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-9].str)), (yyvsp[-7].treeNode), (yyvsp[-5].treeNode), (yyvsp[-3].treeNode), (yyvsp[0].treeNode));
      popStack();
      scope--;
      pushStack(scope);
      popStack();
    }
#line 3807 "guillex.tab.c"
    break;

  case 41: /* $@7: %empty  */
#line 753 "guillex.y"
                                                                {
      scope++;
      pushStack(scope);
      }
#line 3816 "guillex.tab.c"
    break;

  case 42: /* iterStmt: FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR $@7 primitiveStmt  */
#line 756 "guillex.y"
                      {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-9].str)), (yyvsp[-7].treeNode), (yyvsp[-5].treeNode), (yyvsp[-3].treeNode), (yyvsp[0].treeNode));
      popStack();
      scope--;
      pushStack(scope);
      popStack();
  }
#line 3828 "guillex.tab.c"
    break;

  case 43: /* returnStmt: RETURN expression SEMIC  */
#line 766 "guillex.y"
                            {
      (yyval.treeNode) = createNode2("RETURN expression SEMIC", createNode0((yyvsp[-2].str)), (yyvsp[-1].treeNode));
    }
#line 3836 "guillex.tab.c"
    break;

  case 44: /* expression: assignExp  */
#line 773 "guillex.y"
              {
      (yyval.treeNode) = createNode1("assignExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
    }
#line 3845 "guillex.tab.c"
    break;

  case 45: /* expression: simpleExp  */
#line 777 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 3854 "guillex.tab.c"
    break;

  case 46: /* assignExp: ID ASSIGN expression  */
#line 784 "guillex.y"
                         {
      if (checkIsInScope((yyvsp[-2].str))){
        (yyval.treeNode) = createNode3("ID ASSIGN expression", createNode0((yyvsp[-2].str)), createNode0("="), (yyvsp[0].treeNode));
        UT_string *s = create_new_reg(varReg);
        varDecAssign(utstring_body(s), (yyvsp[0].treeNode) -> saved);
        (yyval.treeNode) -> saved = (yyvsp[-2].str);
    }
      else{
        printf("Semantic error");
        printf("Var: <%s> Not Declared, line %d, column %d\n\n", (yyvsp[-2].str), line, wordPosition);
        semanticErrors++;
        (yyval.treeNode) = createNodeE();
      }
    }
#line 3873 "guillex.tab.c"
    break;

  case 47: /* simpleExp: binLogicalExp  */
#line 802 "guillex.y"
                  {
      (yyval.treeNode) = createNode1("binLogicalExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
    }
#line 3882 "guillex.tab.c"
    break;

  case 48: /* simpleExp: binListExp  */
#line 807 "guillex.y"
              {
      (yyval.treeNode) = createNode1("binListExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
    }
#line 3891 "guillex.tab.c"
    break;

  case 49: /* constOp: INTEGER  */
#line 814 "guillex.y"
            {
      (yyval.treeNode) = createNode0Int((yyvsp[0].integer));
      UT_string *s = int_as_str((yyvsp[0].integer));
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 3901 "guillex.tab.c"
    break;

  case 50: /* constOp: DECIMAL  */
#line 819 "guillex.y"
            {
    (yyval.treeNode) = createNode0Dec((yyvsp[0].dec));
    UT_string *s = float_as_str((yyvsp[0].dec));
    (yyval.treeNode) -> saved = utstring_body(s);
  }
#line 3911 "guillex.tab.c"
    break;

  case 51: /* constOp: NIL  */
#line 824 "guillex.y"
        {
    (yyval.treeNode) = createNode0Nil((yyvsp[0].str));
  }
#line 3919 "guillex.tab.c"
    break;

  case 52: /* inOp: READ PARENL ID PARENR SEMIC  */
#line 830 "guillex.y"
                             {
    (yyval.treeNode) = createNode2("READ PARENL ID PARENR SEMIC", createNode0((yyvsp[-4].str)), createNode0((yyvsp[-2].str)));
  }
#line 3927 "guillex.tab.c"
    break;

  case 53: /* outOp: WRITE PARENL outConst PARENR SEMIC  */
#line 836 "guillex.y"
                                      {
      (yyval.treeNode) = createNode2("WRITE PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
      writeFunc((yyvsp[-2].treeNode) -> saved);
      (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
    }
#line 3937 "guillex.tab.c"
    break;

  case 54: /* outOp: WRITELN PARENL outConst PARENR SEMIC  */
#line 841 "guillex.y"
                                         {
      (yyval.treeNode) = createNode2("WRITELN PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
      writelnFunc((yyvsp[-2].treeNode) -> saved);
      (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
  }
#line 3947 "guillex.tab.c"
    break;

  case 55: /* outConst: STRING  */
#line 849 "guillex.y"
           {
      (yyval.treeNode) = createNode1("STRING", createNode0((yyvsp[0].str)));
      (yyval.treeNode) -> saved = (yyvsp[0].str);
    }
#line 3956 "guillex.tab.c"
    break;

  case 56: /* outConst: simpleExp  */
#line 853 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 3965 "guillex.tab.c"
    break;

  case 57: /* binListExp: factor APPEND factor  */
#line 860 "guillex.y"
                             {
		(yyval.treeNode) = createNode3("factor APPEND factor", (yyvsp[-2].treeNode), createNode0(":"), (yyvsp[0].treeNode));		
    (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
	}
#line 3974 "guillex.tab.c"
    break;

  case 58: /* binListExp: factor MAP factor  */
#line 864 "guillex.y"
                            {
		
		(yyval.treeNode) = createNode3("factor MAP factor", (yyvsp[-2].treeNode), createNode0(">>"), (yyvsp[0].treeNode));		
    (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
	}
#line 3984 "guillex.tab.c"
    break;

  case 59: /* binListExp: factor FILTER factor  */
#line 869 "guillex.y"
                               {
		(yyval.treeNode) = createNode3("factor FILTER factor", (yyvsp[-2].treeNode), createNode0("<<"), (yyvsp[0].treeNode));	
    (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;	
	}
#line 3993 "guillex.tab.c"
    break;

  case 60: /* unaryListExp: HEADLIST factor  */
#line 875 "guillex.y"
                        {
		(yyval.treeNode) = createNode2("? factor", createNode0("?"), (yyvsp[0].treeNode));
    (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;	
	}
#line 4002 "guillex.tab.c"
    break;

  case 61: /* unaryListExp: TAILLIST factor  */
#line 879 "guillex.y"
                          {
    (yyval.treeNode) = createNode2("! factor", createNode0("!"), (yyvsp[0].treeNode));
    (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;	
	}
#line 4011 "guillex.tab.c"
    break;

  case 62: /* binLogicalExp: binLogicalExp binLogicalOp relationalExp  */
#line 886 "guillex.y"
                                            {
      (yyval.treeNode) = createNode3("binLogicalExp binLogicalOp relationalOp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 4019 "guillex.tab.c"
    break;

  case 63: /* binLogicalExp: relationalExp  */
#line 889 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("relationalExp", (yyvsp[0].treeNode));
    (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 4028 "guillex.tab.c"
    break;

  case 64: /* binLogicalOp: OR  */
#line 897 "guillex.y"
       {
      (yyval.treeNode) = createNode1("OR", createNode0("||"));
    }
#line 4036 "guillex.tab.c"
    break;

  case 65: /* binLogicalOp: AND  */
#line 900 "guillex.y"
        {
      (yyval.treeNode) = createNode1("AND", createNode0("&&"));
  }
#line 4044 "guillex.tab.c"
    break;

  case 66: /* relationalExp: relationalExp relationalOp sumExp  */
#line 906 "guillex.y"
                                      {
      (yyval.treeNode) = createNode3("relationalExp relationalOp sumExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 4052 "guillex.tab.c"
    break;

  case 67: /* relationalExp: sumExp  */
#line 909 "guillex.y"
           {
      (yyval.treeNode) = createNode1("sumExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 4061 "guillex.tab.c"
    break;

  case 68: /* relationalOp: SMALLER  */
#line 917 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLER", createNode0("<"));
    }
#line 4069 "guillex.tab.c"
    break;

  case 69: /* relationalOp: GREATER  */
#line 920 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATER", createNode0(">"));
  }
#line 4077 "guillex.tab.c"
    break;

  case 70: /* relationalOp: SMALLEQ  */
#line 923 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLEQ", createNode0("<="));
  }
#line 4085 "guillex.tab.c"
    break;

  case 71: /* relationalOp: GREATEQ  */
#line 926 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATEQ", createNode0(">="));
  }
#line 4093 "guillex.tab.c"
    break;

  case 72: /* relationalOp: EQUALS  */
#line 929 "guillex.y"
           {
      (yyval.treeNode) = createNode1("EQUALS", createNode0("=="));
  }
#line 4101 "guillex.tab.c"
    break;

  case 73: /* relationalOp: DIFFERENT  */
#line 932 "guillex.y"
              {
      (yyval.treeNode) = createNode1("DIFFERENT", createNode0("!="));
  }
#line 4109 "guillex.tab.c"
    break;

  case 74: /* sumExp: sumExp ADD mulExp  */
#line 938 "guillex.y"
                      {
      (yyval.treeNode) = createNode3("sumExp add mulExp", (yyvsp[-2].treeNode), createNode0("+"), (yyvsp[0].treeNode));
      UT_string *s = create_new_reg(varReg);
      mathOpFile("add", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 4120 "guillex.tab.c"
    break;

  case 75: /* sumExp: sumExp SUB mulExp  */
#line 945 "guillex.y"
                          {
      (yyval.treeNode) = createNode3("sumExp sub mulExp", (yyvsp[-2].treeNode), createNode0("-"), (yyvsp[0].treeNode));
      UT_string *s = create_new_reg(varReg);
      mathOpFile("sub", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 4131 "guillex.tab.c"
    break;

  case 76: /* sumExp: mulExp  */
#line 951 "guillex.y"
           {
      (yyval.treeNode) = createNode1("mulExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 4140 "guillex.tab.c"
    break;

  case 77: /* mulExp: mulExp MULT factor  */
#line 958 "guillex.y"
                       {
      (yyval.treeNode) = createNode3("mulExp mulOp factor", (yyvsp[-2].treeNode), createNode0("*"), (yyvsp[0].treeNode));
      UT_string *s = create_new_reg(varReg);
      mathOpFile("mul", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 4151 "guillex.tab.c"
    break;

  case 78: /* mulExp: mulExp DIV factor  */
#line 965 "guillex.y"
                       {
      (yyval.treeNode) = createNode3("mulExp mulOp factor", (yyvsp[-2].treeNode), createNode0("/"), (yyvsp[0].treeNode));
      UT_string *s = create_new_reg(varReg);
      mathOpFile("div", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 4162 "guillex.tab.c"
    break;

  case 79: /* mulExp: factor  */
#line 971 "guillex.y"
           {
      (yyval.treeNode) = createNode1("factor", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 4171 "guillex.tab.c"
    break;

  case 80: /* mulExp: ADD factor  */
#line 975 "guillex.y"
               {
      (yyval.treeNode) = createNode2("ADD factor", createNode0("+"), (yyvsp[0].treeNode));
  }
#line 4179 "guillex.tab.c"
    break;

  case 81: /* mulExp: SUB factor  */
#line 978 "guillex.y"
               {
      (yyval.treeNode) = createNode2("SUB factor", createNode0("-"), (yyvsp[0].treeNode));
  }
#line 4187 "guillex.tab.c"
    break;

  case 82: /* mulExp: unaryListExp  */
#line 981 "guillex.y"
                 {
		(yyval.treeNode) = createNode1("unaryListExp", (yyvsp[0].treeNode));
	}
#line 4195 "guillex.tab.c"
    break;

  case 83: /* factor: ID  */
#line 988 "guillex.y"
       {
      (yyval.treeNode) = createNode1("ID", createNode0((yyvsp[0].str)));
      (yyval.treeNode) -> saved = (yyvsp[0].str);
    }
#line 4204 "guillex.tab.c"
    break;

  case 84: /* factor: fCall  */
#line 992 "guillex.y"
          {
      (yyval.treeNode) = createNode1("fCall", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 4213 "guillex.tab.c"
    break;

  case 85: /* factor: PARENL simpleExp PARENR  */
#line 996 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("PARENL simpleExp PARENR", (yyvsp[-1].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[-1].treeNode) -> saved;
  }
#line 4222 "guillex.tab.c"
    break;

  case 86: /* factor: constOp  */
#line 1000 "guillex.y"
            {
      (yyval.treeNode) = createNode1("constOp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 4231 "guillex.tab.c"
    break;

  case 87: /* factor: ERRORTOKEN  */
#line 1004 "guillex.y"
               {
      (yyval.treeNode) = createNodeE();
    }
#line 4239 "guillex.tab.c"
    break;

  case 88: /* fCall: ID PARENL callParams PARENR  */
#line 1010 "guillex.y"
                                {
      if (findSymbolFunc((yyvsp[-3].str)) != NULL){
       if (checkNumberOfParams(argsParams, (yyvsp[-3].str))){
         argsParams = 0;
        (yyval.treeNode) = createNode2("ID PARENL callParams PARENR", createNode0((yyvsp[-3].str)), (yyvsp[-1].treeNode));
        (yyval.treeNode) -> saved = (yyvsp[-3].str);  
        }else{
          printf("Semantic error");
          printf("Function: <%s> has wrong number of parameters, line %d, column %d\n\n", (yyvsp[-3].str), line, wordPosition);
          semanticErrors++;
          argsParams = 0;
          (yyval.treeNode) = createNodeE();
        }
      }else {
          printf("Semantic Error\n");
          printf("Function %s not declared, line %d, column %d\n\n", (yyvsp[-3].str), line, wordPosition);
          semanticErrors++;
          argsParams = 0;
          (yyval.treeNode) = createNodeE();
      }
    }
#line 4265 "guillex.tab.c"
    break;

  case 89: /* fCall: ID PARENL PARENR  */
#line 1031 "guillex.y"
                     {
    if (findSymbolFunc((yyvsp[-2].str)) != NULL){
      if (checkNumberOfParams(argsParams, (yyvsp[-2].str))){
        (yyval.treeNode) = createNode1("ID PARENL PARENR", createNode0((yyvsp[-2].str)));
        (yyval.treeNode) -> saved = (yyvsp[-2].str);
      }else{
        printf("Semantic error");
        printf("Function: <%s> has wrong number of parameters, line %d, column %d\n\n", (yyvsp[-2].str), line, wordPosition);
        semanticErrors++;
        argsParams = 0;
        (yyval.treeNode) = createNodeE();
      }
    }else{
      printf("Semantic Error\n");
      printf("Function %s not declared, line %d, column %d\n\n", (yyvsp[-2].str), line, wordPosition);
      errors++;
      (yyval.treeNode) = createNodeE();
    }
  }
#line 4289 "guillex.tab.c"
    break;

  case 90: /* callParams: callParams COMMA simpleExp  */
#line 1053 "guillex.y"
                               {
      argsParams++;
      (yyval.treeNode) = createNode2("callParams COMMA simpleExp", (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
    }
#line 4299 "guillex.tab.c"
    break;

  case 91: /* callParams: simpleExp  */
#line 1058 "guillex.y"
              {
      argsParams++;
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 4309 "guillex.tab.c"
    break;


#line 4313 "guillex.tab.c"

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

#line 1067 "guillex.y"


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
  tacfile = fopen("file.tac", "w");
  fprintf (tacfile, ".table\n");
  fprintf (tacfile, ".code\n");
  printf("\n\n#### beginning ####\n\n");
  printf("------------------------Semantic analysis---------------------\n");
  abstractSyntaxTree = NULL;
  FILE *file;
  file = fopen(argv[1], "r");
  if(argc > 1){
    if(file){
      yyin = file;
      yyparse();
      printf("\n\n#### EOF ####\n\n");
      semanticErrors += findSymbolMain("main");
      writeTacFile(currentLine);
      if(errors == 0){
        printf("\n\n------------------------------------------------------symbols------------------------------------------------\n\n");
        printf("\n\n|         Value         |         Symbol type             |         Return type           |         Scope       |     Parameters      |\n\n");
        printSymbols();
        printf("\n\n--------------------------------tree--------------------------------\n\n");
        printAndFreeTree(0, abstractSyntaxTree);
        if (semanticErrors > 0) {
          printf("\n\n There is %d warnings in the file\n\n", semanticErrors);
        }else{
          printf("\n\n There is %d errors and %d warnings in the file\n\n", errors, semanticErrors);
        }
        freeSymbols();
        freeStack();    
        free(yylval.str);  
        }else{
          printf("\n\nThere were %d errors in the file", errors);
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
