%define lr.type canonical-lr
%define parse.error verbose
%debug
%locations


%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

void yyerror(const char* msg) {
  printf("%s\n", msg);
}
int yylex();
extern int yylex_destroy(void);

%}

%union{
  char* str;
  int integer;
  float dec;
  
  struct node *ast;
}

%token<str> ID
%token<str> TYPE
%token<str> ELEMTYPE

%token<integer> INTEGER
%token<dec> DECIMAL
%token<str> LIST
%token<str> STRING

%token<str> NIL
%token<str> MAIN
%token<str> RETURN

%token<str> ADD
%token<str> SUB
%token<str> MULT
%token<str> DIV

%token<str> OR
%token<str> AND
%token<str> NEG
%token<str> NOT
%token<str> SMALLER
%token<str> GREATER
%token<str> SMALLEQ
%token<str> GREATEQ
%token<str> EQUALS
%token<str> DIFFERENT
%token<str> ASSIGN

%token<str> IF
%token<str> ELSE
%token<str> FOR

%token<str> READ
%token<str> WRITE
%token<str> WRITELN

%token<str> APPEND
%token<str> HEADLIST
%token<str> TAILLIST
%token<str> DESTROYHEAD
%token<str> MAP
%token<str> FILTER

%token<str> SEMIC
%token<str> COMMA
%token<str> STFUNC
%token<str> ENDFUNC
%token<str> PARENL
%token<str> PARENR


%start program
%type<ast> declarationList declaration varDeclaration funcDeclaration params param 
%type<ast> compoundStmt localDeclarations stmtList primitiveStmt exprStmt
%type<ast> condStmt iterStmt returnStmt listStmt appendOPS returnlistOPS returnlistOP
%type<ast> destroyheadOPS mapfilterOPS expression assignOP simpleExp
%type<ast> constOP inOP outOPS outOP logicalExp binLogicalOP unLogicalOP relationalExp relationalOP sumExp sumOP mulExp mulOP factor fCall
%%

program:
    declarationList     {}
  ;

declarationList:
     declarationList declaration    {}
  | declaration       {}
  ;

declaration:
    varDeclaration     {}
    | funcDeclaration  {}
  ;

varDeclaration:
    TYPE ID SEMIC   {printf("VARIABLE DECLARATION\n");}
  ;

funcDeclaration:  
    TYPE ID PARENL params PARENR compoundStmt {}
  ;

params:
    params param{}
  | param {}
  ;

param:
    TYPE ID {}
  ;

compoundStmt:
    STFUNC localDeclarations stmtList ENDFUNC {}
  ;

localDeclarations:
    localDeclarations varDeclaration {}
  ;

stmtList:
    stmtList primitiveStmt    {}
  ;

primitiveStmt:
    exprStmt {}
  | compoundStmt {}
  | condStmt {}
  | iterStmt {}
  | returnStmt {}
  | listStmt {}
  ;

exprStmt:
    expression SEMIC {}
  ;

condStmt:
    IF PARENL expression PARENR compoundStmt {}
  | IF PARENL expression PARENR compoundStmt ELSE compoundStmt {}
  ;

iterStmt:
    FOR PARENL expression SEMIC relationalExp SEMIC expression PARENR compoundStmt {}
  ;

returnStmt:
    RETURN expression SEMIC {}
  ;

listStmt:
    appendOPS {}
  | returnlistOPS {}
  | destroyheadOPS {}
  | mapfilterOPS {}
  ;

appendOPS:
    expression APPEND ID SEMIC {}
  ;

returnlistOPS:
    returnlistOP ID {}
  ;

returnlistOP:
    HEADLIST {}
  | TAILLIST {}
  ;

destroyheadOPS:
    DESTROYHEAD ID SEMIC {}
  ;

mapfilterOPS:
    fCall MAP ID SEMIC {}
  ;

expression:
    ID assignOP expression {}
  | simpleExp {}
  | constOP {}
  | inOP {}
  | outOP {}
  ;

assignOP:
    ASSIGN {}
  ;
    

simpleExp:
    logicalExp {}
  | relationalExp {}
  ;

constOP:
    INTEGER {}
  | DECIMAL {}
  | LIST {}
  | NIL {}
  ;

inOP:
  READ PARENL ID PARENR {}
  ;

outOPS:
  outOP PARENL OUTCONST PARENR SEMIC {}
  ;

outOP:
    WRITE {}
  | WRITELN {}
  ;

OUTCONST:
    STRING {}
  | expression {}
  ;

logicalExp:
    simpleExp binLogicalOP simpleExp {}
  | unLogicalOP simpleExp {}
  ;

binLogicalOP:
    OR {}
  | AND {}
  | NEG {}
  ;

unLogicalOP:
    NOT {}
  ;

relationalExp:
    relationalExp relationalOP sumExp {}
  | sumExp {}
  ;


relationalOP:
    SMALLER {}
  | GREATER {}
  | SMALLEQ {}
  | GREATEQ {}
  | EQUALS {}
  | DIFFERENT {}
  ;

sumExp:
    sumExp sumOP mulExp {}
  | mulExp {}
  ;

sumOP:
    ADD {}
  | SUB {}
  ;

mulExp:
    mulExp mulOP factor {}
  | factor {}
  ;

mulOP:
    MULT {}
  | DIV {}
  ;

factor:
    ID {}
  | fCall {}
  | PARENL simpleExp PARENR {}
  | constOP {}
  ;

fCall:
   PARENL params PARENR  {}
  ;




%%
int main(int argc, char *argv[]) {
  Node *tree;

  tree = create_node("value", 'I');
  tree = add_node_left("value", 'S', tree);
  tree -> left = add_node_left("value", 'I', tree -> left);
  tree -> left = add_node_middle("value", 'T', tree -> left);
  tree -> left = add_node_right("value", 'C', tree -> left);
  print_tree(tree);

  printf("\n\n#### Beginning test ####\n\n");

  FILE *file;
  file = fopen(argv[1], "r");
  yyparse();
  yylex_destroy();
  fclose(file);
  printf("\n\n#### EOF ####\n\n");
  return 0;
}