
    /* Mapping of token and token manifest constant */

%{
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
%}

    /* Declaring four states other than the INITIAL state for Multi Line Comment, Single Line Comment, String Literal and Character constant respectively.*/

%x MLC
%x SLC 
%x STR
%x CHR

    /* Regular Expressions of different tokens as defined in the assignment */

KEYWORD                 "char"|"else"|"for"|"if"|"int"|"return"|"void"

DIGIT                   [0-9]
IDENTIFIER_NON_DIGIT    [a-zA-Z_]
IDENTIFIER              {IDENTIFIER_NON_DIGIT}({IDENTIFIER_NON_DIGIT}|{DIGIT})*

ESCAPE_SEQUENCE         "\\\'"|"\\\""|"\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
C_CHAR                  {ESCAPE_SEQUENCE}|[^\'\\\n]                                
C_CHAR_SEQUENCE         {C_CHAR}+
CHARACTER_CONSTANT      \'{C_CHAR_SEQUENCE}\'
SIGN                    "+"|"-"
NON_ZERO_DIGIT          [1-9]
INTEGER_CONSTANT        {SIGN}?{NON_ZERO_DIGIT}{DIGIT}*|"0"*
CONSTANT                {INTEGER_CONSTANT}|{CHARACTER_CONSTANT}

S_CHAR                  [^\\\"\n]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE         {S_CHAR}+
Multi_Com               [^*]*|"*"+[^*/]*

PUNCTUATOR              "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|">>"|"<<"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"
WHITESPACE              [ \t]

%% 

    /* Rules for each regular experession */

"/*"                    {BEGIN(MLC);}
<MLC>"*/"               {BEGIN(INITIAL);}
<MLC>{Multi_Com}        {return MULTI_LINE_COMMENT;}

"//"                    {BEGIN(SLC);}
<SLC>"\n"               {BEGIN(INITIAL); return NEW_LINE;}
<SLC>.*                 {return SINGLE_LINE_COMMENT;}

\"                      {BEGIN(STR);}
<STR>{S_CHAR_SEQUENCE}  {return STRING_LITERAL;}
<STR>\"                 {BEGIN(INITIAL);}   

\'                      {BEGIN(CHR);}
<CHR>{C_CHAR_SEQUENCE}  {return CHARACTER_CONSTANT;}
<CHR>\'                 {BEGIN(INITIAL);}  

{KEYWORD}               {return KEYWORD;}
{IDENTIFIER}            {return IDENTIFIER;}
{INTEGER_CONSTANT}      {return INTEGER_CONSTANT;}
{PUNCTUATOR}            {return PUNCTUATOR;}


\n                      {return NEW_LINE;}
{WHITESPACE}            {}
.                       {return INVALID_TOKEN;}

%%

int yywrap() {
    return 1;
}