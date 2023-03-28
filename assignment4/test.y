%{
#include <math.h>
#include <stdio.h>
int yylex (void);
int yyerror (char const *s);
#define YYDEBUG 1
%}

/* Bison declarations. */


%define api.value.type {int}

%token INT_CONST NL EOI
%left SUB PLUS
%left MULT DIV

/* negation--unary minus */
%right POW
/* exponentiation */


%% /* The grammar follows. */

primary_expression:
    IDENTIFIER              {}
    | CONSTANT              {}
    | STRING_LITERAL        {}
    | '(' experession ')'   {}
    ;

argument_expression_list_opt:
    argument_expression_list
    | %empy
    ;

postfix_expression:
    primary_expression      {}
    | postfix_expression '[' experession ']'
    | postfix_expression '(' argument_expression_list_opt ')'
    | postfix_expression '->' IDENTIFIER
    ;

argument_expression_list:
    assignment_expression
    | argument_expression_list ',' assignment_expression
    ;

unary_expression:
    postfix_expression
    | unary_operator unary_expression
    ;

unary_operator:
    


multiplicative_expression:
    unary_expression
    | multiplicative_expression '*' unary_expression
    | multiplicative_expression '/' unary_expression
    | multiplicative_expression '%' unary_expression
    ;

additive_expression:
    multiplicative_expression
    | additive_expression '+' multiplicative_expression
    | additive_expression '-' multiplicative_expression
    ;

relational_expression:
    additive_expression
    | relational_expression '<' additive_expression
    | relational_expression '>' additive_expression
    | relational_expression '<=' additive_expression
    | relational_expression '>=' additive_expression
    ;

equality_expression:
    relational_expression
    | eqality_expression '==' relational_expression
    | eqality_expression '!=' relational_expression
    ;

logical_AND_expression:
    equality_expression
    | logical_AND_expression '&&' equality_expression
    ;

logical_OR_expression:
    logical_AND_expression
    | logical_OR_expression '||' equality_expression
    ;

conditional_expression:
    logical_OR_expression
    | logical_OR_expression '?' expression ':' conditional_expression
    ;

assignment_expression:
    conditional_expression
    | unary_expression '=' assignment_expression
    ;

expression_opt:
    expression
    | %empty
    ;

expression:
    assignment_expression
    ;

declaration:
    type_specifier init_declarator ';'
    ;

init_declarator:
    declarator 
    | declarator '=' initializer
    ;

type_specifier:


declarator:
    pointer_opt direct_declarator
    ;

direct_declarator:
    IDENTIFIER
    | IDENTIFIER '[' INTEGER_CONSTANT ']'
    | IDENTIFIER '(' parameter_list_opt ')'
    ;

pointer_opt:
    pointer
    | %empty
    ;

pointer:
    '*'
    ;

parameter_list_opt:
    parameter_list
    | %empty
    ;

parameter_list:
    parameter_declaration
    | parameter_list ',' parameter_declaration
    ;

identifier_opt: 
    IDENTIFIER
    | %empty
    ;

parameter_declaration:
    type_specifier pointer_opt identifier_opt
    ;

initializer:
    assignment_expression
    ;


statement:
    compound_statement
    | expression_statement
    | selection_statement
    | iteration_statement
    | jump_statement
    ;

compound_statement:
    '{' block_item_list_opt '}'
    ;

block_item_list_opt:
    block_item_list
    | %empty
    ;

block_item_list:
    block_item
    | block_item_list block_item
    ;

block_item:
    declaration
    | statement
    ;

expression_statement:
    expression_opt
    ;

selection_statement:
    "if" "(" expression ")" statement
    | "if" "(" expression ")" statement "else" statement
    ;

iteration_statement:
    "for" "(" expression_opt ";" expression_opt ";" expression_opt ")" statement
    ;

jump_statement:
    "return" expression_opt ";"
    ;


translation_unit:
    function_definition
    | declaration
    ;

function_definition:
    type_specifier declarator '(' declaration_list_opt ')' compound_statement
    ;

declaration_list_opt:
    declaration_list
    | %empty
    ;

declaration_list:
    declaration
    | declaration_list declaration
    ;



%%

int yyerror(char const *s) {}

