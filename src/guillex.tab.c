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
  bool terminal;
  char  returnType;
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
  node -> returnType = 'x';
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
  node -> nodeType = '\0';
  node -> returnType = 'x';
  node -> left = NULL;
  node -> leftMiddle = NULL;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode0String(char *nodeValue) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> nodeValue = nodeValue;
  node -> nodeType = 's';
  node -> returnType = 'x'; 
  node -> terminal = true;
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
  node -> nodeType = nodeType;
  node -> returnType = 'x'; 
  node -> terminal = true;
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
  node -> nodeType = nodeType;
  node -> returnType = 'x'; 
  node -> terminal = true;
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
  node -> nodeType = nodeType;
  node -> returnType = 'x'; 
  node -> terminal = true;
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
  node -> nodeType = '\0';
  node -> returnType = 'x';
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
  node -> nodeType = '\0';
  node -> returnType = 'x';
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
  node -> nodeType = '\0';
  node -> returnType = 'x';
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
  node -> nodeType = '\0';
  node -> returnType = 'x';
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
  node -> nodeType = '\0';
  node -> returnType = 'x';
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
        if(node -> nodeType == 'n')
          printf(">   %s\n", node -> nodeValue);
        if(node -> nodeType == '\0')
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

struct symbol *checkIsInScope(char *name, int num) {
  struct symbol *s;
  Scope *scope;
  Scope *scopeAux;

