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

extern int findSymbolMain(char *name) {
    struct symbol *s;
    int hasMain = 0;

    for (s = symbolTable; s != NULL; s = s -> hh.next){
      if ((strcmp(s -> name, "main") == 0 && (strcmp(s -> symbolType, "func") == 0 ))){
        hasMain = 1;
      }
    }
    if(!hasMain){
      printf("Semantic Error --> Undefined reference to 'main'\n");
        return 1;
    }
  return 0;
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


%left ADD SUB MULT DIV OR AND SMALLER GREATER SMALLEQ GREATEQ EQUALS DIFFERENT APPEND HEADLIST TAILLIST DESTROYHEAD FILTER 
%right ASSIGN MAP ELSE THEN

%token <str> ADD SUB MULT DIV OR AND SMALLER GREATER SMALLEQ GREATEQ EQUALS DIFFERENT APPEND HEADLIST TAILLIST DESTROYHEAD FILTER 
%token <str> ASSIGN MAP ELSE THEN
%token <str> IF FOR READ WRITE WRITELN RETURN SEMIC COMMA STFUNC ENDFUNC PARENL PARENR


%start program

%type<treeNode> program declarationList declaration varDeclaration funcDeclaration simpleVarDeclaration 
%type<treeNode> params param compoundStmt stmtList primitiveStmt exprStmt condStmt iterStmt returnStmt listExp 
%type<treeNode> appendOps returnListOps returnListOp destroyHeadOps mapFilterOps expression assignExp simpleExp
%type<treeNode> constOp inOp outOp outConst binLogicalExp binLogicalOp relationalExp relationalOp
%type<treeNode> sumExp sumOp mulExp mulOp factor fCall callParams error
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
    printf("Semantic error");
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
    TYPE ID PARENL {parentScope = STACK_TOP(stackScope) -> value; scope++; pushStack(scope);} params PARENR STFUNC {addSymbol($2, "func", $1, STACK_TOP(stackScope) -> value, parentScope);} stmtList ENDFUNC {
      $$ = createNode4("TYPE ID PARENL params PARENR STFUNC stmtList ENDFUNC", createNode0($1), createNode0($2), $5, $9);
      popStack();
  }
  | TYPE ID PARENL {parentScope = STACK_TOP(stackScope) -> value; scope; pushStack(scope);} PARENR STFUNC {addSymbol($2, "func", $1, STACK_TOP(stackScope) -> value, parentScope);} stmtList ENDFUNC {
    
      $$ = createNode3("TYPE ID PARENL PARENR compoundStmt", createNode0($1), createNode0($2), $8); 
      popStack();                                                                      
  }
  | TYPE LISTTYPE ID PARENL {parentScope = STACK_TOP(stackScope) -> value; scope++; pushStack(scope);} params PARENR STFUNC {addSymbol($3, "func", $2, STACK_TOP(stackScope) -> value, parentScope);} stmtList ENDFUNC{
      $$ = createNode5("TYPE LISTTYPE ID PARENL params PARENR compoundStmt", createNode0($1), createNode0List($2, 'l'), createNode0($3), $6, $10);
      popStack();
  }   
  | TYPE LISTTYPE ID PARENL {parentScope = STACK_TOP(stackScope) -> value; scope; pushStack(scope);} PARENR STFUNC {addSymbol($3, "func", $2, STACK_TOP(stackScope) -> value, parentScope);} stmtList ENDFUNC{
      $$ = createNode4("TYPE LISTTYPE ID PARENL PARENR compoundStmt", createNode0($1), createNode0List($2, 'l'), createNode0($3), $9);
      popStack();
    }
  ;

simpleVarDeclaration:
    TYPE ID {

      parentScope = STACK_TOP(stackScope) -> value;
      pushStack(scope);
      $$ = createNode2("TYPE ID", createNode0($1), createNode0($2));
      addSymbol($2, "var", $1, STACK_TOP(stackScope) -> value, parentScope);
      popStack();
      }
    | TYPE LISTTYPE ID {

      parentScope = STACK_TOP(stackScope) -> value;
      pushStack(scope);
      addSymbol($3, "var", $2, STACK_TOP(stackScope) -> value, parentScope);
      $$ = createNode3("TYPE ID", createNode0($1), createNode0List($2, 'l'), createNode0($3));
      popStack();
    }
    
  ;

params:
    params param {
      $$ = createNode2("params param", $1, $2);
      }
  | param { 
    $$ = createNode1("param", $1); 
    }
  ;

param:
    TYPE ID {

      parentScope = STACK_TOP(stackScope) -> value;
      pushStack(scope);
      $$ = createNode2("TYPE ID", createNode0($1), createNode0($2));
      addSymbol($2, "param", $1, STACK_TOP(stackScope) -> value, parentScope);
      popStack();
      }
    | TYPE LISTTYPE ID {

      parentScope = STACK_TOP(stackScope) -> value;
      pushStack(scope);
      addSymbol($3, "param", $2, STACK_TOP(stackScope) -> value, parentScope);
      $$ = createNode3("TYPE ID", createNode0($1), createNode0List($2, 'l'), createNode0($3));
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
    IF PARENL simpleExp PARENR primitiveStmt %prec THEN {
      $$ = createNode3("IF PARENL simpleExp PARENR primitiveStmt", createNode0($1), $3, $5);
    }
  | IF PARENL simpleExp PARENR primitiveStmt ELSE primitiveStmt {
    $$ = createNode5("IF PARENL primitiveExp PARENR primitiveStmt ELSE primitiveStmt", createNode0($1), $3, $5, createNode0($6), $7);
  }
  ;

iterStmt:
    FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt {
      $$ = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0($1), $3, $5, $7, $9);
    }
  | FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt {
      $$ = createNode5("FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt", createNode0($1), $3, $5, $7, $9);
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
    }
  | simpleExp {
      $$ = createNode1("simpleExp", $1);
  }
  | listExp {
    $$ = createNode1("listExp", $1);
  }
  ;

assignExp:
    ID ASSIGN expression {
      if (findSymbol($1, scope, parentScope) != NULL)
        $$ = createNode3("ID ASSIGN expression", createNode0($1), createNode0($2), $3);
      else{
        printf("Semantic error");
        printf("Var: <%s> Not Declared, line %d, column %d\n\n", $1, line, wordPosition);
        $$ = createNodeE();
      }
    }
  ; 
    

simpleExp:
    binLogicalExp {
      $$ = createNode1("binLogicalExp", $1);
    }
  ;

constOp:
    INTEGER {
      $$ = createNode0Int($1, 'i');
    }
  | DECIMAL {
    $$ = createNode0Dec($1, 'd');
  }
  | NIL {
    $$ = createNode0Nil($1, 'n');
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
    }
  | WRITELN PARENL outConst PARENR SEMIC {
      $$ = createNode2("WRITELN PARENL outConst PARENR SEMIC", createNode0($1), $3);
  }
  ;

outConst:
    STRING {
      $$ = createNode1("STRING", createNode0($1));
    }
  | simpleExp {
      $$ = createNode1("simpleExp", $1);
  }
  | listExp {
    $$ = createNode1("listExp", $1);
  }
  ;

binLogicalExp:
    binLogicalExp binLogicalOp relationalOp{
      $$ = createNode3("binLogicalExp binLogicalOp relationalOp", $1, $2, $3);
    }
  | relationalExp {
    $$ = createNode1("relationalExp", $1);
  }
  ;


binLogicalOp:
    OR {
      $$ = createNode1("OR", createNode0($1));
    }
  | AND {
      $$ = createNode1("AND", createNode0($1));
  }
  ;

relationalExp:
    relationalExp relationalOp sumExp {
      $$ = createNode3("relationalExp relationalOp sumExp", $1, $2, $3);
    }
  | sumExp {
      $$ = createNode1("sumExp", $1);
  }
  ;


relationalOp:
    SMALLER {
      $$ = createNode1("SMALLER", createNode0($1));
    }
  | GREATER {
      $$ = createNode1("GREATER", createNode0($1));
  }
  | SMALLEQ {
      $$ = createNode1("SMALLEQ", createNode0($1));
  }
  | GREATEQ {
      $$ = createNode1("GREATEQ", createNode0($1));
  }
  | EQUALS {
      $$ = createNode1("EQUALS", createNode0($1));
  }
  | DIFFERENT {
      $$ = createNode1("DIFFERENT", createNode0($1));
  }
  ;

sumExp:
    sumExp sumOp mulExp {
      $$ = createNode3("sumExp sumOp mulExp", $1, $2, $3);
    }
  | mulExp {
      $$ = createNode1("mulExp", $1);
  }
  ;

sumOp:
    ADD {
      $$ = createNode1("ADD", createNode0($1));
    }
  | SUB {
      $$ = createNode1("SUB", createNode0($1));
  }
  ;

mulExp:
    mulExp mulOp factor {
      $$ = createNode3("mulExp mulOp factor", $1, $2, $3);
    }
  | factor {
      $$ = createNode1("factor", $1);
  }
  | sumOp factor {
      $$ = createNode2("sumOp factor", $1, $2);
  }
  ;

mulOp:
    MULT {
      $$ = createNode1("MULT", createNode0($1));
    }
  | DIV {
      $$ = createNode1("DIV", createNode0($1));
  }
  ;

factor:
    ID {
      $$ = createNode1("ID", createNode0($1));
    }
  | fCall {
      $$ = createNode1("fCall", $1);
  }
  | PARENL simpleExp PARENR {
      $$ = createNode1("PARENL simpleExp PARENR", $2);
  }
  | constOp {
      $$ = createNode1("constOp", $1);
  }
  ;

fCall:
    ID PARENL callParams PARENR  {
      $$ = createNode2("ID PARENL callParams PARENR", createNode0($1), $3);
    }
  | ID PARENL PARENR {
    $$ = createNode1("ID PARENL PARENR", createNode0($1));
  }
  ;

callParams:
    callParams COMMA simpleExp {
      $$ = createNode2("callParams COMMA simpleExp", $1, $3);
    }
  | simpleExp {
      $$ = createNode1("simpleExp", $1);
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
      errors += findSymbolMain("main");
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