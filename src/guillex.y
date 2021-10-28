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

%}  

%union{
  int integer;
  char *str;
  float dec;

  struct node *treeNode;
}

%token<str> ID TYPE LISTTYPE STRING NIL
%token<integer> INTEGER
%token<dec> DECIMAL
%token<str> ERRORTOKEN


%right ELSE THEN

%token <str> ADD SUB MULT DIV OR AND SMALLER GREATER SMALLEQ GREATEQ EQUALS DIFFERENT APPEND HEADLIST TAILLIST DESTROYHEAD FILTER 
%token <str> ASSIGN MAP ELSE THEN
%token <str> IF FOR READ WRITE WRITELN RETURN SEMIC COMMA STFUNC ENDFUNC PARENL PARENR


%start program

%type<treeNode> program declarationList declaration varDeclaration funcDeclaration simpleVarDeclaration 
%type<treeNode> params param compoundStmt stmtList primitiveStmt exprStmt condStmt ifStmt elseStmt iterStmt returnStmt listExp 
%type<treeNode> appendOps returnListOps returnListOp destroyHeadOps mapFilterOps expression assignExp simpleExp
%type<treeNode> constOp inOp outOp outConst binLogicalExp binLogicalOp relationalExp relationalOp
%type<treeNode> sumExp mulExp factor fCall callParams error
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
      errors += addSymbol($2, "func", $1, STACK_TOP(stackScope) -> value, parameters, 0);
      addFunc($2);
      parameters = 0;
      } stmtList ENDFUNC {
      $$ = createNode4("TYPE ID PARENL params PARENR STFUNC stmtList ENDFUNC", createNode0($1), createNode0($2), $5, $9);
      popStack();
  }
  | TYPE ID PARENL {pushStack(scope);} PARENR STFUNC {
    UT_string *r;
    utstring_new(r);
    errors += addSymbol($2, "func", $1, STACK_TOP(stackScope) -> value, parameters, 0);
    parameters = 0;
    addFunc($2);
    } stmtList ENDFUNC {
    
      $$ = createNode3("TYPE ID PARENL PARENR compoundStmt", createNode0($1), createNode0($2), $8); 
      popStack();                                                                      
  }
  | TYPE LISTTYPE ID PARENL {scope++; pushStack(scope);} params PARENR STFUNC {
    UT_string *r;
    utstring_new(r);
    errors += addSymbol($3, "func", $2, STACK_TOP(stackScope) -> value, parameters, 0);  
    parameters = 0;
    addFunc($3);
    } stmtList ENDFUNC{
      $$ = createNode5("TYPE LISTTYPE ID PARENL params PARENR compoundStmt", createNode0($1), createNode0List($2), createNode0($3), $6, $10);
      popStack();
  }   
  | TYPE LISTTYPE ID PARENL {pushStack(scope);} PARENR STFUNC {
    UT_string *r;
    utstring_new(r);
    errors += addSymbol($3, "func", $2, STACK_TOP(stackScope) -> value, parameters, 0);
    parameters = 0;
    addFunc($3);
    
    } stmtList ENDFUNC{
      $$ = createNode4("TYPE LISTTYPE ID PARENL PARENR compoundStmt", createNode0($1), createNode0List($2), createNode0($3), $9);
      popStack();
    }
  ;

simpleVarDeclaration:
    TYPE ID {

      pushStack(scope);
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

        varDecAssign(utstring_body(s), "0");
      }
      varReg++;
      $$ = createNode2("TYPE ID", createNode0($1), createNode0($2));
      popStack();
      }
    | TYPE LISTTYPE ID {

      pushStack(scope);
      semanticErrors += addSymbol($3, "var", $2, STACK_TOP(stackScope) -> value, 0, create_new_reg(varReg));
      varReg++;
      $$ = createNode3("TYPE ID", createNode0($1), createNode0List($2), createNode0($3));
      popStack();
    }
    
  ;

