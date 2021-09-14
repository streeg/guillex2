%define lr.type canonical-lr
%define parse.error verbose
%debug
%locations


%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/uthash.h"


extern int yylex();
extern int yylex_destroy();
extern int yyparse();
void yyerror(const char* text);
extern int line;
extern int wordPosition;
extern FILE* yyin;
int errors = 0; 
int symbolIdCounter = 0;



typedef struct node {
  int integer;
  float decimal;
  char *value;
  char type;
  struct node *left;
  struct node *leftMiddle;
  struct node *middle;
  struct node *rightMiddle;
  struct node *right;
}Node;


Node* createNode0(char *value) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 's';
  node -> left = NULL;
  node -> leftMiddle = NULL;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode0Int(int value, char type) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> integer = value;
  node -> type = 'i';
  node -> left = NULL;
  node -> leftMiddle = NULL;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode0Dec(float value, char type) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> decimal = value;
  node -> type = 'd';
  node -> left = NULL;
  node -> leftMiddle = NULL;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode0List(char *value, char type) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 'l';
  node -> left = NULL;
  node -> leftMiddle = NULL;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode0Nil(char *value, char type) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 'n';
  node -> left = NULL;
  node -> leftMiddle = NULL;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}


Node* createNode1(char *value, Node* left) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 's';
  node -> left = left;
  node -> leftMiddle = NULL;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode2(char *value, Node* left, Node* leftMiddle) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 's';
  node -> left = left;
  node -> leftMiddle = leftMiddle;
  node -> middle = NULL;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode3(char *value, Node* left, Node* leftMiddle, Node* middle) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 's';
  node -> left = left;
  node -> leftMiddle = leftMiddle;
  node -> middle = middle;
  node -> rightMiddle = NULL;
  node -> right = NULL;

  return node;
}

Node* createNode4(char *value, Node* left, Node* leftMiddle, Node* middle, Node* rightMiddle) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 's';
  node -> left = left;
  node -> leftMiddle = leftMiddle;
  node -> middle = middle;
  node -> rightMiddle = rightMiddle;
  node -> right = NULL;

  return node;
}

Node* createNode5(char *value, Node* left, Node* leftMiddle, Node* middle, Node* rightMiddle, Node* right) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 's';
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
  
  if(node -> type == 's')
    printf("%s\n", node -> value);
  if(node -> type == 'i')
    printf("%d\n", node -> integer);
  if(node -> type == 'd')
    printf("%f\n", node -> decimal);
  if(node -> type == 'l')
    printf("%s\n", node -> value);
  if(node -> type == 'n')
    printf("%s\n", node -> value);
  
  printAndFreeTree(node -> left);
  printAndFreeTree(node -> leftMiddle);
  printAndFreeTree(node -> middle);
  printAndFreeTree(node -> rightMiddle);
  printAndFreeTree(node -> right);
  free(node);
}
Node* createNode0(char *value);
Node* createNode0Int(int value, char type); 
Node* createNode0Dec(float value, char type);
Node* createNode0List(char *value, char type);
Node* createNode0Nil(char *value, char type);
Node* createNode1(char *value, Node* left);
Node* createNode2(char *value, Node* left, Node* leftMiddle);
Node* createNode3(char *value, Node* left, Node* leftMiddle, Node* middle);
Node* createNode4(char *value, Node* left, Node* leftMiddle, Node* middle, Node* rightMiddle);
Node* createNode5(char *value, Node* left, Node* leftMiddle, Node* middle, Node* rightMiddle, Node* right);
void printAndFreeTree(Node *node);
Node *abstractSyntaxTree = NULL;

typedef struct symbol {
  int id;
  char *name;
  char *symbolType;
  char *isFuncOrVar;
  UT_hash_handle hh;
}Symbol;

Symbol *symbolTable = NULL;

