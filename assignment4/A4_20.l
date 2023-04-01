
    /* Mapping of token and token manifest constant */

%{
   #include "A4_20.tab.h"
   extern void yyerror(char*);
%}


%x MULTI_LINE_FLAG
%x SINGLE_LINE_FLAG

IDENTIFIER              [A-Za-z_][A-Za-z0-9_]*
ESCAPE_SEQUENCE         "\\\'"|"\\\""|"\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"  

DIGIT                   [0-9]
DIGIT_SEQUENCE          [0-9]+
NON_ZERO_DIGIT          [1-9]
INTEGER_CONSTANT        {NON_ZERO_DIGIT}{DIGIT}*|"0"

FRACTIONAL_CONSTANT     ({DIGIT_SEQUENCE})?"."{DIGIT_SEQUENCE}|{DIGIT_SEQUENCE}"."
EXPONENT_PART           [eE]([+-])?{DIGIT_SEQUENCE}
FLOATING_CONSTANT       {FRACTIONAL_CONSTANT}({EXPONENT_PART})?|{DIGIT_SEQUENCE}{EXPONENT_PART}
ENUMERATION_CONSTANT    {IDENTIFIER}

C_CHAR                  [^\'\n\\']|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE         {C_CHAR}+
CHARACTER_CONSTANT      \'{C_CHAR_SEQUENCE}\'

S_CHAR                  [^\"\n\\]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE         {S_CHAR}+
STRING_LITERAL          \"({S_CHAR_SEQUENCE}?)\"
WHITESPACE              [ \t\r]

%%


{IDENTIFIER}                {return IDENTIFIER;}
{INTEGER_CONSTANT}          {return INTEGER_CONSTANT;}
{CHARACTER_CONSTANT}        {return CHARACTER_CONSTANT;}
{STRING_LITERAL}            {return STRING_LITERAL;}

"/*"                        {BEGIN(MULTI_LINE_FLAG);}
<MULTI_LINE_FLAG>"*/"       {BEGIN(INITIAL);}
<MULTI_LINE_FLAG>.          { }
<MULTI_LINE_FLAG>"\n"       { yylineno++; printf("\n-------- Parsing Line No. %d --------\n", yylineno); }

"//"                        {BEGIN(SINGLE_LINE_FLAG);}
<SINGLE_LINE_FLAG>"\n"      {BEGIN(INITIAL); yylineno++;printf("\n-------- Parsing Line No. %d --------\n", yylineno); }
<SINGLE_LINE_FLAG>.         { }
\n                          { yylineno++; printf("\n-------- Parsing Line No. %d --------\n", yylineno); }
{WHITESPACE}                { }
.                           { printf("ERROR [Line %d] : Invalid Token %s\n",yylineno,yytext);}

%%

int yywrap() {
    return 1;
}