  for (scope = stackScope; !STACK_EMPTY(scope);){
    for (s = symbolTable; s != NULL; s = s -> hh.next){
      if (strcmp(s -> name, name) == 0 && s -> scope == scope -> value && (strcmp(s -> symbolType, "var") == 0 || strcmp(s -> symbolType, "param") == 0)){
        return s;
      }
    }
    STACK_POP(scope, scopeAux);
  }
  return NULL;
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

char checkTypes(char type1, char type2) {
  if (type1 == type2)
    return type1;
  if (type1 == 'i' && type2 == 'f')
    return 'f';
  if (type1 == 'f' && type2 == 'i')
    return 'f';
  return 'n';
}

bool checkTypesVar(char varType, char value) {
  printf("<><><><><><>%c, %c<><><><><><>", varType, value);
  if (varType == 'i' && (value == 'i' || value == 'f'))
  return true;
  if (varType == 'f' && (value == 'i' || value == 'f'))
    return true;
  if (varType == value)
    return true;
  return false;
}

int checkTypesReturnFunction(char value, char returnType) {

  printf("<><><><><><>%c, %c<><><><><><>", value, returnType);
  if (returnType == 'v' && value != 'x')
    return 0;
  if (returnType != 'v' && value == 'x')
    return 1;
  if (returnType == value || (returnType == 'v' && value == 'x'))
    return 2;
  return 3;
}


#line 617 "guillex.tab.c"

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
  YYSYMBOL_inOp = 71,                      /* inOp  */
  YYSYMBOL_outOp = 72,                     /* outOp  */
  YYSYMBOL_outConst = 73,                  /* outConst  */
  YYSYMBOL_binListExp = 74,                /* binListExp  */
  YYSYMBOL_unaryListExp = 75,              /* unaryListExp  */
  YYSYMBOL_binLogicalExp = 76,             /* binLogicalExp  */
  YYSYMBOL_binLogicalOp = 77,              /* binLogicalOp  */
  YYSYMBOL_relationalExp = 78,             /* relationalExp  */
  YYSYMBOL_relationalOp = 79,              /* relationalOp  */
  YYSYMBOL_sumExp = 80,                    /* sumExp  */
  YYSYMBOL_mulExp = 81,                    /* mulExp  */
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
#define YYLAST   6134

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  404

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
       0,   585,   585,   591,   594,   597,   605,   608,   614,   619,
     619,   619,   642,   642,   642,   668,   697,   700,   703,   711,
     722,   728,   735,   741,   745,   748,   751,   754,   758,   761,
     764,   770,   777,   784,   787,   794,   801,   809,   809,   825,
     825,   836,   836,   849,   857,   861,   869,   893,   898,   906,
     912,   917,   925,   930,   937,   941,   946,   952,   956,   963,
     966,   974,   977,   983,   986,   994,   997,  1000,  1003,  1006,
    1009,  1015,  1023,  1030,  1038,  1046,  1053,  1058,  1062,  1066,
    1074,  1087,  1092,  1097,  1103,  1109,  1113,  1119,  1141,  1163,
    1168
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
  "$@7", "returnStmt", "expression", "assignExp", "simpleExp", "inOp",
  "outOp", "outConst", "binListExp", "unaryListExp", "binLogicalExp",
  "binLogicalOp", "relationalExp", "relationalOp", "sumExp", "mulExp",
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

#define YYPACT_NINF (-217)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      25,    44,    21,    35,    85,   131,   162,   169,   -20,   133,
    -217,   178,   190,    18,   128,    -5,   161,    40,   171,   179,
      39,   191,   101,    49,  3345,   216,  3384,  3423,  3423,  5415,
      54,  5487,  5513,  5539,  5565,    73,    73,    73,    73,    65,
      70,    78,    79,    89,   115,  3423,   614,  2253,  2292,  2331,
    2370,  2409,  2448,  3462,  2487,  2526,   100,   102,   105,  2565,
    2604,   107,  5721,    17,   579,  6075,  5733,  5591,  5617,  2643,
     115,    33,   113,  5475,  5759,  5771,  5797,  5809,   614,   115,
      59,    58,    58,   118,  2682,   126,   268,  2721,  2760,  1308,
    2799,   731,   999,  1136,  1195,  1231,  3733,  3741,  3772,  3780,
    1136,  1136,  1136,    73,    73,    95,    95,    95,   273,   123,
    5643,   237,   238,   129,   139,   156,   135,   166,   172,   174,
     192,  2838,  2877,  5669,  1354,  3501,  2916,  1355,  5835,  6097,
    5847,  5873,  5885,  5911,   182,   183,   204,  3811,  5695,  3540,
    3819,  3819,   205,   206,   211,  2955,  3423,   245,   212,   218,
    2994,  3033,  3072,  3111,   263,   263,   260,   225,   232,  3579,
    3618,  3423,  3423,  3150,  3189,   261,  5923,  5949,  5961,  5987,
     614,  5999,  3966,  4276,  4307,  4338,  4369,   140,   140,   140,
     140,   614,   249,  4985,    14,   502,  3343,  4997,  4400,  4431,
     267,   281,   283,   292,   115,  1395,   303,  1434,  1473,  1512,
    3657,  1551,  1590,   305,  1629,  1668,  3904,  3997,  4028,  4059,
    4090,   177,   177,   177,   177,   614,   246,  4555,    96,   928,
    1264,  4567,  4121,  4152,    84,  3228,   253,   306,   311,   313,
     314,   614,   319,  5445,  3850,  3267,   332,   198,  4598,  5028,
    5040,  5071,  5083,   614,  5114,  5126,  5157,  5169,  5200,   341,
    3858,  3858,  3858,  3858,   140,   140,   189,   189,   189,   115,
     393,    58,    58,   347,  1707,  3306,  1746,  1785,   219,   297,
    4610,  4641,  4653,  4684,   614,  4696,  4727,  4739,  4770,  4782,
     355,  3889,  3889,  3889,  3889,   177,   177,   256,   256,   256,
    6025,   254,  1824,   244,   356,  3935,   365,   366,   367,  6037,
    4462,   257,   379,   374,  4493,  3421,  5212,  3382,  5243,  5255,
    5286,  5298,    53,   375,   385,   391,   404,   614,   405,   407,
     417,   418,   426,   427,   423,   424,   425,  1863,  1902,  3501,
    1941,  4183,   287,   488,   431,  4214,  4294,  4813,  5384,  4825,
    4856,  4868,  4899,    31,   289,   307,   351,   352,   614,   357,
     368,   380,   381,  6063,   438,   387,   439,  4524,  5329,   388,
    5341,   543,   435,  3819,  3819,   441,   442,   453,  1980,  3696,
    4245,  4911,   390,  4942,   551,   450,   461,  5372,   457,   397,
     462,   466,   469,  2019,  2058,  2097,  3423,  2136,  4954,   398,
     400,   403,   465,   263,   263,   406,   467,   468,  3579,  3618,
    3696,  3696,  2175,  2214
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -217,  -217,  -217,   504,     0,  -217,  -217,  -217,  -217,  -217,
       2,  -217,   489,   -48,    23,   -46,   -41,   -39,   -37,  -113,
     197,   -35,   130,   132,   -33,   -43,   -47,   699,   -28,   -25,
     -73,   957,   623,  1036,  -169,   897,  -172,   818,   560,   200,
     434,  -216
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    47,     7,    14,    28,    15,    27,
     165,    18,    19,    48,   225,    50,    51,    52,    53,   126,
     146,    54,   161,   162,    55,    56,    57,    58,    59,    60,
     119,    61,    62,    63,    93,    64,   100,    65,    66,    67,
      68,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    83,     8,    87,     6,   197,     8,    89,   291,   120,
     203,   145,   198,   251,   199,   250,   200,    12,   201,    -9,
     202,   301,    -9,    87,     9,   204,     1,   109,   205,     2,
      91,    92,   114,    91,    92,    10,   206,    20,    87,   207,
     208,   209,   210,    21,    -5,   211,   212,   282,    -5,   281,
      49,    69,   332,   195,   -47,   196,   -47,    72,   213,   214,
     -12,   172,   116,   117,   173,   174,   175,   176,    84,   -80,
     177,   178,   374,   -80,   215,   110,    73,   355,    24,   166,
     167,   168,   169,   179,   180,    -2,   359,   206,    26,     2,
     207,   208,   209,   210,   361,   -80,   211,   212,   226,   181,
     153,   227,   228,   229,   230,    17,    78,   157,   158,   213,
     214,    79,    91,    92,   170,   163,   164,   372,    29,    80,
      81,    31,    32,    33,    34,   215,   290,    35,    36,    16,
      82,    -4,    17,   251,   -47,    -4,   231,    90,   -47,   -44,
      37,    38,   -45,   238,   -48,   379,   239,   240,   241,   242,
     -15,   263,   197,   330,   266,   121,    46,   203,   390,   198,
     -46,   199,    -6,   200,   282,   201,    -6,   202,   123,    -7,
     -15,   139,   204,    -7,    13,   205,   140,   142,    -3,    87,
     269,   243,    -3,   270,   271,   272,   273,   297,   325,   326,
      -8,   296,   312,   141,    -8,   313,   314,   315,   316,   -18,
     195,   206,   196,   -18,   207,   208,   209,   210,   -52,    22,
     211,   212,   322,    23,   -53,   368,   143,   -17,   274,   -54,
     -56,   -17,   206,   213,   214,   207,   208,   209,   210,   -19,
     317,   211,   212,   -19,   144,    74,    75,    76,    77,   215,
     300,   -55,   150,   151,   213,   214,   188,   206,   152,   154,
     207,   208,   209,   210,   -16,   155,   211,   212,   -16,   343,
     215,   331,   344,   345,   346,   347,   156,   159,   -14,   213,
     214,   222,   -14,   -11,   160,   -90,   137,   -11,   188,   -90,
     138,   188,   188,   -89,   -48,   215,   354,   -89,   -48,   234,
     -80,   -48,   137,   128,   293,   137,   353,   348,   235,   357,
     128,   128,   128,   132,   133,   134,   135,   136,   259,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   197,   260,   387,   261,   137,   203,   -85,   198,   370,
     199,   -85,   200,   262,   201,   -80,   202,   222,   333,   -80,
     264,   204,   267,   -85,   205,   -83,   396,   397,   -83,   -83,
     -84,   -86,   197,   197,   402,   403,   -81,   203,   203,   198,
     198,   199,   199,   200,   200,   201,   201,   202,   202,   195,
     188,   196,   204,   204,   299,   205,   205,   244,   246,   247,
     248,   188,   206,   304,   327,   207,   208,   209,   210,   -84,
     -86,   211,   212,   -84,   -86,   -54,   324,   335,   356,   -54,
     195,   195,   196,   196,   213,   214,   -81,   -46,   -44,   -45,
     -81,   275,   277,   278,   279,   188,   360,   -85,   -56,   -55,
     215,   358,   -56,   -55,   222,   137,   137,   -83,   137,   376,
     377,   188,   388,   -84,   188,   137,   -88,   222,   137,   392,
     -88,   -82,   395,   188,   -87,   -82,   -86,   -54,   -87,   -81,
     306,   306,   306,   306,   310,   311,   318,   320,   321,   -56,
     -55,   188,   188,   363,   364,   365,   366,   367,   222,   171,
     171,   171,   171,   373,   188,   -88,   -82,   380,   383,   384,
     189,   337,   337,   337,   337,   341,   342,   349,   351,   352,
     385,   206,   391,   222,   207,   208,   209,   210,   -87,   -88,
     211,   212,   222,   393,   -82,   223,   394,   -87,    11,   398,
     399,    25,   189,   213,   214,   189,   189,   188,   -60,   -60,
      94,    95,    96,    97,    98,    99,   369,   171,   400,   215,
     371,   401,     0,   222,   171,   171,   171,   171,   171,   232,
     232,   232,     0,     0,   -60,     0,   206,     0,   188,   207,
     208,   209,   210,     0,   206,   211,   212,   207,   208,   209,
     210,   222,     0,   211,   212,     0,     0,     0,   213,   214,
       0,   223,     0,     0,   222,     0,   213,   214,     0,     0,
       0,     0,     0,     0,   215,   378,     0,     0,     0,     0,
       0,     0,   215,   389,     0,   -60,   -60,    94,    95,    96,
      97,    98,    99,     0,   189,     0,   187,     0,     0,     0,
       0,   245,   245,   245,   245,   189,   -60,   172,     0,     0,
     173,   174,   175,   176,     0,     0,   177,   178,     0,     0,
       0,   221,     0,     0,     0,     0,     0,     0,   187,   179,
     180,   187,   187,     0,     0,   276,   276,   276,   276,   189,
       0,     0,     0,     0,     0,   181,     0,     0,   223,     0,
       0,   130,   131,     0,     0,   189,     0,     0,   189,   183,
       0,   223,     0,     0,     0,     0,     0,   189,     0,     0,
       0,     0,     0,     0,   245,   245,   245,   245,   245,   245,
     319,   319,   319,     0,   217,   189,   189,   221,     0,     0,
       0,   183,   223,     0,   183,   183,     0,     0,   189,     0,
       0,     0,     0,     0,     0,   276,   276,   276,   276,   276,
     276,   350,   350,   350,     0,     0,     0,   223,     0,     0,
     187,     0,     0,     0,   -61,     0,   223,   -61,   -61,   -61,
     -61,   187,     0,   -61,   -61,    85,     0,     0,     0,     0,
       0,   189,     0,     0,     0,     0,   -61,   -61,     0,     0,
     217,     0,     0,     0,     0,     0,     0,   223,     0,     0,
     111,     0,   -61,     0,     0,   187,     0,   113,   115,     0,
     118,   118,   189,     0,   221,     0,     0,     0,     0,     0,
       0,   187,     0,   183,   187,   223,     0,   221,     0,     0,
       0,     0,     0,   187,   183,     0,     0,     0,   223,     0,
     187,   187,   308,   309,     0,     0,     0,     0,     0,     0,
       0,   187,   187,     0,     0,     0,     0,     0,   221,     0,
       0,     0,     0,     0,   187,     0,   147,     0,   183,   148,
     149,   221,   221,   339,   340,     0,     0,   217,     0,     0,
       0,     0,     0,   221,   183,     0,     0,   183,     0,     0,
     217,     0,   221,     0,   186,     0,   183,     0,     0,   236,
       0,     0,     0,   183,   183,   183,   183,   187,     0,     0,
     249,     0,     0,     0,   183,   183,     0,     0,     0,   220,
       0,   217,     0,   221,     0,     0,   186,   183,     0,   186,
     186,     0,     0,     0,   217,   217,   217,   217,   187,     0,
       0,     0,     0,     0,   280,     0,   217,     0,   129,     0,
       0,   221,     0,   111,     0,   217,     0,     0,     0,     0,
     294,     0,     0,   298,   221,     0,   111,     0,     0,     0,
     183,     0,   303,   185,   -60,   -60,    94,    95,    96,    97,
      98,    99,     0,     0,     0,   220,   217,     0,   323,     0,
     118,   118,     0,     0,     0,     0,   -60,   111,   219,     0,
     -60,   183,     0,   334,     0,   185,     0,     0,   185,   185,
       0,     0,     0,     0,   217,     0,     0,     0,   186,     0,
     127,     0,   111,     0,     0,     0,     0,   217,     0,   186,
       0,   111,   -62,   182,     0,   -62,   -62,   -62,   -62,     0,
       0,   -62,   -62,     0,     0,     0,   362,     0,     0,     0,
       0,     0,     0,     0,   -62,   -62,     0,     0,   216,     0,
       0,     0,   111,   186,   219,   182,     0,     0,   182,   182,
     -62,     0,   220,     0,     0,     0,     0,   375,     0,   186,
       0,     0,   186,     0,     0,   220,     0,     0,     0,     0,
     111,   186,   381,   382,     0,     0,     0,   185,   186,   307,
       0,     0,     0,   111,     0,     0,     0,     0,   185,   186,
     186,     0,   184,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   186,     0,   216,     0,     0,     0,     0,   220,
     338,     0,     0,     0,     0,     0,     0,   218,     0,     0,
       0,   220,   185,     0,   184,     0,     0,   184,   184,     0,
     220,   219,     0,     0,     0,     0,     0,   182,   185,     0,
       0,   185,     0,     0,   219,   186,     0,     0,   182,    73,
     185,     0,   166,   167,   168,   169,     0,   305,    35,    36,
       0,   220,     0,     0,     0,     0,     0,     0,   185,   185,
       0,    37,    38,     0,     0,   219,   186,     0,     0,     0,
       0,   185,   182,   218,     0,     0,     0,   170,   336,   220,
       0,   216,     0,     0,     0,     0,     0,     0,   182,     0,
     219,   182,   220,     0,   216,     0,     0,     0,   -65,   219,
     182,   -65,   -65,   -65,   -65,     0,   184,   -65,   -65,     0,
       0,     0,     0,     0,   185,     0,     0,   184,   182,   182,
     -65,   -65,     0,     0,     0,   216,     0,     0,     0,     0,
     219,   182,     0,     0,   -66,     0,   -65,   -66,   -66,   -66,
     -66,     0,     0,   -66,   -66,   185,     0,     0,     0,     0,
     216,   184,     0,     0,     0,     0,   -66,   -66,   219,   216,
     218,     0,     0,     0,     0,     0,     0,   184,     0,     0,
     184,   219,   -66,   218,   182,     0,   283,   284,     0,   184,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
     216,     0,     0,     0,     0,     0,     0,   184,   184,     0,
       0,     0,   -64,     0,   218,   182,   -64,     0,     0,     0,
     184,   -32,   -32,     0,   -32,   -32,   -32,   -32,   216,   125,
     -32,   -32,     0,     0,     0,     0,     0,     0,     0,   218,
       0,   216,     0,   -32,   -32,     0,     0,     0,   218,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,   -32,
       0,     0,     0,   184,     0,     0,     0,   -34,   -34,     0,
     -34,   -34,   -34,   -34,     0,   125,   -34,   -34,     0,   218,
       0,   -59,   -59,    94,    95,    96,    97,    98,    99,   -34,
     -34,     0,     0,     0,   184,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -59,   -34,   -34,   -34,     0,   218,   -30,   -30,
       0,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,
     218,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -30,   -30,     0,     0,     0,     0,   -30,   -30,   -30,   -30,
     -30,   -30,     0,     0,   -30,   -30,   -30,   -24,   -24,     0,
     -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -24,
     -24,     0,     0,     0,     0,   -24,   -24,   -24,   -24,   -24,
     -24,     0,     0,   -24,   -24,   -24,   -23,   -23,     0,   -23,
     -23,   -23,   -23,     0,   -23,   -23,   -23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -23,   -23,
       0,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,   -23,   -23,   -23,   -25,   -25,     0,   -25,   -25,
     -25,   -25,     0,   -25,   -25,   -25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -25,   -25,     0,
       0,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,   -25,   -25,   -26,   -26,     0,   -26,   -26,   -26,
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
     -32,     0,   -32,   -32,   -32,   -32,     0,   329,   -32,   -32,
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
     -34,   -34,     0,   329,   -34,   -34,     0,     0,     0,     0,
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
     -35,   -35,   -49,   -49,     0,   -49,   -49,   -49,   -49,     0,
     -49,   -49,   -49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -49,   -49,     0,     0,     0,     0,
     -49,   -49,   -49,   -49,   -49,   -49,     0,     0,   -49,   -49,
     -49,   -50,   -50,     0,   -50,   -50,   -50,   -50,     0,   -50,
     -50,   -50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -50,   -50,     0,     0,     0,     0,   -50,
     -50,   -50,   -50,   -50,   -50,     0,     0,   -50,   -50,   -50,
     -51,   -51,     0,   -51,   -51,   -51,   -51,     0,   -51,   -51,
     -51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -51,   -51,     0,     0,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,     0,     0,   -51,   -51,   -51,   -38,
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
      45,    86,    46,   -22,   -22,     0,   -22,   -22,   -22,   -22,
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
       0,     0,    45,   108,    46,    29,    30,     0,    31,    32,
      33,    34,     0,     0,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    38,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,     0,
       0,    45,   122,    46,   -21,   -21,     0,   -21,   -21,   -21,
     -21,     0,     0,   -21,   -21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -21,   -21,     0,     0,
       0,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,   -21,   -21,    29,    30,     0,    31,    32,    33,    34,
       0,     0,    35,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    38,     0,     0,     0,
       0,    39,    40,    41,    42,    43,    44,     0,     0,    45,
     124,    46,   -31,   -31,     0,   -31,   -31,   -31,   -31,     0,
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
     -35,   -35,     0,     0,   -35,   -35,   -35,   -49,   -49,     0,
     -49,   -49,   -49,   -49,     0,     0,   -49,   -49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -49,
     -49,     0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,
     -49,     0,     0,   -49,   -49,   -49,   -50,   -50,     0,   -50,
     -50,   -50,   -50,     0,     0,   -50,   -50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -50,   -50,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
       0,     0,   -50,   -50,   -50,   -51,   -51,     0,   -51,   -51,
     -51,   -51,     0,     0,   -51,   -51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -51,   -51,     0,
       0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,     0,
       0,   -51,   -51,   -51,   -38,   -38,     0,   -38,   -38,   -38,
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
      40,    41,    42,    43,    44,     0,     0,    45,   292,    46,
      -8,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,    -8,
      -8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,    -8,    -8,    -8,    29,
      30,     0,    31,    32,    33,    34,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,    38,     0,     0,     0,     0,    39,    40,    41,
      42,    43,    44,     0,     0,    45,   328,    46,   -13,   -13,
       0,   -13,   -13,   -13,   -13,   252,   253,   -13,   -13,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
     -13,   -13,     0,     0,     0,     0,   -13,   -13,   -13,   -13,
     -13,   -13,     0,     0,   -13,   -64,   -13,   -10,   -10,     0,
     -10,   -10,   -10,   -10,   252,   253,   -10,   -10,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,   -10,
     -10,     0,     0,     0,     0,   -10,   -10,   -10,   -10,   -10,
     -10,     0,     0,   -10,   -63,   -10,    29,    30,     0,    31,
      32,    33,    34,     0,     0,    35,    36,   -59,   -59,    94,
      95,    96,    97,    98,    99,     0,     0,     0,    37,    38,
       0,     0,     0,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,   -59,    46,    29,    30,     0,    31,    32,
      33,    34,     0,     0,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    38,     0,
       0,     0,     0,    39,   190,   191,   192,   193,   194,     0,
       0,    88,     0,    46,   -37,   -37,     0,   -37,   -37,   -37,
     -37,     0,     0,   -37,   -37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -37,   -37,     0,     0,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
     -37,     0,   -37,   -36,   -36,     0,   -36,   -36,   -36,   -36,
       0,     0,   -36,   -36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -36,   -36,     0,     0,     0,
       0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,   -36,
       0,   -36,   -39,   -39,     0,   -39,   -39,   -39,   -39,     0,
       0,   -39,   -39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -39,   -39,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,   -39,     0,
     -39,   -41,   -41,     0,   -41,   -41,   -41,   -41,     0,     0,
     -41,   -41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -41,   -41,     0,     0,     0,     0,   -41,
     -41,   -41,   -41,   -41,   -41,     0,     0,   -41,     0,   -41,
      29,    30,     0,    31,    32,    33,    34,     0,     0,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    38,     0,     0,     0,     0,    39,   190,
     191,   192,   193,   194,     0,     0,   265,     0,    46,    29,
      30,     0,    31,    32,    33,    34,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,    38,     0,     0,     0,     0,    39,   190,   191,
     192,   193,   194,     0,     0,   386,   -67,    46,     0,   -67,
     -67,   -67,   -67,     0,   -68,   -67,   -67,   -68,   -68,   -68,
     -68,     0,     0,   -68,   -68,     0,     0,     0,   -67,   -67,
       0,     0,     0,     0,     0,     0,   -68,   -68,     0,     0,
       0,     0,     0,     0,   -67,   -69,     0,     0,   -69,   -69,
     -69,   -69,   -68,   -70,   -69,   -69,   -70,   -70,   -70,   -70,
       0,     0,   -70,   -70,     0,     0,     0,   -69,   -69,     0,
       0,     0,     0,     0,     0,   -70,   -70,     0,     0,     0,
       0,     0,     0,   -69,   206,     0,     0,   207,   208,   209,
     210,   -70,   233,   211,   212,    31,    32,    33,    34,     0,
       0,    35,    36,     0,     0,     0,   213,   214,     0,     0,
       0,     0,     0,     0,    37,    38,     0,     0,     0,     0,
       0,     0,   215,   295,     0,     0,   173,   174,   175,   176,
      46,   238,   177,   178,   239,   240,   241,   242,     0,     0,
     177,   178,     0,     0,     0,   179,   180,     0,     0,     0,
       0,     0,     0,   179,   180,     0,     0,     0,     0,     0,
       0,   181,   269,     0,     0,   270,   271,   272,   273,   243,
       0,   211,   212,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,   214,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     274,     0,   -80,     0,   -80,     0,     0,     0,     0,     0,
       0,     0,   -80,     0,     0,   268,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,   -80,   234,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,   -80,     0,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   -80,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,   -85,     0,   -85,     0,     0,
       0,     0,     0,     0,     0,   -85,     0,     0,     0,   -85,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,   -83,     0,   -83,     0,
       0,     0,     0,     0,     0,     0,   -83,     0,     0,     0,
     -83,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,   -84,     0,   -84,
       0,     0,     0,     0,     0,     0,     0,   -84,     0,     0,
       0,   -84,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,     0,   -86,     0,
     -86,     0,     0,     0,     0,     0,     0,     0,   -86,     0,
       0,     0,   -86,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   287,     0,     0,     0,   288,
       0,   289,     0,     0,     0,     0,     0,     0,     0,   -76,
       0,     0,     0,   -76,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
     -81,     0,   -81,     0,     0,     0,     0,     0,     0,     0,
     -81,     0,     0,     0,   -81,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,   -88,     0,   -88,     0,     0,     0,     0,     0,     0,
       0,   -88,     0,     0,     0,   -88,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,   -82,     0,   -82,     0,     0,     0,     0,     0,
       0,     0,   -82,     0,     0,     0,   -82,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,   -87,     0,   -87,     0,     0,     0,     0,
       0,     0,     0,   -87,     0,     0,     0,   -87,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,   -85,     0,   -85,     0,     0,     0,
     -59,   -59,    94,    95,    96,    97,    98,    99,   -85,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -59,     0,     0,   -83,   -59,   -83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -83,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,   -84,     0,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,   -86,     0,   -86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -86,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   256,     0,     0,     0,   257,     0,
     258,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -76,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,   -81,
       0,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
     -88,     0,   -88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -88,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,   -82,     0,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,   -87,     0,   -87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -87,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -73,
     -73,   285,   286,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,   -79,     0,     0,     0,   -79,     0,     0,
       0,     0,     0,     0,     0,   -73,     0,     0,     0,   -73,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,   302,
     -80,     0,     0,     0,     0,     0,     0,     0,   -85,     0,
       0,     0,   -85,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,   -83,
       0,     0,     0,   -83,     0,     0,     0,     0,     0,     0,
       0,   -84,     0,     0,     0,   -84,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,   -86,     0,     0,     0,   -86,     0,     0,     0,
       0,     0,     0,     0,   -77,     0,     0,     0,   -77,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,   -81,     0,     0,     0,   -81,
       0,     0,     0,     0,     0,     0,     0,   -78,     0,     0,
       0,   -78,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,     0,     0,   -57,     0,
       0,     0,   -57,     0,     0,     0,     0,     0,     0,     0,
     -58,     0,     0,     0,   -58,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -71,   -71,   285,
     286,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,   -76,     0,     0,     0,   -76,     0,     0,     0,     0,
       0,     0,     0,   -71,     0,     0,     0,   -71,   -72,   -72,
     285,   286,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,   -72,     0,     0,     0,   -72,     0,
       0,     0,     0,     0,     0,     0,   -74,     0,     0,     0,
     -74,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,   -75,     0,     0,
       0,   -75,     0,     0,     0,     0,     0,     0,     0,   -88,
       0,     0,     0,   -88,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
     -82,     0,     0,     0,   -82,     0,     0,     0,     0,     0,
       0,     0,   -87,     0,     0,     0,   -87,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -73,
     -73,   254,   255,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,     0,     0,   -79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -73,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,     0,
     -85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,   -84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -86,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,     0,     0,   -77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,     0,     0,     0,     0,     0,     0,   -78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -57,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,
       0,     0,   -58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -76,   -71,   -71,   254,   255,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,   254,
     255,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,   -71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -72,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,   -74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -75,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
       0,   -88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -82,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   283,   284,     0,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,
       0,     0,     0,     0,   -87,     0,     0,     0,     0,     0,
       0,     0,   -63,     0,     0,     0,   -63,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,   -80,    70,   -80,     0,     0,     0,     0,
       0,     0,   -80,     0,     0,     0,    71,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,   -80,     0,   -80,     0,     0,     0,     0,
       0,     0,   -80,     0,     0,     0,    71,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -80,     0,     0,   -85,   224,   -85,     0,     0,
       0,     0,     0,     0,   -85,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,   -83,     0,   -83,     0,     0,     0,     0,     0,     0,
     -83,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,   -84,     0,   -84,
       0,     0,     0,     0,     0,     0,   -84,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,   -86,     0,   -86,     0,     0,     0,     0,
       0,     0,   -86,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   105,     0,     0,     0,   106,
       0,   107,     0,     0,     0,     0,     0,     0,   -76,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,   -81,     0,   -81,     0,     0,
       0,     0,     0,     0,   -81,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,   -88,     0,   -88,     0,     0,     0,     0,     0,     0,
     -88,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,   -82,     0,   -82,
       0,     0,     0,     0,     0,     0,   -82,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,   -87,     0,   -87,     0,     0,     0,     0,
       0,     0,   -87,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -73,   -73,   103,   104,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -73,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,   -77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -78,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,     0,   -57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -58,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -71,
     -71,   103,   104,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,   -76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -71,   -72,   -72,   103,   104,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
     -72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -74,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -85,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -84,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -81,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,   -88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -82,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   101,   102,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -87,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     102,     0,   -64,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -63
};

