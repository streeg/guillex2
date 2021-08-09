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


%start prog
%type<ast> declarations_list declaration var_dec
// %type declarations_list declaration var_dec function_declaration parameters_list parameter statement_list statement
// %type assign_value basic_ops if_ops for_op forall_op expression terminal set_op log_op in_set
// %type diff_is_type is_type math_op io_ops read write writeln ret_st

%%

prog:
    declarations_list     {}
  ;

declarations_list:
    declaration declarations_list     {}
  | declaration       {}
  ;

declaration:
    var_dec     {}
  ;

var_dec:
    TYPE ID SEMIC   {printf("VARIABLE DECLARATION\n");}
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