params:
    params COMMA param {
      $$ = createNode2("params COMMA param", $1, $3);
      }
  | param { 
    $$ = createNode1("param", $1); 
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
    | TYPE LISTTYPE ID {
      parameters++;
      pushStack(scope);
      semanticErrors += addSymbol($3, "param", $2, STACK_TOP(stackScope) -> value, 0, create_new_reg(varReg));
      $$ = createNode3("TYPE ID", createNode0($1), createNode0List($2), createNode0($3));
      varReg++;
      popStack();
    }
  ;

compoundStmt:
    STFUNC stmtList ENDFUNC {
      $$ = createNode1("compoundStmt", $2);
    }
  ;

stmtList:
    stmtList primitiveStmt    {
      $$ = createNode2("stmtList primitiveStmt", $1, $2);
    }
  | primitiveStmt {
    $$ = createNode1("primitiveStmt", $1);
  }
  ;

primitiveStmt:
    exprStmt {
      $$ = createNode1("exprStmt", $1);
    }
  | compoundStmt {
    $$ = createNode1("compoundStmt", $1);
  }
  | condStmt {
    $$ = createNode1("condStmt", $1);
  }
  | iterStmt {
    $$ = createNode1("iterStmt", $1);
  }
  | returnStmt {
    $$ = createNode1("returnStmt", $1);
  }
  | inOp {
    $$ = createNode1("inOp", $1);
  }
  | outOp {
    $$ = createNode1("outOp", $1);
  }
  | varDeclaration {
    $$ = createNode1("varDeclaration", $1);
  }
  ;

exprStmt:
    expression SEMIC {
      $$ = createNode1("expression SEMIC", $1);
    }
  ;

condStmt:
    ifStmt primitiveStmt %prec THEN {
      $$ = createNode2("ifStmt primitiveStmt", $1, $2);
      popStack();
    }
  | ifStmt primitiveStmt elseStmt  {
    $$ = createNode3("ifStmt primitiveStmt elseStmt", $1, $2, $3);
  }
  | ifStmt STFUNC ENDFUNC %prec THEN{
        $$ = createNode1("ifStmt", $1);
  }
  | ifStmt STFUNC ENDFUNC elseStmt  {
    $$ = createNode2("ifStmt primitiveStmt elseStmt", $1, $4);
  }
  
  
  ;

ifStmt:
    IF PARENL simpleExp PARENR{
      scope++;
      pushStack(scope);
      $$ = createNode2("IF PARENL simpleExp PARENR", createNode0($1), $3);
    }
  ;

elseStmt:
  ELSE{
    popStack();
    scope++;
    pushStack(scope);
  } primitiveStmt {
    popStack();
    $$ = createNode2("ELSE primitiveStmt", createNode0($1), $3);
  }
;
iterStmt:
    FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt {
      scope++;
      pushStack(scope);
      $$ = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0($1), $3, $5, $7, $9);
      popStack();
    }
  | FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt {
      scope++;
      pushStack(scope);
      $$ = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0($1), $3, $5, $7, $9);
      popStack();
  }
  ;

returnStmt:
    RETURN expression SEMIC {
      $$ = createNode2("RETURN expression SEMIC", createNode0($1), $2);
    }
  ;

listExp:
    appendOps {
      $$ = createNode1("appendOps", $1);
    }
  | returnListOps {
    $$ = createNode1("returnListOps", $1);
  }
  | destroyHeadOps {
    $$ = createNode1("destroyHeadOps", $1);
  }
  | mapFilterOps {
    $$ = createNode1("mapFilterOps", $1);
  }
  ;

appendOps:
    ID APPEND ID {
      $$ = createNode3("ID APPEND ID SEMIC", createNode0($1), createNode0($2), createNode0($3));
    }
  ;

returnListOps:
    returnListOp ID{
      $$ = createNode2("returnListOp ID", $1, createNode0($2));
    }
  ;

returnListOp:
    HEADLIST {
      $$ = createNode1("HEADLIST", createNode0($1));
    }
  | TAILLIST {
      $$ = createNode1("TAILLIST", createNode0($1));
  }
  ;

destroyHeadOps:
    DESTROYHEAD ID {
      $$ = createNode2("DESTROYHEAD ID", createNode0($1), createNode0($2));
    }
  ;

mapFilterOps:
    ID MAP ID {
      $$ = createNode3("ID MAP ID SEMIC", createNode0($1), createNode0($2), createNode0($3));
    }
    |
    ID FILTER ID {
      $$ = createNode3("ID FILTER ID SEMIC", createNode0($1), createNode0($2), createNode0($3));
    }
  ;

expression:
    assignExp {
      $$ = createNode1("assignExp", $1);
      $$ -> saved = $1 -> saved;
    }
  | simpleExp {
      $$ = createNode1("simpleExp", $1);
      $$ -> saved = $1 -> saved;
  }
  | listExp {
    $$ = createNode1("listExp", $1);
    $$ -> saved = $1 -> saved;
  }
  ;

