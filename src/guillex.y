%define lr.type canonical-lr
%define parse.error verbose
%debug
%locations


%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/tree.h"
#include "../lib/table.h"

int errors = 0; 
int symbolIdCounter;

extern int yylex();
extern int yylex_destroy();
extern int yyparse();
void yyerror(const char* text);
extern int line;
extern int wordPosition;
extern FILE* yyin;
extern Symbol *symbol;

Node *abstractSyntaxTree = NULL;


%}  

%union{
  int integer;
  char *str;
  float dec;

  struct node *treeNode;
}

%token<str> ID TYPE LIST STRING NIL
%token<integer> INTEGER
%token<dec> DECIMAL


%left ADD SUB MULT DIV OR AND SMALLER GREATER SMALLEQ GREATEQ EQUALS DIFFERENT APPEND HEADLIST TAILLIST DESTROYHEAD FILTER 
%right ASSIGN NEG NOT MAP ELSE THEN

%token <str> ADD SUB MULT DIV OR AND SMALLER GREATER SMALLEQ GREATEQ EQUALS DIFFERENT APPEND HEADLIST TAILLIST DESTROYHEAD FILTER 
%token <str> ASSIGN NEG NOT MAP ELSE THEN
%token <str> IF FOR READ WRITE WRITELN RETURN SEMIC COMMA STFUNC ENDFUNC PARENL PARENR


%start program

%type<treeNode> program declarationList declaration varDeclaration funcDeclaration simpleVarDeclaration 
%type<treeNode> params param compoundStmt stmtList primitiveStmt exprStmt condStmt iterStmt returnStmt listStmt 
%type<treeNode> appendOps returnListOps returnListOp destroyHeadOps mapFilterOps expression assignExp simpleExp
%type<treeNode> constOp inOp outOp outConst binLogicalExp binLogicalOp unLogicalExp unLogicalOp relationalExp relationalOp
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
    FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt {}
  | FOR PARENL simpleExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt {}
  ;

returnStmt:
    RETURN expression SEMIC {}
  ;

listStmt:
    appendOps {}
  | returnListOps {}
  | destroyHeadOps {}
  | mapFilterOps {}
  ;

appendOps:
    ID APPEND ID SEMIC {}
  ;

returnListOps:
    returnListOp ID {}
  ;

returnListOp:
    HEADLIST {}
  | TAILLIST {}
  ;

destroyHeadOps:
    DESTROYHEAD ID SEMIC {}
  ;

mapFilterOps:
    fCall MAP ID SEMIC {}
  ;

expression:
    assignExp {}
  | simpleExp {}
  ;

assignExp:
    ID ASSIGN expression {}
  ; 
    

simpleExp:
    binLogicalExp {}
  ;

constOp:
    INTEGER {}
  | DECIMAL {}
  | LIST {}
  | NIL {}
  ;

inOp:
  READ PARENL ID PARENR SEMIC{}
  ;

outOp:
    WRITE PARENL outConst PARENR SEMIC{}
  | WRITELN PARENL outConst PARENR SEMIC {}
  ;

outConst:
    STRING {}
  | simpleExp {}
  ;

binLogicalExp:
    binLogicalExp binLogicalOp unLogicalOp{}
  | unLogicalExp {}
  ;

binLogicalOp:
    OR {}
  | AND {}
  | NEG {}
  ;

unLogicalExp:
    unLogicalOp unLogicalExp {}
  | relationalExp
  ;

unLogicalOp:
    NOT {}
  ;

relationalExp:
    relationalExp relationalOp sumExp {}
  | sumExp {}
  ;


relationalOp:
    SMALLER {}
  | GREATER {}
  | SMALLEQ {}
  | GREATEQ {}
  | EQUALS {}
  | DIFFERENT {}
  ;

sumExp:
    sumExp sumOp mulExp {}
  | mulExp {}
  ;

sumOp:
    ADD {}
  | SUB {}
  ;

mulExp:
    mulExp mulOp factor {}
  | factor {}
  | sumOp factor {}
  ;

mulOp:
    MULT {}
  | DIV {}
  ;

factor:
    ID {}
  | fCall {}
  | PARENL simpleExp PARENR {}
  | constOp {}
  ;

fCall:
    ID PARENL callParams PARENR  {}
  | ID PARENL PARENR {}
  ;

callParams:
    callParams COMMA simpleExp {}
  | simpleExp {}
  ;



%%

void yyerror(const char* msg) {
  printf("%s\n", msg);
  printf ("%s, linha: %d, coluna: %d\n", msg,line,wordPosition);
  errors++;
}

int main(int argc, char *argv[]) {

  printf("\n\n#### beginning ####\n\n");
  FILE *file;
  file = fopen(argv[1], "r");
  if(argc > 1){
    if(file){
      yyin = file;
      yyparse();
      printf("------------------------symbols---------------------\n");
      printSymbols();
      printf("-------------------------tree-----------------------\n");
      // printTree(abstractSyntaxTree);
      freeSymbols();
    }else{
      printf("File not found\n");
    }
  }
  else{
    printf("No file specified\n");
  }
  fclose(yyin);
  yylex_destroy();
  printf("\n\n#### EOF ####\n\n");
  return 0;
}