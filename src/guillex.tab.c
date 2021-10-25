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



extern int findSymbolMain(char *name) {
    struct symbol *s;
    int hasMain = 0;

    for (s = symbolTable; s != NULL; s = s -> hh.next){
      if ((strcmp(s -> name, "main") == 0 && (strcmp(s -> symbolType, "func") == 0 ))){
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

bool checkIsInScope(char *name, int num) {
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
  YYSYMBOL_LISTTYPE = 5,                   /* LISTTYPE  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_NIL = 7,                        /* NIL  */
  YYSYMBOL_INTEGER = 8,                    /* INTEGER  */
  YYSYMBOL_DECIMAL = 9,                    /* DECIMAL  */
  YYSYMBOL_ERRORTOKEN = 10,                /* ERRORTOKEN  */
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
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_51_2 = 51,                      /* $@2  */
  YYSYMBOL_52_3 = 52,                      /* $@3  */
  YYSYMBOL_53_4 = 53,                      /* $@4  */
  YYSYMBOL_54_5 = 54,                      /* $@5  */
  YYSYMBOL_55_6 = 55,                      /* $@6  */
  YYSYMBOL_56_7 = 56,                      /* $@7  */
  YYSYMBOL_57_8 = 57,                      /* $@8  */
  YYSYMBOL_simpleVarDeclaration = 58,      /* simpleVarDeclaration  */
  YYSYMBOL_params = 59,                    /* params  */
  YYSYMBOL_param = 60,                     /* param  */
  YYSYMBOL_compoundStmt = 61,              /* compoundStmt  */
  YYSYMBOL_stmtList = 62,                  /* stmtList  */
  YYSYMBOL_primitiveStmt = 63,             /* primitiveStmt  */
  YYSYMBOL_exprStmt = 64,                  /* exprStmt  */
  YYSYMBOL_condStmt = 65,                  /* condStmt  */
  YYSYMBOL_ifStmt = 66,                    /* ifStmt  */
  YYSYMBOL_elseStmt = 67,                  /* elseStmt  */
  YYSYMBOL_68_9 = 68,                      /* $@9  */
  YYSYMBOL_iterStmt = 69,                  /* iterStmt  */
  YYSYMBOL_returnStmt = 70,                /* returnStmt  */
  YYSYMBOL_listExp = 71,                   /* listExp  */
  YYSYMBOL_appendOps = 72,                 /* appendOps  */
  YYSYMBOL_returnListOps = 73,             /* returnListOps  */
  YYSYMBOL_returnListOp = 74,              /* returnListOp  */
  YYSYMBOL_destroyHeadOps = 75,            /* destroyHeadOps  */
  YYSYMBOL_mapFilterOps = 76,              /* mapFilterOps  */
  YYSYMBOL_expression = 77,                /* expression  */
  YYSYMBOL_assignExp = 78,                 /* assignExp  */
  YYSYMBOL_simpleExp = 79,                 /* simpleExp  */
  YYSYMBOL_constOp = 80,                   /* constOp  */
  YYSYMBOL_inOp = 81,                      /* inOp  */
  YYSYMBOL_outOp = 82,                     /* outOp  */
  YYSYMBOL_outConst = 83,                  /* outConst  */
  YYSYMBOL_binLogicalExp = 84,             /* binLogicalExp  */
  YYSYMBOL_binLogicalOp = 85,              /* binLogicalOp  */
  YYSYMBOL_relationalExp = 86,             /* relationalExp  */
  YYSYMBOL_relationalOp = 87,              /* relationalOp  */
  YYSYMBOL_sumExp = 88,                    /* sumExp  */
  YYSYMBOL_mulExp = 89,                    /* mulExp  */
  YYSYMBOL_factor = 90,                    /* factor  */
  YYSYMBOL_fCall = 91,                     /* fCall  */
  YYSYMBOL_callParams = 92                 /* callParams  */
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
#define YYLAST   4273

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  352

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
       0,   535,   535,   541,   544,   547,   555,   558,   564,   569,
     569,   569,   579,   579,   579,   590,   590,   590,   600,   600,
     600,   614,   639,   651,   654,   657,   665,   673,   684,   690,
     693,   699,   702,   705,   708,   711,   714,   717,   720,   726,
     732,   736,   742,   750,   750,   761,   767,   776,   782,   785,
     788,   791,   797,   803,   809,   812,   818,   824,   828,   834,
     838,   842,   849,   867,   874,   879,   884,   890,   896,   901,
     909,   913,   917,   924,   927,   935,   938,   944,   947,   955,
     958,   961,   964,   967,   970,   976,   983,   989,   996,  1003,
    1009,  1013,  1016,  1023,  1028,  1032,  1036,  1040,  1046,  1067,
    1089,  1093
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
  "LISTTYPE", "STRING", "NIL", "INTEGER", "DECIMAL", "ERRORTOKEN", "ADD",
  "SUB", "MULT", "DIV", "OR", "AND", "SMALLER", "GREATER", "SMALLEQ",
  "GREATEQ", "EQUALS", "DIFFERENT", "APPEND", "HEADLIST", "TAILLIST",
  "DESTROYHEAD", "FILTER", "ASSIGN", "MAP", "ELSE", "THEN", "IF", "FOR",
  "READ", "WRITE", "WRITELN", "RETURN", "SEMIC", "COMMA", "STFUNC",
  "ENDFUNC", "PARENL", "PARENR", "$accept", "program", "declarationList",
  "declaration", "varDeclaration", "funcDeclaration", "$@1", "$@2", "$@3",
  "$@4", "$@5", "$@6", "$@7", "$@8", "simpleVarDeclaration", "params",
  "param", "compoundStmt", "stmtList", "primitiveStmt", "exprStmt",
  "condStmt", "ifStmt", "elseStmt", "$@9", "iterStmt", "returnStmt",
  "listExp", "appendOps", "returnListOps", "returnListOp",
  "destroyHeadOps", "mapFilterOps", "expression", "assignExp", "simpleExp",
  "constOp", "inOp", "outOp", "outConst", "binLogicalExp", "binLogicalOp",
  "relationalExp", "relationalOp", "sumExp", "mulExp", "factor", "fCall",
  "callParams", YY_NULLPTR
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

#define YYPACT_NINF (-240)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-102)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,    42,   189,     9,    68,   143,   154,   161,     6,   136,
      62,  -240,   205,   225,    18,   286,   240,    36,    39,    16,
     210,    20,    35,    47,   240,    45,    56,    94,    83,    58,
    2604,    65,   100,    70,  2644,  2684,   111,  2724,  2684,  3838,
     299,  3902,  3914,  3942,  3954,    44,    44,    95,   119,   160,
     130,   157,   165,   180,   194,   630,  2684,   397,   558,  1564,
    1604,  1644,  1684,  1724,  2764,  1764,  1804,   211,   217,   226,
     224,   242,   247,   276,   285,   309,  3982,  1844,  1884,   121,
    1045,  4207,  3994,  4022,  4034,  2804,  2684,  1924,   267,   270,
     630,   334,    82,   315,   365,  2935,  4062,  4074,   332,   397,
     468,   380,   448,   448,   335,  1964,   341,   356,  2004,   724,
     354,  2044,   559,   610,  1080,   735,   775,   815,   855,   895,
     935,   975,   975,   975,    44,    44,  2684,  2084,   432,   357,
     363,   364,   382,  4102,   287,   445,   389,   351,  3870,   396,
     409,   410,  2949,   420,   421,   427,   440,   450,  2124,  2164,
    4114,  2844,  2204,   219,  4235,  4142,  4154,  4182,  4194,  2244,
     501,  1015,  4222,  2884,   975,   975,   414,   456,   462,  2684,
     502,   469,   465,   481,  2284,  2324,  2364,  2404,   517,   517,
     493,   482,   483,  2684,  2684,  2444,  2484,   486,  2982,  3375,
    3408,  3420,  3453,    97,    97,   397,  3465,    60,   673,  3793,
    3498,  3510,  3543,   485,   492,   496,   500,   630,  2684,   764,
     490,   804,   844,   884,  2764,   924,   964,   497,  1004,  1044,
    2968,  3001,  3015,  3048,  3060,   230,   230,   397,  3093,   105,
     113,  3752,  3105,  3138,  3150,   541,   504,   512,   542,   515,
     516,   295,   328,   372,   453,   466,   471,   557,   560,   561,
     107,   675,  2524,  3555,  3588,   531,  1120,   397,   397,   397,
      97,    97,   468,   582,   448,   448,   548,  2564,  1084,  1124,
    1164,   369,  3183,  3195,   544,  1160,  1015,  1015,  1015,   230,
     230,   546,   565,   566,   569,   570,  3600,   474,  2916,   571,
     573,   575,   576,  3633,   238,   319,   339,   370,   383,   403,
     446,  3805,  3645,  3678,  3690,  3723,   563,   564,   578,   591,
     592,  1204,  1244,  2844,  1284,  3228,   475,  3240,   185,   187,
     232,   235,   244,   324,   326,  3764,  3273,  3285,  3318,  3330,
    3735,   975,   975,   598,   607,   608,  2764,  3363,   609,   615,
    1324,  1364,  1404,  1444,   517,   517,   605,   616,  2764,  2764,
    1484,  1524
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -240,  -240,  -240,   656,     0,  -240,  -240,  -240,  -240,  -240,
    -240,  -240,  -240,  -240,     2,   637,    46,   -59,   -15,   -57,
     -52,   -50,   -48,   394,   349,   -43,   -33,   -76,   -74,   -69,
     -53,   -47,   -45,   -54,   -83,   -19,   164,   -29,   -27,   -95,
      81,  -184,   166,   -89,   454,   393,   272,   346,  -239
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    58,     7,    16,    38,    17,    35,
      24,   126,    25,    86,   187,    21,    22,    59,    60,    61,
      62,    63,    64,   152,   169,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,   146,
      79,   114,    80,   121,    81,    82,    83,    84,   135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   104,     8,   108,     6,   211,     8,   109,   147,    11,
     217,   287,   212,   256,   213,     1,   214,   139,     2,    -9,
     -25,   215,    -9,    87,    20,   153,   144,   144,   236,   236,
     108,   216,   316,   237,   237,   218,   131,   219,   106,   -24,
     -15,   105,    -5,   -15,    13,   275,    -5,    95,   108,   238,
     238,    41,    42,    43,    44,   239,   239,   240,   240,   -25,
     -26,   -12,   -23,    28,   209,    15,   210,    29,    -2,    20,
     108,   127,     2,   134,   -27,   112,   113,    29,   -24,    23,
     137,   140,   -18,   145,   145,   220,    57,    30,    32,   221,
     222,   223,   224,   225,   226,   181,   182,    33,   -54,   -26,
     188,   -23,   108,   -63,   189,   190,   191,   192,    36,   257,
     220,   159,   177,   -27,   221,   222,   223,   224,   225,   226,
     112,   113,   -55,    34,   227,   133,   185,   186,   -74,   -74,
     115,   116,   117,   118,   119,   120,   112,   113,   197,   195,
      37,   276,   171,    -4,   -63,   172,   173,    -4,   -63,   227,
     286,    85,   -74,   266,    -6,   211,   -74,   269,    -6,   -63,
     217,    -7,   212,    98,   213,    -7,   214,   300,   291,   309,
     310,   215,    99,   229,   -21,   289,   255,   236,    14,   306,
     197,   216,   237,   197,   197,   218,   324,   219,   144,   144,
     236,   236,     9,   267,    10,   237,   237,   290,   238,   100,
     -79,   -79,   -80,   -80,   239,    -3,   240,   101,   274,    -3,
     108,   238,   238,    26,   209,    27,   210,   239,   239,   240,
     240,   196,   102,   198,   -79,    -8,   -80,   110,   -79,    -8,
     -80,   134,   292,   220,   -73,   -73,   103,   221,   222,   223,
     224,    19,   229,   307,    20,   145,   145,   -81,   -81,   -61,
     -82,   -82,   134,   -79,   -79,   -48,   228,   -73,   230,   -83,
     -83,   346,   347,   196,   -49,   198,   196,   196,   198,   198,
     129,   -81,   227,   130,   -82,   -81,   197,   211,   -82,   343,
     -50,   -79,   217,   -83,   212,   -51,   213,   -83,   214,   211,
     211,   350,   351,   215,   217,   217,   212,   212,   213,   213,
     214,   214,    93,   216,    94,   215,   215,   218,   197,   219,
     -79,   -79,   338,   339,   111,   216,   216,    96,    97,   218,
     218,   219,   219,   -59,   -22,   228,  -101,   230,    18,   201,
    -101,   229,   197,   -79,   -80,   -80,   209,   132,   210,   -84,
     -84,   -73,   -73,   -80,   -80,   197,   197,   -60,   209,   209,
     210,   210,   229,   -21,   -81,   -81,   -14,   196,   196,   196,
     -14,   198,   -80,   -84,   233,   -73,   -80,   -84,   136,   -73,
     -56,   201,   220,   148,   201,   201,   221,   222,   223,   224,
     225,   226,   -81,   141,   150,   -82,   -82,   -81,   -81,   228,
     228,   196,   -53,   198,   163,   -52,   157,   158,   -83,   -83,
     188,   -58,   -62,   202,   189,   190,   191,   192,   193,   194,
     -81,   227,   315,   -82,   228,   196,   230,   198,   -84,   -84,
     -57,   196,   196,   196,   196,   196,   -83,   -22,   196,   196,
     198,   198,   -11,   233,   164,   228,   -11,   230,   234,   195,
     228,   228,   228,   228,   228,   202,   -84,   165,   202,   202,
     200,   142,   174,   166,   143,   189,   190,   191,   192,   193,
     194,   -73,   -73,   -70,   -72,   253,   254,   201,   -82,   -82,
     -71,   138,    47,    48,   235,    41,    42,    43,    44,    45,
      46,   -83,   -83,   167,   161,   232,   -84,   -84,   162,   -73,
     195,   -82,   200,   168,   175,   200,   200,   272,   273,   201,
     176,   -20,   -17,   178,   -83,   -20,   -17,   234,  -100,   -84,
      57,   199,  -100,   161,   161,   155,   156,   330,   337,   179,
     180,   251,   233,   201,   252,   183,   184,   262,   268,   201,
     201,   201,   304,   305,   263,   270,   201,   201,   264,   202,
     202,   202,   265,   233,   281,   282,   231,   -48,   233,   233,
     233,   328,   329,   199,   232,   -49,   199,   199,   -50,   -51,
     283,   -38,   -38,   284,   285,   -38,   -38,   -38,   -38,   -38,
     -38,   234,   234,   202,   293,   154,   -75,   -75,   -75,   -75,
     -75,   -75,   -38,   -38,   -38,   308,   311,   317,   200,   -56,
     -38,   -38,   -38,   -38,   -38,   -38,   234,   202,   -38,   -38,
     -38,   331,   332,   202,   202,   202,   202,   202,   -53,   -52,
     202,   202,   -58,   -57,   -61,   231,   -62,   234,   -59,   -60,
     200,   333,   234,   234,   234,   234,   234,   -76,   -76,   -76,
     -76,   -76,   -76,    39,   334,   335,   340,    41,    42,    43,
      44,    45,    46,   232,   200,   341,   342,   344,   348,   199,
     200,   302,   303,   345,    47,    48,    49,   200,   200,   349,
      12,    31,   336,   314,   232,     0,     0,     0,     0,   232,
     326,   327,    57,     0,     0,     0,     0,     0,   288,     0,
       0,   199,   189,   190,   191,   192,   193,   194,   -74,   -74,
     115,   116,   117,   118,   119,   120,     0,     0,     0,    47,
      48,   235,     0,     0,   231,   199,     0,     0,     0,     0,
       0,   301,     0,     0,     0,     0,   -74,   195,   199,   199,
       0,     0,     0,     0,     0,   231,     0,   -40,   -40,     0,
     325,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -79,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -40,   -40,
     -40,     0,     0,     0,   151,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,     0,   -40,   -40,   -40,   -38,   -38,     0,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -79,   -80,     0,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -38,   -38,
     -38,     0,     0,     0,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -38,     0,     0,   -38,   -38,   -38,   -32,   -32,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,   -80,   -81,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -32,   -32,
     -32,     0,     0,     0,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -32,     0,     0,   -32,   -32,   -32,   -31,   -31,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -81,   -82,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -31,   -31,
     -31,     0,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,   -31,   -31,   -31,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -82,   -83,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -33,   -33,
     -33,     0,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,   -33,   -33,   -33,   -34,   -34,     0,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -83,   -84,     0,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -34,   -34,
     -34,     0,     0,     0,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,   -34,   -34,   -34,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -84,    95,     0,
       0,     0,    41,    42,    43,    44,    45,    46,   -35,   -35,
     -35,     0,     0,     0,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,   -35,   -35,   -35,   -36,   -36,     0,
       0,   -36,   -36,   -36,   -36,   -36,   -36,    57,   220,     0,
       0,     0,   221,   222,   223,   224,   225,   226,   -36,   -36,
     -36,     0,     0,     0,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,   -36,   -36,   -36,   -37,   -37,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   227,     0,     0,
     -74,   -74,   115,   116,   117,   118,   119,   120,   -37,   -37,
     -37,     0,     0,     0,   -37,     0,   -37,   -37,   -37,   -37,
     -37,   -37,     0,   -74,   -37,   -37,   -37,    -8,    -8,     0,
       0,    -8,    -8,    -8,    -8,    -8,    -8,   241,   242,   243,
     244,   245,   246,     0,     0,     0,     0,     0,    -8,    -8,
      -8,     0,     0,     0,    -8,     0,    -8,    -8,    -8,    -8,
      -8,    -8,     0,     0,    -8,    -8,    -8,   -40,   -40,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   294,   295,   296,
     297,   298,   299,     0,     0,     0,     0,     0,   -40,   -40,
     -40,     0,     0,     0,   313,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,     0,   -40,   -40,   -40,   -39,   -39,     0,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   318,   319,   320,
     321,   322,   323,     0,     0,     0,     0,     0,   -39,   -39,
     -39,     0,     0,     0,   -39,     0,   -39,   -39,   -39,   -39,
     -39,   -39,     0,     0,   -39,   -39,   -39,   -47,   -47,     0,
       0,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -47,   -47,
     -47,     0,     0,     0,   -47,     0,   -47,   -47,   -47,   -47,
     -47,   -47,     0,     0,   -47,   -47,   -47,   -28,   -28,     0,
       0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -28,   -28,
     -28,     0,     0,     0,   -28,     0,   -28,   -28,   -28,   -28,
     -28,   -28,     0,     0,   -28,   -28,   -28,   -41,   -41,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -41,   -41,
     -41,     0,     0,     0,   -41,     0,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,   -41,   -41,   -41,   -67,   -67,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -67,   -67,
     -67,     0,     0,     0,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,   -67,   -67,   -67,   -68,   -68,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -68,   -68,
     -68,     0,     0,     0,   -68,     0,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,   -68,   -68,   -68,   -69,   -69,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -69,   -69,
     -69,     0,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,   -69,   -69,   -69,   -44,   -44,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -44,   -44,
     -44,     0,     0,     0,   -44,     0,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,   -44,   -44,   -44,   -45,   -45,     0,
       0,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -45,   -45,
     -45,     0,     0,     0,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -45,     0,     0,   -45,   -45,   -45,   -46,   -46,     0,
       0,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -46,   -46,
     -46,     0,     0,     0,   -46,     0,   -46,   -46,   -46,   -46,
     -46,   -46,     0,     0,   -46,   -46,   -46,   -32,   -32,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -32,   -32,
     -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,
     -32,   -32,     0,     0,   -32,   -32,   -32,    39,    40,     0,
       0,    41,    42,    43,    44,    45,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      54,    55,     0,     0,    56,   107,    57,   -30,   -30,     0,
       0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -30,   -30,
     -30,     0,     0,     0,     0,     0,   -30,   -30,   -30,   -30,
     -30,   -30,     0,     0,   -30,   -30,   -30,   -31,   -31,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -31,   -31,
     -31,     0,     0,     0,     0,     0,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,   -31,   -31,   -31,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -33,   -33,
     -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,   -33,   -33,   -33,   -34,   -34,     0,
       0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -34,   -34,
     -34,     0,     0,     0,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,   -34,   -34,   -34,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -35,   -35,
     -35,     0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,   -35,   -35,   -35,   -36,   -36,     0,
       0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -36,   -36,
     -36,     0,     0,     0,     0,     0,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,   -36,   -36,   -36,   -37,   -37,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -37,   -37,
     -37,     0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,   -37,   -37,   -37,    39,    40,     0,
       0,    41,    42,    43,    44,    45,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      54,    55,     0,     0,    56,   128,    57,    39,    40,     0,
       0,    41,    42,    43,    44,    45,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      54,    55,     0,     0,    56,   149,    57,   -29,   -29,     0,
       0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -29,   -29,
     -29,     0,     0,     0,     0,     0,   -29,   -29,   -29,   -29,
     -29,   -29,     0,     0,   -29,   -29,   -29,   -39,   -39,     0,
       0,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -39,   -39,
     -39,     0,     0,     0,     0,     0,   -39,   -39,   -39,   -39,
     -39,   -39,     0,     0,   -39,   -39,   -39,    39,    40,     0,
       0,    41,    42,    43,    44,    45,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      54,    55,     0,     0,    56,   160,    57,   -47,   -47,     0,
       0,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -47,   -47,
     -47,     0,     0,     0,     0,     0,   -47,   -47,   -47,   -47,
     -47,   -47,     0,     0,   -47,   -47,   -47,   -28,   -28,     0,
       0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -28,   -28,
     -28,     0,     0,     0,     0,     0,   -28,   -28,   -28,   -28,
     -28,   -28,     0,     0,   -28,   -28,   -28,   -41,   -41,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -41,   -41,
     -41,     0,     0,     0,     0,     0,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,   -41,   -41,   -41,    39,    40,     0,
       0,    41,    42,    43,    44,    45,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      54,    55,     0,     0,    56,   170,    57,   -67,   -67,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -67,   -67,
     -67,     0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,   -67,   -67,   -67,   -68,   -68,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -68,   -68,
     -68,     0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,   -68,   -68,   -68,   -69,   -69,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -69,   -69,
     -69,     0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,   -69,   -69,   -69,   -44,   -44,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -44,   -44,
     -44,     0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,   -44,   -44,   -44,   -45,   -45,     0,
       0,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -45,   -45,
     -45,     0,     0,     0,     0,     0,   -45,   -45,   -45,   -45,
     -45,   -45,     0,     0,   -45,   -45,   -45,   -46,   -46,     0,
       0,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -46,   -46,
     -46,     0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,
     -46,   -46,     0,     0,   -46,   -46,   -46,    -8,    -8,     0,
       0,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    -8,    -8,
      -8,     0,     0,     0,     0,     0,    -8,    -8,    -8,    -8,
      -8,    -8,     0,     0,    -8,    -8,    -8,    39,    40,     0,
       0,    41,    42,    43,    44,    45,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      54,    55,     0,     0,    56,   312,    57,   -13,   -13,     0,
       0,   -13,   -13,   -13,   -13,   -13,   -13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -13,   -13,
     -13,     0,     0,     0,     0,     0,   -13,   -13,   -13,   -13,
     -13,   -13,     0,     0,   -13,     0,   -13,   -10,   -10,     0,
       0,   -10,   -10,   -10,   -10,   -10,   -10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -10,   -10,
     -10,     0,     0,     0,     0,     0,   -10,   -10,   -10,   -10,
     -10,   -10,     0,     0,   -10,     0,   -10,    39,    40,     0,
       0,    41,    42,    43,    44,    45,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      54,    55,     0,     0,    56,     0,    57,   -19,   -19,     0,
       0,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -19,   -19,
     -19,     0,     0,     0,     0,     0,   -19,   -19,   -19,   -19,
     -19,   -19,     0,     0,   -19,     0,   -19,    39,    40,     0,
       0,    41,    42,    43,    44,    45,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,     0,     0,     0,     0,     0,    50,   203,   204,   205,
     206,   207,     0,     0,   208,     0,    57,   -16,   -16,     0,
       0,   -16,   -16,   -16,   -16,   -16,   -16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -16,   -16,
     -16,     0,     0,     0,     0,     0,   -16,   -16,   -16,   -16,
     -16,   -16,     0,     0,   -16,     0,   -16,   -43,   -43,     0,
       0,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -43,   -43,
     -43,     0,     0,     0,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,   -43,     0,   -43,   -42,   -42,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -42,   -42,
     -42,     0,     0,     0,     0,     0,   -42,   -42,   -42,   -42,
     -42,   -42,     0,     0,   -42,     0,   -42,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   247,
       0,     0,     0,   248,   251,   249,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   250,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   247,   -93,     0,     0,   248,    92,   249,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   250,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,     0,   -93,     0,     0,
     271,   -93,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   250,   -93,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
     -66,     0,     0,     0,   -66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -64,     0,     0,     0,   -64,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,     0,     0,     0,     0,   -65,     0,     0,
       0,   -65,     0,     0,     0,     0,     0,     0,     0,   -97,
       0,     0,     0,   -97,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -87,   -87,   279,   280,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,   -96,     0,     0,     0,   -96,     0,     0,     0,
       0,     0,     0,     0,   -87,     0,     0,     0,   -87,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,     0,     0,     0,     0,   -90,     0,     0,
       0,   -90,     0,     0,     0,     0,     0,     0,     0,   -94,
       0,     0,     0,   -94,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
       0,     0,   -91,     0,     0,     0,   -91,     0,     0,     0,
       0,     0,     0,     0,   -92,     0,     0,     0,   -92,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,     0,     0,     0,     0,   -99,     0,     0,
       0,   -99,     0,     0,     0,     0,     0,     0,     0,   -95,
       0,     0,     0,   -95,   -85,   -85,   279,   280,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   279,   280,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,   -85,     0,     0,     0,   -85,     0,     0,     0,
       0,     0,     0,     0,   -86,     0,     0,     0,   -86,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,     0,     0,   -88,     0,     0,
       0,   -88,     0,     0,     0,     0,     0,     0,     0,   -89,
       0,     0,     0,   -89,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,   -98,     0,     0,     0,   -98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -66,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,   -64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -65,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,     0,
       0,     0,     0,     0,     0,     0,   -97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -96,   -87,
     -87,   260,   261,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,     0,     0,     0,     0,
       0,   -87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -90,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
       0,     0,     0,     0,     0,     0,   -94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -91,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,     0,     0,     0,     0,     0,     0,     0,
       0,   -92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -99,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -85,   -85,   260,   261,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,     0,     0,     0,     0,     0,   -95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -85,   -86,
     -86,   260,   261,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,     0,     0,     0,     0,     0,
       0,   -86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -88,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,     0,     0,
       0,     0,     0,   277,   278,     0,   -89,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   277,   278,     0,   -98,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,   -78,     0,     0,     0,   -78,     0,     0,     0,     0,
       0,     0,     0,   -77,   258,   259,     0,   -77,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   258,   259,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,     0,     0,     0,     0,   -78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -77,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,    88,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,   -93,     0,     0,     0,
      92,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -93,     0,
       0,     0,    92,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
     -66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -64,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,     0,     0,
     -65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -97,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -87,   -87,   124,   125,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
     -96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -87,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,     0,
     -90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -94,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,
     -91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -92,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,     0,
     -99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -95,   -85,   -85,   124,   125,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -86,   -86,   124,   125,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
     -85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -86,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,   122,   123,
     -88,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,   -89,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -78,   122,   123,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
     -98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -77
};

static const yytype_int16 yycheck[] =
{
       0,    55,     0,    60,     4,    64,     4,    64,   103,     0,
      64,   250,    64,   197,    64,     1,    64,   100,     4,     1,
       4,    64,     4,    38,     4,   114,   102,   103,   102,   103,
      87,    64,   271,   102,   103,    64,    90,    64,    57,     4,
       1,    56,     0,     4,    38,   229,     4,     3,   105,   102,
     103,     7,     8,     9,    10,   102,   103,   102,   103,    43,
       4,    43,     4,    43,    64,     3,    64,    21,     0,     4,
     127,    86,     4,    92,     4,    15,    16,    31,    43,    43,
      99,   100,    43,   102,   103,     3,    42,    40,    43,     7,
       8,     9,    10,    11,    12,   178,   179,     3,     3,    43,
       3,    43,   159,    43,     7,     8,     9,    10,    43,   198,
       3,   126,   169,    43,     7,     8,     9,    10,    11,    12,
      15,    16,     3,    40,    42,    43,   183,   184,    15,    16,
      17,    18,    19,    20,    21,    22,    15,    16,    57,    42,
      40,   230,   161,     0,    39,   164,   165,     4,    43,    42,
      43,    40,    39,   207,     0,   214,    43,   214,     4,    38,
     214,     0,   214,     3,   214,     4,   214,   256,   251,   264,
     265,   214,    42,    92,    38,   251,   195,   251,    42,   262,
      99,   214,   251,   102,   103,   214,   275,   214,   264,   265,
     264,   265,     3,   208,     5,   264,   265,   251,   251,    42,
      15,    16,    15,    16,   251,     0,   251,    42,   227,     4,
     267,   264,   265,     3,   214,     5,   214,   264,   265,   264,
     265,    57,    42,    57,    39,     0,    39,     3,    43,     4,
      43,   250,   251,     3,    15,    16,    42,     7,     8,     9,
      10,     1,   161,   262,     4,   264,   265,    15,    16,    38,
      15,    16,   271,    15,    16,    38,    92,    38,    92,    15,
      16,   344,   345,    99,    38,    99,   102,   103,   102,   103,
       3,    39,    42,     3,    39,    43,   195,   336,    43,   336,
      38,    43,   336,    39,   336,    38,   336,    43,   336,   348,
     349,   348,   349,   336,   348,   349,   348,   349,   348,   349,
     348,   349,     3,   336,     5,   348,   349,   336,   227,   336,
      15,    16,   331,   332,    38,   348,   349,    45,    46,   348,
     349,   348,   349,    38,    38,   161,    39,   161,    42,    57,
      43,   250,   251,    38,    15,    16,   336,     3,   336,    15,
      16,    15,    16,    15,    16,   264,   265,    38,   348,   349,
     348,   349,   271,    38,    15,    16,     0,   193,   194,   195,
       4,   195,    43,    39,    92,    39,    38,    43,     3,    43,
      38,    99,     3,    38,   102,   103,     7,     8,     9,    10,
      11,    12,    43,     3,    43,    15,    16,    15,    16,   225,
     226,   227,    38,   227,    43,    38,   124,   125,    15,    16,
       3,    38,    38,    57,     7,     8,     9,    10,    11,    12,
      38,    42,    43,    43,   250,   251,   250,   251,    15,    16,
      38,   257,   258,   259,   260,   261,    43,    38,   264,   265,
     264,   265,     0,   161,    38,   271,     4,   271,    92,    42,
     276,   277,   278,   279,   280,    99,    43,    38,   102,   103,
      57,     3,    38,    43,     6,     7,     8,     9,    10,    11,
      12,    15,    16,    43,    43,   193,   194,   195,    15,    16,
      43,     3,    24,    25,    26,     7,     8,     9,    10,    11,
      12,    15,    16,    43,    39,    92,    15,    16,    43,    43,
      42,    38,    99,    43,    38,   102,   103,   225,   226,   227,
      38,     0,     0,    38,    38,     4,     4,   161,    39,    38,
      42,    57,    43,    39,    39,   122,   123,    43,    43,    38,
       3,    28,   250,   251,    38,    43,    43,    42,    38,   257,
     258,   259,   260,   261,    42,    38,   264,   265,    42,   193,
     194,   195,    42,   271,     3,     3,    92,    43,   276,   277,
     278,   279,   280,    99,   161,    43,   102,   103,    43,    43,
       3,     3,     4,     3,     3,     7,     8,     9,    10,    11,
      12,   225,   226,   227,    43,   121,    17,    18,    19,    20,
      21,    22,    24,    25,    26,     3,    38,    43,   195,    43,
      32,    33,    34,    35,    36,    37,   250,   251,    40,    41,
      42,    38,    38,   257,   258,   259,   260,   261,    43,    43,
     264,   265,    43,    43,    43,   161,    43,   271,    43,    43,
     227,    43,   276,   277,   278,   279,   280,    17,    18,    19,
      20,    21,    22,     3,    43,    43,    38,     7,     8,     9,
      10,    11,    12,   250,   251,    38,    38,    38,    43,   195,
     257,   258,   259,    38,    24,    25,    26,   264,   265,    43,
       4,    24,   313,   269,   271,    -1,    -1,    -1,    -1,   276,
     277,   278,    42,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,   227,     7,     8,     9,    10,    11,    12,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,   250,   251,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    43,    42,   264,   265,
      -1,    -1,    -1,    -1,    -1,   271,    -1,     3,     4,    -1,
     276,     7,     8,     9,    10,    11,    12,    -1,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    42,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    42,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    42,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    42,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    42,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    42,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    42,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    42,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    38,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    42,     3,     4,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    42,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    42,    43,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    38,    -1,    -1,    27,    42,    29,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    42,    43,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    39,    -1,    -1,
      42,    43,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    42,    43,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      39,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    11,    12,    -1,    43,    15,    16,    17,
      18,    19,    20,    21,    22,    11,    12,    -1,    43,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    11,    12,    -1,    43,    15,    16,
      17,    18,    19,    20,    21,    22,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    11,    12,
      38,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    38,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    38,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,    45,    46,    47,    48,    49,    58,     3,
       5,     0,    47,    38,    42,     3,    50,    52,    42,     1,
       4,    59,    60,    43,    54,    56,     3,     5,    43,    60,
      40,    59,    43,     3,    40,    53,    43,    40,    51,     3,
       4,     7,     8,     9,    10,    11,    12,    24,    25,    26,
      32,    33,    34,    35,    36,    37,    40,    42,    48,    61,
      62,    63,    64,    65,    66,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    84,
      86,    88,    89,    90,    91,    40,    57,    62,    23,    27,
      28,    29,    42,     3,     5,     3,    90,    90,     3,    42,
      42,    42,    42,    42,    77,    62,    79,    41,    63,    63,
       3,    38,    15,    16,    85,    17,    18,    19,    20,    21,
      22,    87,    11,    12,    13,    14,    55,    62,    41,     3,
       3,    77,     3,    43,    79,    92,     3,    79,     3,    78,
      79,     3,     3,     6,    71,    79,    83,    83,    38,    41,
      43,    30,    67,    87,    88,    89,    89,    90,    90,    62,
      41,    39,    43,    43,    38,    38,    43,    43,    43,    68,
      41,    79,    79,    79,    38,    38,    38,    63,    38,    38,
       3,    78,    78,    43,    43,    63,    63,    58,     3,     7,
       8,     9,    10,    11,    12,    42,    80,    84,    86,    88,
      89,    90,    91,    33,    34,    35,    36,    37,    40,    48,
      58,    61,    64,    65,    66,    69,    70,    77,    81,    82,
       3,     7,     8,     9,    10,    11,    12,    42,    80,    84,
      86,    88,    89,    90,    91,    26,    72,    73,    74,    75,
      76,    17,    18,    19,    20,    21,    22,    23,    27,    29,
      42,    28,    38,    90,    90,    79,    85,    87,    11,    12,
      13,    14,    42,    42,    42,    42,    77,    62,    38,    63,
      38,    42,    90,    90,    79,    85,    87,    11,    12,    13,
      14,     3,     3,     3,     3,     3,    43,    92,     3,    71,
      77,    78,    79,    43,    17,    18,    19,    20,    21,    22,
      87,    88,    89,    89,    90,    90,    78,    79,     3,    83,
      83,    38,    41,    30,    67,    43,    92,    43,    17,    18,
      19,    20,    21,    22,    87,    88,    89,    89,    90,    90,
      43,    38,    38,    43,    43,    43,    68,    43,    79,    79,
      38,    38,    38,    63,    38,    38,    78,    78,    43,    43,
      63,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    46,    47,    47,    48,    50,
      51,    49,    52,    53,    49,    54,    55,    49,    56,    57,
      49,    58,    58,    59,    59,    59,    60,    60,    61,    62,
      62,    63,    63,    63,    63,    63,    63,    63,    63,    64,
      65,    65,    66,    68,    67,    69,    69,    70,    71,    71,
      71,    71,    72,    73,    74,    74,    75,    76,    76,    77,
      77,    77,    78,    79,    80,    80,    80,    81,    82,    82,
      83,    83,    83,    84,    84,    85,    85,    86,    86,    87,
      87,    87,    87,    87,    87,    88,    88,    88,    89,    89,
      89,    89,    89,    90,    90,    90,    90,    90,    91,    91,
      92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     0,
       0,    10,     0,     0,     9,     0,     0,    11,     0,     0,
      10,     2,     3,     2,     1,     1,     2,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     3,     4,     0,     3,     9,     9,     3,     1,     1,
       1,     1,     3,     2,     1,     1,     2,     3,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     5,     5,     5,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     3,     3,
       1,     2,     2,     1,     1,     3,     1,     1,     4,     3,
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
#line 3017 "guillex.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 541 "guillex.y"
                                    {
       (yyval.treeNode) = createNode2("declarationsList declaration", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
     }
#line 3025 "guillex.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 544 "guillex.y"
                      {
    (yyval.treeNode) = createNode1("declaration", (yyvsp[0].treeNode));
  }
#line 3033 "guillex.tab.c"
    break;

  case 5: /* declarationList: error  */
#line 547 "guillex.y"
          {
    (yyval.treeNode) = createNodeE();
    errors++;
    yyerror(yymsg);
  }
#line 3043 "guillex.tab.c"
    break;

  case 6: /* declaration: varDeclaration  */
#line 555 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
    }
#line 3051 "guillex.tab.c"
    break;

  case 7: /* declaration: funcDeclaration  */
#line 558 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("funcDeclaration", (yyvsp[0].treeNode));
    }
#line 3059 "guillex.tab.c"
    break;

  case 8: /* varDeclaration: simpleVarDeclaration SEMIC  */
#line 564 "guillex.y"
                               {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[-1].treeNode));}
#line 3066 "guillex.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 569 "guillex.y"
                   {scope++; pushStack(scope);}
#line 3072 "guillex.tab.c"
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
#line 3084 "guillex.tab.c"
    break;

  case 11: /* funcDeclaration: TYPE ID PARENL $@1 params PARENR STFUNC $@2 stmtList ENDFUNC  */
#line 575 "guillex.y"
                         {
      (yyval.treeNode) = createNode4("TYPE ID PARENL params PARENR STFUNC stmtList ENDFUNC", createNode0((yyvsp[-9].str)), createNode0((yyvsp[-8].str)), (yyvsp[-5].treeNode), (yyvsp[-1].treeNode));
      popStack();
  }
#line 3093 "guillex.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 579 "guillex.y"
                   {pushStack(scope);}
#line 3099 "guillex.tab.c"
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
#line 3111 "guillex.tab.c"
    break;

  case 14: /* funcDeclaration: TYPE ID PARENL $@3 PARENR STFUNC $@4 stmtList ENDFUNC  */
#line 585 "guillex.y"
                       {
    
      (yyval.treeNode) = createNode3("TYPE ID PARENL PARENR compoundStmt", createNode0((yyvsp[-8].str)), createNode0((yyvsp[-7].str)), (yyvsp[-1].treeNode)); 
      popStack();                                                                      
  }
#line 3121 "guillex.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 590 "guillex.y"
                            {scope++; pushStack(scope);}
#line 3127 "guillex.tab.c"
    break;

  case 16: /* $@6: %empty  */
#line 590 "guillex.y"
                                                                              {
    UT_string *r;
    utstring_new(r);
    errors += addSymbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stackScope) -> value, parameters, 0);  
    parameters = 0;
    addFunc((yyvsp[-5].str));
    }
