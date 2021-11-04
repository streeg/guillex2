/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 8 "guillex.y"


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
int varReg = 0;
int ifId = 0;


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


int depth = 0;

Node* createNodeE() {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> nodeValue = NULL;
  node -> nodeType = 'e';
  node -> returnType = 'x';
  node -> terminal = true;
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
  node -> terminal = true;
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
  node -> terminal = false;
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
  node -> terminal = false;
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
  node -> terminal = false;
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
  node -> terminal = false;
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
  node -> terminal = false;
  node -> left = left;
  node -> leftMiddle = leftMiddle;
  node -> middle = middle;
  node -> rightMiddle = rightMiddle;
  node -> right = right;

  return node;
}

void printAndFreeTree(Node *node) {

  if(node == NULL)
    return;

  if (!(node -> terminal)) {
    for (int i = 0; i < depth; i++){
      printf("-");
    }
     printf(">%s\n", node -> nodeValue);
    } else {
      if(node -> nodeType == 's'){
        for (int i = 0; i < depth; i++){
          printf("~");
      }
    }if(node -> nodeType == 'i'){
      for (int i = 0; i < depth; i++){
        printf("~");
      }
      printf("%d\n", node -> integer);
       }if(node -> nodeType == 'f'){
      for (int i = 0; i < depth; i++){
        printf("~");
      }
      printf("%f\n", node -> decimal);
      }if(node -> nodeType ==  't'){
      for (int i = 0; i < depth; i++){
        printf("~");
      }
    }
  }
  depth++;


    printAndFreeTree(node -> left);
    printAndFreeTree(node -> leftMiddle);
    printAndFreeTree(node -> middle);
    printAndFreeTree(node -> rightMiddle);
    printAndFreeTree(node -> right);
  depth--;
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
void printAndFreeTree(Node *node);
Node *abstractSyntaxTree = NULL;


typedef struct scope {
    int value;
    struct scope *next;
} Scope;

Scope *stackScope = NULL;
Scope *stackIfElse = NULL;

void pushStack(int value) {
  Scope *scope = (Scope*)malloc(sizeof(Scope));
  scope -> value = value;
  STACK_PUSH(stackScope, scope);
}

void pushStackIf(int value) {
  Scope *scope = (Scope*)malloc(sizeof(Scope));
  scope -> value = value;
  STACK_PUSH(stackIfElse, scope);
}

void popStack() {
  Scope *scope;
  STACK_POP(stackScope, scope);
  free(scope);
}

void popStackIf() {
  Scope *scope;
  STACK_POP(stackIfElse, scope);
  free(scope);
}

void freeStack() {
  while(!STACK_EMPTY(stackScope))
    popStack();
}

void freeStackIf() {
  while(!STACK_EMPTY(stackIfElse))
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
     if (s -> scope != scope && symbolType[0] == 'v') {
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
      if (symbolType[0] == 'v')
        printf("Variable %s already declared in this scope\n\n", name);
      else if (symbolType[0] == 'f')
        printf("Func %s already declared in this scope\n\n", name);
      return 1;
      }
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
void readFunc(char *value, char type) {
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  if (type == 'i')
    utstring_printf(code -> line, "scani %s\n", value);
  if (type == 'f')
    utstring_printf(code -> line, "scanf %s\n", value);
  if (type == 'c')
    utstring_printf(code -> line, "scanc %s\n", value);
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

void ifFunc(int value, char *reg){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "brz if_exit_%d, %s\n", value, reg);
  DL_APPEND(currentLine, code);
}

void ifFuncExit(int value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "if_exit_%d:\n", value);
  DL_APPEND(currentLine, code);
}

void ifJump(int value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "jump if_jump_%d\n", value);
  DL_APPEND(currentLine, code);
  ifFuncExit(value);
}

void ifJumpExit(int value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "if_jump_%d:\n", value);
  DL_APPEND(currentLine, code);
}

