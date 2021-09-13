%{
  #include <stdio.h>
  #include <string.h>
  #include <math.h>
  #include "../lib/guillex.tab.h"

  int line = 1;
  int wordPosition = 1;

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
append      [:]
headlist    [?]
taillist    [!]
destroyhead "%"
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
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return SEMIC;
          }

{comma}   {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return COMMA;
          }

{add}     {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return ADD;
          }

{sub}     {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return SUB;
          }

{mult}    {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return MULT;
          }

{div}     {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return DIV;
          }

{negate}  {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return NEG;
          }

{tab}     {
            wordPosition += 2;
          }

{space}   {
            wordPosition += 1;
          }

{newline} {
            line += 1;
            wordPosition = 1;
          }

{type}    {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return TYPE;            
          }


{stfunc}  {
            yylval.str = (char *) strdup(yytext);
            wordPosition += yyleng;
            return STFUNC;
          }

{endfunc} {
            yylval.str = (char *) strdup(yytext);
            wordPosition += yyleng;
            return ENDFUNC;
          }

{parenl}  {
            yylval.str = (char *) strdup(yytext);
            wordPosition += yyleng;
            return PARENL;
          }

{parenr}  {
            yylval.str = (char *) strdup(yytext);
            wordPosition += yyleng;
            return PARENR;
          }

{nil}   {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return NIL;
          }

{assign}  {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return ASSIGN;            
          }

{comment} {
            wordPosition += yyleng;
          }

{and}     {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return AND;
          }

{or}      {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return OR;
          }

{smaller} {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return SMALLER;
          }

{greater} {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return GREATER;
          }

{smalleq} {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return SMALLEQ;
          }

{greateq} {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return GREATEQ;
          }

{equals}  {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return EQUALS;
          }

{diff}    {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return DIFFERENT;
          }

{if}      {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return IF;
          }

{else}    {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return ELSE;
          }

{for}     {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return FOR;
          }

{return}  {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return RETURN;
          }

{read}    {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return READ;
          }

{write}   {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return WRITE;
          }

{writeln} {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return WRITELN;
          }      

{append}     {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return APPEND;
          }

{headlist}   {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return HEADLIST;
          }

{taillist}  {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return TAILLIST;
          }

{destroyhead}  {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return DESTROYHEAD;
          }

{map}   {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return MAP;
          }

{filter}  {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return FILTER;
          }

{decimal} {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return DECIMAL;
          }

{integer}  {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return INTEGER;
          }

{id}      {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return ID;
          }


{string}  {
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return STRING;
          }

.         {
            printf("\nERROR!!\n");
            wordPosition += strlen(yytext);
          }

%%