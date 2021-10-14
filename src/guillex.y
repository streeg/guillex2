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
#include <stdbool.h>


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



typedef struct node {
  int integer;
  float decimal;
  char *nodeValue;
  char nodeType;
  bool terminal;
  char returnType;
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
  node -> nodeType = 'i';
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
  node -> nodeType = 'd';
  node -> returnType = 'x';
  node -> terminal = true;
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
  node -> nodeType = 'n';
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
        if(!(node -> terminal))
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
  UT_hash_handle hh;
}Symbol;

Symbol *symbolTable = NULL;

int addSymbol(char *name, char *symbolType, char *varFuncName, int scope, int parameters) {
  struct symbol *s;
  
  HASH_FIND_STR(symbolTable, name, s);
  if (s == NULL){
    s = (Symbol*)malloc(sizeof(Symbol));
    s -> name = name;
    s -> symbolType = symbolType;
    s -> varFuncName = varFuncName;
    s -> scope = scope;
    s -> parameters = parameters;
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
      HASH_ADD_STR(symbolTable, name, s);
      return 0;
    } else {
      printf("Semantic Error\n");
      printf("Variable or Function already declared in this scope\n\n");    
      return 1;}
  }
  return 1;
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
  if (varType == value)
    return true;
  return false;
}

int checkTypesReturnFunction(char value, char returnType) {
  if (returnType == 'v' && value != 'x')
    return 0;
  if (returnType != 'v' && value == 'x')
    return 1;
  if ((returnType == value) || (returnType == 'v' && value == 'x'))
    return 2;
  return 3;
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



int addSymbol(char *name, char *symbolType, char *varFuncName, int scope, int parameters);
void freeSymbols();
void printSymbols();
extern Symbol *symbol;


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


%left ADD SUB MULT DIV OR AND SMALLER GREATER SMALLEQ GREATEQ EQUALS DIFFERENT APPEND HEADLIST TAILLIST DESTROYHEAD FILTER 
%right ASSIGN MAP ELSE THEN

%token <str> ADD SUB MULT DIV OR AND SMALLER GREATER SMALLEQ GREATEQ EQUALS DIFFERENT APPEND HEADLIST TAILLIST DESTROYHEAD FILTER 
%token <str> ASSIGN MAP ELSE THEN
%token <str> IF FOR READ WRITE WRITELN RETURN SEMIC COMMA STFUNC ENDFUNC PARENL PARENR


%start program

%type<treeNode> program declarationList declaration varDeclaration funcDeclaration simpleVarDeclaration 
%type<treeNode> params param compoundStmt stmtList primitiveStmt exprStmt condStmt ifStmt elseStmt iterStmt returnStmt listExp 
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
    TYPE ID PARENL {scope++; pushStack(scope);} params PARENR STFUNC {errors += addSymbol($2, "func", $1, STACK_TOP(stackScope) -> value, parameters); parameters = 0;} stmtList ENDFUNC {
      $$ = createNode4("TYPE ID PARENL params PARENR STFUNC stmtList ENDFUNC", createNode0($1), createNode0($2), $5, $9);
      popStack();
      if(checkTypesReturnFunction($9 -> returnType, $1[0]) == 0) {
        printf("Semantic Error\n");
        printf("function %s with wrong return, line %d, column %d\n\n", $2, line, wordPosition);
        semanticErrors += 1;
      }else if(checkTypesReturnFunction($9 -> returnType, $1[0]) == 1) {
        printf("Semantic Error\n");
        printf("function %s with wrong return, line %d, column %d\n\n", $2, line, wordPosition);
        
        semanticErrors += 1;
      } else if (checkTypesReturnFunction($9 -> returnType, $1[0]) == 3) {
        printf("Semantic Error\n");
        printf("function %s with wrong return, line %d, column %d\n\n", $2, line, wordPosition);
        semanticErrors += 1;
      }
  }
  | TYPE ID PARENL {pushStack(scope);} PARENR STFUNC {errors += addSymbol($2, "func", $1, STACK_TOP(stackScope) -> value, parameters);  parameters = 0;} stmtList ENDFUNC {
    
      $$ = createNode3("TYPE ID PARENL PARENR compoundStmt", createNode0($1), createNode0($2), $8); 
      popStack();
      if(checkTypesReturnFunction($8 -> returnType, $1[0]) == 0) {
        printf("Semantic Error\n");
        printf("function %s with wrong return, line %d, column %d\n\n", $2, line, wordPosition);
        semanticErrors += 1;
      }else if(checkTypesReturnFunction($8 -> returnType, $1[0]) == 1) {
        printf("Semantic Error\n");
        printf("function %s with wrong return, line %d, column %d\n\n", $2, line, wordPosition);
        
        semanticErrors += 1;
      } else if (checkTypesReturnFunction($8 -> returnType, $1[0]) == 3) {
        printf("Semantic Error\n");
        printf("function %s with wrong return, line %d, column %d\n\n", $2, line, wordPosition);
        semanticErrors += 1;
      }                                                                            
  }
  | TYPE LISTTYPE ID PARENL {scope++; pushStack(scope);} params PARENR STFUNC {errors += addSymbol($3, "func", $2, STACK_TOP(stackScope) -> value, parameters);  parameters = 0;} stmtList ENDFUNC{
      $$ = createNode5("TYPE LISTTYPE ID PARENL params PARENR compoundStmt", createNode0($1), createNode0List($2, 'l'), createNode0($3), $6, $10);
      popStack();
      if(checkTypesReturnFunction($10 -> returnType, $1[0]) == 0) {
        printf("Semantic Error\n");
        printf("function %s with wrong return, line %d, column %d\n\n", $2, line, wordPosition);
        semanticErrors += 1;
      }else if(checkTypesReturnFunction($10 -> returnType, $1[0]) == 1) {
        printf("Semantic Error\n");
        printf("function %s with wrong return, line %d, column %d\n\n", $2, line, wordPosition);
        
        semanticErrors += 1;
      } else if (checkTypesReturnFunction($10 -> returnType, $1[0]) == 3) {
        printf("Semantic Error\n");
        printf("function %s with wrong return, line %d, column %d\n\n", $2, line, wordPosition);
        semanticErrors += 1;
      }      
  }   
  | TYPE LISTTYPE ID PARENL {pushStack(scope);} PARENR STFUNC {errors += addSymbol($3, "func", $2, STACK_TOP(stackScope) -> value, parameters);  parameters = 0;} stmtList ENDFUNC{
      $$ = createNode4("TYPE LISTTYPE ID PARENL PARENR compoundStmt", createNode0($1), createNode0List($2, 'l'), createNode0($3), $9);
      popStack();
      if(checkTypesReturnFunction($9 -> returnType, $1[0]) == 0) {
        printf("Semantic Error\n");
        printf("function %s with wrong return, line %d, column %d\n\n", $2, line, wordPosition);
        semanticErrors += 1;
      }else if(checkTypesReturnFunction($9 -> returnType, $1[0]) == 1) {
        printf("Semantic Error\n");
        printf("function %s with wrong return, line %d, column %d\n\n", $2, line, wordPosition);
        
        semanticErrors += 1;
      } else if (checkTypesReturnFunction($9 -> returnType, $1[0]) == 3) {
        printf("Semantic Error\n");
        printf("function %s with wrong return, line %d, column %d\n\n", $2, line, wordPosition);
        semanticErrors += 1;
      }      
    }
  ;

simpleVarDeclaration:
    TYPE ID {

      pushStack(scope);
      $$ = createNode2("TYPE ID", createNode0($1), createNode0($2));
      semanticErrors += addSymbol($2, "var", $1, STACK_TOP(stackScope) -> value, 0);
      popStack();
      }
    | TYPE LISTTYPE ID {

      pushStack(scope);
      semanticErrors += addSymbol($3, "var", $2, STACK_TOP(stackScope) -> value, 0);
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
      semanticErrors += addSymbol($2, "param", $1, STACK_TOP(stackScope) -> value, 0);
      popStack();
      }
    | TYPE LISTTYPE ID {
      parameters++;
      pushStack(scope);
      semanticErrors += addSymbol($3, "param", $2, STACK_TOP(stackScope) -> value, 0);
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
      if($1 -> returnType == 'x')
        $$ -> returnType = $2 -> returnType;
      else
        $$ -> returnType = $1 -> returnType;    }
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
      $$ -> returnType = $2 -> nodeType;
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
      $$ -> nodeType = $1 -> nodeType;
    }
  | simpleExp {
      $$ = createNode1("simpleExp", $1);
      $$ -> nodeType = $1 -> nodeType;
  }
  | listExp {
    $$ = createNode1("listExp", $1);
    $$ -> nodeType = $1 -> nodeType;
  }
  ;

