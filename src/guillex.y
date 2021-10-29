%define lr.type canonical-lr
%define parse.error verbose
%debug
%locations


%{

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


%}  

%union{
  int integer;
  char *str;
  float dec;

  struct node *treeNode;
}

%token<str> ID TYPE STRING NIL
%token<integer> INTEGER
%token<dec> DECIMAL
%token<str> ERRORTOKEN


%right THEN ELSE

%token <str> ADD SUB MULT DIV OR AND SMALLER GREATER SMALLEQ GREATEQ EQUALS DIFFERENT APPEND HEADLIST TAILLIST DESTROYHEAD FILTER 
%token <str> ASSIGN MAP ELSE THEN
%token <str> IF FOR READ WRITE WRITELN RETURN SEMIC COMMA STFUNC ENDFUNC PARENL PARENR


%start program

%type<treeNode> program declarationList declaration varDeclaration funcDeclaration simpleVarDeclaration 
%type<treeNode> params param compoundStmt stmtList primitiveStmt exprStmt condStmt ifStmt elseStmt iterStmt returnStmt 
%type<treeNode> expression assignExp simpleExp
%type<treeNode> inOp outOp outConst binLogicalExp relationalExp
%type<treeNode> sumExp mulExp factor fCall callParams error
%type<treeNode> binListExp unaryListExp
%%

program:
    declarationList     {
        abstractSyntaxTree = $$;
    }
  ;

declarationList:
     declarationList declaration    {
       $$ = createNode2("declarationsList declaration", $1, $2);
     }
  | declaration       {
    $$ = createNode1("declaration", $1);
  }
  | error {
    $$ = createNodeE();
    errors++;
    yyerror(yymsg);
  }
  ;

declaration:
    varDeclaration     {
      $$ = createNode1("varDeclaration", $1);
    }
    | funcDeclaration  {
      $$ = createNode1("funcDeclaration", $1);
    }
  ;

varDeclaration:
    simpleVarDeclaration SEMIC {
      $$ = createNode1("simpleVarDeclaration", $1);}
  ;

funcDeclaration:  
    TYPE ID PARENL {scope++; pushStack(scope);} params PARENR STFUNC {
      UT_string *r;
      utstring_new(r);
      errors += addSymbol($2, "func", $1, STACK_TOP(stackScope) -> value, parameters, r);
      addFunc($2);
      parameters = 0;
      } stmtList ENDFUNC {
      $$ = createNode4("TYPE ID PARENL params PARENR STFUNC stmtList ENDFUNC", createNode0($1), createNode0($2), $5, $9);
      popStack();
      if(checkTypesReturnFunction($9 -> returnType, $1[0]) == 0) {
        printf("Semantic Error\n");
        printf("function %s with unexpected return, line %d, column %d\n\n", $2, line, wordPosition);
        semanticErrors += 1;
      }else if(checkTypesReturnFunction($9 -> returnType, $1[0]) == 1) {
        printf("Semantic Error\n");
        printf("function %s without expected return, line %d, column %d\n\n", $2, line, wordPosition);
        semanticErrors += 1;
      } else if (checkTypesReturnFunction($9 -> returnType, $1[0]) == 3) {
        printf("Semantic Error\n");
        printf("function %s with return with wrong type, line %d, column %d\n\n", $2, line, wordPosition);
        semanticErrors += 1;
      }
  }
  | TYPE ID PARENL {pushStack(scope);} PARENR STFUNC {
    UT_string *r;
    utstring_new(r);
    errors += addSymbol($2, "func", $1, STACK_TOP(stackScope) -> value, parameters, 0);
    parameters = 0;
    addFunc($2);
    } stmtList ENDFUNC {
    
      $$ = createNode3("TYPE ID PARENL PARENR stmtList ENDFUNC ", createNode0($1), createNode0($2), $8); 
      popStack();
      if(checkTypesReturnFunction($8 -> returnType, $1[0]) == 0) {
      printf("Semantic Error\n");
      printf("function %s with unexpected return, line %d, column %d\n\n", $2, line, wordPosition);
      semanticErrors += 1;
    }else if(checkTypesReturnFunction($8 -> returnType, $1[0]) == 1) {
      printf("Semantic Error\n");
      printf("function %s without expected return, line %d, column %d\n\n", $2, line, wordPosition);
      semanticErrors += 1;
    } else if (checkTypesReturnFunction($8 -> returnType, $1[0]) == 3) {
      printf("Semantic Error\n");
      printf("function %s with return with wrong type, line %d, column %d\n\n", $2, line, wordPosition);
      semanticErrors += 1;
    }                                                                      
  }