static const yytype_int16 yycheck[] =
{
       0,    44,     0,    49,     4,    53,     4,    53,   224,    82,
      53,   124,    53,   185,    53,   184,    53,    37,    53,     1,
      53,   237,     4,    69,     3,    53,     1,    70,    53,     4,
      16,    17,    79,    16,    17,     0,     3,    42,    84,     6,
       7,     8,     9,     3,     0,    12,    13,   219,     4,   218,
      27,    28,   268,    53,    37,    53,    42,     3,    25,    26,
      42,     3,     3,     5,     6,     7,     8,     9,    45,    38,
      12,    13,    41,    42,    41,    42,     3,   293,    39,     6,
       7,     8,     9,    25,    26,     0,   302,     3,    39,     4,
       6,     7,     8,     9,    41,    42,    12,    13,     3,    41,
     146,     6,     7,     8,     9,     4,    41,   154,   155,    25,
      26,    41,    16,    17,    41,   161,   162,   333,     3,    41,
      41,     6,     7,     8,     9,    41,    42,    12,    13,     1,
      41,     0,     4,   305,    38,     4,    41,    37,    42,    37,
      25,    26,    37,     3,    37,   361,     6,     7,     8,     9,
      37,   194,   200,   266,   200,    37,    41,   200,   374,   200,
      37,   200,     0,   200,   336,   200,     4,   200,    42,     0,
      37,    42,   200,     4,    41,   200,    37,    42,     0,   225,
       3,    41,     4,     6,     7,     8,     9,   234,   261,   262,
       0,   234,     3,    37,     4,     6,     7,     8,     9,    38,
     200,     3,   200,    42,     6,     7,     8,     9,    42,    38,
      12,    13,   259,    42,    42,   328,    42,    38,    41,    37,
      37,    42,     3,    25,    26,     6,     7,     8,     9,    38,
      41,    12,    13,    42,    42,    35,    36,    37,    38,    41,
      42,    37,    37,    37,    25,    26,    46,     3,    37,    37,
       6,     7,     8,     9,    38,    37,    12,    13,    42,     3,
      41,    42,     6,     7,     8,     9,     3,    42,     0,    25,
      26,    71,     4,     0,    42,    38,    38,     4,    78,    42,
      42,    81,    82,    38,    38,    41,    42,    42,    42,    29,
      37,    42,    38,    93,    41,    38,    42,    41,    37,    42,
     100,   101,   102,   103,   104,   105,   106,   107,    41,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   369,    41,   369,    41,    38,   369,    38,   369,    42,
     369,    42,   369,    41,   369,    38,   369,   137,    41,    42,
      37,   369,    37,    37,   369,    38,   393,   394,    37,    42,
      37,    37,   400,   401,   400,   401,    37,   400,   401,   400,
     401,   400,   401,   400,   401,   400,   401,   400,   401,   369,
     170,   369,   400,   401,    42,   400,   401,   177,   178,   179,
     180,   181,     3,    42,    37,     6,     7,     8,     9,    38,
      38,    12,    13,    42,    42,    38,     3,    42,    42,    42,
     400,   401,   400,   401,    25,    26,    38,    42,    42,    42,
      42,   211,   212,   213,   214,   215,    42,    42,    38,    38,
      41,    42,    42,    42,   224,    38,    38,    42,    38,    42,
      42,   231,    42,    42,   234,    38,    38,   237,    38,    42,
      42,    38,    42,   243,    38,    42,    42,    42,    42,    42,
     250,   251,   252,   253,   254,   255,   256,   257,   258,    42,
      42,   261,   262,    37,    37,    42,    42,    42,   268,    35,
      36,    37,    38,    42,   274,    37,    37,    42,    37,    37,
      46,   281,   282,   283,   284,   285,   286,   287,   288,   289,
      37,     3,    42,   293,     6,     7,     8,     9,    37,    42,
      12,    13,   302,    37,    42,    71,    37,    42,     4,    42,
      42,    22,    78,    25,    26,    81,    82,   317,    16,    17,
      18,    19,    20,    21,    22,    23,   329,    93,   398,    41,
      42,   399,    -1,   333,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    42,    -1,     3,    -1,   348,     6,
       7,     8,     9,    -1,     3,    12,    13,     6,     7,     8,
       9,   361,    -1,    12,    13,    -1,    -1,    -1,    25,    26,
      -1,   137,    -1,    -1,   374,    -1,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,   170,    -1,    46,    -1,    -1,    -1,
      -1,   177,   178,   179,   180,   181,    37,     3,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    25,
      26,    81,    82,    -1,    -1,   211,   212,   213,   214,   215,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,   224,    -1,
      -1,   101,   102,    -1,    -1,   231,    -1,    -1,   234,    46,
      -1,   237,    -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,
      -1,    -1,    -1,    -1,   250,   251,   252,   253,   254,   255,
     256,   257,   258,    -1,    71,   261,   262,   137,    -1,    -1,
      -1,    78,   268,    -1,    81,    82,    -1,    -1,   274,    -1,
      -1,    -1,    -1,    -1,    -1,   281,   282,   283,   284,   285,
     286,   287,   288,   289,    -1,    -1,    -1,   293,    -1,    -1,
     170,    -1,    -1,    -1,     3,    -1,   302,     6,     7,     8,
       9,   181,    -1,    12,    13,    46,    -1,    -1,    -1,    -1,
      -1,   317,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
     137,    -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,    -1,
      71,    -1,    41,    -1,    -1,   215,    -1,    78,    79,    -1,
      81,    82,   348,    -1,   224,    -1,    -1,    -1,    -1,    -1,
      -1,   231,    -1,   170,   234,   361,    -1,   237,    -1,    -1,
      -1,    -1,    -1,   243,   181,    -1,    -1,    -1,   374,    -1,
     250,   251,   252,   253,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   261,   262,    -1,    -1,    -1,    -1,    -1,   268,    -1,
      -1,    -1,    -1,    -1,   274,    -1,   137,    -1,   215,   140,
     141,   281,   282,   283,   284,    -1,    -1,   224,    -1,    -1,
      -1,    -1,    -1,   293,   231,    -1,    -1,   234,    -1,    -1,
     237,    -1,   302,    -1,    46,    -1,   243,    -1,    -1,   170,
      -1,    -1,    -1,   250,   251,   252,   253,   317,    -1,    -1,
     181,    -1,    -1,    -1,   261,   262,    -1,    -1,    -1,    71,
      -1,   268,    -1,   333,    -1,    -1,    78,   274,    -1,    81,
      82,    -1,    -1,    -1,   281,   282,   283,   284,   348,    -1,
      -1,    -1,    -1,    -1,   215,    -1,   293,    -1,   100,    -1,
      -1,   361,    -1,   224,    -1,   302,    -1,    -1,    -1,    -1,
     231,    -1,    -1,   234,   374,    -1,   237,    -1,    -1,    -1,
     317,    -1,   243,    46,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,   137,   333,    -1,   259,    -1,
     261,   262,    -1,    -1,    -1,    -1,    38,   268,    71,    -1,
      42,   348,    -1,   274,    -1,    78,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,   170,    -1,
      93,    -1,   293,    -1,    -1,    -1,    -1,   374,    -1,   181,
      -1,   302,     3,    46,    -1,     6,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    -1,    -1,   317,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    71,    -1,
      -1,    -1,   333,   215,   137,    78,    -1,    -1,    81,    82,
      41,    -1,   224,    -1,    -1,    -1,    -1,   348,    -1,   231,
      -1,    -1,   234,    -1,    -1,   237,    -1,    -1,    -1,    -1,
     361,   243,   363,   364,    -1,    -1,    -1,   170,   250,   251,
      -1,    -1,    -1,   374,    -1,    -1,    -1,    -1,   181,   261,
     262,    -1,    46,    -1,    -1,    -1,   268,    -1,    -1,    -1,
      -1,    -1,   274,    -1,   137,    -1,    -1,    -1,    -1,   281,
     282,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,   293,   215,    -1,    78,    -1,    -1,    81,    82,    -1,
     302,   224,    -1,    -1,    -1,    -1,    -1,   170,   231,    -1,
      -1,   234,    -1,    -1,   237,   317,    -1,    -1,   181,     3,
     243,    -1,     6,     7,     8,     9,    -1,   250,    12,    13,
      -1,   333,    -1,    -1,    -1,    -1,    -1,    -1,   261,   262,
      -1,    25,    26,    -1,    -1,   268,   348,    -1,    -1,    -1,
      -1,   274,   215,   137,    -1,    -1,    -1,    41,   281,   361,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,
     293,   234,   374,    -1,   237,    -1,    -1,    -1,     3,   302,
     243,     6,     7,     8,     9,    -1,   170,    12,    13,    -1,
      -1,    -1,    -1,    -1,   317,    -1,    -1,   181,   261,   262,
      25,    26,    -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,
     333,   274,    -1,    -1,     3,    -1,    41,     6,     7,     8,
       9,    -1,    -1,    12,    13,   348,    -1,    -1,    -1,    -1,
     293,   215,    -1,    -1,    -1,    -1,    25,    26,   361,   302,
     224,    -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,
     234,   374,    41,   237,   317,    -1,    12,    13,    -1,   243,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
     333,    -1,    -1,    -1,    -1,    -1,    -1,   261,   262,    -1,
      -1,    -1,    38,    -1,   268,   348,    42,    -1,    -1,    -1,
     274,     3,     4,    -1,     6,     7,     8,     9,   361,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,
      -1,   374,    -1,    25,    26,    -1,    -1,    -1,   302,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,   317,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    -1,    11,    12,    13,    -1,   333,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    25,
      26,    -1,    -1,    -1,   348,    31,    32,    33,    34,    35,
      36,    -1,    37,    39,    40,    41,    -1,   361,     3,     4,
      -1,     6,     7,     8,     9,    -1,    11,    12,    13,    -1,
     374,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
       6,     7,     8,     9,    12,    13,    12,    13,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    42,    41,     3,     4,    -1,     6,
       7,     8,     9,    -1,    -1,    12,    13,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    42,    41,     3,     4,    -1,     6,     7,
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
      33,    34,    35,    36,    -1,    -1,    39,    -1,    41,     3,
       4,    -1,     6,     7,     8,     9,    -1,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,     3,    41,    -1,     6,
       7,     8,     9,    -1,     3,    12,    13,     6,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    41,     3,    -1,    -1,     6,     7,
       8,     9,    41,     3,    12,    13,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    41,     3,    -1,    -1,     6,     7,     8,
       9,    41,     3,    12,    13,     6,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    41,     3,    -1,    -1,     6,     7,     8,     9,
      41,     3,    12,    13,     6,     7,     8,     9,    -1,    -1,
      12,    13,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    41,     3,    -1,    -1,     6,     7,     8,     9,    41,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      41,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    42,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    12,
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
      16,    17,    18,    19,    20,    21,    22,    23,    42,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    38,    -1,    -1,    28,    42,    30,    -1,    -1,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    38,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
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
      23,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
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
      18,    19,    20,    21,    22,    23,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    37,    -1,    -1,    28,    41,    30,    -1,    -1,
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
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    28,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    37,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      13,    -1,    37,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37
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
      72,    74,    75,    76,    78,    80,    81,    82,    83,    57,
      29,    41,     3,     3,    82,    82,    82,    82,    41,    41,
      41,    41,    41,    68,    57,    70,    40,    58,    39,    58,
      37,    16,    17,    77,    18,    19,    20,    21,    22,    23,
      79,    12,    13,    14,    15,    24,    28,    30,    40,    68,
      42,    70,    84,    70,    69,    70,     3,     5,    70,    73,
      73,    37,    40,    42,    40,    11,    62,    78,    82,    80,
      81,    81,    82,    82,    82,    82,    82,    38,    42,    42,
      37,    37,    42,    42,    42,    62,    63,    70,    70,    70,
      37,    37,    37,    58,    37,    37,     3,    69,    69,    42,
      42,    65,    66,    58,    58,    53,     6,     7,     8,     9,
      41,    83,     3,     6,     7,     8,     9,    12,    13,    25,
      26,    41,    74,    75,    76,    78,    80,    81,    82,    83,
      32,    33,    34,    35,    36,    47,    53,    56,    59,    60,
      61,    64,    67,    68,    71,    72,     3,     6,     7,     8,
       9,    12,    13,    25,    26,    41,    74,    75,    76,    78,
      80,    81,    82,    83,    41,    57,     3,     6,     7,     8,
       9,    41,    83,     3,    29,    37,    70,    41,     3,     6,
       7,     8,     9,    41,    82,    83,    82,    82,    82,    70,
      77,    79,    12,    13,    14,    15,    24,    28,    30,    41,
      41,    41,    41,    68,    37,    39,    58,    37,    41,     3,
       6,     7,     8,     9,    41,    82,    83,    82,    82,    82,
      70,    77,    79,    12,    13,    14,    15,    24,    28,    30,
      42,    84,    40,    41,    70,     3,    68,    69,    70,    42,
      42,    84,    41,    70,    42,    78,    82,    80,    81,    81,
      82,    82,     3,     6,     7,     8,     9,    41,    82,    83,
      82,    82,    69,    70,     3,    73,    73,    37,    40,    11,
      62,    42,    84,    41,    70,    42,    78,    82,    80,    81,
      81,    82,    82,     3,     6,     7,     8,     9,    41,    82,
      83,    82,    82,    42,    42,    84,    42,    42,    42,    84,
      42,    41,    70,    37,    37,    42,    42,    42,    62,    63,
      42,    42,    84,    42,    41,    70,    42,    42,    42,    84,
      42,    70,    70,    37,    37,    37,    39,    58,    42,    42,
      84,    42,    42,    37,    37,    42,    69,    69,    42,    42,
      65,    66,    58,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    46,    47,    49,
      50,    48,    51,    52,    48,    53,    54,    54,    54,    55,
      56,    57,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    60,    60,    60,    60,    61,    63,    62,    65,
      64,    66,    64,    67,    68,    68,    69,    70,    70,    71,
      72,    72,    73,    73,    74,    74,    74,    75,    75,    76,
      76,    77,    77,    78,    78,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    81,    81,    81,    81,    81,    81,
      82,    82,    82,    82,    82,    82,    82,    83,    83,    84,
      84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     0,
       0,    10,     0,     0,     9,     2,     3,     1,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     4,     4,     0,     3,     0,
      10,     0,    10,     3,     1,     1,     3,     1,     1,     5,
       5,     5,     1,     1,     3,     3,     3,     2,     2,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     3,     1,     2,     2,     1,
       1,     1,     3,     1,     1,     1,     1,     4,     3,     3,
       1
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
#line 585 "guillex.y"
                        {
        abstractSyntaxTree = (yyval.treeNode);
    }
#line 3441 "guillex.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 591 "guillex.y"
                                    {
       (yyval.treeNode) = createNode2("declarationsList declaration", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
     }
#line 3449 "guillex.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 594 "guillex.y"
                      {
    (yyval.treeNode) = createNode1("declaration", (yyvsp[0].treeNode));
  }
#line 3457 "guillex.tab.c"
    break;

  case 5: /* declarationList: error  */
#line 597 "guillex.y"
          {
    (yyval.treeNode) = createNodeE();
    errors++;
    yyerror(yymsg);
  }
#line 3467 "guillex.tab.c"
    break;

  case 6: /* declaration: varDeclaration  */
#line 605 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
    }
#line 3475 "guillex.tab.c"
    break;

  case 7: /* declaration: funcDeclaration  */
#line 608 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("funcDeclaration", (yyvsp[0].treeNode));
    }