void notFunc(char *name, char *value){
  Codegen *code = (Codegen *)malloc(sizeof *code);
  utstring_new(code -> line);
  utstring_printf(code -> line, "not %s, %s\n", name, value);
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

void freeCodegen() {
  Codegen *temp, *line;

  DL_FOREACH_SAFE(currentLine,line,temp) {
    DL_DELETE(currentLine,line);
    free(line);
  }
}

UT_string *create_new_reg_from_string(char *varReg) {
  UT_string *r;
  utstring_new(r);
  utstring_printf(r, "%s", varReg);

  return r;
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
  return 'e';
}

bool checkTypesVar(char varType, char value) {
  if (varType == 'i' && (value == 'i' || value == 'f' || value == 'n'))
  return true;
  if (varType == 'f' && (value == 'i' || value == 'f' || value == 'n'))
    return true;
  if (varType == value)
    return true;
  return false;
}

int checkTypesReturnFunction(char value, char returnType) {
  if (returnType == 'v' && value != 'x'){
    
    return 0;
    }
  if (returnType != 'v' && value == 'x'){    
    return 1;
    }
  if (returnType == value || (returnType == 'v' && value == 'x')){
    
    return 2;
    }
  return 3;
}



#line 711 "guillex.tab.c"

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
  YYSYMBOL_relationalExp = 77,             /* relationalExp  */
  YYSYMBOL_sumExp = 78,                    /* sumExp  */
  YYSYMBOL_mulExp = 79,                    /* mulExp  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYLAST   6376

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  437

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
       0,   680,   680,   686,   689,   692,   700,   703,   709,   714,
     714,   714,   737,   737,   737,   763,   790,   794,   798,   806,
     817,   824,   831,   835,   841,   845,   849,   853,   857,   861,
     864,   867,   874,   881,   887,   891,   897,   904,   915,   915,
     930,   930,   941,   941,   954,   962,   967,   975,  1006,  1012,
    1021,  1035,  1041,  1046,  1054,  1059,  1067,  1072,  1078,  1085,
    1090,  1098,  1107,  1115,  1123,  1132,  1141,  1150,  1159,  1168,
    1177,  1186,  1194,  1201,  1209,  1217,  1224,  1229,  1233,  1237,
    1245,  1258,  1263,  1268,  1274,  1280,  1284,  1290,  1312,  1335,
    1341
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
  "NIL", "INTEGER", "DECIMAL", "ERRORTOKEN", "ADD", "SUB", "MULT", "DIV",
  "OR", "AND", "SMALLER", "GREATER", "SMALLEQ", "GREATEQ", "EQUALS",
  "DIFFERENT", "APPEND", "HEADLIST", "TAILLIST", "DESTROYHEAD", "FILTER",
  "ASSIGN", "MAP", "ELSE", "THEN", "IF", "FOR", "READ", "WRITE", "WRITELN",
  "RETURN", "SEMIC", "COMMA", "STFUNC", "ENDFUNC", "PARENL", "PARENR",
  "$accept", "program", "declarationList", "declaration", "varDeclaration",
  "funcDeclaration", "$@1", "$@2", "$@3", "$@4", "simpleVarDeclaration",
  "params", "param", "compoundStmt", "stmtList", "primitiveStmt",
  "exprStmt", "condStmt", "ifStmt", "elseStmt", "$@5", "iterStmt", "$@6",
  "$@7", "returnStmt", "expression", "assignExp", "simpleExp", "inOp",
  "outOp", "outConst", "binListExp", "unaryListExp", "binLogicalExp",
  "relationalExp", "sumExp", "mulExp", "factor", "fCall", "callParams", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-210)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      40,    11,    28,    47,    13,    59,    97,   105,     5,   110,
    -210,   152,   155,    20,    67,    18,   130,    66,   132,   138,
      31,   140,    80,    50,   209,   154,   248,   419,   419,  2610,
    5607,    83,  5671,  5699,  5727,  5755,   134,   134,   134,   134,
      57,    63,    69,    70,    85,   543,   419,  1028,  2649,  2688,
    2727,  2766,  2805,  2844,  1239,  2883,  2922,    90,    92,   101,
    2961,  3000,   102,  4053,    65,   583,  6267,  5923,  5783,  5811,
    3039,   543,   180,   107,  4020,  5935,  5963,  5975,  6003,  1028,
     543,    16,   125,   125,   108,  3078,   104,   201,  3117,    42,
     864,  3156,  1065,  1065,  1065,  1065,  1065,  1065,  1065,  1065,
    1065,  1065,   134,   134,   220,   220,   220,   202,   116,  5839,
     232,   250,   112,   124,   157,   120,   158,   135,   166,   169,
     172,  3195,  3234,  5867,   907,  3702,  3273,   992,  6015,  1344,
    6279,  6291,  6303,  6315,  6327,  6339,  6043,  6055,  6083,  6095,
     188,   193,   210,  1188,  5895,  3741,  1197,  1197,   216,  3312,
     223,   229,  3351,  3780,   252,   230,   231,  3390,  3429,  3468,
    3507,   235,   235,   219,   233,   234,  3819,  3858,  3780,  3780,
    3546,  3585,   240,  6123,  6135,  6163,  6175,  1028,  6203,  4034,
    4364,  4383,  4402,  4421,   228,   228,   228,   228,  1028,   236,
    4999,    25,   983,  5503,  5032,  4440,  4459,   244,   245,   265,
     273,   543,   955,   278,  1752,  1791,  1830,  3897,  1869,  1908,
     305,  1947,  1986,  3968,  4067,  4100,  4133,  4166,   304,   304,
     304,   304,  1028,   253,  4549,    19,   544,  1639,  4582,  4199,
    4232,   293,  3624,   256,   328,   333,   338,   343,  1028,   345,
    5639,  1290,  3663,   299,   533,  4594,  5044,  5077,  5089,  5122,
    1028,  5134,  5167,  5179,  5212,  5224,   309,  1436,  1436,  1436,
    1436,  1436,  1436,  1436,  1436,  1436,  1436,   228,   228,   330,
     330,   330,   543,    22,   125,   125,   346,  2025,    84,  2064,
    2103,   585,  4535,  4627,  4639,  4672,  4684,  1028,  4717,  4729,
    4762,  4774,  4807,   325,  1472,  1472,  1472,  1472,  1472,  1472,
    1472,  1472,  1472,  1472,   304,   304,   340,   340,   340,  6215,
     302,  2142,   646,   359,  4001,   367,   374,   376,  6243,  4478,
     312,   655,   382,  4497,  1240,  5257,  1335,  5515,  5532,  5544,
    5561,  5573,  5590,  5269,  5302,  5314,  5347,   -12,   389,   390,
     396,   397,  1028,   398,   407,   414,   437,   351,   443,   440,
     467,   463,   464,  2181,  2220,  3702,  2259,  4265,   314,   683,
     466,  4298,   727,  4819,  1577,  1678,  1726,  5421,  5433,  5462,
    5474,  4852,  4864,  4897,  4909,    58,   319,   321,   335,   377,
    1028,   379,   399,   421,   423,  6255,   472,   424,   473,  4516,
    5359,   430,  5392,   692,   469,  1197,  1197,   475,  2298,   477,
     478,  2337,  3936,  4331,  4942,   431,  4954,   729,   474,   480,
    5404,   476,   433,   493,   482,   500,  2376,  2415,  2454,   419,
    2493,  4987,   436,   439,   460,   503,   235,   235,   461,   506,
     513,  3819,  3858,  3936,  3936,  2532,  2571
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -210,  -210,  -210,   368,     0,  -210,  -210,  -210,  -210,  -210,
       2,  -210,   547,   -49,     9,   -47,   -42,   -40,   -38,  -115,
     215,   -36,   141,   139,   -34,   -44,   -48,  1145,   -28,   -26,
     -75,  1326,  1045,  1389,  1331,   783,   872,   226,   542,  -209
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,    48,     7,    14,    28,    15,    27,
     172,    18,    19,    49,   232,    51,    52,    53,    54,   126,
     153,    55,   168,   169,    56,    57,    58,    59,    60,    61,
     119,    62,    63,    64,    65,    66,    67,    68,    69,   111
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    84,     8,    88,     6,   204,     8,    90,   120,   152,
     210,    -5,   205,    -2,   206,    -5,   207,     2,   208,   115,
     209,    -9,   310,    88,    -9,   349,   211,   108,   212,   393,
     -80,     9,   113,   294,   295,   320,    50,    70,    88,   257,
     258,     1,    12,    29,     2,    30,    31,    10,    32,    33,
      34,    35,    36,    37,   202,    85,   203,   -48,   116,    -4,
      20,   -48,   -12,    -4,   350,    38,    39,   -48,    16,    21,
      24,    17,   358,    40,    41,    42,    43,    44,    45,    92,
      93,    46,   124,    47,    17,    29,    73,    30,    31,    26,
      32,    33,    34,    35,    36,    37,   -80,    -6,    79,   407,
     -80,    -6,   -48,   387,    80,    -7,   160,    38,    39,    -7,
      81,    82,   391,   164,   165,    40,    41,    42,    43,    44,
      45,   170,   171,    46,   354,    47,    83,    91,   179,   -45,
     117,   180,   181,   182,   183,   184,   185,    74,   -46,   -49,
     173,   174,   175,   176,   -15,   121,   123,   -15,   186,   187,
     405,    13,    -3,   -47,   145,    -8,    -3,   276,   204,    -8,
     279,   146,   148,   210,   356,   205,   188,   206,   -18,   207,
      22,   208,   -18,   209,    23,   177,   -17,   -54,   -19,   211,
     -17,   212,   -19,   213,   412,    88,   214,   215,   216,   217,
     218,   219,   -16,   316,   147,   149,   -16,   315,   423,   351,
     352,   -14,   -11,   220,   221,   -14,   -11,   202,   -55,   203,
     -13,   150,   -13,   -13,   151,   -13,   -13,   -13,   -13,   -13,
     -13,   222,   109,   233,   347,   -56,   234,   235,   236,   237,
     -58,   245,   -13,   -13,   246,   247,   248,   249,   163,   401,
     -13,   -13,   -13,   -13,   -13,   -13,   241,   -57,   -13,   -10,
     -13,   -10,   -10,   157,   -10,   -10,   -10,   -10,   -10,   -10,
     158,   238,    75,    76,    77,    78,   159,   161,   162,   250,
     -90,   -10,   -10,   195,   -90,   166,   167,   242,   -49,   -10,
     -10,   -10,   -10,   -10,   -10,   272,   273,   -10,   143,   -10,
     -89,   -49,   144,   -80,   -89,   -49,   213,   312,   229,   214,
     215,   216,   217,   218,   219,   195,   274,   282,   195,   195,
     283,   284,   285,   286,   275,   277,   220,   221,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   138,   139,
     140,   141,   142,   337,   222,   309,   338,   339,   340,   341,
     143,   318,   280,   375,   385,   287,   376,   377,   378,   379,
     143,   323,   143,   204,   389,   420,   403,   -85,   210,   -83,
     205,   -85,   206,   -83,   207,   -85,   208,   361,   209,   229,
     -83,   342,    11,   -84,   211,   -84,   212,   -84,   429,   430,
     -86,   380,   -81,   353,   204,   204,   435,   436,   395,   210,
     210,   205,   205,   206,   206,   207,   207,   208,   208,   209,
     209,   388,   202,   195,   203,   211,   211,   212,   212,   -47,
     251,   253,   254,   255,   195,   -86,   -45,   -56,   -46,   -86,
      29,   -56,    30,    31,   392,    32,    33,    34,    35,    36,
      37,   -85,   -83,   202,   202,   203,   203,   -81,   -84,   -86,
     -56,   -81,    38,    39,   288,   290,   291,   292,   195,   -81,
      40,    41,    42,    43,    44,    45,   -58,   229,    46,   -58,
      47,   -57,   143,   -58,   195,   -57,   409,   195,   143,   143,
     229,   143,   410,   421,   -88,   425,   195,   143,   -88,   -57,
     396,   428,   397,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   335,   336,   343,   345,   346,   -82,   -87,
     195,   195,   -82,   -87,   398,   399,   400,   229,   406,   -88,
     -82,   413,   416,   195,   417,   418,   424,   -87,   -88,   426,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     373,   374,   381,   383,   384,   -82,   213,   427,   229,   214,
     215,   216,   217,   218,   219,   -87,    30,   229,   431,    32,
      33,    34,    35,    36,    37,   432,   220,   221,   -63,   -63,
     296,   297,   298,   299,   300,   301,    38,    39,   195,    25,
     402,   434,   433,     0,   222,   319,     0,     0,   178,   178,
     178,   178,   -63,     0,    47,   229,   -63,     0,   213,   196,
       0,   214,   215,   216,   217,   218,   219,   -63,   -63,    94,
      95,    96,    97,    98,    99,     0,   195,     0,   220,   221,
       0,     0,     0,     0,   230,     0,     0,     0,     0,   229,
     -63,   196,     0,     0,   196,   196,   222,   357,     0,     0,
       0,     0,     0,   229,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   239,   239,   239,   213,
       0,     0,   214,   215,   216,   217,   218,   219,   213,     0,
       0,   214,   215,   216,   217,   218,   219,     0,     0,   220,
     221,     0,     0,     0,     0,     0,     0,     0,   220,   221,
       0,     0,     0,     0,     0,   230,   213,   222,   386,   214,
     215,   216,   217,   218,   219,   213,   222,   390,   214,   215,
     216,   217,   218,   219,     0,     0,   220,   221,     0,     0,
       0,     0,     0,     0,     0,   220,   221,     0,     0,   196,
       0,     0,     0,     0,   222,   404,   252,   252,   252,   252,
     196,     0,   213,   222,   411,   214,   215,   216,   217,   218,
     219,   -61,   -61,   296,   297,   298,   299,   300,   301,     0,
       0,     0,   220,   221,     0,     0,     0,     0,     0,     0,
     289,   289,   289,   289,   196,   -61,     0,     0,     0,   -61,
     222,   422,     0,   230,     0,     0,     0,     0,     0,     0,
     196,     0,     0,   196,     0,     0,   230,     0,     0,     0,
       0,     0,   196,     0,     0,     0,     0,     0,     0,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   344,   344,   344,     0,     0,   196,   196,     0,     0,
       0,     0,     0,   230,     0,     0,     0,     0,     0,   196,
     193,     0,     0,     0,     0,     0,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   382,   382,
     382,     0,     0,     0,   230,   227,     0,     0,     0,     0,
       0,     0,   193,   230,     0,   193,   193,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   130,   131,   132,
     133,   134,   135,     0,   196,     0,     0,   -33,   -33,     0,
       0,     0,     0,   125,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   230,     0,   -33,   -33,   -33,     0,     0,     0,     0,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   194,
       0,     0,   196,     0,     0,     0,   227,     0,     0,     0,
     -35,   -35,     0,     0,     0,   230,   125,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   228,     0,   -35,   -35,   -35,   230,
       0,   194,     0,     0,   194,   194,     0,     0,   -31,   -31,
     193,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,
       0,   193,   136,   137,     0,     0,     0,     0,   -31,   -31,
       0,     0,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,   -31,   -31,   -31,   -63,   -63,   259,
     260,   261,   262,   263,   264,   193,   -61,   -61,    94,    95,
      96,    97,    98,    99,   227,   228,     0,     0,     0,     0,
       0,   193,     0,     0,   193,   -63,     0,   227,     0,   -61,
       0,   179,     0,   193,   180,   181,   182,   183,   184,   185,
     193,   193,   327,   328,   329,   330,   331,   332,     0,   194,
       0,   186,   187,     0,     0,     0,     0,   193,   193,     0,
     194,     0,     0,     0,   227,     0,     0,     0,    74,   188,
     193,   173,   174,   175,   176,    36,    37,   227,   227,   365,
     366,   367,   368,   369,   370,     0,     0,     0,    38,    39,
       0,     0,   190,     0,   194,   227,     0,     0,     0,     0,
       0,     0,     0,   228,   227,     0,   177,     0,     0,     0,
     194,     0,     0,   194,     0,     0,   228,   224,     0,     0,
       0,     0,   194,     0,   190,   193,     0,   190,   190,   194,
     194,   194,   194,   194,   194,   194,   194,   333,   334,     0,
       0,     0,   227,     0,     0,     0,   194,   194,     0,     0,
       0,     0,     0,   228,     0,     0,     0,     0,     0,   194,
       0,     0,     0,   193,     0,     0,   228,   228,   228,   228,
     228,   228,   228,   228,   371,   372,   227,     0,     0,     0,
       0,     0,     0,     0,   228,     0,     0,     0,   224,     0,
     227,   213,    86,   228,   214,   215,   216,   217,   218,   219,
     240,     0,     0,    32,    33,    34,    35,    36,    37,     0,
       0,   220,   221,     0,   194,     0,     0,   110,     0,     0,
      38,    39,   190,     0,   112,   114,     0,   118,   118,   222,
       0,   228,     0,   190,     0,     0,     0,     0,    47,     0,
       0,     0,    30,    31,     0,    32,    33,    34,    35,    36,
      37,     0,   194,     0,   -61,   -61,   259,   260,   261,   262,
     263,   264,    38,    39,     0,   228,     0,   190,     0,     0,
      40,   197,   198,   199,   200,   201,   224,     0,    89,   228,
      47,     0,   -61,   190,     0,     0,   190,     0,   154,   224,
       0,   155,   156,   314,     0,   190,   180,   181,   182,   183,
     184,   185,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,     0,   186,   187,     0,     0,     0,     0,   190,
     190,     0,   243,     0,     0,     0,   224,     0,     0,     0,
       0,   188,   190,   256,     0,     0,     0,     0,     0,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   -62,
     -62,   259,   260,   261,   262,   263,   264,   224,   -62,   -62,
      94,    95,    96,    97,    98,    99,   224,   293,     0,     0,
       0,     0,     0,   189,     0,     0,   110,   -62,   192,     0,
       0,   -62,     0,   313,     0,     0,   317,   190,     0,   110,
       0,     0,     0,     0,     0,   322,     0,     0,   223,     0,
       0,     0,     0,   226,   224,   189,     0,     0,   189,   189,
     192,     0,     0,   192,   192,     0,     0,   348,     0,   118,
     118,     0,     0,   127,   129,   190,   110,     0,     0,     0,
       0,     0,   360,     0,     0,     0,   191,     0,   224,   245,
       0,     0,   246,   247,   248,   249,   184,   185,     0,     0,
       0,     0,   224,     0,     0,     0,     0,   110,     0,   186,
     187,   225,     0,     0,     0,     0,   110,     0,   191,   223,
       0,   191,   191,     0,   226,   282,     0,   250,   283,   284,
     285,   286,   218,   219,     0,     0,     0,   394,     0,     0,
       0,     0,     0,     0,     0,   220,   221,     0,     0,     0,
       0,     0,     0,   189,   110,     0,     0,     0,   192,     0,
       0,     0,     0,   287,   189,     0,     0,     0,     0,   192,
       0,     0,     0,     0,     0,   408,     0,     0,     0,     0,
       0,     0,   225,     0,     0,     0,     0,     0,   110,     0,
     414,   415,     0,     0,     0,     0,     0,     0,   189,     0,
       0,     0,   110,   192,     0,     0,     0,   223,     0,     0,
       0,     0,   226,     0,   189,     0,   191,   189,     0,   192,
     223,     0,   192,     0,     0,   226,   189,   191,     0,     0,
       0,   192,     0,     0,     0,     0,     0,     0,   324,   326,
       0,   -62,   -62,   296,   297,   298,   299,   300,   301,     0,
     189,   189,     0,     0,     0,   192,   192,   223,     0,     0,
       0,   191,   226,   189,     0,   -62,     0,     0,   192,   -62,
     225,     0,     0,     0,     0,   362,   364,   191,     0,     0,
     191,     0,     0,   225,     0,     0,     0,     0,   223,   191,
       0,     0,     0,   226,     0,     0,     0,   223,     0,   302,
     303,     0,   226,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,   191,   191,     0,     0,     0,   189,     0,
     225,     0,     0,   192,     0,     0,   191,   -70,     0,     0,
       0,   -70,     0,     0,     0,   223,     0,     0,   302,   303,
     226,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   225,     0,     0,     0,     0,   189,     0,     0,     0,
     225,   192,     0,     0,     0,     0,   -64,     0,     0,   223,
     -64,     0,     0,     0,   226,     0,     0,     0,     0,     0,
       0,   191,     0,   223,     0,     0,   302,   303,   226,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   225,     0,
       0,     0,     0,     0,     0,   -25,   -25,     0,   -25,   -25,
     -25,   -25,   -25,   -25,   -65,     0,     0,     0,   -65,   191,
       0,     0,     0,     0,     0,   -25,   -25,     0,     0,     0,
       0,   -25,   225,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,   -25,   -25,   -24,   -24,   225,   -24,   -24,   -24,
     -24,   -24,   -24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -24,   -24,     0,     0,     0,     0,
     -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
     -24,   -24,   -24,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -26,   -26,     0,     0,     0,     0,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,
     -26,   -26,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -27,   -27,     0,     0,     0,     0,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,   -27,
     -27,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -28,   -28,     0,     0,     0,     0,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -29,   -29,     0,     0,     0,     0,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -30,
     -30,     0,     0,     0,     0,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,    -8,    -8,
       0,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    -8,    -8,
       0,     0,     0,     0,    -8,     0,    -8,    -8,    -8,    -8,
      -8,    -8,     0,     0,    -8,    -8,    -8,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -33,   -33,     0,
       0,     0,     0,   355,     0,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,   -33,   -33,   -33,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -32,   -32,     0,     0,
       0,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,   -32,   -32,   -32,   -20,   -20,     0,   -20,   -20,
     -20,   -20,   -20,   -20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -20,   -20,     0,     0,     0,
       0,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,     0,
       0,   -20,   -20,   -20,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,   -44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -44,   -44,     0,     0,     0,     0,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,
     -44,   -44,   -44,   -35,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -35,   -35,     0,     0,     0,     0,   355,
       0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
     -35,   -35,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -34,   -34,     0,     0,     0,     0,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,   -34,
     -34,   -51,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -51,   -51,     0,     0,     0,     0,   -51,     0,   -51,
     -51,   -51,   -51,   -51,   -51,     0,     0,   -51,   -51,   -51,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -36,   -36,     0,     0,     0,     0,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,   -50,
     -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -50,
     -50,     0,     0,     0,     0,   -50,     0,   -50,   -50,   -50,
     -50,   -50,   -50,     0,     0,   -50,   -50,   -50,   -52,   -52,
       0,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -52,   -52,
       0,     0,     0,     0,   -52,     0,   -52,   -52,   -52,   -52,
     -52,   -52,     0,     0,   -52,   -52,   -52,   -53,   -53,     0,
     -53,   -53,   -53,   -53,   -53,   -53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -53,   -53,     0,
       0,     0,     0,   -53,     0,   -53,   -53,   -53,   -53,   -53,
     -53,     0,     0,   -53,   -53,   -53,   -39,   -39,     0,   -39,
     -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -39,   -39,     0,     0,
       0,     0,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,
       0,     0,   -39,   -39,   -39,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -41,   -41,     0,     0,     0,
       0,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,
       0,   -41,   -41,   -41,   -43,   -43,     0,   -43,   -43,   -43,
     -43,   -43,   -43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -43,   -43,     0,     0,     0,     0,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,
     -43,   -43,   -43,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -23,   -23,     0,     0,     0,     0,     0,
       0,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,
     -23,   -23,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -31,   -31,     0,     0,     0,     0,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,   -31,
     -31,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -25,   -25,     0,     0,     0,     0,     0,     0,   -25,
     -25,   -25,   -25,   -25,   -25,     0,     0,   -25,   -25,   -25,
      30,    31,     0,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,     0,    40,    41,
      42,    43,    44,    45,     0,     0,    46,    87,    47,   -22,
     -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -22,
     -22,     0,     0,     0,     0,     0,     0,   -22,   -22,   -22,
     -22,   -22,   -22,     0,     0,   -22,   -22,   -22,   -24,   -24,
       0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -24,   -24,
       0,     0,     0,     0,     0,     0,   -24,   -24,   -24,   -24,
     -24,   -24,     0,     0,   -24,   -24,   -24,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -26,   -26,     0,
       0,     0,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,
     -26,     0,     0,   -26,   -26,   -26,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -27,   -27,     0,     0,
       0,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,   -27,   -27,   -27,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -28,   -28,     0,     0,     0,
       0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,   -28,   -28,   -28,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -29,   -29,     0,     0,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
     -29,   -29,   -29,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -30,   -30,     0,     0,     0,     0,     0,
       0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,    30,    31,     0,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,    39,     0,     0,     0,     0,     0,     0,
      40,    41,    42,    43,    44,    45,     0,     0,    46,   107,
      47,    30,    31,     0,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,    39,     0,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,    45,     0,     0,    46,   122,    47,
     -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -21,   -21,     0,     0,     0,     0,     0,     0,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,   -21,   -21,   -21,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -32,
     -32,     0,     0,     0,     0,     0,     0,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -32,   -32,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -44,   -44,
       0,     0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,   -44,   -44,   -44,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -20,   -20,     0,
       0,     0,     0,     0,     0,   -20,   -20,   -20,   -20,   -20,
     -20,     0,     0,   -20,   -20,   -20,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -34,   -34,     0,     0,
       0,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,
       0,     0,   -34,   -34,   -34,   -51,   -51,     0,   -51,   -51,
     -51,   -51,   -51,   -51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -51,   -51,     0,     0,     0,
       0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,     0,
       0,   -51,   -51,   -51,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -36,   -36,     0,     0,     0,     0,
       0,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
     -36,   -36,   -36,   -50,   -50,     0,   -50,   -50,   -50,   -50,
     -50,   -50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -50,   -50,     0,     0,     0,     0,     0,
       0,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,   -50,
     -50,   -50,   -52,   -52,     0,   -52,   -52,   -52,   -52,   -52,
     -52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -52,   -52,     0,     0,     0,     0,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,     0,     0,   -52,   -52,
     -52,   -53,   -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -53,   -53,     0,     0,     0,     0,     0,     0,   -53,
     -53,   -53,   -53,   -53,   -53,     0,     0,   -53,   -53,   -53,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -39,   -39,     0,     0,     0,     0,     0,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,   -39,   -39,   -39,   -41,
     -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -41,
     -41,     0,     0,     0,     0,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,     0,     0,   -41,   -41,   -41,   -43,   -43,
       0,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -43,   -43,
       0,     0,     0,     0,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,   -43,   -43,   -43,    30,    31,     0,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,    39,     0,
       0,     0,     0,     0,     0,    40,    41,    42,    43,    44,
      45,     0,     0,    46,   311,    47,    -8,    -8,     0,    -8,
      -8,    -8,    -8,    -8,    -8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    -8,    -8,     0,     0,
       0,     0,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,    -8,    -8,    -8,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -38,   -38,     0,     0,     0,
       0,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,   -38,     0,   -38,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -37,   -37,     0,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
     -37,     0,   -37,    30,    31,     0,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
       0,    40,    41,    42,    43,    44,    45,     0,     0,    46,
       0,    47,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,
     -40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -40,   -40,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,   -40,   -40,     0,     0,   -40,     0,
     -40,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -42,   -42,     0,     0,     0,     0,     0,     0,   -42,
     -42,   -42,   -42,   -42,   -42,     0,     0,   -42,     0,   -42,
      30,    31,     0,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,     0,    40,   197,
     198,   199,   200,   201,     0,     0,   278,     0,    47,    30,
      31,     0,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,     0,     0,    40,   197,   198,
     199,   200,   201,     0,     0,   419,     0,    47,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,   -80,     0,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,     0,     0,   281,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,   -80,   241,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   244,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
     -80,   231,   -80,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   244,   -80,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -79,     0,     0,   -85,     0,   -85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,     0,     0,     0,   -85,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,   -83,     0,   -83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,     0,
       0,     0,   -83,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,   -84,
       0,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,     0,     0,     0,   -84,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,   -86,     0,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -86,     0,     0,     0,   -86,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   306,     0,     0,     0,   307,     0,   308,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -76,     0,     0,
       0,   -76,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,   -81,     0,
     -81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,     0,     0,     0,   -81,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,   -88,     0,   -88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -88,     0,     0,     0,   -88,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,   -82,     0,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,     0,     0,     0,
     -82,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,   -87,     0,   -87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -87,
       0,     0,     0,   -87,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
     -85,     0,   -85,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -85,     0,     0,   -83,
       0,   -83,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -83,     0,     0,   -84,     0,
     -84,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -84,     0,     0,   -86,     0,   -86,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   269,   -86,     0,     0,   270,     0,   271,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -76,     0,     0,   -81,     0,   -81,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -81,     0,     0,   -88,     0,   -88,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -88,     0,     0,   -82,     0,   -82,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -82,
       0,     0,   -87,     0,   -87,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -87,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,   -80,     0,     0,   359,   -80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -79,     0,     0,
       0,   -79,   -73,   -73,   304,   305,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
     -73,     0,     0,     0,   -73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   321,   -80,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,     0,   -85,     0,     0,     0,   -85,
       0,     0,     0,     0,     0,     0,     0,   -83,     0,     0,
       0,   -83,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
     -84,     0,     0,     0,   -84,     0,     0,     0,     0,     0,
       0,     0,   -86,     0,     0,     0,   -86,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,   -77,     0,     0,     0,   -77,
       0,     0,     0,     0,     0,     0,     0,   -81,     0,     0,
       0,   -81,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,     0,     0,     0,     0,
     -78,     0,     0,     0,   -78,     0,     0,     0,     0,     0,
       0,     0,   -59,     0,     0,     0,   -59,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,   -60,     0,     0,     0,   -60,
       0,     0,     0,     0,     0,     0,     0,   -76,     0,     0,
       0,   -76,   -71,   -71,   304,   305,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -72,   -72,   304,   305,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
     -71,     0,     0,     0,   -71,     0,     0,     0,     0,     0,
       0,     0,   -72,     0,     0,     0,   -72,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,   -74,     0,     0,     0,   -74,
       0,     0,     0,     0,     0,     0,     0,   -75,     0,     0,
       0,   -75,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
     -88,     0,     0,     0,   -88,     0,     0,     0,     0,     0,
       0,     0,   -82,     0,     0,     0,   -82,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,   -87,     0,     0,     0,   -87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -79,   -73,   -73,   267,   268,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
       0,     0,     0,     0,   -73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -85,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,     0,     0,     0,     0,   -83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
       0,     0,     0,     0,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -77,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,     0,     0,     0,     0,   -81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -78,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,     0,
       0,     0,     0,     0,   -59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -60,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -71,
     -71,   267,   268,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,     0,     0,     0,     0,   -76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,   -72,   -72,   267,   268,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
       0,     0,     0,     0,   -72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -74,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,     0,     0,     0,     0,   -75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -88,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
       0,   302,   303,     0,   -82,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   302,   303,     0,   -87,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,   -66,
       0,     0,     0,   -66,     0,     0,     0,     0,     0,     0,
       0,   -67,   302,   303,     0,   -67,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   302,   303,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
     -68,     0,     0,     0,   -68,     0,     0,     0,     0,     0,
       0,     0,   -69,   265,   266,     0,   -69,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   265,   266,     0,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
       0,     0,   265,   266,     0,   -70,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   265,   266,     0,   -64,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
       0,   265,   266,     0,   -65,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   265,   266,     0,   -66,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,
     265,   266,     0,   -67,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,   -68,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,   -69,   -80,    71,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,   -80,     0,     0,     0,    72,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,   -80,     0,   -80,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,     0,     0,     0,
      72,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,   -85,     0,   -85,
       0,     0,     0,     0,     0,     0,     0,     0,   -85,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,   -83,     0,   -83,     0,     0,
       0,     0,     0,     0,     0,     0,   -83,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,   -84,     0,   -84,     0,     0,     0,     0,
       0,     0,     0,     0,   -84,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,   -86,     0,   -86,     0,     0,     0,     0,     0,     0,
       0,     0,   -86,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   104,     0,     0,     0,   105,
       0,   106,     0,     0,     0,     0,     0,     0,     0,     0,
     -76,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,   -81,     0,   -81,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,     0,   -88,     0,   -88,     0,     0,
       0,     0,     0,     0,     0,     0,   -88,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,   -82,     0,   -82,     0,     0,     0,     0,
       0,     0,     0,     0,   -82,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,   -87,     0,   -87,     0,     0,     0,     0,     0,     0,
       0,     0,   -87,   -73,   -73,   102,   103,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
     -73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,     0,
     -78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -59,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
     -60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -76,   -71,   -71,   102,   103,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,   -72,   102,   103,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
     -71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -72,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
     -74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -75,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
     -85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
     -84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -86,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
     -81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -88,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   100,   101,     0,
     -82,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   100,
     101,     0,   -87,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   100,   101,     0,   -70,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   100,   101,     0,   -64,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   100,   101,     0,   -65,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   100,   101,     0,
     -66,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   100,
     101,     0,   -67,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,   -68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -69
};

static const yytype_int16 yycheck[] =
{
       0,    45,     0,    50,     4,    54,     4,    54,    83,   124,
      54,     0,    54,     0,    54,     4,    54,     4,    54,     3,
      54,     1,   231,    70,     4,     3,    54,    71,    54,    41,
      42,     3,    80,    14,    15,   244,    27,    28,    85,    14,
      15,     1,    37,     1,     4,     3,     4,     0,     6,     7,
       8,     9,    10,    11,    54,    46,    54,    38,    42,     0,
      42,    42,    42,     4,    42,    23,    24,    42,     1,     3,
      39,     4,   281,    31,    32,    33,    34,    35,    36,    14,
      15,    39,    40,    41,     4,     1,     3,     3,     4,    39,
       6,     7,     8,     9,    10,    11,    38,     0,    41,    41,
      42,     4,    37,   312,    41,     0,   153,    23,    24,     4,
      41,    41,   321,   161,   162,    31,    32,    33,    34,    35,
      36,   168,   169,    39,    40,    41,    41,    37,     3,    37,
       5,     6,     7,     8,     9,    10,    11,     3,    37,    37,
       6,     7,     8,     9,    37,    37,    42,    37,    23,    24,
     359,    41,     0,    37,    42,     0,     4,   201,   207,     4,
     207,    37,    42,   207,   279,   207,    41,   207,    38,   207,
      38,   207,    42,   207,    42,    41,    38,    42,    38,   207,
      42,   207,    42,     3,   393,   232,     6,     7,     8,     9,
      10,    11,    38,   241,    37,    37,    42,   241,   407,   274,
     275,     0,     0,    23,    24,     4,     4,   207,    42,   207,
       1,    42,     3,     4,    42,     6,     7,     8,     9,    10,
      11,    41,    42,     3,   272,    37,     6,     7,     8,     9,
      37,     3,    23,    24,     6,     7,     8,     9,     3,   354,
      31,    32,    33,    34,    35,    36,    27,    37,    39,     1,
      41,     3,     4,    37,     6,     7,     8,     9,    10,    11,
      37,    41,    36,    37,    38,    39,    37,    37,    37,    41,
      38,    23,    24,    47,    42,    42,    42,    37,    42,    31,
      32,    33,    34,    35,    36,    41,    41,    39,    38,    41,
      38,    38,    42,    37,    42,    42,     3,    41,    72,     6,
       7,     8,     9,    10,    11,    79,    41,     3,    82,    83,
       6,     7,     8,     9,    41,    37,    23,    24,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     3,    41,    42,     6,     7,     8,     9,
      38,    42,    37,     3,    42,    41,     6,     7,     8,     9,
      38,    42,    38,   402,    42,   402,    42,    38,   402,    38,
     402,    42,   402,    42,   402,    37,   402,    42,   402,   143,
      37,    41,     4,    38,   402,    37,   402,    42,   426,   427,
      37,    41,    37,    37,   433,   434,   433,   434,    37,   433,
     434,   433,   434,   433,   434,   433,   434,   433,   434,   433,
     434,    42,   402,   177,   402,   433,   434,   433,   434,    42,
     184,   185,   186,   187,   188,    38,    42,    38,    42,    42,
       1,    42,     3,     4,    42,     6,     7,     8,     9,    10,
      11,    42,    42,   433,   434,   433,   434,    38,    42,    42,
      42,    42,    23,    24,   218,   219,   220,   221,   222,    42,
      31,    32,    33,    34,    35,    36,    42,   231,    39,    38,
      41,    38,    38,    42,   238,    42,    42,   241,    38,    38,
     244,    38,    42,    42,    38,    42,   250,    38,    42,    42,
      37,    42,    42,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,    38,    38,
     274,   275,    42,    42,    37,    42,    42,   281,    42,    37,
      37,    42,    37,   287,    37,    37,    42,    37,    42,    37,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,    42,     3,    37,   312,     6,
       7,     8,     9,    10,    11,    42,     3,   321,    42,     6,
       7,     8,     9,    10,    11,    42,    23,    24,    14,    15,
      16,    17,    18,    19,    20,    21,    23,    24,   342,    22,
     355,   432,   431,    -1,    41,    42,    -1,    -1,    36,    37,
      38,    39,    38,    -1,    41,   359,    42,    -1,     3,    47,
      -1,     6,     7,     8,     9,    10,    11,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,   380,    -1,    23,    24,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,   393,
      37,    79,    -1,    -1,    82,    83,    41,    42,    -1,    -1,
      -1,    -1,    -1,   407,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,     3,
      -1,    -1,     6,     7,     8,     9,    10,    11,     3,    -1,
      -1,     6,     7,     8,     9,    10,    11,    -1,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    -1,   143,     3,    41,    42,     6,
       7,     8,     9,    10,    11,     3,    41,    42,     6,     7,
       8,     9,    10,    11,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,   177,
      -1,    -1,    -1,    -1,    41,    42,   184,   185,   186,   187,
     188,    -1,     3,    41,    42,     6,     7,     8,     9,    10,
      11,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
     218,   219,   220,   221,   222,    38,    -1,    -1,    -1,    42,
      41,    42,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,   241,    -1,    -1,   244,    -1,    -1,    -1,
      -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,    -1,    -1,   274,   275,    -1,    -1,
      -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,   287,
      47,    -1,    -1,    -1,    -1,    -1,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,    -1,    -1,    -1,   312,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    79,   321,    -1,    82,    83,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    94,    95,    96,
      97,    98,    99,    -1,   342,    -1,    -1,    23,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,   359,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    47,
      -1,    -1,   380,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      23,    24,    -1,    -1,    -1,   393,    29,    -1,    31,    32,
      33,    34,    35,    36,    72,    -1,    39,    40,    41,   407,
      -1,    79,    -1,    -1,    82,    83,    -1,    -1,     3,     4,
     177,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,   188,   100,   101,    -1,    -1,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    20,    21,   222,    14,    15,    16,    17,
      18,    19,    20,    21,   231,   143,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,   241,    42,    -1,   244,    -1,    37,
      -1,     3,    -1,   250,     6,     7,     8,     9,    10,    11,
     257,   258,   259,   260,   261,   262,   263,   264,    -1,   177,
      -1,    23,    24,    -1,    -1,    -1,    -1,   274,   275,    -1,
     188,    -1,    -1,    -1,   281,    -1,    -1,    -1,     3,    41,
     287,     6,     7,     8,     9,    10,    11,   294,   295,   296,
     297,   298,   299,   300,   301,    -1,    -1,    -1,    23,    24,
      -1,    -1,    47,    -1,   222,   312,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   231,   321,    -1,    41,    -1,    -1,    -1,
     238,    -1,    -1,   241,    -1,    -1,   244,    72,    -1,    -1,
      -1,    -1,   250,    -1,    79,   342,    -1,    82,    83,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,    -1,
      -1,    -1,   359,    -1,    -1,    -1,   274,   275,    -1,    -1,
      -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,   287,
      -1,    -1,    -1,   380,    -1,    -1,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   393,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,   143,    -1,
     407,     3,    47,   321,     6,     7,     8,     9,    10,    11,
       3,    -1,    -1,     6,     7,     8,     9,    10,    11,    -1,
      -1,    23,    24,    -1,   342,    -1,    -1,    72,    -1,    -1,
      23,    24,   177,    -1,    79,    80,    -1,    82,    83,    41,
      -1,   359,    -1,   188,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    -1,   380,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    23,    24,    -1,   393,    -1,   222,    -1,    -1,
      31,    32,    33,    34,    35,    36,   231,    -1,    39,   407,
      41,    -1,    42,   238,    -1,    -1,   241,    -1,   143,   244,
      -1,   146,   147,     3,    -1,   250,     6,     7,     8,     9,
      10,    11,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,    -1,    23,    24,    -1,    -1,    -1,    -1,   274,
     275,    -1,   177,    -1,    -1,    -1,   281,    -1,    -1,    -1,
      -1,    41,   287,   188,    -1,    -1,    -1,    -1,    -1,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    14,
      15,    16,    17,    18,    19,    20,    21,   312,    14,    15,
      16,    17,    18,    19,    20,    21,   321,   222,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,   231,    42,    47,    -1,
      -1,    37,    -1,   238,    -1,    -1,   241,   342,    -1,   244,
      -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    72,   359,    79,    -1,    -1,    82,    83,
      79,    -1,    -1,    82,    83,    -1,    -1,   272,    -1,   274,
     275,    -1,    -1,    92,    93,   380,   281,    -1,    -1,    -1,
      -1,    -1,   287,    -1,    -1,    -1,    47,    -1,   393,     3,
      -1,    -1,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,   407,    -1,    -1,    -1,    -1,   312,    -1,    23,
      24,    72,    -1,    -1,    -1,    -1,   321,    -1,    79,   143,
      -1,    82,    83,    -1,   143,     3,    -1,    41,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,   342,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,   177,   359,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    41,   188,    -1,    -1,    -1,    -1,   188,
      -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,   393,    -1,
     395,   396,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,
      -1,    -1,   407,   222,    -1,    -1,    -1,   231,    -1,    -1,
      -1,    -1,   231,    -1,   238,    -1,   177,   241,    -1,   238,
     244,    -1,   241,    -1,    -1,   244,   250,   188,    -1,    -1,
      -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,   257,   258,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
     274,   275,    -1,    -1,    -1,   274,   275,   281,    -1,    -1,
      -1,   222,   281,   287,    -1,    38,    -1,    -1,   287,    42,
     231,    -1,    -1,    -1,    -1,   294,   295,   238,    -1,    -1,
     241,    -1,    -1,   244,    -1,    -1,    -1,    -1,   312,   250,
      -1,    -1,    -1,   312,    -1,    -1,    -1,   321,    -1,    10,
      11,    -1,   321,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,   274,   275,    -1,    -1,    -1,   342,    -1,
     281,    -1,    -1,   342,    -1,    -1,   287,    38,    -1,    -1,
      -1,    42,    -1,    -1,    -1,   359,    -1,    -1,    10,    11,
     359,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,   312,    -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,
     321,   380,    -1,    -1,    -1,    -1,    38,    -1,    -1,   393,
      42,    -1,    -1,    -1,   393,    -1,    -1,    -1,    -1,    -1,
      -1,   342,    -1,   407,    -1,    -1,    10,    11,   407,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,   359,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    38,    -1,    -1,    -1,    42,   380,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      -1,    29,   393,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,   407,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    41,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    41,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    41,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      41,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    41,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    41,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    41,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      42,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    27,    28,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    41,    42,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    37,    -1,    -1,
      26,    41,    28,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    41,    42,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      37,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    -1,    28,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    42,    -1,    -1,    26,
      -1,    28,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    42,    -1,    -1,    26,    -1,
      28,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    42,    -1,    -1,    26,    -1,    28,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    42,    -1,    -1,    26,    -1,    28,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    42,    -1,    -1,    26,    -1,    28,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    42,    -1,    -1,    26,    -1,    28,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      42,    -1,    -1,    26,    -1,    28,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    42,
      -1,    -1,    26,    -1,    28,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    42,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    38,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    10,    11,    12,
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
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    10,    11,    -1,    42,    14,    15,    16,    17,    18,
      19,    20,    21,    10,    11,    -1,    42,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    10,    11,    -1,    42,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    10,    11,    -1,    42,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    10,    11,    -1,    42,    14,    15,    16,    17,
      18,    19,    20,    21,    10,    11,    -1,    42,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    10,    11,    -1,    42,    14,    15,    16,    17,    18,
      19,    20,    21,    10,    11,    -1,    42,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      10,    11,    -1,    42,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    42,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    42,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
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
      15,    16,    17,    18,    19,    20,    21,    10,    11,    -1,
      37,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    -1,    37,    14,    15,    16,    17,    18,    19,    20,
      21,    10,    11,    -1,    37,    14,    15,    16,    17,    18,
      19,    20,    21,    10,    11,    -1,    37,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    -1,    37,    14,
      15,    16,    17,    18,    19,    20,    21,    10,    11,    -1,
      37,    14,    15,    16,    17,    18,    19,    20,    21,    10,
      11,    -1,    37,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,    44,    45,    46,    47,    48,    53,     3,
       0,    46,    37,    41,    49,    51,     1,     4,    54,    55,
      42,     3,    38,    42,    39,    55,    39,    52,    50,     1,
       3,     4,     6,     7,     8,     9,    10,    11,    23,    24,
      31,    32,    33,    34,    35,    36,    39,    41,    47,    56,
      57,    58,    59,    60,    61,    64,    67,    68,    69,    70,
      71,    72,    74,    75,    76,    77,    78,    79,    80,    81,
      57,    27,    41,     3,     3,    80,    80,    80,    80,    41,
      41,    41,    41,    41,    68,    57,    70,    40,    58,    39,
      58,    37,    14,    15,    16,    17,    18,    19,    20,    21,
      10,    11,    12,    13,    22,    26,    28,    40,    68,    42,
      70,    82,    70,    69,    70,     3,    42,     5,    70,    73,
      73,    37,    40,    42,    40,    29,    62,    77,    80,    77,
      78,    78,    78,    78,    78,    78,    79,    79,    80,    80,
      80,    80,    80,    38,    42,    42,    37,    37,    42,    37,
      42,    42,    62,    63,    70,    70,    70,    37,    37,    37,
      58,    37,    37,     3,    69,    69,    42,    42,    65,    66,
      58,    58,    53,     6,     7,     8,     9,    41,    81,     3,
       6,     7,     8,     9,    10,    11,    23,    24,    41,    74,
      75,    76,    77,    78,    79,    80,    81,    32,    33,    34,
      35,    36,    47,    53,    56,    59,    60,    61,    64,    67,
      68,    71,    72,     3,     6,     7,     8,     9,    10,    11,
      23,    24,    41,    74,    75,    76,    77,    78,    79,    80,
      81,    41,    57,     3,     6,     7,     8,     9,    41,    81,
       3,    27,    37,    70,    41,     3,     6,     7,     8,     9,
      41,    80,    81,    80,    80,    80,    70,    14,    15,    16,
      17,    18,    19,    20,    21,    10,    11,    12,    13,    22,
      26,    28,    41,    41,    41,    41,    68,    37,    39,    58,
      37,    41,     3,     6,     7,     8,     9,    41,    80,    81,
      80,    80,    80,    70,    14,    15,    16,    17,    18,    19,
      20,    21,    10,    11,    12,    13,    22,    26,    28,    42,
      82,    40,    41,    70,     3,    68,    69,    70,    42,    42,
      82,    41,    70,    42,    77,    80,    77,    78,    78,    78,
      78,    78,    78,    79,    79,    80,    80,     3,     6,     7,
       8,     9,    41,    80,    81,    80,    80,    69,    70,     3,
      42,    73,    73,    37,    40,    29,    62,    42,    82,    41,
      70,    42,    77,    80,    77,    78,    78,    78,    78,    78,
      78,    79,    79,    80,    80,     3,     6,     7,     8,     9,
      41,    80,    81,    80,    80,    42,    42,    82,    42,    42,
      42,    82,    42,    41,    70,    37,    37,    42,    37,    42,
      42,    62,    63,    42,    42,    82,    42,    41,    70,    42,
      42,    42,    82,    42,    70,    70,    37,    37,    37,    39,
      58,    42,    42,    82,    42,    42,    37,    37,    42,    69,
      69,    42,    42,    65,    66,    58,    58
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    46,    47,    49,
      50,    48,    51,    52,    48,    53,    54,    54,    54,    55,
      56,    57,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    59,    60,    60,    60,    60,    61,    63,    62,
      65,    64,    66,    64,    67,    68,    68,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    74,    75,
      75,    76,    76,    76,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    78,    79,    79,    79,    79,    79,    79,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    82,
      82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     0,
       0,    10,     0,     0,     9,     2,     3,     1,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     3,     4,     4,     0,     3,
       0,    10,     0,    10,     3,     1,     1,     3,     1,     1,
       5,     4,     5,     5,     1,     1,     3,     3,     3,     2,
       2,     3,     3,     1,     3,     3,     3,     3,     3,     3,
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
#define YYNOMEM         goto yyexhaustedlab


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


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
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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

  YYLOCATION_PRINT (yyo, yylocationp);
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
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
#line 680 "guillex.y"
                        {
        abstractSyntaxTree = (yyval.treeNode);
    }
#line 3606 "guillex.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 686 "guillex.y"
                                    {
       (yyval.treeNode) = createNode2("declarationsList declaration", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
     }
#line 3614 "guillex.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 689 "guillex.y"
                      {
    (yyval.treeNode) = createNode1("declaration", (yyvsp[0].treeNode));
  }
#line 3622 "guillex.tab.c"
    break;

  case 5: /* declarationList: error  */
#line 692 "guillex.y"
          {
    (yyval.treeNode) = createNodeE();
    errors++;
    yyerror(yymsg);
  }
#line 3632 "guillex.tab.c"
    break;

  case 6: /* declaration: varDeclaration  */
#line 700 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
    }
