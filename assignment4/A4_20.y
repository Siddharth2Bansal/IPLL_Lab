
%{
#include <stdlib.h>
#include <stdio.h>
extern int yylex (void);
void yyerror(char *);
%}

/* Bison declarations. */

%token IDENTIFIER STRING_LITERAL INTEGER_CONSTANT CHARACTER_CONSTANT
%define parse.error verbose

%token "->" '='
%token CURLY_BRACE_OPEN CURLY_BRACE_CLOSE PARENTHESIS_OPEN PARENTHESIS_CLOSE SQR_BRACE_OPEN SQR_BRACE_CLOSE
%token COLON SEMI_COLON ELLIPSIS QUESTION_MARK
%token SIZEOF
%token LEFT_OP RIGHT_OP EQ_OP NE_OP LTE_OP GTE_OP
%token AND_OP OR_OP 
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN RIGHT_ASSIGN LEFT_ASSIGN OR_ASSIGN AND_ASSIGN XOR_ASSIGN
%token LESS_THAN GREATER_THAN DOT BITWISEAND BITWISEOR BITWISEXOR STAR PLUS MINUS NOT EXCLAMATION DIVIDE PERCENTAGE COMMA HASH

%token EXTERN STATIC AUTO REGISTER
%token VOID CHAR SHORT INT LONG FLOAT DOUBLE SIGNED UNSIGNED BOOL COMPLEX IMAGINARY
%token CONST ENUM INLINE RESTRICT VOLATILE
%token IF ELSE SWITCH  CASE DEFAULT WHILE CONTINUE DO GOTO FOR RETURN BREAK
%token STRUCT TYPEDEF UNION

%token <sVal> IDENTIFIER
%token <iVal> INTEGER_CONSTANT
%token <fVal> FLOATING_CONSTANT
%token <cVal> CHARACTER_CONSTANT
%token <sVal> STRING_LITERAL

%token INVALID_TOKEN 

%nonassoc PARENTHESIS_CLOSE
%nonassoc ELSE


%start translation_unit

%% /* The grammar follows. */

primary_expression:
    IDENTIFIER                  {printf("IDENTIFIER to primary_expression.\n");}
    | INTEGER_CONSTANT          {printf("INTEGER_CONSTANT to primary_expression.\n");}
    | CHARACTER_CONSTANT        {printf("CHARACTER_CONSTANT to primary_expression.\n");}
    | STRING_LITERAL            {printf("STRING_LITERAL to primary_expression.\n");}
    | '(' expression ')'       {printf("(expression) to primary_expression.\n");}
    ;

argument_expression_list_opt:
    argument_expression_list    
    | %empty                     
    ;

postfix_expression:
    primary_expression                                          {printf("primary_expression to postfix_expression.\n");}
    | postfix_expression '[' expression ']'                    {printf("[expression] to postfix_expression.\n");}
    | postfix_expression '(' argument_expression_list_opt ')'   {printf("(argument_expression_list_opt) to postfix_expression.\n");}
    | postfix_expression "->" IDENTIFIER                        {printf("IDENTIFIER to postfix_expression.\n");}
    ;

argument_expression_list:
    assignment_expression                                       {printf("assignment_expression to argument_expression_list.\n");}
    | argument_expression_list ',' assignment_expression        {printf("argument_expression_list,assignment_expression to argument_expression_list.\n");}
    ;

unary_expression:
    postfix_expression                      {printf("postfix_expression to unary_expression.\n");}
    | unary_operator unary_expression       {printf("unary_operator unary_expression to unary_expression.\n");}
    ;

unary_operator:
    '&'         {printf("& to unary_operator.\n");}
    | '*'       {printf("& to unary_operator.\n");}
    | '+'       {printf("& to unary_operator.\n");}
    | '-'       {printf("& to unary_operator.\n");}
    | '!'       {printf("& to unary_operator.\n");}
    ;
    


multiplicative_expression:
    unary_expression                                    {printf("unary_expression to multiplicative_expression.\n");}
    | multiplicative_expression '*' unary_expression    {printf("first to second.\n");}
    | multiplicative_expression '/' unary_expression    {printf("first to second.\n");}
    | multiplicative_expression '%' unary_expression    {printf("first to second.\n");}
    ;

additive_expression:
    multiplicative_expression                               {printf("first to second.\n");}
    | additive_expression '+' multiplicative_expression     {printf("first to second.\n");}
    | additive_expression '-' multiplicative_expression     {printf("first to second.\n");}
    ;

