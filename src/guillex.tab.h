/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_GUILLEX_TAB_H_INCLUDED
# define YY_YY_GUILLEX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    TYPE = 259,                    /* TYPE  */
    INTEGER = 260,                 /* INTEGER  */
    DECIMAL = 261,                 /* DECIMAL  */
    LIST = 262,                    /* LIST  */
    STRING = 263,                  /* STRING  */
    NIL = 264,                     /* NIL  */
    ADD = 265,                     /* ADD  */
    SUB = 266,                     /* SUB  */
    MULT = 267,                    /* MULT  */
    DIV = 268,                     /* DIV  */
    OR = 269,                      /* OR  */
    AND = 270,                     /* AND  */
    SMALLER = 271,                 /* SMALLER  */
    GREATER = 272,                 /* GREATER  */
    SMALLEQ = 273,                 /* SMALLEQ  */
    GREATEQ = 274,                 /* GREATEQ  */
    EQUALS = 275,                  /* EQUALS  */
    DIFFERENT = 276,               /* DIFFERENT  */
    APPEND = 277,                  /* APPEND  */
    HEADLIST = 278,                /* HEADLIST  */
    TAILLIST = 279,                /* TAILLIST  */
    DESTROYHEAD = 280,             /* DESTROYHEAD  */
    FILTER = 281,                  /* FILTER  */
    ASSIGN = 282,                  /* ASSIGN  */
    NEG = 283,                     /* NEG  */
    NOT = 284,                     /* NOT  */
    MAP = 285,                     /* MAP  */
    ELSE = 286,                    /* ELSE  */
    THEN = 287,                    /* THEN  */
    IF = 288,                      /* IF  */
    FOR = 289,                     /* FOR  */
    READ = 290,                    /* READ  */
    WRITE = 291,                   /* WRITE  */
    WRITELN = 292,                 /* WRITELN  */
    MAIN = 293,                    /* MAIN  */
    RETURN = 294,                  /* RETURN  */
    SEMIC = 295,                   /* SEMIC  */
    COMMA = 296,                   /* COMMA  */
    STFUNC = 297,                  /* STFUNC  */
    ENDFUNC = 298,                 /* ENDFUNC  */
    PARENL = 299,                  /* PARENL  */
    PARENR = 300                   /* PARENR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "guillex.y"

  char* str;
  int integer;
  float dec;
  
  struct node *ast;

#line 117 "guillex.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_GUILLEX_TAB_H_INCLUDED  */