simpleVarDeclaration:
    TYPE ID {

      semanticErrors += addSymbol($2, "var", $1, STACK_TOP(stackScope) -> value, 0, create_new_reg(varReg));
       UT_string *s;
      if($1[0] == 'i' || $1[0] == 'e') {
        utstring_new(s);
        utstring_printf(s, "$%d", varReg);

        varDecAssign(utstring_body(s), "0");
      } else if($1[0] == 'f') {
        utstring_new(s);
        utstring_printf(s, "$%d", varReg);

        varDecAssign(utstring_body(s), "0.0");
      } else if($1[0] == 's') {
        utstring_new(s);
        utstring_printf(s, "$%d", varReg);

        varDecAssign(utstring_body(s), "e");
      }
      varReg++;
      $$ = createNode2("TYPE ID", createNode0($1), createNode0($2));
      }
    
  ;

params:
    params COMMA param {
      $$ = createNode2("params COMMA param", $1, $3);
      $$ -> nodeType = $1 -> nodeType;
      }
  | param { 
    $$ = createNode1("param", $1); 
    $$ -> nodeType = $1 -> nodeType;
    }
  | error {
      $$ = createNodeE();
      errors++;
      yyerror(yymsg);
    }
  ;

param:
    TYPE ID {
      parameters++;
      pushStack(scope);
      $$ = createNode2("TYPE ID", createNode0($1), createNode0($2));
      semanticErrors += addSymbol($2, "param", $1, STACK_TOP(stackScope) -> value, 0, create_new_reg(varReg));
      varReg++;
      popStack();
      }
  ;

compoundStmt:
    STFUNC stmtList ENDFUNC {
      $$ = createNode1("compoundStmt", $2);
      $$ -> nodeType = $2 -> nodeType;
    }
  ;

stmtList:
    stmtList primitiveStmt    {
      $$ = createNode2("stmtList primitiveStmt", $1, $2);
      if($1 -> returnType == 'x')
        $$ -> returnType = $2 -> returnType;
      else
        $$ -> returnType = $1 -> returnType;
    }
  | primitiveStmt {
    $$ = createNode1("primitiveStmt", $1);
    $$ -> returnType = $1 -> returnType;
  }
  | error {
      $$ = createNodeE();
    }
  ;

primitiveStmt:
    exprStmt {
      $$ = createNode1("exprStmt", $1);
      $$ -> nodeType = $1 -> nodeType;
    }
  | compoundStmt {
    $$ = createNode1("compoundStmt", $1);
    $$ -> nodeType = $1 -> nodeType;
  }
  | condStmt {
    $$ = createNode1("condStmt", $1);
    $$ -> nodeType = $1 -> nodeType;
  }
  | iterStmt {
    $$ = createNode1("iterStmt", $1);
    $$ -> nodeType = $1 -> nodeType;
  }
  | returnStmt {
    $$ = createNode1("returnStmt", $1);
    $$ -> returnType = $1 -> returnType;
  }
  | inOp {
    $$ = createNode1("inOp", $1);
  }
  | outOp {
    $$ = createNode1("outOp", $1);
  }
  | varDeclaration {
    $$ = createNode1("varDeclaration", $1);
    $$ -> nodeType = $1 -> nodeType;
  }
  ;

exprStmt:
    expression SEMIC {
      $$ = createNode1("expression SEMIC", $1);
      $$ -> nodeType = $1 -> nodeType;
    }
  ;