relational_expression:
    additive_expression                                     {printf("first to second.\n");}
    | relational_expression '<' additive_expression         {printf("first to second.\n");}
    | relational_expression '>' additive_expression         {printf("first to second.\n");}
    | relational_expression "<=" additive_expression        {printf("first to second.\n");}
    | relational_expression ">=" additive_expression        {printf("first to second.\n");}
    ;

equality_expression:
    relational_expression                               {printf("first to second.\n");}
    | equality_expression "==" relational_expression     {printf("first to second.\n");}
    | equality_expression "!=" relational_expression     {printf("first to second.\n");}
    ;

logical_AND_expression:
    equality_expression                                     {printf("first to second.\n");}
    | logical_AND_expression "&&" equality_expression       {printf("first to second.\n");}
    ;

logical_OR_expression:
    logical_AND_expression                                  {printf("first to second.\n");}
    | logical_OR_expression "||" equality_expression        {printf("first to second.\n");}
    ;

conditional_expression:
    logical_OR_expression                                                   {printf("first to second.\n");}
    | logical_OR_expression '?' expression ':' conditional_expression       {printf("first to second.\n");}
    ;

assignment_expression:
    conditional_expression                              {printf("first to second.\n");}
    | unary_expression '=' assignment_expression        {printf("first to second.\n");}
    ;

expression_opt:
    expression      
    | %empty
    ;

expression:
    assignment_expression           {printf("first to second.\n");}
    ;

declaration:
    type_specifier init_declarator ';'      {printf("first to second.\n");}
    ;

init_declarator:
    declarator                          {printf("first to second.\n");}
    | declarator '=' initializer        {printf("first to second.\n");}
    ;

type_specifier:
    "void"          {printf("first to second.\n");}
    | "char"        {printf("first to second.\n");}
    | "int"         {printf("first to second.\n");}
    ;


declarator:
    pointer_opt direct_declarator       {printf("first to second.\n");}
    ;

direct_declarator:
    IDENTIFIER                                  {printf("first to second.\n");}
    | IDENTIFIER '[' INTEGER_CONSTANT ']'       {printf("first to second.\n");}
    | IDENTIFIER '(' parameter_list_opt ')'     {printf("first to second.\n");}
    ;

pointer_opt:
    pointer
    | %empty
    ;

pointer:
    '*'         {printf("first to second.\n");}
    ;

parameter_list_opt:
    parameter_list
    | %empty
    ;

parameter_list:
    parameter_declaration                           {printf("first to second.\n");}
    | parameter_list ',' parameter_declaration      {printf("first to second.\n");}
    ;

identifier_opt: 
    IDENTIFIER
    | %empty
    ;

parameter_declaration:
    type_specifier pointer_opt identifier_opt       {printf("first to second.\n");}
    ;

initializer:
    assignment_expression           {printf("first to second.\n");}
    ;


statement:
    compound_statement              {printf("first to second.\n");}
    | expression_statement          {printf("first to second.\n");}
    | selection_statement           {printf("first to second.\n");}
    | iteration_statement           {printf("first to second.\n");}
    | jump_statement                {printf("first to second.\n");}
    ;

compound_statement:
    '{' block_item_list_opt '}'         {printf("first to second.\n");}
    ;

block_item_list_opt:
    block_item_list
    | %empty
    ;

block_item_list:
    block_item                          {printf("first to second.\n");}
    | block_item_list block_item        {printf("first to second.\n");}
    ;

block_item:
    declaration         {printf("first to second.\n");}
    | statement         {printf("first to second.\n");}
    ;

expression_statement:
    expression_opt          {printf("first to second.\n");}
    ;

selection_statement:
    "if" '(' expression ')' statement                           {printf("first to second.\n");}
    | "if" '(' expression ')' statement "else" statement        {printf("first to second.\n");}
    ;

iteration_statement:
    "for" '(' expression_opt ';' expression_opt ';' expression_opt ')' statement        {printf("first to second.\n");}
    ;

jump_statement:
    "return" expression_opt ';'         {printf("first to second.\n");}
    ;


translation_unit:
    function_definition             {printf("first to second.\n");}
    | declaration                   {printf("first to second.\n");}
    ;

function_definition:
    type_specifier declarator '(' declaration_list_opt ')' compound_statement           {printf("first to second.\n");}
    ;

declaration_list_opt:
    declaration_list
    | %empty
    ;

declaration_list:
    declaration                         {printf("first to second.\n");}
    | declaration_list declaration      {printf("first to second.\n");}
    ;



%%

void yyerror(char *s) {
    printf("ERROR unable to parse : %s\n", s);
}

