
%{
#include <stdlib.h>
#include <stdio.h>
    extern int yylex();
    void yyerror(const char *);
    extern int yylineno;
    extern char* yytext;
%}

/* Bison declarations. */

%define parse.error verbose
%verbose
%token PTR EQ
%token CURLY_BRACE_OPEN CURLY_BRACE_CLOSE ROUND_BRACE_OPEN ROUND_BRACE_CLOSE SQ_BRACE_OPEN SQ_BRACE_CLOSE
%token COLON SEMI_COLON QUESTION_MARK
%token EQ_OP NE_OP LTE_OP GTE_OP
%token AND_OP OR_OP 
%token LESS_THAN GREATER_THAN BITWISEAND STAR PLUS MINUS EXCLAMATION DIVIDE PERCENTAGE COMMA

%token VOID CHAR INT
%token IF ELSE FOR RETURN 

%token  IDENTIFIER
%token  INTEGER_CONSTANT
%token  CHARACTER_CONSTANT
%token  STRING_LITERAL



%token INVALID_TOKEN

%nonassoc ROUND_BRACE_CLOSE
%nonassoc ELSE


%start translation_units

%% /* The grammar follows. */

primary_expression:
    IDENTIFIER                  {printf("IDENTIFIER to primary_expression.\n");}
    | INTEGER_CONSTANT          {printf("INTEGER_CONSTANT to primary_expression.\n");}
    | CHARACTER_CONSTANT        {printf("CHARACTER_CONSTANT to primary_expression.\n");}
    | STRING_LITERAL            {printf("STRING_LITERAL to primary_expression.\n");}
    | ROUND_BRACE_OPEN expression ROUND_BRACE_CLOSE       {printf("(expression) to primary_expression.\n");}
    ;



postfix_expression:
    primary_expression                                          {printf("primary_expression to postfix_expression.\n");}
    | postfix_expression SQ_BRACE_OPEN expression SQ_BRACE_CLOSE                    {printf("[expression] to postfix_expression.\n");}
    | postfix_expression ROUND_BRACE_OPEN argument_expression_list ROUND_BRACE_CLOSE   {printf("(argument_expression_list_opt) to postfix_expression.\n");}
    | postfix_expression ROUND_BRACE_OPEN ROUND_BRACE_CLOSE   {printf("(argument_expression_list_opt) to postfix_expression.\n");}
    | postfix_expression PTR IDENTIFIER                        {printf("IDENTIFIER to postfix_expression.\n");}
    ;

argument_expression_list:
    assignment_expression                                       {printf("assignment_expression to argument_expression_list.\n");}
    | argument_expression_list COMMA assignment_expression        {printf("argument_expression_list,assignment_expression to argument_expression_list.\n");}
    ;

unary_expression:
    postfix_expression                      {printf("postfix_expression to unary_expression.\n");}
    | unary_operator unary_expression       {printf("unary_operator unary_expression to unary_expression.\n");}
    ;

unary_operator:
    BITWISEAND         {printf("& to unary_operator.\n");}
    | STAR       {printf("* to unary_operator.\n");}
    | PLUS       {printf("+ to unary_operator.\n");}
    | MINUS       {printf("- to unary_operator.\n");}
    | EXCLAMATION       {printf("! to unary_operator.\n");}
    ;
    


multiplicative_expression:
    unary_expression                                    {printf("unary_expression to multiplicative_expression.\n");}
    | multiplicative_expression STAR unary_expression    {printf("multiply expressions.\n");}
    | multiplicative_expression DIVIDE unary_expression    {printf("divide expressions.\n");}
    | multiplicative_expression PERCENTAGE unary_expression    {printf("modulo.\n");}
    ;

additive_expression:
    multiplicative_expression                               {printf("multiplicative_expression to additive expression.\n");}
    | additive_expression PLUS multiplicative_expression     {printf("addition of expressions.\n");}
    | additive_expression MINUS multiplicative_expression     {printf("subtraction of expressions.\n");}
    ;

relational_expression:
    additive_expression                                     {printf("additive_expression to relational_expression.\n");}
    | relational_expression LESS_THAN additive_expression         {printf("less than.\n");}
    | relational_expression GREATER_THAN additive_expression         {printf("greater than.\n");}
    | relational_expression LTE_OP additive_expression        {printf("less than or equal to.\n");}
    | relational_expression GTE_OP additive_expression        {printf("greater than or equal to.\n");}
    ;

equality_expression:
    relational_expression                               {printf("relational_expression to equality_expression.\n");}
    | equality_expression EQ_OP relational_expression     {printf("equal check.\n");}
    | equality_expression NE_OP relational_expression     {printf("not equal to.\n");}
    ;

logical_AND_expression:
    equality_expression                                     {printf("equality_expression to logical_AND_expression.\n");}
    | logical_AND_expression AND_OP equality_expression       {printf("and operation.\n");}
    ;