condStmt:
    ifStmt primitiveStmt %prec THEN {
      $$ = createNode2("ifStmt primitiveStmt", $1, $2);
      ifFuncExit(STACK_TOP(stackIfElse) -> value);
      popStackIf();
      $$ -> nodeType = $2 -> nodeType;
    }
  | ifStmt primitiveStmt elseStmt  {
    $$ = createNode3("ifStmt primitiveStmt elseStmt", $1, $2, $3);
    $$ -> nodeType = $2 -> nodeType;
  }
  | ifStmt STFUNC ENDFUNC %prec THEN{
    $$ = createNode1("ifStmt", $1);
    ifFuncExit(STACK_TOP(stackIfElse) -> value);
    popStackIf();

  }
  | ifStmt STFUNC ENDFUNC elseStmt  {
    $$ = createNode2("ifStmt primitiveStmt elseStmt", $1, $4);
  }
  
  ;

ifStmt:
    IF PARENL simpleExp PARENR{
      ifId++;
      pushStackIf(ifId);
      ifFunc(ifId, $3 -> saved);
      scope++;
      pushStack(scope);
      $$ = createNode2("IF PARENL simpleExp PARENR", createNode0($1), $3);
    }
  ;

elseStmt:
  ELSE{
    ifJump(ifId);
    popStack();
    scope++;
    pushStack(scope);
  } primitiveStmt {
    ifJumpExit(STACK_TOP(stackIfElse) -> value);
    popStackIf();
    ifId++;
    popStack();
    $$ = createNode2("ELSE primitiveStmt", createNode0($1), $3);

  }
;
iterStmt:
    FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR {      
      scope++;
      pushStack(scope);
      } primitiveStmt {

      $$ = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0($1), $3, $5, $7, $10);
      popStack();
      scope--;
      pushStack(scope);
      popStack();
    }
  | FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR {
      scope++;
      pushStack(scope);
      } primitiveStmt {
      $$ = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0($1), $3, $5, $7, $10);
      popStack();
      scope--;
      pushStack(scope);
      popStack();
  }
  ;

returnStmt:
    RETURN expression SEMIC {
      $$ = createNode2("RETURN expression SEMIC", createNode0($1), $2);
      $$ -> returnType = $2 -> nodeType;
    }
  ;


expression:
    assignExp {
      $$ = createNode1("assignExp", $1);
      $$ -> saved = $1 -> saved;
      $$ -> nodeType = $1 -> nodeType;
    }
  | simpleExp {
      $$ = createNode1("simpleExp", $1);
      $$ -> saved = $1 -> saved;
      $$ -> nodeType = $1 -> nodeType;
  }
  ;

assignExp:
    ID ASSIGN expression {
      struct symbol *s = checkIsInScope($1, STACK_TOP(stackScope) -> value);
      if (s != NULL){
        $$ = createNode3("ID ASSIGN expression", createNode0($1), createNode0("="), $3);
        varDecAssign(utstring_body(s -> varReg), $3 -> saved);
        $$ -> saved = $3 -> saved;
        $$ -> nodeType = s -> varFuncName[0];
      if (s -> varFuncName[0] != 'e'){
          $$ -> saved = $3 -> saved;
          $$ -> nodeType = s -> varFuncName[0];
      }
      else {
          $$ -> saved = $3 -> saved;
          $$ -> nodeType = $3 -> nodeType;
      }
      if(!checkTypesVar(s -> varFuncName[0], $3 -> nodeType)) {
        printf("Semantic Error\n");
        printf("var %s from type %s receiving wrong type value, line %d, column %d\n\n", $1, s -> varFuncName, line, wordPosition);
        semanticErrors += 1;
        }
      }else{
          printf("Semantic error");
          printf("Var: <%s> Not Declared, line %d, column %d\n\n", $1, line, wordPosition);
          semanticErrors++;
          $$ = createNodeE();
      }
    }
  ; 
    

simpleExp:
    binLogicalExp {
      $$ = createNode1("binLogicalExp", $1);
      $$ -> saved = $1 -> saved;
      $$ -> nodeType = $1 -> nodeType;
    }
    |
    binListExp{
      $$ = createNode1("binListExp", $1);
      $$ -> saved = $1 -> saved;
      $$ -> nodeType = $1 -> nodeType;
    }
  ;


