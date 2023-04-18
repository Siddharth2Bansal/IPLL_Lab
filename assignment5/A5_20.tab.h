/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_A5_20_TAB_H_INCLUDED
# define YY_YY_A5_20_TAB_H_INCLUDED
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
    RESTRICT = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    RETURN = 277,
    SHORT = 278,
    SIGNED = 279,
    SIZEOF = 280,
    STATIC = 281,
    STRUCT = 282,
    SWITCH = 283,
    TYPEDEF = 284,
    UNION = 285,
    UNSIGNED = 286,
    VOID = 287,
    VOLATILE = 288,
    WHILE = 289,
    _BOOL = 290,
    _COMPLEX = 291,
    _IMAGINARY = 292,
    IDENTIFIER = 293,
    STRING_LITERAL = 294,
    SQUARE_BRACKET_OPEN = 295,
    SQUARE_BRACKET_CLOSE = 296,
    ROUND_BRACKET_OPEN = 297,
    ROUND_BRACKET_CLOSE = 298,
    CURLY_BRACKET_OPEN = 299,
    CURLY_BRACKET_CLOSE = 300,
    DOT = 301,
    IMPLIES = 302,
    INC = 303,
    DEC = 304,
    BITWISE_AND = 305,
    MUL = 306,
    ADD = 307,
    SUB = 308,
    BITWISE_NOT = 309,
    EXCLAIM = 310,
    DIV = 311,
    MOD = 312,
    SHIFT_LEFT = 313,
    SHIFT_RIGHT = 314,
    BIT_SL = 315,
    BIT_SR = 316,
    LTE = 317,
    GTE = 318,
    EQ = 319,
    NEQ = 320,
    BITWISE_XOR = 321,
    BITWISE_OR = 322,
    AND = 323,
    OR = 324,
    QUESTION = 325,
    COLON = 326,
    SEMICOLON = 327,
    DOTS = 328,
    ASSIGN = 329,
    STAR_EQ = 330,
    DIV_EQ = 331,
    MOD_EQ = 332,
    ADD_EQ = 333,
    SUB_EQ = 334,
    SL_EQ = 335,
    SR_EQ = 336,
    BITWISE_AND_EQ = 337,
    BITWISE_XOR_EQ = 338,
    BITWISE_OR_EQ = 339,
    COMMA = 340,
    HASH = 341,
    THEN = 342,
    INTEGER_CONSTANT = 343,
    FLOATING_CONSTANT = 344,
    CHARACTER_CONSTANT = 345
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "A5_20.y"

    // types for terminals
    char unaryOp;
    char* char_value;
    int intval;
    int instr_number;
    int num_params;

    // types for nonterminals
    Expression* expr;
    Statement* stat;
    SymbolType* sym_type;
    Symbol* symp;
    Array* A;

#line 164 "A5_20.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_A5_20_TAB_H_INCLUDED  */