assignExp:
    ID ASSIGN expression {
      if (checkIsInScope($1)){
        $$ = createNode3("ID ASSIGN expression", createNode0($1), createNode0("="), $3);
        UT_string *s = create_new_reg(varReg);
        varDecAssign(utstring_body(s), $3 -> saved);
        $$ -> saved = $1;
    }
      else{
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
    }
  ;

constOp:
    INTEGER {
      $$ = createNode0Int($1);
      UT_string *s = int_as_str($1);
      $$ -> saved = utstring_body(s);
    }
  | DECIMAL {
    $$ = createNode0Dec($1);
    UT_string *s = float_as_str($1);
    $$ -> saved = utstring_body(s);
  }
  | NIL {
    $$ = createNode0Nil($1);
  }
  ;

inOp:
  READ PARENL ID PARENR SEMIC{
    $$ = createNode2("READ PARENL ID PARENR SEMIC", createNode0($1), createNode0($3));
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
      $$ -> saved = $1;
    }
  | simpleExp {
      $$ = createNode1("simpleExp", $1);
      $$ -> saved = $1 -> saved;
  }
  | listExp {
    $$ = createNode1("listExp", $1);
    $$ -> saved = $1 -> saved;
  }
  ;

binLogicalExp:
    binLogicalExp binLogicalOp relationalOp{
      $$ = createNode3("binLogicalExp binLogicalOp relationalOp", $1, $2, $3);
    }
  | relationalExp {
    $$ = createNode1("relationalExp", $1);
    $$ -> saved = $1 -> saved;
  }
  ;


binLogicalOp:
    OR {
      $$ = createNode1("OR", createNode0("||"));
    }
  | AND {
      $$ = createNode1("AND", createNode0("&&"));
  }
  ;

relationalExp:
    relationalExp relationalOp sumExp {
      $$ = createNode3("relationalExp relationalOp sumExp", $1, $2, $3);
    }
  | sumExp {
      $$ = createNode1("sumExp", $1);
      $$ -> saved = $1 -> saved;
  }
  ;


relationalOp:
    SMALLER {
      $$ = createNode1("SMALLER", createNode0("<"));
    }
  | GREATER {
      $$ = createNode1("GREATER", createNode0(">"));
  }
  | SMALLEQ {
      $$ = createNode1("SMALLEQ", createNode0("<="));
  }
  | GREATEQ {
      $$ = createNode1("GREATEQ", createNode0(">="));
  }
  | EQUALS {
      $$ = createNode1("EQUALS", createNode0("=="));
  }
  | DIFFERENT {
      $$ = createNode1("DIFFERENT", createNode0("!="));
  }
  ;

sumExp:
    sumExp ADD mulExp {
      $$ = createNode3("sumExp add mulExp", $1, createNode0("+"), $3);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("add", utstring_body(s), $1 -> saved, $3 -> saved);
      $$ -> saved = utstring_body(s);
    }
    |
        sumExp SUB mulExp {
      $$ = createNode3("sumExp sub mulExp", $1, createNode0("-"), $3);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("sub", utstring_body(s), $1 -> saved, $3 -> saved);
      $$ -> saved = utstring_body(s);
    }
  | mulExp {
      $$ = createNode1("mulExp", $1);
      $$ -> saved = $1 -> saved;
  }
  ;

mulExp:
    mulExp MULT factor {
      $$ = createNode3("mulExp mulOp factor", $1, createNode0("*"), $3);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("mul", utstring_body(s), $1 -> saved, $3 -> saved);
      $$ -> saved = utstring_body(s);
    }
    |
     mulExp DIV factor {
      $$ = createNode3("mulExp mulOp factor", $1, createNode0("/"), $3);
      UT_string *s = create_new_reg(varReg);
      mathOpFile("div", utstring_body(s), $1 -> saved, $3 -> saved);
      $$ -> saved = utstring_body(s);
    }
  | factor {
      $$ = createNode1("factor", $1);
      $$ -> saved = $1 -> saved;
  }
  | ADD factor {
      $$ = createNode2("ADD factor", createNode0("+"), $2);
  }
  | SUB factor {
      $$ = createNode2("SUB factor", createNode0("-"), $2);
  }
  ;


factor:
    ID {
      $$ = createNode1("ID", createNode0($1));
      $$ -> saved = $1;
    }
  | fCall {
      $$ = createNode1("fCall", $1);
      $$ -> saved = $1 -> saved;
  }
  | PARENL simpleExp PARENR {
      $$ = createNode1("PARENL simpleExp PARENR", $2);
      $$ -> saved = $2 -> saved;
  }
  | constOp {
      $$ = createNode1("constOp", $1);
      $$ -> saved = $1 -> saved;
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
    }
  | simpleExp {
      argsParams++;
      $$ = createNode1("simpleExp", $1);
      $$ -> saved = $1 -> saved;
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