inOp:
  READ PARENL ID PARENR SEMIC{
    struct symbol *s = checkIsInScope($3, STACK_TOP(stackScope) -> value);
    if (s != NULL) {
    $$ = createNode2("READ PARENL ID PARENR SEMIC", createNode0($1), createNode0($3));
    readFunc(utstring_body(s -> varReg), s -> varFuncName[0]);
    $$ -> saved = utstring_body(s -> varReg);
    } else {
        printf("Semantic error\n");
        printf("var %s not declared, line %d, column %d\n\n", $1, line, wordPosition);
        semanticErrors += 1;
        $$ = createNodeE();
      }
  }
  |
    READ PARENL PARENR SEMIC{
    $$ = createNode1("READ PARENL PARENR SEMIC", createNode0($1));
  }
  ;

outOp:
    WRITE PARENL outConst PARENR SEMIC{
      $$ = createNode2("WRITE PARENL outConst PARENR SEMIC", createNode0($1), $3);
      writeFunc($3 -> saved);
      $$ -> saved = $3 -> saved;
    }
  | WRITELN PARENL outConst PARENR SEMIC {
      $$ = createNode2("WRITELN PARENL outConst PARENR SEMIC", createNode0($1), $3);
      writelnFunc($3 -> saved);
      $$ -> saved = $3 -> saved;
  }
  ;

outConst:
    STRING {
      $$ = createNode1("STRING", createNode0($1));
      $$ -> nodeType = 't';
      $$ -> saved = $1;
    }
  | simpleExp {
      $$ = createNode1("simpleExp", $1);
      $$ -> saved = $1 -> saved;
      $$ -> nodeType = $1 -> nodeType;
  }
  ;

  binListExp:
	factor APPEND factor {
		$$ = createNode3("factor APPEND factor", $1, createNode0(":"), $3);		
    $$ -> saved = $1 -> saved;
    $$ -> nodeType = $1 -> nodeType;
	}
	| factor MAP factor {
		
		$$ = createNode3("factor MAP factor", $1, createNode0(">>"), $3);		
    $$ -> saved = $1 -> saved;
    $$ -> nodeType = $1 -> nodeType;
	}
	| factor FILTER factor {
		$$ = createNode3("factor FILTER factor", $1, createNode0("<<"), $3);	
    $$ -> saved = $1 -> saved;	
    $$ -> nodeType = $1 -> nodeType;
	}

unaryListExp:
	HEADLIST factor {
		$$ = createNode2("? factor", createNode0("?"), $2);
    $$ -> saved = $2 -> saved;
    $$ -> nodeType = $2 -> nodeType;	
	}
	| TAILLIST factor {
    $$ = createNode2("! factor", createNode0("!"), $2);
    $$ -> saved = $2 -> saved;
    $$ -> nodeType = $2 -> nodeType;	
	}
;  

binLogicalExp:
    binLogicalExp OR relationalExp{
      $$ = createNode3("binLogicalExp binLogicalOp relationalOp", $1, createNode0("||"), $3);
      $$ -> nodeType = $1 -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("or", s, $1 -> saved, $3 -> saved);
      $$ -> saved = $1 -> saved;
      varReg++;
    }
    |
    binLogicalExp AND relationalExp{
      $$ = createNode3("binLogicalExp binLogicalOp relationalOp", $1, createNode0("&&"), $3);
      $$ -> nodeType = $1 -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("or", s, $1 -> saved, $3 -> saved);
      $$ -> saved = $1 -> saved;
      varReg++;
    }
  | relationalExp {
    $$ = createNode1("relationalExp", $1);
    $$ -> saved = $1 -> saved;
    $$ -> nodeType = $1 -> nodeType;
  }
  ;

