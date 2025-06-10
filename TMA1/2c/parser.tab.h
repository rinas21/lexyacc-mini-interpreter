/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    ERROR_TOKEN = 258,             /* ERROR_TOKEN  */
    INTEGER_CONSTANT = 259,        /* INTEGER_CONSTANT  */
    FLOATING_POINT_CONSTANT = 260, /* FLOATING_POINT_CONSTANT  */
    IDENTIFIER = 261,              /* IDENTIFIER  */
    ELSE_TOKEN = 262,              /* ELSE_TOKEN  */
    INTEGER_TOKEN = 263,           /* INTEGER_TOKEN  */
    SELF_TOKEN = 264,              /* SELF_TOKEN  */
    FLOAT_TOKEN = 265,             /* FLOAT_TOKEN  */
    ISA_TOKEN = 266,               /* ISA_TOKEN  */
    CONSTRUCT_TOKEN = 267,         /* CONSTRUCT_TOKEN  */
    FUNC_TOKEN = 268,              /* FUNC_TOKEN  */
    PRIVATE_TOKEN = 269,           /* PRIVATE_TOKEN  */
    THEN_TOKEN = 270,              /* THEN_TOKEN  */
    IF_TOKEN = 271,                /* IF_TOKEN  */
    PUBLIC_TOKEN = 272,            /* PUBLIC_TOKEN  */
    LOCAL_TOKEN = 273,             /* LOCAL_TOKEN  */
    IMPLEMENT_TOKEN = 274,         /* IMPLEMENT_TOKEN  */
    READ_TOKEN = 275,              /* READ_TOKEN  */
    VOID_TOKEN = 276,              /* VOID_TOKEN  */
    AND_TOKEN = 277,               /* AND_TOKEN  */
    CLASS_TOKEN = 278,             /* CLASS_TOKEN  */
    OR_TOKEN = 279,                /* OR_TOKEN  */
    RETURN_TOKEN = 280,            /* RETURN_TOKEN  */
    WHILE_TOKEN = 281,             /* WHILE_TOKEN  */
    ATTRIBUTE_TOKEN = 282,         /* ATTRIBUTE_TOKEN  */
    WRITE_TOKEN = 283,             /* WRITE_TOKEN  */
    NOT_TOKEN = 284,               /* NOT_TOKEN  */
    ASSIGN_OP = 285,               /* ASSIGN_OP  */
    EQ_OP = 286,                   /* EQ_OP  */
    NE_OP = 287,                   /* NE_OP  */
    LE_OP = 288,                   /* LE_OP  */
    GE_OP = 289,                   /* GE_OP  */
    ARROW = 290,                   /* ARROW  */
    PLUS_OP = 291,                 /* PLUS_OP  */
    MINUS_OP = 292,                /* MINUS_OP  */
    MUL_OP = 293,                  /* MUL_OP  */
    DIV_OP = 294,                  /* DIV_OP  */
    LPAREN = 295,                  /* LPAREN  */
    RPAREN = 296,                  /* RPAREN  */
    LBRACE = 297,                  /* LBRACE  */
    RBRACE = 298,                  /* RBRACE  */
    LBRACKET = 299,                /* LBRACKET  */
    RBRACKET = 300,                /* RBRACKET  */
    SEMICOLON = 301,               /* SEMICOLON  */
    COMMA = 302,                   /* COMMA  */
    DOT = 303,                     /* DOT  */
    COLON = 304,                   /* COLON  */
    LT_OP = 305,                   /* LT_OP  */
    GT_OP = 306                    /* GT_OP  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "parser.y"

    int iValue;
    double fValue;
    char *sValue;
    SymbolEntry *sEntry;

#line 122 "parser.tab.h"

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


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