void addSymbol(int id, char *name, char *symbolType, char *isFuncOrVar) {
  struct symbol *s;

  HASH_FIND_INT(symbolTable, &id, s);
  if (s == NULL){
    s = (Symbol*)malloc(sizeof(Symbol));
    s -> id = id;
    s -> name = name;
    s -> symbolType = symbolType;
    s -> isFuncOrVar = isFuncOrVar;
    HASH_ADD_INT(symbolTable, id, s);
  } else {
    printf("cannot add symbol to table\n");
  }
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
        printf("|   %d    |    %s     |      %s    |    %s    |\n", s -> id, s -> name, s -> symbolType, s -> isFuncOrVar);
    }
}


void addSymbol(int id, char *name, char *symbolType, char *isFuncOrVar);
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


%left ADD SUB MULT DIV OR AND SMALLER GREATER SMALLEQ GREATEQ EQUALS DIFFERENT APPEND HEADLIST TAILLIST DESTROYHEAD FILTER 
%right ASSIGN MAP ELSE THEN

%token <str> ADD SUB MULT DIV OR AND SMALLER GREATER SMALLEQ GREATEQ EQUALS DIFFERENT APPEND HEADLIST TAILLIST DESTROYHEAD FILTER 
%token <str> ASSIGN MAP ELSE THEN
%token <str> IF FOR READ WRITE WRITELN RETURN SEMIC COMMA STFUNC ENDFUNC PARENL PARENR


%start program

%type<treeNode> program declarationList declaration varDeclaration funcDeclaration simpleVarDeclaration 
%type<treeNode> params param compoundStmt stmtList primitiveStmt exprStmt condStmt iterStmt returnStmt listStmt 
%type<treeNode> appendOps returnListOps returnListOp destroyHeadOps mapFilterOps expression assignExp simpleExp
%type<treeNode> constOp inOp outOp outConst binLogicalExp binLogicalOp relationalExp relationalOp
%type<treeNode> sumExp sumOp mulExp mulOp factor fCall callParams
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
    TYPE ID PARENL params PARENR compoundStmt {
      addSymbol(symbolIdCounter, $2, "func", $1);
      symbolIdCounter++;
      $$ = createNode4("TYPE ID PARENL params PARENR compoundStmt", createNode0($1), createNode0($2), $4, $6);
  }
  | TYPE ID PARENL PARENR compoundStmt {
    symbolIdCounter++;
    $$ = createNode3("TYPE ID PARENL PARENR compoundStmt", createNode0($1), createNode0($2), $5);                                                                       
  } 
  ;

simpleVarDeclaration:
    TYPE ID {
      addSymbol(symbolIdCounter, $2, "var", $1);
      symbolIdCounter++;
      $$ = createNode2("TYPE ID", createNode0($1), createNode0($2));
      }
    | TYPE LISTTYPE ID {
      symbolIdCounter++;
      $$ = createNode3("TYPE ID", createNode0($1), createNode0List($2, 'l'), createNode0($3));
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
    simpleVarDeclaration {
      $$ = createNode1("simpleVarDeclaration", $1);
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
  | listStmt {
    $$ = createNode1("listStmt", $1);
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

listStmt:
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
    ID APPEND ID SEMIC {
      $$ = createNode3("ID APPEND ID SEMIC", createNode0($1), createNode0($2), createNode0($3));
    }
  ;

returnListOps:
    returnListOp ID {
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
    DESTROYHEAD ID SEMIC {
      $$ = createNode2("DESTROYHEAD ID", createNode0($1), createNode0($2));
    }
  ;

mapFilterOps:
    fCall MAP ID SEMIC {
      $$ = createNode3("fCall MAP ID SEMIC", $1, createNode0($2), createNode0($3));
    }
    |
    fCall FILTER ID SEMIC {
      $$ = createNode3("fCall FILTER ID SEMIC", $1, createNode0($2), createNode0($3));
    }
  ;

expression:
    assignExp {
      $$ = createNode1("assignExp", $1);
    }
  | simpleExp {
      $$ = createNode1("simpleExp", $1);
  }
  ;

assignExp:
    ID ASSIGN expression {
      $$ = createNode3("ID ASSIGN expression", createNode0($1), createNode0($2), $3);
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
        printAndFreeTree(abstractSyntaxTree);
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