relationalExp:
    relationalExp SMALLER sumExp {
      $$ = createNode3("relationalExp SMALLER sumExp", $1, createNode0("<"), $3);
      $$ -> nodeType = $1 -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("slt", s, $1 -> saved, $3 -> saved);
      $$ -> saved = s;
      varReg++;
    }
    |
    relationalExp GREATER sumExp {
      $$ = createNode3("relationalExp GREATER sumExp", $1, createNode0(">"), $3);
      $$ -> nodeType = $1 -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("slt", s, $1 -> saved, $3 -> saved);
      $$ -> saved = s;
      varReg++;
    }
    |
    relationalExp SMALLEQ sumExp {
      $$ = createNode3("relationalExp SMALLEQ sumExp", $1, createNode0("<="), $3);
      $$ -> nodeType = $1 -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("sleq", s, $1 -> saved, $3 -> saved);
      $$ -> saved = s;
      varReg++;
    }
    |
    relationalExp GREATEQ sumExp {
      $$ = createNode3("relationalExp GREATEQ sumExp", $1, createNode0(">="), $3);
      $$ -> nodeType = $1 -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("sleq", s, $1 -> saved, $3 -> saved);
      $$ -> saved = s;
      varReg++;
    }
    |
    relationalExp EQUALS sumExp {
      $$ = createNode3("relationalExp EQUALS sumExp", $1, createNode0("=="), $3);
      $$ -> nodeType = $1 -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("seq", s, $1 -> saved, $3 -> saved);
      $$ -> saved = s;
      varReg++;
    }
    |
    relationalExp DIFFERENT sumExp {
      $$ = createNode3("relationalExp DIFFERENT sumExp", $1, createNode0("!="), $3);
      $$ -> nodeType = $1 -> nodeType;
      char *s = utstring_body(create_new_reg(varReg));
      mathOpFile("seq", s, $1 -> saved, $3 -> saved);
      notFunc(s, s);
      $$ -> saved = s;
      varReg++;
    }
  | sumExp {
      $$ = createNode1("sumExp", $1);
      $$ -> saved = $1 -> saved;
      $$ -> nodeType = $1 -> nodeType;
  }
  ;


sumExp:
    sumExp ADD mulExp {
      $$ = createNode3("sumExp add mulExp", $1, createNode0("+"), $3);
      $$ -> nodeType = checkTypes($1 -> nodeType, $3 -> nodeType);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("add", utstring_body(s), $1 -> saved, $3 -> saved);
      $$ -> saved = utstring_body(s);
    }
    |
        sumExp SUB mulExp {
      $$ = createNode3("sumExp sub mulExp", $1, createNode0("-"), $3);
      $$ -> nodeType = checkTypes($1 -> nodeType, $3 -> nodeType);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("sub", utstring_body(s), $1 -> saved, $3 -> saved);
      $$ -> saved = utstring_body(s);
    }
  | mulExp {
      $$ = createNode1("mulExp", $1);
      $$ -> nodeType = $1 -> nodeType;
      $$ -> saved = $1 -> saved;
  }
  ;

mulExp:
    mulExp MULT factor {
      $$ = createNode3("mulExp mulOp factor", $1, createNode0("*"), $3);
      $$ -> nodeType = checkTypes($1 -> nodeType, $3 -> nodeType);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("mul", utstring_body(s), $1 -> saved, $3 -> saved);
      $$ -> saved = utstring_body(s);
    }
    |
     mulExp DIV factor {
      $$ = createNode3("mulExp mulOp factor", $1, createNode0("/"), $3);
      $$ -> nodeType = checkTypes($1 -> nodeType, $3 -> nodeType);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("div", utstring_body(s), $1 -> saved, $3 -> saved);
      $$ -> saved = utstring_body(s);
    }
  | factor {
      $$ = createNode1("factor", $1);
      $$ -> saved = $1 -> saved;
      $$ -> nodeType = $1 -> nodeType;
  }
  | ADD factor {
      $$ = createNode2("ADD factor", createNode0("+"), $2);
      $$ -> nodeType = $2 -> nodeType;
  }
  | SUB factor {
      $$ = createNode2("SUB factor", createNode0("-"), $2);
      $$ -> nodeType = $2 -> nodeType;
  }
  | unaryListExp {
		$$ = createNode1("unaryListExp", $1);
    $$ -> nodeType = $1 -> nodeType;
	}
  ;