logical_OR_expression:
    logical_AND_expression                                  {printf("logical_AND_expression to logical_OR_expression.\n");}
    | logical_OR_expression OR_OP equality_expression        {printf("or operation.\n");}
    ;

conditional_expression:
    logical_OR_expression                                                   {printf("logical_OR_expression to conditional_expression.\n");}
    | logical_OR_expression QUESTION_MARK expression COLON conditional_expression       {printf("ternary operator.\n");}
    ;

assignment_expression:
    conditional_expression                              {printf("conditional_expression to assignment_expression.\n");}
    | unary_expression EQ assignment_expression        {printf("assignment.\n");}
    ;



expression:
    assignment_expression           {printf("assignment_expression to expression.\n");}
    ;


expression_opt:
    expression      
    | 
    ;

declaration:
    type_specifier init_declarator SEMI_COLON      {printf("type_specifier to declaration.\n");}
    ;

init_declarator:
    declarator                          {printf("declarator to init_declarator.\n");}
    | declarator EQ initializer        {printf("assignment.\n");}
    ;

type_specifier:
    VOID          {printf("Type -> void.\n");}
    | CHAR        {printf("Type -> char.\n");}
    | INT         {printf("Type -> int.\n");}
    ;


declarator:
    pointer_opt direct_declarator       {printf("declarator.\n");}
    ;

direct_declarator:
    IDENTIFIER                                  {printf("identifier to direct_declarator.\n");}
    | direct_declarator SQ_BRACE_OPEN INTEGER_CONSTANT SQ_BRACE_CLOSE       {printf("array declaration\n");}
    | direct_declarator ROUND_BRACE_OPEN parameter_list_opt ROUND_BRACE_CLOSE     {printf("function declaration.\n");}
    ;


pointer:
    STAR         {printf("pointer.\n");}
    ;

pointer_opt:
    pointer
    | 
    ;


parameter_list_opt:
    parameter_list
    | 
    ;

parameter_list:
    parameter_declaration                           {printf("parameter_declaration to parameter_list.\n");}
    | parameter_list COMMA parameter_declaration      {printf("parameter list extension .\n");}
    ;

identifier_opt: 
    IDENTIFIER
    | 
    ;

parameter_declaration:
    type_specifier pointer_opt identifier_opt       {printf("parameter_declaration.\n");}
    ;

initializer:
    assignment_expression           {printf("assignment_expression initialiser.\n");}
    ;


statement:
    compound_statement              {printf("compound_statement.\n");}
    | expression_statement          {printf("expression statement.\n");}
    | selection_statement           {printf("selection statement.\n");}
    | iteration_statement           {printf("iteration statement.\n");}
    | jump_statement                {printf("jump statement.\n");}
    ;

compound_statement:
    CURLY_BRACE_OPEN block_item_list_opt CURLY_BRACE_CLOSE         {printf("compound statement declaration.\n");}
    ;

block_item_list_opt:
    block_item_list
    | 
    ;

block_item_list:
    block_item                          {printf("block list.\n");}
    | block_item_list block_item        {printf("block list extension.\n");}
    ;

block_item:
    declaration         {printf("block item declaration.\n");}
    | statement         {printf("block item statement.\n");}
    ;

expression_statement:
    expression_opt  SEMI_COLON        {printf("expression opt statement.\n");}
    ;

selection_statement:
    IF ROUND_BRACE_OPEN expression ROUND_BRACE_CLOSE statement                           {printf("if statement.\n");}
    | IF ROUND_BRACE_OPEN expression ROUND_BRACE_CLOSE statement ELSE statement        {printf("if else statement.\n");}
    ;

iteration_statement:
    FOR ROUND_BRACE_OPEN expression_opt SEMI_COLON expression_opt SEMI_COLON expression_opt ROUND_BRACE_CLOSE statement        {printf("for loop.\n");}
    ;

jump_statement:
    RETURN expression_opt SEMI_COLON         {printf("return statement.\n");}
    ;

translation_units:
    translation_unit                {printf("first tr_unit -> units.\n");}
    | translation_units translation_unit        {printf("another tr_unit read.\n");}

translation_unit:
    function_definition             {printf("function definition.\n");}
    | declaration                   {printf("function declaration statement.\n");}
    ;

function_definition:
    type_specifier declarator  compound_statement           {printf("type specifier declarator.\n");}
    ;
/*
declaration_list_opt:
    declaration_list
    | 
    ;

declaration_list:
    declaration                         {printf("declaration list.\n");}
    | declaration_list declaration      {printf("declaration list declaration.\n");}
    ;
*/


%%

void yyerror(const char* s) {
    printf("ERROR [Line %d] : %s, unable to parse : %s\n", yylineno, s, yytext);
}