assignExp:
    ID ASSIGN expression {
      struct symbol *s = checkIsInScope($1, STACK_TOP(stackScope) -> value);
      if (s != NULL){
        $$ = createNode3("ID ASSIGN expression", createNode0($1), createNode0("="), $3);
        $$ -> nodeType = s -> varFuncName[0];
        if(!checkTypesVar(s -> varFuncName[0], $3 -> nodeType)) {
            printf("Semantic Error\n");
            printf("Var %s from type %s receiving invalid type, line %d, column %d\n\n", $1, s -> varFuncName, line, wordPosition);
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
    }
  ;

constOp:
    INTEGER {
      $$ = createNode0Int($1, 'i');
      $$ -> nodeType = 'i';
    }
  | DECIMAL {
      $$ = createNode1("DECIMAL", createNode0Dec($1, 'f'));
      $$ -> nodeType = 'f';
  }
  | NIL {
    $$ = createNode0Nil($1, 'n');
    $$ -> nodeType = 'n';
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

      $$ -> nodeType = $1 -> nodeType;
  }
  ;

binLogicalExp:
    binLogicalExp binLogicalOp relationalOp{
      $$ = createNode3("binLogicalExp binLogicalOp relationalOp", $1, $2, $3);
    }
  | relationalExp {
    $$ = createNode1("relationalExp", $1);

      $$ -> nodeType = $1 -> nodeType;
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
      $$ -> nodeType = $1 -> nodeType;
      
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
    sumExp sumOp mulExp {
      $$ = createNode3("sumExp sumOp mulExp", $1, $2, $3);
      $$ -> nodeType = checkTypes($1 -> nodeType, $3 -> nodeType);
    }
  | mulExp {
      $$ = createNode1("mulExp", $1);
      $$ -> nodeType = $1 -> nodeType;
  }
  ;

sumOp:
    ADD {
      $$ = createNode1("ADD", createNode0("+"));
    }
  | SUB {
      $$ = createNode1("SUB", createNode0("-"));
  }
  ;

mulExp:
    mulExp mulOp factor {
      $$ = createNode3("mulExp mulOp factor", $1, $2, $3);
      $$ -> nodeType = checkTypes($1 -> nodeType, $3 -> nodeType);
    }
  | factor {
      $$ = createNode1("factor", $1);
      $$ -> nodeType = $1 -> nodeType;
  }
  | sumOp factor {
      $$ = createNode2("sumOp factor", $1, $2);
  }
  ;

mulOp:
    MULT {
      $$ = createNode1("MULT", createNode0("*"));
    }
  | DIV {
      $$ = createNode1("DIV", createNode0("/"));
  }
  ;

factor:
    ID {
      argsParams++;
      struct symbol *s = checkIsInScope($1, STACK_TOP(stackScope) -> value);
      if (s != NULL) {
        $$ = createNode1("ID", createNode0String($1));
        $$ -> nodeType = s -> varFuncName[0];      
      }
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