#line 3139 "guillex.tab.c"
    break;

  case 17: /* funcDeclaration: TYPE LISTTYPE ID PARENL $@5 params PARENR STFUNC $@6 stmtList ENDFUNC  */
#line 596 "guillex.y"
                      {
      (yyval.treeNode) = createNode5("TYPE LISTTYPE ID PARENL params PARENR compoundStmt", createNode0((yyvsp[-10].str)), createNode0List((yyvsp[-9].str), 'l'), createNode0((yyvsp[-8].str)), (yyvsp[-5].treeNode), (yyvsp[-1].treeNode));
      popStack();
  }
#line 3148 "guillex.tab.c"
    break;

  case 18: /* $@7: %empty  */
#line 600 "guillex.y"
                            {pushStack(scope);}
#line 3154 "guillex.tab.c"
    break;

  case 19: /* $@8: %empty  */
#line 600 "guillex.y"
                                                              {
    UT_string *r;
    utstring_new(r);
    errors += addSymbol((yyvsp[-4].str), "func", (yyvsp[-5].str), STACK_TOP(stackScope) -> value, parameters, 0);
    parameters = 0;
    addFunc((yyvsp[-4].str));
    
    }
#line 3167 "guillex.tab.c"
    break;

  case 20: /* funcDeclaration: TYPE LISTTYPE ID PARENL $@7 PARENR STFUNC $@8 stmtList ENDFUNC  */