#line 3483 "guillex.tab.c"
    break;

  case 8: /* varDeclaration: simpleVarDeclaration SEMIC  */
#line 614 "guillex.y"
                               {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[-1].treeNode));}
#line 3490 "guillex.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 619 "guillex.y"
                   {scope++; pushStack(scope);}
#line 3496 "guillex.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 619 "guillex.y"
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
#line 625 "guillex.y"
                         {
      (yyval.treeNode) = createNode4("TYPE ID PARENL params PARENR STFUNC stmtList ENDFUNC", createNode0((yyvsp[-9].str)), createNode0((yyvsp[-8].str)), (yyvsp[-5].treeNode), (yyvsp[-1].treeNode));
      popStack();
      if(checkTypesReturnFunction((yyvsp[-1].treeNode) -> returnType, (yyvsp[-9].str)[0]) == 0) {
        printf("Semantic Error\n");
        printf("function %s with unexpected return, line %d, column %d\n\n", (yyvsp[-8].str), line, wordPosition);
        semanticErrors += 1;
      }else if(checkTypesReturnFunction((yyvsp[-1].treeNode) -> returnType, (yyvsp[-9].str)[0]) == 1) {
        printf("Semantic Error\n");
        printf("function %s without expected return, line %d, column %d\n\n", (yyvsp[-8].str), line, wordPosition);
        semanticErrors += 1;
      } else if (checkTypesReturnFunction((yyvsp[-1].treeNode) -> returnType, (yyvsp[-9].str)[0]) == 3) {
        printf("Semantic Error\n");
        printf("function %s with return with wrong type, line %d, column %d\n\n", (yyvsp[-8].str), line, wordPosition);
        semanticErrors += 1;
      }
  }