#line 3640 "guillex.tab.c"
    break;

  case 7: /* declaration: funcDeclaration  */
#line 703 "guillex.y"
                       {
      (yyval.treeNode) = createNode1("funcDeclaration", (yyvsp[0].treeNode));
    }
#line 3648 "guillex.tab.c"
    break;

  case 8: /* varDeclaration: simpleVarDeclaration SEMIC  */
#line 709 "guillex.y"
                               {
      (yyval.treeNode) = createNode1("simpleVarDeclaration", (yyvsp[-1].treeNode));}
#line 3655 "guillex.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 714 "guillex.y"
                   {scope++; pushStack(scope);}
#line 3661 "guillex.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 714 "guillex.y"
                                                                     {
      UT_string *r;
      utstring_new(r);
      errors += addSymbol((yyvsp[-5].str), "func", (yyvsp[-6].str), STACK_TOP(stackScope) -> value, parameters, r);
      addFunc((yyvsp[-5].str));
      parameters = 0;
      }
#line 3673 "guillex.tab.c"
    break;

  case 11: /* funcDeclaration: TYPE ID PARENL $@1 params PARENR STFUNC $@2 stmtList ENDFUNC  */
#line 720 "guillex.y"
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
#line 3695 "guillex.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 737 "guillex.y"
                   {pushStack(scope);}