#line 607 "guillex.y"
                      {
      (yyval.treeNode) = createNode4("TYPE LISTTYPE ID PARENL PARENR compoundStmt", createNode0((yyvsp[-9].str)), createNode0List((yyvsp[-8].str), 'l'), createNode0((yyvsp[-7].str)), (yyvsp[-1].treeNode));
      popStack();
    }
#line 3176 "guillex.tab.c"
    break;

  case 21: /* simpleVarDeclaration: TYPE ID  */
#line 614 "guillex.y"
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
#line 3206 "guillex.tab.c"
    break;

  case 22: /* simpleVarDeclaration: TYPE LISTTYPE ID  */
#line 639 "guillex.y"
                       {

      pushStack(scope);
      semanticErrors += addSymbol((yyvsp[0].str), "var", (yyvsp[-1].str), STACK_TOP(stackScope) -> value, 0, create_new_reg(varReg));
      varReg++;
      (yyval.treeNode) = createNode3("TYPE ID", createNode0((yyvsp[-2].str)), createNode0List((yyvsp[-1].str), 'l'), createNode0((yyvsp[0].str)));
      popStack();
    }
#line 3219 "guillex.tab.c"
    break;

  case 23: /* params: params param  */
#line 651 "guillex.y"
                 {
      (yyval.treeNode) = createNode2("params param", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
      }
#line 3227 "guillex.tab.c"
    break;

  case 24: /* params: param  */
#line 654 "guillex.y"
          { 
    (yyval.treeNode) = createNode1("param", (yyvsp[0].treeNode)); 
    }
#line 3235 "guillex.tab.c"
    break;

  case 25: /* params: error  */
#line 657 "guillex.y"
          {
      (yyval.treeNode) = createNodeE();
      errors++;
      yyerror(yymsg);
    }
#line 3245 "guillex.tab.c"
    break;

  case 26: /* param: TYPE ID  */
#line 665 "guillex.y"
            {
      parameters++;
      pushStack(scope);
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      semanticErrors += addSymbol((yyvsp[0].str), "param", (yyvsp[-1].str), STACK_TOP(stackScope) -> value, 0, create_new_reg(varReg));
      varReg++;
      popStack();
      }
#line 3258 "guillex.tab.c"
    break;

  case 27: /* param: TYPE LISTTYPE ID  */
#line 673 "guillex.y"
                       {
      parameters++;
      pushStack(scope);
      semanticErrors += addSymbol((yyvsp[0].str), "param", (yyvsp[-1].str), STACK_TOP(stackScope) -> value, 0, create_new_reg(varReg));
      (yyval.treeNode) = createNode3("TYPE ID", createNode0((yyvsp[-2].str)), createNode0List((yyvsp[-1].str), 'l'), createNode0((yyvsp[0].str)));
      varReg++;
      popStack();
    }
#line 3271 "guillex.tab.c"
    break;

  case 28: /* compoundStmt: STFUNC stmtList ENDFUNC  */
#line 684 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[-1].treeNode));
    }
