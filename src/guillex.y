%define lr.type canonical-lr
%define parse.error verbose
%debug
%locations


%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int errors = 0; 

void yyerror(const char* msg) {
  printf("%s\n", msg);
  errors++;
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

%token<integer> INTEGER
%token<dec> DECIMAL
%token<str> LIST
%token<str> STRING

%token<str> NIL


%left ADD SUB MULT DIV
%left OR AND SMALLER GREATER 
%left SMALLEQ GREATEQ EQUALS DIFFERENT
%left APPEND HEADLIST TAILLIST DESTROYHEAD FILTER 
%right ASSIGN NEG NOT MAP ELSE THEN


%token IF FOR READ WRITE WRITELN MAIN RETURN
%token SEMIC COMMA STFUNC ENDFUNC PARENL PARENR


%start program

%type<str> declarationList declaration varDeclaration funcDeclaration simpleVDeclaration simpleFDeclaration 
%type<str> params param compoundStmt stmtList primitiveStmt exprStmt condStmt iterStmt returnStmt listStmt 
%type<str> appendOps returnListOps returnListOp destroyHeadOps mapFilterOps expression assignExp simpleExp
%type<str> constOp inOp outOp outConst binLogicalExp binLogicalOp unLogicalExp unLogicalOp relationalExp relationalOp
%type<str> sumExp sumOp mulExp mulOp factor fCall callParams
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
    simpleVDeclaration {}
  ;

funcDeclaration:  
    simpleFDeclaration PARENL params PARENR compoundStmt {}
  | simpleFDeclaration PARENL PARENR compoundStmt {} 
  ;

simpleVDeclaration:
    TYPE ID {}
  ;

simpleFDeclaration:
    TYPE ID {}
  ;

params:
    params param {}
  | param {}
  ;

param:
    simpleVDeclaration {}
  ;

compoundStmt:
    STFUNC stmtList ENDFUNC {}
  ;

stmtList:
    stmtList primitiveStmt    {}
  | primitiveStmt {}
  ;

primitiveStmt:
    exprStmt {}
  | compoundStmt {}
  | condStmt {}
  | iterStmt {}
  | returnStmt {}
  | listStmt {}
  | inOp {}
  | outOp {}
  | varDeclaration {}
  ;

exprStmt:
    expression SEMIC {}
  ;

condStmt:
    IF PARENL simpleExp PARENR primitiveStmt %prec THEN {}
  | IF PARENL simpleExp PARENR primitiveStmt ELSE primitiveStmt {}
  ;

iterStmt:
    FOR PARENL assignExp SEMIC simpleExp SEMIC assignExp PARENR primitiveStmt {}
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
    simpleExp APPEND ID SEMIC {}
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
  READ PARENL ID PARENR {}
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
    ADD {printf("oi");}
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
    ID {printf("oi");}
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
int main(int argc, char *argv[]) {
  printf("\n\n#### beginning ####\n\n");
  FILE *file;
  file = fopen(argv[1], "r");
  yyparse();
  yylex_destroy();
  printf("\n\n#### EOF ####\n\n");
  return 0;
}