#line 3701 "guillex.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 737 "guillex.y"
                                                     {
    UT_string *r;
    utstring_new(r);
    errors += addSymbol((yyvsp[-4].str), "func", (yyvsp[-5].str), STACK_TOP(stackScope) -> value, parameters, 0);
    parameters = 0;
    addFunc((yyvsp[-4].str));
    }
#line 3713 "guillex.tab.c"
    break;

  case 14: /* funcDeclaration: TYPE ID PARENL $@3 PARENR STFUNC $@4 stmtList ENDFUNC  */
#line 743 "guillex.y"
                       {
    
      (yyval.treeNode) = createNode3("TYPE ID PARENL PARENR stmtList ENDFUNC ", createNode0((yyvsp[-8].str)), createNode0((yyvsp[-7].str)), (yyvsp[-1].treeNode)); 
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
#line 3736 "guillex.tab.c"
    break;

  case 15: /* simpleVarDeclaration: TYPE ID  */
#line 763 "guillex.y"
            {

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

        varDecAssign(utstring_body(s), "e");
      }
      varReg++;
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      }
#line 3764 "guillex.tab.c"
    break;

  case 16: /* params: params COMMA param  */
#line 790 "guillex.y"
                       {
      (yyval.treeNode) = createNode2("params COMMA param", (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[-2].treeNode) -> nodeType;
      }
#line 3773 "guillex.tab.c"
    break;

  case 17: /* params: param  */
#line 794 "guillex.y"
          { 
    (yyval.treeNode) = createNode1("param", (yyvsp[0].treeNode)); 
    (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
    }
#line 3782 "guillex.tab.c"
    break;

  case 18: /* params: error  */
#line 798 "guillex.y"
          {
      (yyval.treeNode) = createNodeE();
      errors++;
      yyerror(yymsg);
    }
#line 3792 "guillex.tab.c"
    break;

  case 19: /* param: TYPE ID  */
#line 806 "guillex.y"
            {
      parameters++;
      pushStack(scope);
      (yyval.treeNode) = createNode2("TYPE ID", createNode0((yyvsp[-1].str)), createNode0((yyvsp[0].str)));
      semanticErrors += addSymbol((yyvsp[0].str), "param", (yyvsp[-1].str), STACK_TOP(stackScope) -> value, 0, create_new_reg(varReg));
      varReg++;
      popStack();
      }
#line 3805 "guillex.tab.c"
    break;

  case 20: /* compoundStmt: STFUNC stmtList ENDFUNC  */
#line 817 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[-1].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[-1].treeNode) -> nodeType;
    }
#line 3814 "guillex.tab.c"
    break;

  case 21: /* stmtList: stmtList primitiveStmt  */
#line 824 "guillex.y"
                              {
      (yyval.treeNode) = createNode2("stmtList primitiveStmt", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
      if((yyvsp[-1].treeNode) -> returnType == 'x')
        (yyval.treeNode) -> returnType = (yyvsp[0].treeNode) -> returnType;
      else
        (yyval.treeNode) -> returnType = (yyvsp[-1].treeNode) -> returnType;
    }
#line 3826 "guillex.tab.c"
    break;

  case 22: /* stmtList: primitiveStmt  */
#line 831 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("primitiveStmt", (yyvsp[0].treeNode));
    (yyval.treeNode) -> returnType = (yyvsp[0].treeNode) -> returnType;
  }
#line 3835 "guillex.tab.c"
    break;

  case 23: /* stmtList: error  */
#line 835 "guillex.y"
          {
      (yyval.treeNode) = createNodeE();
    }
#line 3843 "guillex.tab.c"
    break;

  case 24: /* primitiveStmt: exprStmt  */
#line 841 "guillex.y"
             {
      (yyval.treeNode) = createNode1("exprStmt", (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
    }
#line 3852 "guillex.tab.c"
    break;

  case 25: /* primitiveStmt: compoundStmt  */
#line 845 "guillex.y"
                 {
    (yyval.treeNode) = createNode1("compoundStmt", (yyvsp[0].treeNode));
    (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 3861 "guillex.tab.c"
    break;

  case 26: /* primitiveStmt: condStmt  */
#line 849 "guillex.y"
             {
    (yyval.treeNode) = createNode1("condStmt", (yyvsp[0].treeNode));
    (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 3870 "guillex.tab.c"
    break;

  case 27: /* primitiveStmt: iterStmt  */
#line 853 "guillex.y"
             {
    (yyval.treeNode) = createNode1("iterStmt", (yyvsp[0].treeNode));
    (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 3879 "guillex.tab.c"
    break;

  case 28: /* primitiveStmt: returnStmt  */
#line 857 "guillex.y"
               {
    (yyval.treeNode) = createNode1("returnStmt", (yyvsp[0].treeNode));
    (yyval.treeNode) -> returnType = (yyvsp[0].treeNode) -> returnType;
  }
#line 3888 "guillex.tab.c"
    break;

  case 29: /* primitiveStmt: inOp  */
#line 861 "guillex.y"
         {
    (yyval.treeNode) = createNode1("inOp", (yyvsp[0].treeNode));
  }
#line 3896 "guillex.tab.c"
    break;

  case 30: /* primitiveStmt: outOp  */
#line 864 "guillex.y"
          {
    (yyval.treeNode) = createNode1("outOp", (yyvsp[0].treeNode));
  }
#line 3904 "guillex.tab.c"
    break;

  case 31: /* primitiveStmt: varDeclaration  */
#line 867 "guillex.y"
                   {
    (yyval.treeNode) = createNode1("varDeclaration", (yyvsp[0].treeNode));
    (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 3913 "guillex.tab.c"
    break;

  case 32: /* exprStmt: expression SEMIC  */
#line 874 "guillex.y"
                     {
      (yyval.treeNode) = createNode1("expression SEMIC", (yyvsp[-1].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[-1].treeNode) -> nodeType;
    }
#line 3922 "guillex.tab.c"
    break;

  case 33: /* condStmt: ifStmt primitiveStmt  */
#line 881 "guillex.y"
                                    {
      (yyval.treeNode) = createNode2("ifStmt primitiveStmt", (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
      ifFuncExit(STACK_TOP(stackIfElse) -> value);
      popStackIf();
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
    }
#line 3933 "guillex.tab.c"
    break;

  case 34: /* condStmt: ifStmt primitiveStmt elseStmt  */
#line 887 "guillex.y"
                                   {
    (yyval.treeNode) = createNode3("ifStmt primitiveStmt elseStmt", (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), (yyvsp[0].treeNode));
    (yyval.treeNode) -> nodeType = (yyvsp[-1].treeNode) -> nodeType;
  }
#line 3942 "guillex.tab.c"
    break;

  case 35: /* condStmt: ifStmt STFUNC ENDFUNC  */
#line 891 "guillex.y"
                                    {
    (yyval.treeNode) = createNode1("ifStmt", (yyvsp[-2].treeNode));
    ifFuncExit(STACK_TOP(stackIfElse) -> value);
    popStackIf();

  }
#line 3953 "guillex.tab.c"
    break;

  case 36: /* condStmt: ifStmt STFUNC ENDFUNC elseStmt  */
#line 897 "guillex.y"
                                    {
    (yyval.treeNode) = createNode2("ifStmt primitiveStmt elseStmt", (yyvsp[-3].treeNode), (yyvsp[0].treeNode));
  }
#line 3961 "guillex.tab.c"
    break;

  case 37: /* ifStmt: IF PARENL simpleExp PARENR  */
#line 904 "guillex.y"
                              {
      ifId++;
      pushStackIf(ifId);
      ifFunc(ifId, (yyvsp[-1].treeNode) -> saved);
      scope++;
      pushStack(scope);
      (yyval.treeNode) = createNode2("IF PARENL simpleExp PARENR", createNode0((yyvsp[-3].str)), (yyvsp[-1].treeNode));
    }
#line 3974 "guillex.tab.c"
    break;

  case 38: /* $@5: %empty  */
#line 915 "guillex.y"
      {
    ifJump(ifId);
    popStack();
    scope++;
    pushStack(scope);
  }
#line 3985 "guillex.tab.c"
    break;

  case 39: /* elseStmt: ELSE $@5 primitiveStmt  */
#line 920 "guillex.y"
                  {
    ifJumpExit(STACK_TOP(stackIfElse) -> value);
    popStackIf();
    ifId++;
    popStack();
    (yyval.treeNode) = createNode2("ELSE primitiveStmt", createNode0((yyvsp[-2].str)), (yyvsp[0].treeNode));

  }
#line 3998 "guillex.tab.c"
    break;

  case 40: /* $@6: %empty  */
#line 930 "guillex.y"
                                                                {      
      scope++;
      pushStack(scope);
      }
#line 4007 "guillex.tab.c"
    break;

  case 41: /* iterStmt: FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR $@6 primitiveStmt  */
#line 933 "guillex.y"
                      {

      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-9].str)), (yyvsp[-7].treeNode), (yyvsp[-5].treeNode), (yyvsp[-3].treeNode), (yyvsp[0].treeNode));
      popStack();
      scope--;
      pushStack(scope);
      popStack();
    }
#line 4020 "guillex.tab.c"
    break;

  case 42: /* $@7: %empty  */
#line 941 "guillex.y"
                                                                {
      scope++;
      pushStack(scope);
      }
#line 4029 "guillex.tab.c"
    break;

  case 43: /* iterStmt: FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR $@7 primitiveStmt  */
#line 944 "guillex.y"
                      {
      (yyval.treeNode) = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0((yyvsp[-9].str)), (yyvsp[-7].treeNode), (yyvsp[-5].treeNode), (yyvsp[-3].treeNode), (yyvsp[0].treeNode));
      popStack();
      scope--;
      pushStack(scope);
      popStack();
  }
#line 4041 "guillex.tab.c"
    break;

  case 44: /* returnStmt: RETURN expression SEMIC  */
#line 954 "guillex.y"
                            {
      (yyval.treeNode) = createNode2("RETURN expression SEMIC", createNode0((yyvsp[-2].str)), (yyvsp[-1].treeNode));
      (yyval.treeNode) -> returnType = (yyvsp[-1].treeNode) -> nodeType;
    }
#line 4050 "guillex.tab.c"
    break;

  case 45: /* expression: assignExp  */
#line 962 "guillex.y"
              {
      (yyval.treeNode) = createNode1("assignExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
    }
#line 4060 "guillex.tab.c"
    break;

  case 46: /* expression: simpleExp  */
#line 967 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 4070 "guillex.tab.c"
    break;

  case 47: /* assignExp: ID ASSIGN expression  */
#line 975 "guillex.y"
                         {
      struct symbol *s = checkIsInScope((yyvsp[-2].str), STACK_TOP(stackScope) -> value);
      if (s != NULL){
        (yyval.treeNode) = createNode3("ID ASSIGN expression", createNode0((yyvsp[-2].str)), createNode0("="), (yyvsp[0].treeNode));
        varDecAssign(utstring_body(s -> varReg), (yyvsp[0].treeNode) -> saved);
        (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
        (yyval.treeNode) -> nodeType = s -> varFuncName[0];
      if (s -> varFuncName[0] != 'e'){
          (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
          (yyval.treeNode) -> nodeType = s -> varFuncName[0];
      }
      else {
          (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
          (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
      }
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
#line 4102 "guillex.tab.c"
    break;

  case 48: /* simpleExp: binLogicalExp  */
#line 1006 "guillex.y"
                  {
      (yyval.treeNode) = createNode1("binLogicalExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
    }
#line 4112 "guillex.tab.c"
    break;

  case 49: /* simpleExp: binListExp  */
#line 1012 "guillex.y"
              {
      (yyval.treeNode) = createNode1("binListExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
    }
#line 4122 "guillex.tab.c"
    break;

  case 50: /* inOp: READ PARENL ID PARENR SEMIC  */
#line 1021 "guillex.y"
                             {
    struct symbol *s = checkIsInScope((yyvsp[-2].str), STACK_TOP(stackScope) -> value);
    if (s != NULL) {
    (yyval.treeNode) = createNode2("READ PARENL ID PARENR SEMIC", createNode0((yyvsp[-4].str)), createNode0((yyvsp[-2].str)));
    readFunc(utstring_body(s -> varReg), s -> varFuncName[0]);
    (yyval.treeNode) -> saved = utstring_body(s -> varReg);
    } else {
        printf("Semantic error\n");
        printf("var %s not declared, line %d, column %d\n\n", (yyvsp[-4].str), line, wordPosition);
        semanticErrors += 1;
        (yyval.treeNode) = createNodeE();
      }
  }
#line 4140 "guillex.tab.c"
    break;

  case 51: /* inOp: READ PARENL PARENR SEMIC  */
#line 1035 "guillex.y"
                            {
    (yyval.treeNode) = createNode1("READ PARENL PARENR SEMIC", createNode0((yyvsp[-3].str)));
  }
#line 4148 "guillex.tab.c"
    break;

  case 52: /* outOp: WRITE PARENL outConst PARENR SEMIC  */
#line 1041 "guillex.y"
                                      {
      (yyval.treeNode) = createNode2("WRITE PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
      writeFunc((yyvsp[-2].treeNode) -> saved);
      (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
    }
#line 4158 "guillex.tab.c"
    break;

  case 53: /* outOp: WRITELN PARENL outConst PARENR SEMIC  */
#line 1046 "guillex.y"
                                         {
      (yyval.treeNode) = createNode2("WRITELN PARENL outConst PARENR SEMIC", createNode0((yyvsp[-4].str)), (yyvsp[-2].treeNode));
      writelnFunc((yyvsp[-2].treeNode) -> saved);
      (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
  }
#line 4168 "guillex.tab.c"
    break;

  case 54: /* outConst: STRING  */
#line 1054 "guillex.y"
           {
      (yyval.treeNode) = createNode1("STRING", createNode0((yyvsp[0].str)));
      (yyval.treeNode) -> nodeType = 't';
      (yyval.treeNode) -> saved = (yyvsp[0].str);
    }
#line 4178 "guillex.tab.c"
    break;

  case 55: /* outConst: simpleExp  */
#line 1059 "guillex.y"
              {
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 4188 "guillex.tab.c"
    break;

  case 56: /* binListExp: factor APPEND factor  */
#line 1067 "guillex.y"
                             {
		(yyval.treeNode) = createNode3("factor APPEND factor", (yyvsp[-2].treeNode), createNode0(":"), (yyvsp[0].treeNode));		
    (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
    (yyval.treeNode) -> nodeType = (yyvsp[-2].treeNode) -> nodeType;
	}
#line 4198 "guillex.tab.c"
    break;

  case 57: /* binListExp: factor MAP factor  */
#line 1072 "guillex.y"
                            {
		
		(yyval.treeNode) = createNode3("factor MAP factor", (yyvsp[-2].treeNode), createNode0(">>"), (yyvsp[0].treeNode));		
    (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
    (yyval.treeNode) -> nodeType = (yyvsp[-2].treeNode) -> nodeType;
	}
#line 4209 "guillex.tab.c"
    break;

  case 58: /* binListExp: factor FILTER factor  */
#line 1078 "guillex.y"
                               {
		(yyval.treeNode) = createNode3("factor FILTER factor", (yyvsp[-2].treeNode), createNode0("<<"), (yyvsp[0].treeNode));	
    (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;	
    (yyval.treeNode) -> nodeType = (yyvsp[-2].treeNode) -> nodeType;
	}
#line 4219 "guillex.tab.c"
    break;

  case 59: /* unaryListExp: HEADLIST factor  */
#line 1085 "guillex.y"
                        {
		(yyval.treeNode) = createNode2("? factor", createNode0("?"), (yyvsp[0].treeNode));
    (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
    (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;	
	}
#line 4229 "guillex.tab.c"
    break;

  case 60: /* unaryListExp: TAILLIST factor  */
#line 1090 "guillex.y"
                          {
    (yyval.treeNode) = createNode2("! factor", createNode0("!"), (yyvsp[0].treeNode));
    (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
    (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;	
	}
#line 4239 "guillex.tab.c"
    break;

  case 61: /* binLogicalExp: binLogicalExp OR relationalExp  */
#line 1098 "guillex.y"
                                  {
      (yyval.treeNode) = createNode3("binLogicalExp binLogicalOp relationalOp", (yyvsp[-2].treeNode), createNode0("||"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[-2].treeNode) -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("or", s, (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
      varReg++;
    }
#line 4252 "guillex.tab.c"
    break;

  case 62: /* binLogicalExp: binLogicalExp AND relationalExp  */
#line 1107 "guillex.y"
                                   {
      (yyval.treeNode) = createNode3("binLogicalExp binLogicalOp relationalOp", (yyvsp[-2].treeNode), createNode0("&&"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[-2].treeNode) -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("or", s, (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
      varReg++;
    }
#line 4265 "guillex.tab.c"
    break;

  case 63: /* binLogicalExp: relationalExp  */
#line 1115 "guillex.y"
                  {
    (yyval.treeNode) = createNode1("relationalExp", (yyvsp[0].treeNode));
    (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
    (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 4275 "guillex.tab.c"
    break;

  case 64: /* relationalExp: relationalExp SMALLER sumExp  */
#line 1123 "guillex.y"
                                 {
      (yyval.treeNode) = createNode3("relationalExp SMALLER sumExp", (yyvsp[-2].treeNode), createNode0("<"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[-2].treeNode) -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("slt", s, (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = s;
      varReg++;
    }
#line 4288 "guillex.tab.c"
    break;

  case 65: /* relationalExp: relationalExp GREATER sumExp  */
#line 1132 "guillex.y"
                                 {
      (yyval.treeNode) = createNode3("relationalExp GREATER sumExp", (yyvsp[-2].treeNode), createNode0(">"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[-2].treeNode) -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("slt", s, (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = s;
      varReg++;
    }
#line 4301 "guillex.tab.c"
    break;

  case 66: /* relationalExp: relationalExp SMALLEQ sumExp  */
#line 1141 "guillex.y"
                                 {
      (yyval.treeNode) = createNode3("relationalExp SMALLEQ sumExp", (yyvsp[-2].treeNode), createNode0("<="), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[-2].treeNode) -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("sleq", s, (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = s;
      varReg++;
    }
#line 4314 "guillex.tab.c"
    break;

  case 67: /* relationalExp: relationalExp GREATEQ sumExp  */
#line 1150 "guillex.y"
                                 {
      (yyval.treeNode) = createNode3("relationalExp GREATEQ sumExp", (yyvsp[-2].treeNode), createNode0(">="), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[-2].treeNode) -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("sleq", s, (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = s;
      varReg++;
    }
#line 4327 "guillex.tab.c"
    break;

  case 68: /* relationalExp: relationalExp EQUALS sumExp  */
#line 1159 "guillex.y"
                                {
      (yyval.treeNode) = createNode3("relationalExp EQUALS sumExp", (yyvsp[-2].treeNode), createNode0("=="), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[-2].treeNode) -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("seq", s, (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = s;
      varReg++;
    }
#line 4340 "guillex.tab.c"
    break;

  case 69: /* relationalExp: relationalExp DIFFERENT sumExp  */
#line 1168 "guillex.y"
                                   {
      (yyval.treeNode) = createNode3("relationalExp DIFFERENT sumExp", (yyvsp[-2].treeNode), createNode0("!="), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[-2].treeNode) -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("seq", s, (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      notFunc(s, s);
      (yyval.treeNode) -> saved = s;
      varReg++;
    }
#line 4354 "guillex.tab.c"
    break;

  case 70: /* relationalExp: sumExp  */
#line 1177 "guillex.y"
           {
      (yyval.treeNode) = createNode1("sumExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 4364 "guillex.tab.c"
    break;

  case 71: /* sumExp: sumExp ADD mulExp  */
#line 1186 "guillex.y"
                      {
      (yyval.treeNode) = createNode3("sumExp add mulExp", (yyvsp[-2].treeNode), createNode0("+"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = checkTypes((yyvsp[-2].treeNode) -> nodeType, (yyvsp[0].treeNode) -> nodeType);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("add", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 4376 "guillex.tab.c"
    break;

  case 72: /* sumExp: sumExp SUB mulExp  */
#line 1194 "guillex.y"
                          {
      (yyval.treeNode) = createNode3("sumExp sub mulExp", (yyvsp[-2].treeNode), createNode0("-"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = checkTypes((yyvsp[-2].treeNode) -> nodeType, (yyvsp[0].treeNode) -> nodeType);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("sub", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 4388 "guillex.tab.c"
    break;

  case 73: /* sumExp: mulExp  */
#line 1201 "guillex.y"
           {
      (yyval.treeNode) = createNode1("mulExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
  }
#line 4398 "guillex.tab.c"
    break;

  case 74: /* mulExp: mulExp MULT factor  */
#line 1209 "guillex.y"
                       {
      (yyval.treeNode) = createNode3("mulExp mulOp factor", (yyvsp[-2].treeNode), createNode0("*"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = checkTypes((yyvsp[-2].treeNode) -> nodeType, (yyvsp[0].treeNode) -> nodeType);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("mul", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 4410 "guillex.tab.c"
    break;

  case 75: /* mulExp: mulExp DIV factor  */
#line 1217 "guillex.y"
                       {
      (yyval.treeNode) = createNode3("mulExp mulOp factor", (yyvsp[-2].treeNode), createNode0("/"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = checkTypes((yyvsp[-2].treeNode) -> nodeType, (yyvsp[0].treeNode) -> nodeType);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("div", utstring_body(s), (yyvsp[-2].treeNode) -> saved, (yyvsp[0].treeNode) -> saved);
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 4422 "guillex.tab.c"
    break;

  case 76: /* mulExp: factor  */
#line 1224 "guillex.y"
           {
      (yyval.treeNode) = createNode1("factor", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 4432 "guillex.tab.c"
    break;

  case 77: /* mulExp: ADD factor  */
#line 1229 "guillex.y"
               {
      (yyval.treeNode) = createNode2("ADD factor", createNode0("+"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 4441 "guillex.tab.c"
    break;

  case 78: /* mulExp: SUB factor  */
#line 1233 "guillex.y"
               {
      (yyval.treeNode) = createNode2("SUB factor", createNode0("-"), (yyvsp[0].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 4450 "guillex.tab.c"
    break;

  case 79: /* mulExp: unaryListExp  */
#line 1237 "guillex.y"
                 {
		(yyval.treeNode) = createNode1("unaryListExp", (yyvsp[0].treeNode));
    (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
	}
#line 4459 "guillex.tab.c"
    break;

  case 80: /* factor: ID  */
#line 1245 "guillex.y"
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
#line 4477 "guillex.tab.c"
    break;

  case 81: /* factor: fCall  */
#line 1258 "guillex.y"
          {
      (yyval.treeNode) = createNode1("fCall", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 4487 "guillex.tab.c"
    break;

  case 82: /* factor: PARENL simpleExp PARENR  */
#line 1263 "guillex.y"
                            {
      (yyval.treeNode) = createNode1("PARENL simpleExp PARENR", (yyvsp[-1].treeNode));
      (yyval.treeNode) -> nodeType = (yyvsp[-1].treeNode) -> nodeType;
      (yyval.treeNode) -> saved = (yyvsp[-1].treeNode) -> saved;
  }
#line 4497 "guillex.tab.c"
    break;

  case 83: /* factor: INTEGER  */
#line 1268 "guillex.y"
            {
      (yyval.treeNode) = createNode0Int((yyvsp[0].integer), 'i');
      (yyval.treeNode) -> nodeType = 'i';
      UT_string *s = int_as_str((yyvsp[0].integer));
      (yyval.treeNode) -> saved = utstring_body(s);
    }
#line 4508 "guillex.tab.c"
    break;

  case 84: /* factor: DECIMAL  */
#line 1274 "guillex.y"
            {
    (yyval.treeNode) = createNode0Dec((yyvsp[0].dec), 'f');
    (yyval.treeNode) -> nodeType = 'f';
    UT_string *s = float_as_str((yyvsp[0].dec));
    (yyval.treeNode) -> saved = utstring_body(s);
  }
#line 4519 "guillex.tab.c"
    break;

  case 85: /* factor: NIL  */
#line 1280 "guillex.y"
        {
    (yyval.treeNode) = createNode0Nil((yyvsp[0].str), 'n');
    (yyval.treeNode) -> nodeType = 'n';
  }
#line 4528 "guillex.tab.c"
    break;

  case 86: /* factor: ERRORTOKEN  */
#line 1284 "guillex.y"
               {
      (yyval.treeNode) = createNodeE();
    }
#line 4536 "guillex.tab.c"
    break;

  case 87: /* fCall: ID PARENL callParams PARENR  */
#line 1290 "guillex.y"
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
#line 4563 "guillex.tab.c"
    break;

  case 88: /* fCall: ID PARENL PARENR  */
#line 1312 "guillex.y"
                     {
    if (findSymbolFunc((yyvsp[-2].str)) != NULL){
      if (checkNumberOfParams(argsParams, (yyvsp[-2].str))){
        (yyval.treeNode) = createNode1("ID PARENL PARENR", createNode0((yyvsp[-2].str)));
        (yyval.treeNode) -> nodeType = findSymbolFunc((yyvsp[-2].str)) -> varFuncName[0];
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
#line 4588 "guillex.tab.c"
    break;

  case 89: /* callParams: callParams COMMA simpleExp  */
#line 1335 "guillex.y"
                               {
      argsParams++;
      (yyval.treeNode) = createNode2("callParams COMMA simpleExp", (yyvsp[-2].treeNode), (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[-2].treeNode) -> saved;
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
    }
#line 4599 "guillex.tab.c"
    break;

  case 90: /* callParams: simpleExp  */
#line 1341 "guillex.y"
              {
      argsParams++;
      (yyval.treeNode) = createNode1("simpleExp", (yyvsp[0].treeNode));
      (yyval.treeNode) -> saved = (yyvsp[0].treeNode) -> saved;
      (yyval.treeNode) -> nodeType = (yyvsp[0].treeNode) -> nodeType;
  }
#line 4610 "guillex.tab.c"
    break;


#line 4614 "guillex.tab.c"

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
          YYNOMEM;
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 1351 "guillex.y"


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
      tacfile = fopen("file.tac", "w");
      fprintf (tacfile, ".table\n");
      fprintf (tacfile, ".code\n");
      writeTacFile(currentLine);
      if(errors == 0){
        printf("\n\n------------------------------------------------------symbols------------------------------------------------\n\n");
        printf("\n\n|         Value         |         Symbol type             |         Return type           |         Scope       |     Parameters      |\n\n");
        printSymbols();
        printf("\n\n--------------------------------tree--------------------------------\n\n");
        printAndFreeTree(abstractSyntaxTree);
        freeSymbols();
        freeStack();    
        if (semanticErrors > 0) {
          printf("\n\n There is %d warnings in the file\n\n", semanticErrors);
        }else{
          printf("\n\n There is %d errors and %d warnings in the file\n\n", errors, semanticErrors);
        }
        }else{
          printf("\n\nThere were %d errors in the file", errors);
        }
        free(yylval.str);  
        freeCodegen();
        fclose(tacfile);
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