#line 3279 "guillex.tab.c"
    break;

  case 29: /* stmtList: stmtList primitiveStmt  */
#line 690 "guillex.y"
                              {
      (yyval.treeNode) = createNode2("stmtList primitiveStmt", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3287 "guillex.tab.c"
    break;

  case 30: /* stmtList: primitiveStmt  */
#line 693 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("primitiveStmt", (yyvsp[0].treeNode));
  }
#line 3295 "guillex.tab.c"
    break;

  case 31: /* primitiveStmt: exprStmt  */
#line 699 "guillex.y"
             {
      (yyval.treeNode) = createNode1("exprStmt", (yyvsp[0].treeNode));
    }
#line 3303 "guillex.tab.c"
    break;

  case 32: /* primitiveStmt: compoundStmt  */
#line 702 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[0].treeNode));
  }
#line 3311 "guillex.tab.c"
    break;

  case 33: /* primitiveStmt: condStmt  */
#line 705 "guillex.y"
             {
    (yyval.treeNode) = createNode1("condStmt", (yyvsp[0].treeNode));
  }
#line 3319 "guillex.tab.c"
    break;

  case 34: /* primitiveStmt: iterStmt  */
#line 708 "guillex.y"
             {
    (yyval.treeNode) = createNode1("iterStmt", (yyvsp[0].treeNode));
  }
