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

#ifndef YY_YY_TRAVEL_TAB_HPP_INCLUDED
# define YY_YY_TRAVEL_TAB_HPP_INCLUDED
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
    START = 258,
    FINISH = 259,
    TRAVELER = 260,
    BUSINESSMAN = 261,
    VALUE = 262,
    NAME = 263,
    EQUAL = 264,
    SEMICOLON = 265,
    GOES = 266,
    BY = 267,
    TRAIN = 268,
    PLANE = 269,
    FOOT = 270,
    BIKE = 271,
    BUS = 272,
    SUBWAY = 273,
    CAR = 274,
    BOAT = 275,
    HOURS = 276,
    NUM = 277,
    BM_MAX_DISTANCE = 278,
    TR_MAX_DISTANCE = 279,
    MAX_DISTANCE = 280,
    BM_MIN_DISTANCE = 281,
    TR_MIN_DISTANCE = 282,
    MIN_DISTANCE = 283,
    PRINT_TR = 284,
    PRINT_BM = 285
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 42 "travel.ypp" /* yacc.c:1909  */

	int gen;
	char *name;
	double hour;

#line 91 "travel.tab.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TRAVEL_TAB_HPP_INCLUDED  */
