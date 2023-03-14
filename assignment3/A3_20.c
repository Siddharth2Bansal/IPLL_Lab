#include<stdio.h>

// Mapping of token and token manifest constant

#define KEYWORD 10
#define IDENTIFIER 11
#define INTEGER_CONSTANT 12
#define NEW_LINE 13
#define CHARACTER_CONSTANT 14
#define STRING_LITERAL 15
#define PUNCTUATOR 16
#define SINGLE_LINE_COMMENT 17
#define MULTI_LINE_COMMENT 18
#define INVALID_TOKEN -1

// Referencing subroutines and variables from the lex.yy.c

extern int yylex();
extern char* yytext;
extern FILE* yyin;

int main()
{
    // Opening the test file and reading from it
    int next;
    yyin = fopen("test.nc", "r");
    next = yylex();
    // next contains the token manifest constant as interpreted by flex
    while(next)
    {
        if(next == KEYWORD)
            printf("<KEYWORD, %s>,  ", yytext);
        else if(next == IDENTIFIER)
            printf("<IDENTIFIER, %s>,  ", yytext);
        else if(next == INTEGER_CONSTANT || next == CHARACTER_CONSTANT)
            printf("<CONSTANT, %s>,  ", yytext);
        else if(next == STRING_LITERAL)
            printf("<STRING_LITERAL, %s>,  ", yytext);
        else if(next == PUNCTUATOR)
            printf("<PUNCTUATOR, %s>,  ", yytext);
        else if(next == SINGLE_LINE_COMMENT)
            printf("<SINGLE_LINE_COMMENT, %s>,  ", yytext);
        else if(next == MULTI_LINE_COMMENT)
            printf("<MULTI_LINE_COMMENT, %s>,  ", yytext);
        else if (next == NEW_LINE)
            printf("\n");
        else
            printf("<INVALID_TOKEN, %s>\n", yytext);
        next = yylex();
    }
    return 0;
}