#line 3530 "guillex.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 642 "guillex.y"
                   {pushStack(scope);}
#line 3536 "guillex.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 642 "guillex.y"
                                                     {
    UT_string *r;
    utstring_new(r);
    errors += addSymbol((yyvsp[-4].str), "func", (yyvsp[-5].str), STACK_TOP(stackScope) -> value, parameters, 0);
    parameters = 0;
    addFunc((yyvsp[-4].str));
    }
#line 3548 "guillex.tab.c"
    break;

  case 14: /* funcDeclaration: TYPE ID PARENL $@3 PARENR STFUNC $@4 stmtList ENDFUNC  */
#line 648 "guillex.y"
                       {
    
      (yyval.treeNode) = createNode3("TYPE ID PARENL PARENR compoundStmt", createNode0((yyvsp[-8].str)), createNode0((yyvsp[-7].str)), (yyvsp[-1].treeNode)); 
      popStack();
      if(checkTypesReturnFunction((yyvsp[-1].treeNode) -> returnType, (yyvsp[-8].str)[0]) == 0) {
      printf("Semantic Error\n");
      printf("function %s with unexpected return, line %d, column %d\n\n", (yyvsp[-7].str), line, wordPosition);
      semanticErrors += 1;
    }else if(checkTypesReturnFunction((yyvsp[-1].treeNode) -> returnType, (yyvsp[-8].str)[0]) == 1) {
      printf("Semantic Error\n");
      printf("function %s without expected return, line %d, column %d\n\n", (yyvsp[-7].str), line, wordPosition);
      semanticErrors += 1;
    } else if (checkTypesReturnFunction((yyvsp[-1].treeNode) -> returnType, (yyvsp[-8].str)[0]) == 3) {
      printf("Semantic Error\n");
      printf("function %s with return with wrong type, line %d, column %d\n\n", (yyvsp[-7].str), line, wordPosition);
      semanticErrors += 1;
    }                                                                      
  }