factor:
    ID {
      struct symbol *s = checkIsInScope($1, STACK_TOP(stackScope) -> value);
      if (s != NULL) {
        $$ = createNode1("ID", createNode0String($1));
        $$ -> saved = $1;
        $$ -> nodeType = s -> varFuncName[0];
    }else{
        printf("Semantic error\n");
        printf("var %s not declared, line %d, column %d\n\n", $1, line, wordPosition);
        semanticErrors += 1;
        $$ = createNodeE();
      }
    }
  | fCall {
      $$ = createNode1("fCall", $1);
      $$ -> saved = $1 -> saved;
      $$ -> nodeType = $1 -> nodeType;
  }
  | PARENL simpleExp PARENR {
      $$ = createNode1("PARENL simpleExp PARENR", $2);
      $$ -> nodeType = $2 -> nodeType;
      $$ -> saved = $2 -> saved;
  }
  | INTEGER {
      $$ = createNode0Int($1, 'i');
      $$ -> nodeType = 'i';
      UT_string *s = int_as_str($1);
      $$ -> saved = utstring_body(s);
    }
  | DECIMAL {
    $$ = createNode0Dec($1, 'f');
    $$ -> nodeType = 'f';
    UT_string *s = float_as_str($1);
    $$ -> saved = utstring_body(s);
  }
  | NIL {
    $$ = createNode0Nil($1, 'n');
    $$ -> nodeType = 'n';
  }
  | ERRORTOKEN {
      $$ = createNodeE();
    }
  ;

fCall:
    ID PARENL callParams PARENR {
      if (findSymbolFunc($1) != NULL){
       if (checkNumberOfParams(argsParams, $1)){
         argsParams = 0;
        $$ = createNode2("ID PARENL callParams PARENR", createNode0($1), $3);
        $$ -> nodeType = findSymbolFunc($1) -> varFuncName[0];
        $$ -> saved = $1;  
        }else{
          printf("Semantic error");
          printf("Function: <%s> has wrong number of parameters, line %d, column %d\n\n", $1, line, wordPosition);
          semanticErrors++;
          argsParams = 0;
          $$ = createNodeE();
        }
      }else {
          printf("Semantic Error\n");
          printf("Function %s not declared, line %d, column %d\n\n", $1, line, wordPosition);
          semanticErrors++;
          argsParams = 0;
          $$ = createNodeE();
      }
    }
  | ID PARENL PARENR {
    if (findSymbolFunc($1) != NULL){
      if (checkNumberOfParams(argsParams, $1)){
        $$ = createNode1("ID PARENL PARENR", createNode0($1));
        $$ -> nodeType = findSymbolFunc($1) -> varFuncName[0];
        $$ -> saved = $1;
      }else{
        printf("Semantic error");
        printf("Function: <%s> has wrong number of parameters, line %d, column %d\n\n", $1, line, wordPosition);
        semanticErrors++;
        argsParams = 0;
        $$ = createNodeE();
      }
    }else{
      printf("Semantic Error\n");
      printf("Function %s not declared, line %d, column %d\n\n", $1, line, wordPosition);
      errors++;
      $$ = createNodeE();
    }
  }
  ;

callParams:
    callParams COMMA simpleExp {
      argsParams++;
      $$ = createNode2("callParams COMMA simpleExp", $1, $3);
      $$ -> saved = $1 -> saved;
      $$ -> nodeType = $3 -> nodeType;
    }
  | simpleExp {
      argsParams++;
      $$ = createNode1("simpleExp", $1);
      $$ -> saved = $1 -> saved;
      $$ -> nodeType = $1 -> nodeType;
  }
  ;



%%

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
        printAndFreeTree(abstractSyntaxTree);
        if (semanticErrors > 0) {
          printf("\n\n There is %d warnings in the file\n\n", semanticErrors);
        }else{
          printf("\n\n There is %d errors and %d warnings in the file\n\n", errors, semanticErrors);
        }
        freeSymbols();
        freeStack();    
        free(yylval.str);  
        freeCodegen();
        fclose(tacfile);
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