#line 3327 "guillex.tab.c"
    break;

  case 35: /* primitiveStmt: returnStmt  */
#line 711 "guillex.y"
               {
    (yyval.treeNode) = createNode1("returnStmt", (yyvsp[0].treeNode));
  }
#line 3335 "guillex.tab.c"
    break;

  case 36: /* primitiveStmt: inOp  */
#line 714 "guillex.y"
         {
    (yyval.treeNode) = createNode1("inOp", (yyvsp[0].treeNode));
  }
#line 3343 "guillex.tab.c"
    break;

  case 37: /* primitiveStmt: outOp  */
#line 717 "guillex.y"
          {
    (yyval.treeNode) = createNode1("outOp", (yyvsp[0].treeNode));
  }
#line 3351 "guillex.tab.c"
    break;

  case 38: /* primitiveStmt: varDeclaration  */
#line 720 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
  }
#line 3359 "guillex.tab.c"
    break;

  case 39: /* exprStmt: expression SEMIC  */
#line 726 "guillex.y"
                     {
      (yyval.treeNode) = createNode1("expression SEMIC", (yyvsp[-1].treeNode));
    }
#line 3367 "guillex.tab.c"
    break;

  case 40: /* condStmt: ifStmt primitiveStmt  */
#line 732 "guillex.y"
                                    {
      (yyval.treeNode) = createNode2("ifStmt primitiveStmt", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
      popStack();
    }
#line 3376 "guillex.tab.c"
    break;

  case 41: /* condStmt: ifStmt primitiveStmt elseStmt  */
#line 736 "guillex.y"
                                   {
    (yyval.treeNode) = createNode3("ifStmt primitiveStmt elseStmt", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
  }
#line 3384 "guillex.tab.c"
    break;

  case 42: /* ifStmt: IF PARENL simpleExp PARENR  */
#line 742 "guillex.y"
                              {
      scope++;
      pushStack(scope);
      (yyval.treeNode) = createNode2("IF PARENL simpleExp PARENR", createNode0((yyvsp[-3].str)), (yyvsp[-1].treeNode));
    }
#line 3394 "guillex.tab.c"
    break;

  case 43: /* $@9: %empty  */
#line 750 "guillex.y"
      {
    popStack();
    scope++;
    pushStack(scope);
  }
#line 3404 "guillex.tab.c"
    break;

  case 44: /* elseStmt: ELSE $@9 primitiveStmt  */
#line 754 "guillex.y"
                  {
    popStack();
    (yyval.treeNode) = createNode2("ELSE primitiveStmt", createNode0((yyvsp[-2].str)), (yyvsp[0].treeNode));
  }
#line 3413 "guillex.tab.c"
    break;

  case 45: /* iterStmt: FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 761 "guillex.y"
                                                                              {
      scope++;
      pushStack(scope);
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-8].str)), (yyvsp[-6].treeNode), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
      popStack();
    }
#line 3424 "guillex.tab.c"
    break;

  case 46: /* iterStmt: FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt  */
#line 767 "guillex.y"
                                                                              {
      scope++;
      pushStack(scope);
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-8].str)), (yyvsp[-6].treeNode), (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
      popStack();
  }
