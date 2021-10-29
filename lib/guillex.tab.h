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
    STRING = 260,                  /* STRING  */
    NIL = 261,                     /* NIL  */
    INTEGER = 262,                 /* INTEGER  */
    DECIMAL = 263,                 /* DECIMAL  */
    ERRORTOKEN = 264,              /* ERRORTOKEN  */
    THEN = 265,                    /* THEN  */
    ELSE = 266,                    /* ELSE  */
    ADD = 267,                     /* ADD  */
    SUB = 268,                     /* SUB  */
    MULT = 269,                    /* MULT  */
    DIV = 270,                     /* DIV  */
    OR = 271,                      /* OR  */
    AND = 272,                     /* AND  */
    SMALLER = 273,                 /* SMALLER  */
    GREATER = 274,                 /* GREATER  */
    SMALLEQ = 275,                 /* SMALLEQ  */
    GREATEQ = 276,                 /* GREATEQ  */
    EQUALS = 277,                  /* EQUALS  */
    DIFFERENT = 278,               /* DIFFERENT  */
    APPEND = 279,                  /* APPEND  */
    HEADLIST = 280,                /* HEADLIST  */
    TAILLIST = 281,                /* TAILLIST  */
    DESTROYHEAD = 282,             /* DESTROYHEAD  */
    FILTER = 283,                  /* FILTER  */
    ASSIGN = 284,                  /* ASSIGN  */
    MAP = 285,                     /* MAP  */
    IF = 286,                      /* IF  */
    FOR = 287,                     /* FOR  */
    READ = 288,                    /* READ  */
    WRITE = 289,                   /* WRITE  */
    WRITELN = 290,                 /* WRITELN  */
    RETURN = 291,                  /* RETURN  */
    SEMIC = 292,                   /* SEMIC  */
    COMMA = 293,                   /* COMMA  */
    STFUNC = 294,                  /* STFUNC  */
    ENDFUNC = 295,                 /* ENDFUNC  */
    PARENL = 296,                  /* PARENL  */
    PARENR = 297                   /* PARENR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 619 "guillex.y"

  int integer;
  char *str;
  float dec;

  struct node *treeNode;

#line 114 "guillex.tab.h"

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
