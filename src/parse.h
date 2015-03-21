/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_SRC_PARSE_H_INCLUDED
# define YY_YY_SRC_PARSE_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    KEYWORD_TRUE = 258,
    KEYWORD_FALSE = 259,
    TOKEN_CHAR = 260,
    TOKEN_NUMBER = 261,
    TOKEN_STRING = 262,
    TOKEN_IDENTIFIER = 263,
    TOKEN_FUNC = 264,
    KEYWORD_IF = 265,
    KEYWORD_END = 266,
    KEYWORD_ELSE = 267,
    KEYWORD_WHILE = 268,
    KEYWORD_DO = 269,
    KEYWORD_WHEN = 270,
    KEYWORD_FUNCTION = 271,
    KEYWORD_FROM = 272,
    KEYWORD_TO = 273,
    KEYWORD_STEP = 274,
    KEYWORD_BOOL = 275,
    KEYWORD_INT = 276,
    KEYWORD_DECIMAL = 277,
    KEYWORD_CHAR = 278,
    KEYWORD_STRING = 279,
    LIT_STRING = 280,
    CMP = 281,
    UMINUS = 282
  };
#endif
/* Tokens.  */
#define KEYWORD_TRUE 258
#define KEYWORD_FALSE 259
#define TOKEN_CHAR 260
#define TOKEN_NUMBER 261
#define TOKEN_STRING 262
#define TOKEN_IDENTIFIER 263
#define TOKEN_FUNC 264
#define KEYWORD_IF 265
#define KEYWORD_END 266
#define KEYWORD_ELSE 267
#define KEYWORD_WHILE 268
#define KEYWORD_DO 269
#define KEYWORD_WHEN 270
#define KEYWORD_FUNCTION 271
#define KEYWORD_FROM 272
#define KEYWORD_TO 273
#define KEYWORD_STEP 274
#define KEYWORD_BOOL 275
#define KEYWORD_INT 276
#define KEYWORD_DECIMAL 277
#define KEYWORD_CHAR 278
#define KEYWORD_STRING 279
#define LIT_STRING 280
#define CMP 281
#define UMINUS 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 8 "src/parse.y" /* yacc.c:1909  */

    int fn; /* which function */
    char *b;
    char *c;
    double d;
    struct ast *a;
    struct symbol *s;   /* which symbol */
    struct symlist *sl;
    struct lat_string *str;

#line 119 "src/parse.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_PARSE_H_INCLUDED  */