#line 3435 "guillex.tab.c"
    break;

  case 47: /* returnStmt: RETURN expression SEMIC  */
#line 776 "guillex.y"
                            {
      (yyval.treeNode) = createNode2("RETURN expression SEMIC", createNode0((yyvsp[-2].str)), (yyvsp[-1].treeNode));
    }
#line 3443 "guillex.tab.c"
    break;

  case 48: /* listExp: appendOps  */
#line 782 "guillex.y"
              {
      (yyval.treeNode) = createNode1("appendOps", (yyvsp[0].treeNode));
    }
#line 3451 "guillex.tab.c"
    break;

  case 49: /* listExp: returnListOps  */
#line 785 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("returnListOps", (yyvsp[0].treeNode));
  }
#line 3459 "guillex.tab.c"
    break;

  case 50: /* listExp: destroyHeadOps  */
#line 788 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("destroyHeadOps", (yyvsp[0].treeNode));
  }
#line 3467 "guillex.tab.c"
    break;

  case 51: /* listExp: mapFilterOps  */
#line 791 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("mapFilterOps", (yyvsp[0].treeNode));
  }
#line 3475 "guillex.tab.c"
    break;

  case 52: /* appendOps: ID APPEND ID  */
#line 797 "guillex.y"
                 {
      (yyval.treeNode) = createNode3("ID APPEND ID SEMIC", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 3483 "guillex.tab.c"
    break;

  case 53: /* returnListOps: returnListOp ID  */
#line 803 "guillex.y"
                   {
      (yyval.treeNode) = createNode2("returnListOp ID", (yyvsp[-1].treeNode), createNode0((yyvsp[0].str)));
    }
#line 3491 "guillex.tab.c"
    break;

  case 54: /* returnListOp: HEADLIST  */
#line 809 "guillex.y"
             {
      (yyval.treeNode) = createNode1("HEADLIST", createNode0((yyvsp[0].str)));
    }
#line 3499 "guillex.tab.c"
    break;

  case 55: /* returnListOp: TAILLIST  */
#line 812 "guillex.y"
             {
      (yyval.treeNode) = createNode1("TAILLIST", createNode0((yyvsp[0].str)));
  }
#line 3507 "guillex.tab.c"
    break;

  case 56: /* destroyHeadOps: DESTROYHEAD ID  */
#line 818 "guillex.y"
                   {
      (yyval.treeNode) = createNode2("DESTROYHEAD ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 3515 "guillex.tab.c"
    break;

  case 57: /* mapFilterOps: ID MAP ID  */
#line 824 "guillex.y"
              {
      (yyval.treeNode) = createNode3("ID MAP ID SEMIC", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 3523 "guillex.tab.c"
    break;

  case 58: /* mapFilterOps: ID FILTER ID  */
#line 828 "guillex.y"
                 {
      (yyval.treeNode) = createNode3("ID FILTER ID SEMIC", createNode0((yyvsp[-2].str)), createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
    }
#line 3531 "guillex.tab.c"
    break;

  case 59: /* expression: assignExp  */
#line 834 "guillex.y"
              {
      (yyval.treeNode) = createNode1("assignExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
    }
#line 3540 "guillex.tab.c"
    break;

  case 60: /* expression: simpleExp  */
#line 838 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 3549 "guillex.tab.c"
    break;

  case 61: /* expression: listExp  */
#line 842 "guillex.y"
            {
    (yyval.treeNode) = createNode1("listExp", (yyvsp[0].treeNode));
    (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 3558 "guillex.tab.c"
    break;

  case 62: /* assignExp: ID ASSIGN expression  */
#line 849 "guillex.y"
                         {
      if (checkIsInScope((yyvsp[-2].str), STACK_TOP(stackScope) -> value)){
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
#line 3577 "guillex.tab.c"
    break;

  case 63: /* simpleExp: binLogicalExp  */
#line 867 "guillex.y"
                  {
      (yyval.treeNode) = createNode1("binLogicalExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
    }
#line 3586 "guillex.tab.c"
    break;

  case 64: /* constOp: INTEGER  */
#line 874 "guillex.y"
            {
      (yyval.treeNode) = createNode0Int((yyvsp[0].integer), 'i');
      UT_string *s = int_as_str((yyvsp[0].integer));
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 3596 "guillex.tab.c"
    break;

  case 65: /* constOp: DECIMAL  */
#line 879 "guillex.y"
            {
    (yyval.treeNode) = createNode0Dec((yyvsp[0].dec), 'd');
    UT_string *s = float_as_str((yyvsp[0].dec));
    (yyval.treeNode) -> saved = utstring_body(s);
  }
#line 3606 "guillex.tab.c"
    break;

  case 66: /* constOp: NIL  */
#line 884 "guillex.y"
        {
    (yyval.treeNode) = createNode0Nil((yyvsp[0].str), 'n');
  }
#line 3614 "guillex.tab.c"
    break;

  case 67: /* inOp: READ PARENL ID PARENR SEMIC  */
#line 890 "guillex.y"
                             {
    (yyval.treeNode) = createNode2("READ PARENL ID PARENR SEMIC", createNode0((yyvsp[-4].str)), createNode0((yyvsp[-2].str)));
  }
#line 3622 "guillex.tab.c"
    break;

  case 68: /* outOp: WRITE PARENL outConst PARENR SEMIC  */
#line 896 "guillex.y"
                                      {
      (yyval.treeNode) = createNode2("WRITE PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
      writeFunc((yyvsp[-2].treeNode) -> saved);
      (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
    }
#line 3632 "guillex.tab.c"
    break;

  case 69: /* outOp: WRITELN PARENL outConst PARENR SEMIC  */
#line 901 "guillex.y"
                                         {
      (yyval.treeNode) = createNode2("WRITELN PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
      writelnFunc((yyvsp[-2].treeNode) -> saved);
      (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
  }
#line 3642 "guillex.tab.c"
    break;

  case 70: /* outConst: STRING  */
#line 909 "guillex.y"
           {
      (yyval.treeNode) = createNode1("STRING", createNode0((yyvsp[0].str)));
      (yyval.treeNode) -> saved = (yyvsp[0].str);
    }
#line 3651 "guillex.tab.c"
    break;

  case 71: /* outConst: simpleExp  */
#line 913 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 3660 "guillex.tab.c"
    break;

  case 72: /* outConst: listExp  */
#line 917 "guillex.y"
            {
    (yyval.treeNode) = createNode1("listExp", (yyvsp[0].treeNode));
    (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 3669 "guillex.tab.c"
    break;

  case 73: /* binLogicalExp: binLogicalExp binLogicalOp relationalOp  */
#line 924 "guillex.y"
                                           {
      (yyval.treeNode) = createNode3("binLogicalExp binLogicalOp relationalOp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3677 "guillex.tab.c"
    break;

  case 74: /* binLogicalExp: relationalExp  */
#line 927 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("relationalExp", (yyvsp[0].treeNode));
    (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 3686 "guillex.tab.c"
    break;

  case 75: /* binLogicalOp: OR  */
#line 935 "guillex.y"
       {
      (yyval.treeNode) = createNode1("OR", createNode0("||"));
    }
#line 3694 "guillex.tab.c"
    break;

  case 76: /* binLogicalOp: AND  */
#line 938 "guillex.y"
        {
      (yyval.treeNode) = createNode1("AND", createNode0("&&"));
  }
#line 3702 "guillex.tab.c"
    break;

  case 77: /* relationalExp: relationalExp relationalOp sumExp  */
#line 944 "guillex.y"
                                      {
      (yyval.treeNode) = createNode3("relationalExp relationalOp sumExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 3710 "guillex.tab.c"
    break;

  case 78: /* relationalExp: sumExp  */
#line 947 "guillex.y"
           {
      (yyval.treeNode) = createNode1("sumExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 3719 "guillex.tab.c"
    break;

  case 79: /* relationalOp: SMALLER  */
#line 955 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLER", createNode0("<"));
    }
#line 3727 "guillex.tab.c"
    break;

  case 80: /* relationalOp: GREATER  */
#line 958 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATER", createNode0(">"));
  }
#line 3735 "guillex.tab.c"
    break;

  case 81: /* relationalOp: SMALLEQ  */
#line 961 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLEQ", createNode0("<="));
  }
#line 3743 "guillex.tab.c"
    break;

  case 82: /* relationalOp: GREATEQ  */
#line 964 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATEQ", createNode0(">="));
  }
#line 3751 "guillex.tab.c"
    break;

  case 83: /* relationalOp: EQUALS  */
#line 967 "guillex.y"
           {
      (yyval.treeNode) = createNode1("EQUALS", createNode0("=="));
  }
#line 3759 "guillex.tab.c"
    break;

  case 84: /* relationalOp: DIFFERENT  */
#line 970 "guillex.y"
              {
      (yyval.treeNode) = createNode1("DIFFERENT", createNode0("!="));
  }
#line 3767 "guillex.tab.c"
    break;

  case 85: /* sumExp: sumExp ADD mulExp  */
#line 976 "guillex.y"
                      {
      (yyval.treeNode) = createNode3("sumExp add mulExp", (yyvsp[-2].treeNode), createNode0("+"), (yyvsp[0].treeNode));
      UT_string *s = create_new_reg(varReg);
      mathOpFile("add", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 3778 "guillex.tab.c"
    break;

  case 86: /* sumExp: sumExp SUB mulExp  */
#line 983 "guillex.y"
                          {
      (yyval.treeNode) = createNode3("sumExp sub mulExp", (yyvsp[-2].treeNode), createNode0("-"), (yyvsp[0].treeNode));
      UT_string *s = create_new_reg(varReg);
      mathOpFile("sub", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 3789 "guillex.tab.c"
    break;

  case 87: /* sumExp: mulExp  */
#line 989 "guillex.y"
           {
      (yyval.treeNode) = createNode1("mulExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 3798 "guillex.tab.c"
    break;

  case 88: /* mulExp: mulExp MULT factor  */
#line 996 "guillex.y"
                       {
      (yyval.treeNode) = createNode3("mulExp mulOp factor", (yyvsp[-2].treeNode), createNode0("*"), (yyvsp[0].treeNode));
      UT_string *s = create_new_reg(varReg);
      mathOpFile("mul", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 3809 "guillex.tab.c"
    break;

  case 89: /* mulExp: mulExp DIV factor  */
#line 1003 "guillex.y"
                       {
      (yyval.treeNode) = createNode3("mulExp mulOp factor", (yyvsp[-2].treeNode), createNode0("/"), (yyvsp[0].treeNode));
      UT_string *s = create_new_reg(varReg);
      mathOpFile("div", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 3820 "guillex.tab.c"
    break;

  case 90: /* mulExp: factor  */
#line 1009 "guillex.y"
           {
      (yyval.treeNode) = createNode1("factor", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 3829 "guillex.tab.c"
    break;

  case 91: /* mulExp: ADD factor  */
#line 1013 "guillex.y"
               {
      (yyval.treeNode) = createNode2("ADD factor", createNode0("+"), (yyvsp[0].treeNode));
  }
#line 3837 "guillex.tab.c"
    break;

  case 92: /* mulExp: SUB factor  */
#line 1016 "guillex.y"
               {
      (yyval.treeNode) = createNode2("SUB factor", createNode0("-"), (yyvsp[0].treeNode));
  }
#line 3845 "guillex.tab.c"
    break;

  case 93: /* factor: ID  */
#line 1023 "guillex.y"
       {
      argsParams++;
      (yyval.treeNode) = createNode1("ID", createNode0((yyvsp[0].str)));
      (yyval.treeNode) -> saved = (yyvsp[0].str);
    }
#line 3855 "guillex.tab.c"
    break;

  case 94: /* factor: fCall  */
#line 1028 "guillex.y"
          {
      (yyval.treeNode) = createNode1("fCall", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 3864 "guillex.tab.c"
    break;

  case 95: /* factor: PARENL simpleExp PARENR  */
#line 1032 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("PARENL simpleExp PARENR", (yyvsp[-1].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[-1].treeNode) -> saved;
  }
#line 3873 "guillex.tab.c"
    break;

  case 96: /* factor: constOp  */
#line 1036 "guillex.y"
            {
      (yyval.treeNode) = createNode1("constOp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 3882 "guillex.tab.c"
    break;

  case 97: /* factor: ERRORTOKEN  */
#line 1040 "guillex.y"
               {
      (yyval.treeNode) = createNodeE();
    }
#line 3890 "guillex.tab.c"
    break;

  case 98: /* fCall: ID PARENL callParams PARENR  */
#line 1046 "guillex.y"
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
#line 3916 "guillex.tab.c"
    break;

  case 99: /* fCall: ID PARENL PARENR  */
#line 1067 "guillex.y"
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
#line 3940 "guillex.tab.c"
    break;

  case 100: /* callParams: callParams COMMA simpleExp  */
#line 1089 "guillex.y"
                               {
      (yyval.treeNode) = createNode2("callParams COMMA simpleExp", (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
    }
#line 3949 "guillex.tab.c"
    break;

  case 101: /* callParams: simpleExp  */
#line 1093 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 3958 "guillex.tab.c"
    break;


#line 3962 "guillex.tab.c"

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

#line 1101 "guillex.y"


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