#line 3571 "guillex.tab.c"
    break;

  case 15: /* simpleVarDeclaration: TYPE ID  */
#line 668 "guillex.y"
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
#line 3601 "guillex.tab.c"
    break;

  case 16: /* params: params COMMA param  */
#line 697 "guillex.y"
                       {
      (yyval.treeNode) = createNode2("params COMMA param", (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
      }
#line 3609 "guillex.tab.c"
    break;

  case 17: /* params: param  */
#line 700 "guillex.y"
          { 
    (yyval.treeNode) = createNode1("param", (yyvsp[0].treeNode)); 
    }
#line 3617 "guillex.tab.c"
    break;

  case 18: /* params: error  */
#line 703 "guillex.y"
          {
      (yyval.treeNode) = createNodeE();
      errors++;
      yyerror(yymsg);
    }
#line 3627 "guillex.tab.c"
    break;

  case 19: /* param: TYPE ID  */
#line 711 "guillex.y"
            {
      parameters++;
      pushStack(scope);
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      semanticErrors += addSymbol((yyvsp[0].str), "param", (yyvsp[-1].str), STACK_TOP(stackScope) -> value, 0, create_new_reg(varReg));
      varReg++;
      popStack();
      }
#line 3640 "guillex.tab.c"
    break;

  case 20: /* compoundStmt: STFUNC stmtList ENDFUNC  */
#line 722 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[-1].treeNode));
    }
#line 3648 "guillex.tab.c"
    break;

  case 21: /* stmtList: stmtList primitiveStmt  */
#line 728 "guillex.y"
                              {
      (yyval.treeNode) = createNode2("stmtList primitiveStmt", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
      if((yyvsp[-1].treeNode) -> returnType == 'x')
        (yyval.treeNode) -> returnType = (yyvsp[0].treeNode) -> returnType;
      else
        (yyval.treeNode) -> returnType = (yyvsp[-1].treeNode) -> returnType;
    }
#line 3660 "guillex.tab.c"
    break;

  case 22: /* stmtList: primitiveStmt  */
#line 735 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("primitiveStmt", (yyvsp[0].treeNode));
  }
#line 3668 "guillex.tab.c"
    break;

  case 23: /* primitiveStmt: exprStmt  */
#line 741 "guillex.y"
             {
      (yyval.treeNode) = createNode1("exprStmt", (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
    }
#line 3677 "guillex.tab.c"
    break;

  case 24: /* primitiveStmt: compoundStmt  */
#line 745 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[0].treeNode));
  }
#line 3685 "guillex.tab.c"
    break;

  case 25: /* primitiveStmt: condStmt  */
#line 748 "guillex.y"
             {
    (yyval.treeNode) = createNode1("condStmt", (yyvsp[0].treeNode));
  }
#line 3693 "guillex.tab.c"
    break;

  case 26: /* primitiveStmt: iterStmt  */
#line 751 "guillex.y"
             {
    (yyval.treeNode) = createNode1("iterStmt", (yyvsp[0].treeNode));
  }
#line 3701 "guillex.tab.c"
    break;

  case 27: /* primitiveStmt: returnStmt  */
#line 754 "guillex.y"
               {
    (yyval.treeNode) = createNode1("returnStmt", (yyvsp[0].treeNode));
    (yyval.treeNode) -> returnType = (yyvsp[0].treeNode) -> returnType;
  }
#line 3710 "guillex.tab.c"
    break;

  case 28: /* primitiveStmt: inOp  */
#line 758 "guillex.y"
         {
    (yyval.treeNode) = createNode1("inOp", (yyvsp[0].treeNode));
  }
#line 3718 "guillex.tab.c"
    break;

  case 29: /* primitiveStmt: outOp  */
#line 761 "guillex.y"
          {
    (yyval.treeNode) = createNode1("outOp", (yyvsp[0].treeNode));
  }
#line 3726 "guillex.tab.c"
    break;

  case 30: /* primitiveStmt: varDeclaration  */
#line 764 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
  }
#line 3734 "guillex.tab.c"
    break;

  case 31: /* exprStmt: expression SEMIC  */
#line 770 "guillex.y"
                     {
      (yyval.treeNode) = createNode1("expression SEMIC", (yyvsp[-1].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[-1].treeNode) -> nodeType;
    }
#line 3743 "guillex.tab.c"
    break;

  case 32: /* condStmt: ifStmt primitiveStmt  */
#line 777 "guillex.y"
                                    {
      (yyval.treeNode) = createNode2("ifStmt primitiveStmt", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
      popStack();
      scope--;
      pushStack(scope);
      popStack();
    }
#line 3755 "guillex.tab.c"
    break;

  case 33: /* condStmt: ifStmt primitiveStmt elseStmt  */
#line 784 "guillex.y"
                                   {
    (yyval.treeNode) = createNode3("ifStmt primitiveStmt elseStmt", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
  }
#line 3763 "guillex.tab.c"
    break;

  case 34: /* condStmt: ifStmt STFUNC ENDFUNC  */
#line 787 "guillex.y"
                                    {
    (yyval.treeNode) = createNode1("ifStmt", (yyvsp[-2].treeNode));
    popStack();
    scope--;
    pushStack(scope);
    popStack();
  }
#line 3775 "guillex.tab.c"
    break;

  case 35: /* condStmt: ifStmt STFUNC ENDFUNC elseStmt  */
#line 794 "guillex.y"
                                    {
    (yyval.treeNode) = createNode2("ifStmt primitiveStmt elseStmt", (yyvsp[-3].treeNode), (yyvsp[0].treeNode));
  }
#line 3783 "guillex.tab.c"
    break;

  case 36: /* ifStmt: IF PARENL simpleExp PARENR  */
#line 801 "guillex.y"
                              {
      scope++;
      pushStack(scope);
      (yyval.treeNode) = createNode2("IF PARENL simpleExp PARENR", createNode0((yyvsp[-3].str)), (yyvsp[-1].treeNode));
    }
#line 3793 "guillex.tab.c"
    break;

  case 37: /* $@5: %empty  */
#line 809 "guillex.y"
      {
    popStack();
    scope--;
    pushStack(scope);
    popStack();
    scope++;
    pushStack(scope);
  }
#line 3806 "guillex.tab.c"
    break;

  case 38: /* elseStmt: ELSE $@5 primitiveStmt  */
#line 816 "guillex.y"
                  {
    popStack();
    scope--;
    pushStack(scope);
    popStack();
    (yyval.treeNode) = createNode2("ELSE primitiveStmt", createNode0((yyvsp[-2].str)), (yyvsp[0].treeNode));
  }
#line 3818 "guillex.tab.c"
    break;

  case 39: /* $@6: %empty  */
#line 825 "guillex.y"
                                                                {      
      scope++;
      pushStack(scope);
      }
#line 3827 "guillex.tab.c"
    break;

  case 40: /* iterStmt: FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR $@6 primitiveStmt  */
#line 828 "guillex.y"
                      {

      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-9].str)), (yyvsp[-7].treeNode), (yyvsp[-5].treeNode), (yyvsp[-3].treeNode), (yyvsp[0].treeNode));
      popStack();
      scope--;
      pushStack(scope);
      popStack();
    }
