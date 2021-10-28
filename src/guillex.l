%{
  #include <stdio.h>
  #include <string.h>
  #include <math.h>
  #include "guillex.tab.h"

  int line = 1;
  int wordPosition = 1;
  char *removeSubstring(char *str);

%}

%option nounput
%option noinput
%option noyywrap


newline   "\n"
space     " "
tab       "\t"
carriage  "\r"

letter    [a-zA-Z]
digit     [0-9]
main      "main"
id        {letter}+({letter}|{digit}|_|-^)*
nil       "NIL"
integer   -?{digit}+
decimal   -?{digit}*[.]{digit}+
string    \"(\\.|[^"\\])*\" 
type      "int"|"float"|"void"
comment   "//".*

/*ArithmeticOP*/
add       [+]
sub       [-]
mult      [*]
div       [/]

/*BinLogicalOP*/
or        "||"
and       "&&"

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
            printf("'%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return SEMIC;
          }

{comma}   {
            printf("'%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return COMMA;
          }

{add}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            return ADD;
          }

{sub}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            return SUB;
          }

{mult}    {
            printf("'%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            return MULT;
          }

{div}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            return DIV;
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
            printf("Type: '%s' on line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return TYPE;            
          }
          
{type}[" \t"]+"list"  {
            printf("Type: '%s' on line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(removeSubstring(yytext));
            return TYPE;            
          }


{stfunc}  {
            printf("'%s' on line: %d, column: %d\n", yytext, line, wordPosition);
            yylval.str = (char *) strdup(yytext);
            wordPosition += yyleng;
            return STFUNC;
          }

{endfunc} {
            printf("'%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            yylval.str = (char *) strdup(yytext);
            wordPosition += yyleng;
            return ENDFUNC;
          }

{parenl}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            yylval.str = (char *) strdup(yytext);
            wordPosition += yyleng;
            return PARENL;
          }

{parenr}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            yylval.str = (char *) strdup(yytext);
            wordPosition += yyleng;
            return PARENR;
          }

{nil}   {
            printf("Constant: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return NIL;
          }

{assign}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            return ASSIGN;            
          }

{comment} {
            wordPosition += yyleng;
          }

{and}     {
            printf("OP [AND]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            return AND;
          }

{or}      {
            printf("OP [OR]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            return OR;
          }

{smaller} {
            printf("OP [SMALLER THAN]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            return SMALLER;
          }

{greater} {
            printf("OP [GREATER THAN]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            return GREATER;
          }

{smalleq} {
            printf("OP [SMALLER THAN OR EQUAL]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            return SMALLEQ;
          }

{greateq} {
            printf("OP [GREATER THAN OR EQUAL]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            return GREATEQ;
          }

{equals}  {
            printf("OP [EQUALS]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            return EQUALS;
          }

{diff}    {
            printf("OP [IS DIFFERENT]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            return DIFFERENT;
          }

{if}      {
            printf("Keyword [IF]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return IF;
          }

{else}    {
            printf("Keyword [ELSE]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return ELSE;
          }

{for}     {
            printf("Keyword [FOR]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return FOR;
          }

{return}  {
            printf("Keyword [RETURN]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return RETURN;
          }

{read}    {
            printf("Keyword [READ]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return READ;
          }

{write}   {
            printf("Keyword [WRITE]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return WRITE;
          }

{writeln} {
            printf("Keyword [WRITELN]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return WRITELN;
          }      

{append}     {
            printf("Keyword [APPEND]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return APPEND;
          }

{headlist}   {
            printf("Keyword [HEADLIST]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return HEADLIST;
          }

{taillist}  {
            printf("Keyword [TAILLIST]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return TAILLIST;
          }

{destroyhead}  {
            printf("Keyword [DESTROYHEAD]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return DESTROYHEAD;
          }

{map}   {
            printf("Keyword [MAP]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return MAP;
          }

{filter}  {
            printf("Keyword [FILTER]: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return FILTER;
          }

{decimal} {
            printf("Decimal: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.dec = atof(yytext);
            return DECIMAL;
          }

{integer}  {
            printf("Integer: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.integer = atoi(yytext);
            return INTEGER;
          }

{id}      {
            printf("Id: '%s' at line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return ID;
          }


{string}  {
            printf("String: %s on line: %d, column: %d\n", yytext, line, wordPosition);
            wordPosition += yyleng;
            yylval.str = (char *) strdup(yytext);
            return STRING;
          }

.         {
            printf("\nERROR!!\n");
            printf("%s at line: %d, column: %d\n\n", yytext, line, wordPosition);
            wordPosition += strlen(yytext);
            return ERRORTOKEN;
          }

%%

char *removeSubstring(char *str) {
    
    if(strstr(str, "int") != NULL) {
        return "int list";
    }else{
        return "float list";
    }
}
