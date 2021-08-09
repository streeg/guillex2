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
            sscanf(yytext, "%s", yylval.str);
            return ADD;
          }

{sub}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return SUB;
          }

{mult}    {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return MULT;
          }

{div}     {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return DIV;
          }

{negate}  {
            printf("OP [NEGATE]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return NEG;
          }

{not}  {
            printf("OP [NOT]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return NOT;            
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
            sscanf(yytext, "%s", yylval.str);
            return TYPE;            
          }

{main}    {
            printf("Main: '%s' on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return MAIN;
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
            sscanf(yytext, "%s", yylval.str);
            return NIL;
          }

{assign}  {
            printf("'%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return ASSIGN;            
          }

{comment} {
            word_position += yyleng;
          }

{and}     {
            printf("OP [AND]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return AND;
          }

{or}      {
            printf("OP [OR]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return OR;
          }

{smaller} {
            printf("OP [SMALLER THAN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return SMALLER;
          }

{greater} {
            printf("OP [GREATER THAN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return GREATER;
          }

{smalleq} {
            printf("OP [SMALLER THAN OR EQUAL]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return SMALLEQ;
          }

{greateq} {
            printf("OP [GREATER THAN OR EQUAL]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return GREATEQ;
          }

{equals}  {
            printf("OP [EQUALS]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return EQUALS;
          }

{diff}    {
            printf("OP [IS DIFFERENT]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return DIFFERENT;
          }

{if}      {
            printf("Keyword [IF]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return IF;
          }

{else}    {
            printf("Keyword [ELSE]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return ELSE;
          }

{for}     {
            printf("Keyword [FOR]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return FOR;
          }

{return}  {
            printf("Keyword [RETURN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return RETURN;
          }

{read}    {
            printf("Keyword [READ]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return READ;
          }

{write}   {
            printf("Keyword [WRITE]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return WRITE;
          }

{writeln} {
            printf("Keyword [WRITELN]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return WRITELN;
          }      

{append}     {
            printf("Keyword [APPEND]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return APPEND;
          }

{headlist}   {
            printf("Keyword [HEADLIST]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return HEADLIST;
          }

{taillist}  {
            printf("Keyword [TAILLIST]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return TAILLIST;
          }

{destroyhead}  {
            printf("Keyword [DESTROYHEAD]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return DESTROYHEAD;
          }

{map}   {
            printf("Keyword [MAP]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return MAP;
          }

{filter}  {
            printf("Keyword [FILTER]: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return FILTER;
          }

{decimal} {
            printf("Decimal: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return DECIMAL;
          }

{integer}  {
            printf("Integer: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return INTEGER;
          }

{id}      {
            printf("Id: '%s' at line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return ID;
          }

{list}    {
            printf("List: %s on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return LIST;
          }

{string}  {
            printf("String: %s on line: %d, column: %d\n", yytext, line, word_position);
            word_position += yyleng;
            sscanf(yytext, "%s", yylval.str);
            return STRING;
          }

.         {
            printf("\nERROR!!\n");
            printf("%s at line: %d, column: %d\n\n", yytext, line, word_position);
            word_position += strlen(yytext);
          }

%%