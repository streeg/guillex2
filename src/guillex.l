%{
  #include <stdio.h>
  #include <string.h>
  #include <math.h>

  int line = 1;
  int word_position = 1;

%}

%option nounput
%option noinput
%option noyywrap


newline   "\n"
space     " "
tab       "\t"

letter    [a-zA-Z]
digit     [0-9]
main      "main"
id        {letter}+({letter}|{digit}|_|-^)*
nil       "NIL"
integer   -?{digit}+
decimal   -?{digit}*[.]{digit}+
string    \"(\\.|[^"\\])*\" 
type      "int"|"float"|"list"
list      ("list ")?{id}
lvalue    {id}
rvalue    {list}
comment   "//".*

/*ArithmeticOP*/
add       [+]
sub       [-]
mult      [*]
div       [/]

/*BinLogicalOP*/
or        "||"
and       "&&"
negate    [~]

/*UnlogicalOP*/
not       "!"{id}

/*RelationalOP*/
smaller   [<]
greater   [>]
smalleq   "<="
greateq   ">="
equals    "=="
diff      "!="

/*assignOP*/
assign    [=]

/*IO*/
read      "read"
write     "write"
writeln   "writeln"

/*Keywords*/
if        "if"
else      "else"
for       "for"
return    "return"
append      {lvalue}" : "{rvalue}
headlist    "?"{list}
taillist    "!"{list}
destroyhead "%"{list}
map         ">>"
filter      "<<"

stfunc    [{]
endfunc   [}]
parenl    [(]
parenr    [)]
semic     [;]
comma     [,]

%%

{semic}   {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{comma}   {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{add}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{sub}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{mult}    {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{div}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{negate}  {
            printf("OP [NEGATE]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{not}  {
            printf("OP [NOT]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{tab}     {
            word_position += 2;
          }

{space}   {
            word_position += 1;
          }

{newline} {
            line += 1;
            word_position = 1;
          }

{type}    {
            printf("Type: '%s' on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{stfunc}  {
            printf("'%s' on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{endfunc} {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{parenl}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{parenr}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{nil}   {
            printf("Constant: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{assign}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{comment} {
            word_position += yyleng;
          }

{and}     {
            printf("OP [AND]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{or}      {
            printf("OP [OR]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{smaller} {
            printf("OP [SMALLER THAN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{greater} {
            printf("OP [GREATER THAN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{smalleq} {
            printf("OP [SMALLER THAN OR EQUAL]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{greateq} {
            printf("OP [GREATER THAN OR EQUAL]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{equals}  {
            printf("OP [EQUALS]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{diff}    {
            printf("OP [IS DIFFERENT]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{if}      {
            printf("Keyword [IF]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{else}    {
            printf("Keyword [ELSE]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{for}     {
            printf("Keyword [FOR]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{return}  {
            printf("Keyword [RETURN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{read}    {
            printf("Keyword [READ]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{write}   {
            printf("Keyword [WRITE]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{writeln} {
            printf("Keyword [WRITELN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }      

{append}     {
            printf("Keyword [APPEND]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{headlist}   {
            printf("Keyword [HEADLIST]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{taillist}  {
            printf("Keyword [TAILLIST]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{destroyhead}  {
            printf("Keyword [DESTROYHEAD]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{map}   {
            printf("Keyword [MAP]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{filter}  {
            printf("Keyword [FILTER]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{decimal} {
            printf("Decimal: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{integer}  {
            printf("Integer: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{id}      {
            printf("Id: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{list}    {
            printf("List: %s on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

{string}  {
            printf("String: %s on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
          }

.         {
            printf("\nERROR!!\n");
            printf("%s at line: %d, column: %d\n\n", yytext, line, word_position);
            word_position += strlen(yytext);
          }

%%

int main(int argc, char *argv[]) {
  printf("\n\n#### Begining test ####\n\n");

  yyin = fopen(argv[1], "r");
  yylex();

  fclose(yyin);

  yylex_destroy();

  printf("\n\n#### EOF ####\n\n");

  return 0;
}