#line 3840 "guillex.tab.c"
    break;

  case 41: /* $@7: %empty  */
#line 836 "guillex.y"
                                                                {
      scope++;
      pushStack(scope);
      }
#line 3849 "guillex.tab.c"
    break;

  case 42: /* iterStmt: FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR $@7 primitiveStmt  */
#line 839 "guillex.y"
                      {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-9].str)), (yyvsp[-7].treeNode), (yyvsp[-5].treeNode), (yyvsp[-3].treeNode), (yyvsp[0].treeNode));
      popStack();
      scope--;
      pushStack(scope);
      popStack();
  }
#line 3861 "guillex.tab.c"
    break;

  case 43: /* returnStmt: RETURN expression SEMIC  */
#line 849 "guillex.y"
                            {
      (yyval.treeNode) = createNode2("RETURN expression SEMIC", createNode0((yyvsp[-2].str)), (yyvsp[-1].treeNode));
      (yyval.treeNode) -> returnType = (yyvsp[-1].treeNode) -> nodeType;
    }
#line 3870 "guillex.tab.c"
    break;

  case 44: /* expression: assignExp  */
#line 857 "guillex.y"
              {
      (yyval.treeNode) = createNode1("assignExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
    }
#line 3879 "guillex.tab.c"
    break;

  case 45: /* expression: simpleExp  */
#line 861 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 3889 "guillex.tab.c"
    break;

  case 46: /* assignExp: ID ASSIGN expression  */
#line 869 "guillex.y"
                         {
      struct symbol *s = checkIsInScope((yyvsp[-2].str), STACK_TOP(stackScope) -> value);
      if (s != NULL){
        (yyval.treeNode) = createNode3("ID ASSIGN expression", createNode0((yyvsp[-2].str)), createNode0("="), (yyvsp[0].treeNode));
        (yyval.treeNode) -> nodeType = s -> varFuncName[0];
        UT_string *ss = create_new_reg(varReg);
        varDecAssign(utstring_body(ss), (yyvsp[0].treeNode) -> saved);
        (yyval.treeNode) -> saved = (yyvsp[-2].str);
        if(!checkTypesVar(s -> varFuncName[0], (yyvsp[0].treeNode) -> nodeType)) {
          printf("Semantic Error\n");
          printf("var %s from type %s receiving wrong type value, line %d, column %d\n\n", (yyvsp[-2].str), s -> varFuncName, line, wordPosition);
          semanticErrors += 1;
        }
      }else{
          printf("Semantic error");
          printf("Var: <%s> Not Declared, line %d, column %d\n\n", (yyvsp[-2].str), line, wordPosition);
          semanticErrors++;
          (yyval.treeNode) = createNodeE();
      }
    }
#line 3914 "guillex.tab.c"
    break;

  case 47: /* simpleExp: binLogicalExp  */
#line 893 "guillex.y"
                  {
      (yyval.treeNode) = createNode1("binLogicalExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
    }
#line 3923 "guillex.tab.c"
    break;

  case 48: /* simpleExp: binListExp  */
#line 898 "guillex.y"
              {
      (yyval.treeNode) = createNode1("binListExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
    }
#line 3932 "guillex.tab.c"
    break;

  case 49: /* inOp: READ PARENL ID PARENR SEMIC  */
#line 906 "guillex.y"
                             {
    (yyval.treeNode) = createNode2("READ PARENL ID PARENR SEMIC", createNode0((yyvsp[-4].str)), createNode0((yyvsp[-2].str)));
  }
#line 3940 "guillex.tab.c"
    break;

  case 50: /* outOp: WRITE PARENL outConst PARENR SEMIC  */
#line 912 "guillex.y"
                                      {
      (yyval.treeNode) = createNode2("WRITE PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
      writeFunc((yyvsp[-2].treeNode) -> saved);
      (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
    }
#line 3950 "guillex.tab.c"
    break;

  case 51: /* outOp: WRITELN PARENL outConst PARENR SEMIC  */
#line 917 "guillex.y"
                                         {
      (yyval.treeNode) = createNode2("WRITELN PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
      writelnFunc((yyvsp[-2].treeNode) -> saved);
      (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
  }
#line 3960 "guillex.tab.c"
    break;

  case 52: /* outConst: STRING  */
#line 925 "guillex.y"
           {
      (yyval.treeNode) = createNode1("STRING", createNode0((yyvsp[0].str)));
      (yyval.treeNode) -> nodeType = 't';
      (yyval.treeNode) -> saved = (yyvsp[0].str);
    }
#line 3970 "guillex.tab.c"
    break;

  case 53: /* outConst: simpleExp  */
#line 930 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 3979 "guillex.tab.c"
    break;

  case 54: /* binListExp: factor APPEND factor  */
#line 937 "guillex.y"
                             {
		(yyval.treeNode) = createNode3("factor APPEND factor", (yyvsp[-2].treeNode), createNode0(":"), (yyvsp[0].treeNode));		
    (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
	}
#line 3988 "guillex.tab.c"
    break;

  case 55: /* binListExp: factor MAP factor  */
#line 941 "guillex.y"
                            {
		
		(yyval.treeNode) = createNode3("factor MAP factor", (yyvsp[-2].treeNode), createNode0(">>"), (yyvsp[0].treeNode));		
    (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
	}
#line 3998 "guillex.tab.c"
    break;

  case 56: /* binListExp: factor FILTER factor  */
#line 946 "guillex.y"
                               {
		(yyval.treeNode) = createNode3("factor FILTER factor", (yyvsp[-2].treeNode), createNode0("<<"), (yyvsp[0].treeNode));	
    (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;	
	}
#line 4007 "guillex.tab.c"
    break;

  case 57: /* unaryListExp: HEADLIST factor  */
#line 952 "guillex.y"
                        {
		(yyval.treeNode) = createNode2("? factor", createNode0("?"), (yyvsp[0].treeNode));
    (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;	
	}
#line 4016 "guillex.tab.c"
    break;

  case 58: /* unaryListExp: TAILLIST factor  */
#line 956 "guillex.y"
                          {
    (yyval.treeNode) = createNode2("! factor", createNode0("!"), (yyvsp[0].treeNode));
    (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;	
	}
#line 4025 "guillex.tab.c"
    break;

  case 59: /* binLogicalExp: binLogicalExp binLogicalOp relationalExp  */
#line 963 "guillex.y"
                                            {
      (yyval.treeNode) = createNode3("binLogicalExp binLogicalOp relationalOp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 4033 "guillex.tab.c"
    break;

  case 60: /* binLogicalExp: relationalExp  */
#line 966 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("relationalExp", (yyvsp[0].treeNode));
    (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 4042 "guillex.tab.c"
    break;

  case 61: /* binLogicalOp: OR  */
#line 974 "guillex.y"
       {
      (yyval.treeNode) = createNode1("OR", createNode0("||"));
    }
#line 4050 "guillex.tab.c"
    break;

  case 62: /* binLogicalOp: AND  */
#line 977 "guillex.y"
        {
      (yyval.treeNode) = createNode1("AND", createNode0("&&"));
  }
#line 4058 "guillex.tab.c"
    break;

  case 63: /* relationalExp: relationalExp relationalOp sumExp  */
#line 983 "guillex.y"
                                      {
      (yyval.treeNode) = createNode3("relationalExp relationalOp sumExp", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    }
#line 4066 "guillex.tab.c"
    break;

  case 64: /* relationalExp: sumExp  */
#line 986 "guillex.y"
           {
      (yyval.treeNode) = createNode1("sumExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 4075 "guillex.tab.c"
    break;

  case 65: /* relationalOp: SMALLER  */
#line 994 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLER", createNode0("<"));
    }
#line 4083 "guillex.tab.c"
    break;

  case 66: /* relationalOp: GREATER  */
#line 997 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATER", createNode0(">"));
  }
#line 4091 "guillex.tab.c"
    break;

  case 67: /* relationalOp: SMALLEQ  */
#line 1000 "guillex.y"
            {
      (yyval.treeNode) = createNode1("SMALLEQ", createNode0("<="));
  }
#line 4099 "guillex.tab.c"
    break;

  case 68: /* relationalOp: GREATEQ  */
#line 1003 "guillex.y"
            {
      (yyval.treeNode) = createNode1("GREATEQ", createNode0(">="));
  }
#line 4107 "guillex.tab.c"
    break;

  case 69: /* relationalOp: EQUALS  */
#line 1006 "guillex.y"
           {
      (yyval.treeNode) = createNode1("EQUALS", createNode0("=="));
  }
#line 4115 "guillex.tab.c"
    break;

  case 70: /* relationalOp: DIFFERENT  */
#line 1009 "guillex.y"
              {
      (yyval.treeNode) = createNode1("DIFFERENT", createNode0("!="));
  }
#line 4123 "guillex.tab.c"
    break;

  case 71: /* sumExp: sumExp ADD mulExp  */
#line 1015 "guillex.y"
                      {
      (yyval.treeNode) = createNode3("sumExp add mulExp", (yyvsp[-2].treeNode), createNode0("+"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = checkTypes((yyvsp[-2].treeNode) -> nodeType, (yyvsp[0].treeNode) -> nodeType);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("add", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 4135 "guillex.tab.c"
    break;

  case 72: /* sumExp: sumExp SUB mulExp  */
#line 1023 "guillex.y"
                          {
      (yyval.treeNode) = createNode3("sumExp sub mulExp", (yyvsp[-2].treeNode), createNode0("-"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = checkTypes((yyvsp[-2].treeNode) -> nodeType, (yyvsp[0].treeNode) -> nodeType);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("sub", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 4147 "guillex.tab.c"
    break;

  case 73: /* sumExp: mulExp  */
#line 1030 "guillex.y"
           {
      (yyval.treeNode) = createNode1("mulExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 4157 "guillex.tab.c"
    break;

  case 74: /* mulExp: mulExp MULT factor  */
#line 1038 "guillex.y"
                       {
      (yyval.treeNode) = createNode3("mulExp mulOp factor", (yyvsp[-2].treeNode), createNode0("*"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = checkTypes((yyvsp[-2].treeNode) -> nodeType, (yyvsp[0].treeNode) -> nodeType);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("mul", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 4169 "guillex.tab.c"
    break;

  case 75: /* mulExp: mulExp DIV factor  */
#line 1046 "guillex.y"
                       {
      (yyval.treeNode) = createNode3("mulExp mulOp factor", (yyvsp[-2].treeNode), createNode0("/"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = checkTypes((yyvsp[-2].treeNode) -> nodeType, (yyvsp[0].treeNode) -> nodeType);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("div", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 4181 "guillex.tab.c"
    break;

  case 76: /* mulExp: factor  */
#line 1053 "guillex.y"
           {
      (yyval.treeNode) = createNode1("factor", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 4191 "guillex.tab.c"
    break;

  case 77: /* mulExp: ADD factor  */
#line 1058 "guillex.y"
               {
      (yyval.treeNode) = createNode2("ADD factor", createNode0("+"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 4200 "guillex.tab.c"
    break;

  case 78: /* mulExp: SUB factor  */
#line 1062 "guillex.y"
               {
      (yyval.treeNode) = createNode2("SUB factor", createNode0("-"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 4209 "guillex.tab.c"
    break;

  case 79: /* mulExp: unaryListExp  */
#line 1066 "guillex.y"
                 {
		(yyval.treeNode) = createNode1("unaryListExp", (yyvsp[0].treeNode));
    (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
	}
#line 4218 "guillex.tab.c"
    break;

  case 80: /* factor: ID  */
#line 1074 "guillex.y"
       {
      struct symbol *s = checkIsInScope((yyvsp[0].str), STACK_TOP(stackScope) -> value);
      if (s != NULL) {
        (yyval.treeNode) = createNode1("ID", createNode0String((yyvsp[0].str)));
        (yyval.treeNode) -> saved = (yyvsp[0].str);
        (yyval.treeNode) -> nodeType = s -> varFuncName[0];
    }else{
        printf("Semantic error\n");
        printf("var %s not declared, line %d, column %d\n\n", (yyvsp[0].str), line, wordPosition);
        semanticErrors += 1;
        (yyval.treeNode) = createNodeE();
      }
    }
#line 4236 "guillex.tab.c"
    break;

  case 81: /* factor: fCall  */
#line 1087 "guillex.y"
          {
      (yyval.treeNode) = createNode1("fCall", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 4246 "guillex.tab.c"
    break;

  case 82: /* factor: PARENL simpleExp PARENR  */
#line 1092 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("PARENL simpleExp PARENR", (yyvsp[-1].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[-1].treeNode) -> nodeType;
      (yyval.treeNode) -> saved = (yyvsp[-1].treeNode) -> saved;
  }
#line 4256 "guillex.tab.c"
    break;

  case 83: /* factor: INTEGER  */
#line 1097 "guillex.y"
            {
      (yyval.treeNode) = createNode0Int((yyvsp[0].integer), 'i');
      (yyval.treeNode) -> nodeType = 'i';
      UT_string *s = int_as_str((yyvsp[0].integer));
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 4267 "guillex.tab.c"
    break;

  case 84: /* factor: DECIMAL  */
#line 1103 "guillex.y"
            {
    (yyval.treeNode) = createNode0Dec((yyvsp[0].dec), 'f');
    (yyval.treeNode) -> nodeType = 'f';
    UT_string *s = float_as_str((yyvsp[0].dec));
    (yyval.treeNode) -> saved = utstring_body(s);
  }
#line 4278 "guillex.tab.c"
    break;

  case 85: /* factor: NIL  */
#line 1109 "guillex.y"
        {
    (yyval.treeNode) = createNode0Nil((yyvsp[0].str), 'n');
    (yyval.treeNode) -> nodeType = 'n';
  }
#line 4287 "guillex.tab.c"
    break;

  case 86: /* factor: ERRORTOKEN  */
#line 1113 "guillex.y"
               {
      (yyval.treeNode) = createNodeE();
    }
#line 4295 "guillex.tab.c"
    break;

  case 87: /* fCall: ID PARENL callParams PARENR  */
#line 1119 "guillex.y"
                                {
      if (findSymbolFunc((yyvsp[-3].str)) != NULL){
       if (checkNumberOfParams(argsParams, (yyvsp[-3].str))){
         argsParams = 0;
        (yyval.treeNode) = createNode2("ID PARENL callParams PARENR", createNode0((yyvsp[-3].str)), (yyvsp[-1].treeNode));
        (yyval.treeNode) -> nodeType = findSymbolFunc((yyvsp[-3].str)) -> varFuncName[0];
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
#line 4322 "guillex.tab.c"
    break;

  case 88: /* fCall: ID PARENL PARENR  */
#line 1141 "guillex.y"
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
#line 4346 "guillex.tab.c"
    break;

  case 89: /* callParams: callParams COMMA simpleExp  */
#line 1163 "guillex.y"
                               {
      argsParams++;
      (yyval.treeNode) = createNode2("callParams COMMA simpleExp", (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
    }
#line 4356 "guillex.tab.c"
    break;

  case 90: /* callParams: simpleExp  */
#line 1168 "guillex.y"
              {
      argsParams++;
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 4366 "guillex.tab.c"
    break;


#line 4370 "guillex.tab.c"

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

#line 1177 "guillex.y"


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
