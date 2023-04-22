%{
    #include "A5_20_translator.h"
    #include <bits/stdc++.h>
    #include <sstream>

    using namespace std;
    
    extern "C" int yylex();
    
    //var_type for last encountered type
    extern string var_type;
    extern vector<Label> label_table;

    void yyerror(string s);
    Expression* temp_rel;
%}

// datatypes
%union {
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
}
%define parse.error verbose
%verbose
%token RESTRICT BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INLINE INT LONG RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE _BOOL _COMPLEX _IMAGINARY 
            
%token  IDENTIFIER                              
%token <char_value> STRING_LITERAL         

%token SQUARE_BRACKET_OPEN SQUARE_BRACKET_CLOSE
%token ROUND_BRACKET_OPEN ROUND_BRACKET_CLOSE
%token CURLY_BRACKET_OPEN CURLY_BRACKET_CLOSE            
%token DOT IMPLIES INC DEC BITWISE_AND MUL ADD SUB BITWISE_NOT EXCLAIM DIV MOD SHIFT_LEFT SHIFT_RIGHT BIT_SL BIT_SR
%token LTE GTE EQ NEQ BITWISE_XOR BITWISE_OR AND OR
%token QUESTION COLON SEMICOLON DOTS ASSIGN 
%token STAR_EQ DIV_EQ MOD_EQ ADD_EQ SUB_EQ SL_EQ SR_EQ BITWISE_AND_EQ BITWISE_XOR_EQ BITWISE_OR_EQ 
%token COMMA HASH THEN

%token <intval> INTEGER_CONSTANT            
%token <char_value> FLOATING_CONSTANT            
%token <char_value> CHARACTER_CONSTANT    

%start translation_unit
%right THEN ELSE

%type <unaryOp> unary_operator
%type <num_params> argument_expression_list argument_expression_list_opt

// Expressions
%type <expr>
    expression
    primary_expression 
    multiplicative_expression
    additive_expression
    relational_expression
    equality_expression
    logical_and_expression
    logical_or_expression
    conditional_expression
    assignment_expression
    expression_statement
    condition
    and_helper
    or_helper
    if_helper

// Statements
%type <stat>  statement
    compound_statement
    selection_statement
    iteration_statement
    jump_statement
    block_item
    block_item_list
    block_item_list_opt

%type <sym_type> pointer
%type <symp> initializer
%type <symp> direct_declarator init_declarator declarator declarator_helper
%type <A> postfix_expression
    unary_expression
//non-terminals M and N that help in backpatching and exitlists
%type <instr_number> M
%type <stat> N

%%

M: %empty 
    {
        //mainly used in backpatching, stores the next quad 
        $$ = nextinstr();
    }   
    ;



N: %empty
    {
        //For backpatching, guard fall through
        $$ = new Statement();
        $$->nextlist=makelist(nextinstr());
        emit("goto","");
    }
    ;

changetable: %empty 
    {    
        parST = ST;
        if(currSymbolPtr->nested==NULL) 
        {
            changeTable(new SymbolTable(""));    
        }
        else 
        {
            changeTable(currSymbolPtr ->nested);                        
            emit("Label", ST->name);
        }
    }
    ;

primary_expression: IDENTIFIER
    {
        // create new expression and store pointer to ST entry in the location
        $$=new Expression();
        $$->loc=ST->lookupIdentifier(id);
    }
    // create new expression and store the value of the constant in a temporary
    | INTEGER_CONSTANT
    { 
        $$=new Expression();    
        string p=convertIntToString($1);
        $$->loc=gentemp(new SymbolType("int"),p);
        emit("=",$$->loc->name,p);
    }
    | CHARACTER_CONSTANT                         
    {
        $$=new Expression();
        $$->loc=gentemp(new SymbolType("char"),$1);
        emit("=",$$->loc->name,string($1));
    }
    | STRING_LITERAL                                
    {
        $$=new Expression();
        $$->loc=gentemp(new SymbolType("ptr"),$1);
        $$->loc->type->arrtype=new SymbolType("char");
    }
    | ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE
    {
        // simply equal to expression
        $$=$2;
        if($2->type == "bool")
        {
            temp_rel = $2;
        }
    }
    ;


postfix_expression: primary_expression                      
    {
        //create new Array and store the location of primary expression in it
        $$=new Array();   
        if($1->type != "bool")
        {
            $$->Array=$1->loc;    
            $$->type=$1->loc->type;    
            $$->loc=$$->Array;
        } 
        else
        {
            $$->atype = "bool_pass";
        }

    }
    | postfix_expression SQUARE_BRACKET_OPEN expression SQUARE_BRACKET_CLOSE 
    {     
        
        $$=new Array();
        $$->type=$1->type->arrtype;
        $$->Array=$1->Array;
        $$->loc=gentemp(new SymbolType("int"));
        $$->atype="arr";
        int p=computeSize($$->type);    
        string str=convertIntToString(p);
        emit("*",$$->loc->name,$3->loc->name,str);
    }
    | postfix_expression ROUND_BRACKET_OPEN argument_expression_list_opt ROUND_BRACKET_CLOSE       
    {
        
        $$=new Array();    
        $$->Array=gentemp($1->type);
        string str=convertIntToString($3);
        emit("call",$$->Array->name,$1->Array->name,str);
    }
    ;

argument_expression_list_opt: argument_expression_list 
    { 
        $$=$1;
    }
    | %empty 
    { 
        $$=0;
    } 
    ;

argument_expression_list: assignment_expression    
    {
        //one argument and emit param
        $$=1;
        emit("param",$1->loc->name);    
    }
    | argument_expression_list COMMA assignment_expression     
    {
        $$=$1+1;
        emit("param",$3->loc->name);
    }
    ;

unary_expression: postfix_expression { $$=$1;}                       
    | unary_operator unary_expression                       
    {
        $$=new Array();
        switch($1)
        {      
            //address, generate a pointer temporary and emit the quad
            case '&':
                $$->Array=gentemp(new SymbolType("ptr"));
                $$->Array->type->arrtype=$2->Array->type; 
                emit("=&",$$->Array->name,$2->Array->name);
                break;
            // value, generate a temporary of the corresponding type
            case '*':
                $$->atype="ptr";
                $$->Array=$2->Array;
                break;
            // Similar case with + - ~ !
            case '+':  
                $$=$2;
                break;
            case '-':                
                $$->Array=gentemp(new SymbolType($2->Array->type->type));
                emit("uminus",$$->Array->name,$2->Array->name);
                break;
            case '~':
                $$->Array=gentemp(new SymbolType($2->Array->type->type));
                emit("~",$$->Array->name,$2->Array->name);
                break;
            case '!': 
                if($2->atype == "bool_pass")
                {
                    list<int> l = temp_rel->truelist;
                    temp_rel->truelist = temp_rel->falselist;
                    temp_rel->falselist = l;
                    $$->atype = "bool_pass";
                }               
                else
                {
                    $$->Array=gentemp(new SymbolType($2->Array->type->type));
                    emit("!",$$->Array->name,$2->Array->name);
                }

                break;
        }
    };

unary_operator: BITWISE_AND     
    { $$='&'; }       
    | MUL          
    {$$='*'; }
    | ADD          
    { $$='+'; }
    | SUB          
    { $$='-'; }
    | EXCLAIM  
    {$$='!'; }
    ;

multiplicative_expression: unary_expression  
    {
        $$ = new Expression();
        if($1->atype=="arr")             
        {
            $$->loc = gentemp($1->Array->type->arrtype);    
            emit("=[]", $$->loc->name, $1->Array->name, $1->loc->name);
        }
        else if($1->atype=="ptr")
        { 

            Symbol* temp_s=gentemp($1->Array->type->arrtype);
            emit("=*",temp_s->name,$1->Array->name);
            $$->loc = temp_s;
        }
        else if($1->atype == "bool_pass")
        {
            $$ = temp_rel;
        }
        else
        {
            $$->loc = $1->Array;
        }
    }
    | multiplicative_expression MUL unary_expression           
    { 
    // error in program, type conflict                       
        $$ = new Expression(); 
        Symbol* temp_s;  
        if($3->atype == "arr")
        {
            temp_s = gentemp($3->Array->type->arrtype);    
            emit("=[]", temp_s->name, $3->Array->name, $3->loc->name);
        } 
        else if($3->atype == "ptr")
        {
            temp_s = gentemp($3->Array->type->arrtype);
            emit("=*",temp_s->name,$3->Array->name);
        }
        else
        {
            temp_s = $3->Array;
        }
        $$->loc = gentemp(new SymbolType($1->loc->type->type));
        emit("*", $$->loc->name, $1->loc->name, temp_s->name);
    }
    | multiplicative_expression DIV unary_expression      
    {       
        $$ = new Expression(); 
        Symbol* temp_s;  
        if($3->atype == "arr")
        {
            temp_s = gentemp($3->Array->type->arrtype);    
            emit("=[]", temp_s->name, $3->Array->name, $3->loc->name);
        } 
        else if($3->atype == "ptr")
        {
            temp_s = gentemp($3->Array->type->arrtype);
            emit("=*",temp_s->name,$3->Array->name);
        }
        else
        {
            temp_s = $3->Array;
        }
        $$->loc = gentemp(new SymbolType($1->loc->type->type));
        emit("/", $$->loc->name, $1->loc->name, temp_s->name);
    }
    | multiplicative_expression MOD unary_expression
    {
        $$ = new Expression(); 
        Symbol* temp_s;  
        if($3->atype == "arr")
        {
            temp_s = gentemp($3->Array->type->arrtype);    
            emit("=[]", temp_s->name, $3->Array->name, $3->loc->name);
        } 
        else if($3->atype == "ptr")
        {
            temp_s = gentemp($3->Array->type->arrtype);
            emit("=*",temp_s->name,$3->Array->name);
        }
        else
        {
            temp_s = $3->Array;
        }
        $$->loc = gentemp(new SymbolType($1->loc->type->type));
        emit("%", $$->loc->name, $1->loc->name, temp_s->name);  
    }
    ;

additive_expression: multiplicative_expression   { $$=$1; }
    | additive_expression ADD multiplicative_expression
    {
        $$ = new Expression();    
        $$->loc = gentemp(new SymbolType($1->loc->type->type));
        emit("+", $$->loc->name, $1->loc->name, $3->loc->name);
    }
    | additive_expression SUB multiplicative_expression
    { 
        $$ = new Expression();    
        $$->loc = gentemp(new SymbolType($1->loc->type->type));
        emit("-", $$->loc->name, $1->loc->name, $3->loc->name);
    }
    ;

relational_expression: additive_expression   { $$=$1; }
    | relational_expression BIT_SL additive_expression
    {
        $$ = new Expression();
        $$->type = "bool";
        $$->truelist = makelist(nextinstr());
        $$->falselist = makelist(nextinstr()+1);
        emit("<", "", $1->loc->name, $3->loc->name);
        emit("goto", "");    
    }
    | relational_expression BIT_SR additive_expression          
    {   
        $$ = new Expression();        
        $$->type = "bool";
        $$->truelist = makelist(nextinstr());
        $$->falselist = makelist(nextinstr()+1);
        emit(">", "", $1->loc->name, $3->loc->name);
        emit("goto", "");
    }
    | relational_expression LTE additive_expression            
    {          
        $$ = new Expression();        
        $$->type = "bool";
        $$->truelist = makelist(nextinstr());
        $$->falselist = makelist(nextinstr()+1);
        emit("<=", "", $1->loc->name, $3->loc->name);
        emit("goto", "");
    }
    | relational_expression GTE additive_expression             
    {  
        $$ = new Expression();    
        $$->type = "bool";
        $$->truelist = makelist(nextinstr());
        $$->falselist = makelist(nextinstr()+1);
        emit(">=", "", $1->loc->name, $3->loc->name);
        emit("goto", "");
    }
    ;

equality_expression: relational_expression  { $$=$1; }                        
    | equality_expression EQ M relational_expression 
    {
        if(convertBoolToInt($1) == 1)
        {
            backpatch($1->nextlist, $3);
        }
        if(convertBoolToInt($4) == 1)
        {
            backpatch($4->nextlist, nextinstr());
        }
        $$ = new Expression();
        $$->type = "bool";
        $$->truelist = makelist(nextinstr());
        $$->falselist = makelist(nextinstr()+1); 
        emit("==", "", $1->loc->name, $4->loc->name);
        emit("goto", "");                
    }
    | equality_expression NEQ M relational_expression
    {           
        if(convertBoolToInt($1) == 1)
        {
            backpatch($1->nextlist, $3);
        }
        if(convertBoolToInt($4) == 1)
        {
            backpatch($4->nextlist, nextinstr());
        }
        $$ = new Expression();
        $$->type = "bool";
        $$->truelist = makelist(nextinstr());
        $$->falselist = makelist(nextinstr()+1); 
        emit("!=", "", $1->loc->name, $4->loc->name);
        emit("goto", "");
    }
    ;

and_helper: logical_and_expression AND
    {
        convertIntToBool($1);
        $$ = $1;
    }


logical_and_expression: equality_expression  { $$=$1; }    
    // backpatching involved B1 & M B2 type expression        
    | and_helper M equality_expression
    { 
        convertIntToBool($3);
        $$ = new Expression();
        $$->type = "bool";
        backpatch($1->truelist, $2);
        $$->truelist = $3->truelist;
        $$->falselist = merge($1->falselist, $3->falselist);
    }
    ;

or_helper: logical_or_expression OR
    {
        convertIntToBool($1);
        $$ = $1;
    }

logical_or_expression: logical_and_expression   { $$=$1; }   
    // backpatching involved B1 || M B2 type expression             
    | or_helper M logical_and_expression
    { 
        convertIntToBool($3);            
        $$ = new Expression();            
        $$->type = "bool";
        backpatch($1->falselist, $2);        
        $$->truelist = merge($1->truelist, $3->truelist);        
        $$->falselist = $3->falselist;             
    }
    ;

condition: logical_or_expression QUESTION 
    {
        convertIntToBool($1);
        $$ = $1;
    }

conditional_expression: logical_or_expression {$$=$1;}
    // backpatching involved B1 || B2 N ? M expre N : M cond_expr type expression
    | condition M expression N COLON M conditional_expression 
    {
        // Generate temporary variable and then emit accordingly
        $$->loc = gentemp($3->loc->type);
        $$->loc->update($3->loc->type);
        emit("=", $$->loc->name, $7->loc->name);
        list<int> l = makelist(nextinstr());
        emit("goto", "");
        backpatch($4->nextlist, nextinstr());
        emit("=", $$->loc->name, $3->loc->name);
        list<int> m = makelist(nextinstr());
        l = merge(l, m);                        
        emit("goto", "");
        backpatch($1->truelist, $2);
        backpatch($1->falselist, $6);
        backpatch(l, nextinstr());
    }
    ;

assignment_expression: conditional_expression {$$=$1;}
    | unary_expression ASSIGN assignment_expression 
     {
        // array assignment expression
        if($1->atype=="arr")
        {
            $3->loc = convertType($3->loc, $1->type->type);
            emit("[]=", $1->Array->name, $1->loc->name, $3->loc->name);        
        }
        // pointer assignment expression
        else if($1->atype=="ptr")
        {
            emit("*=", $1->Array->name, $3->loc->name);    
        }
        // direct assignment expression
        else
        {
            $3->loc = convertType($3->loc, $1->Array->type->type);
            emit("=", $1->Array->name, $3->loc->name);
        }
        $$ = $3;
    }
    ;

expression: assignment_expression {  $$=$1;  }
    ;


declaration: type_specifier init_declarator SEMICOLON {    }
    ;


init_declarator: declarator {$$=$1;}
    | declarator ASSIGN initializer 
    {
        if($3->val!="") $1->val=$3->val;
        emit("=", $1->name, $3->name);    
    }
    ;


type_specifier: VOID   { var_type="void"; }
    | CHAR   { var_type="char"; }
    | INT   { var_type="int"; }
    ;


declarator: pointer direct_declarator 
    {
        // Pointer declarator
        SymbolType *t = $1;
        while(t->arrtype!=NULL) t = t->arrtype;
        t->arrtype = $2->type;
        $$ = $2->update($1);
    }
    | direct_declarator {   }
    ;


declarator_helper: IDENTIFIER ROUND_BRACKET_OPEN
{   

    Symbol* tem = ST->lookupIdentifier(id);
    if (tem == nullptr){
        tem = ST->lookupDeclarator(id);
    }
    $$ = tem->update(new SymbolType(var_type));
    currSymbolPtr = $$; 
}

direct_declarator: IDENTIFIER
    {
        // assignment to different identifier
        Symbol* tem = ST->lookupDeclarator(id);
        $$ = tem->update(new SymbolType(var_type));
        currSymbolPtr = $$;    
    }
    | IDENTIFIER SQUARE_BRACKET_OPEN INTEGER_CONSTANT SQUARE_BRACKET_CLOSE 
    {
        Symbol *tem = ST->lookupDeclarator(id);
        $$ = tem->update(new SymbolType(var_type));
        currSymbolPtr = $$;    
        SymbolType* s = new SymbolType("arr", tem->type, $3);
        $$ = tem->update(s);
    }
    
    | declarator_helper changetable parameter_list_opt ROUND_BRACKET_CLOSE 
    {
        ST->name = $1->name;    
        if($1->type->type !="void") 
        {
            Symbol *s = ST->lookupIdentifier("return");
            if (s==nullptr){
                s = ST->lookupDeclarator("return");
            }
            s->update($1->type);        
        }
        $1->nested=ST;       
        ST->parent = globalST;
        changeTable(globalST);                
        currSymbolPtr = $$;
    }
    ;

pointer: MUL
    { 
        $$ = new SymbolType("ptr");
    }
    ;

parameter_list_opt: parameter_list { }
    |   %empty
    ;

parameter_list: parameter_declaration   {  }
    | parameter_list COMMA parameter_declaration    {  }
    ;

parameter_declaration: type_specifier declarator   {  }
    | type_specifier    {  }
    ;


initializer: assignment_expression   { $$=$1->loc; }
    ;


statement: compound_statement   { $$=$1; }
    | expression_statement   
    { 
        $$=new Statement();
        $$->nextlist=$1->nextlist; 
    }
    | selection_statement   { $$=$1; }
    | iteration_statement   { $$=$1; }
    | jump_statement   { $$=$1; }
    ;

compound_statement: CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE   
    { 
        $$=$2; 
    }
    ;

block_item_list_opt: %empty  { $$=new Statement(); }
    | block_item_list   { $$=$1; }
    ;

block_item_list: block_item   { $$=$1; }            
    | block_item_list M block_item    
    { 
        $$=$3;
        backpatch($1->nextlist,$2);
    }
    ;

block_item: declaration   { $$=new Statement(); }
    | statement   { $$=$1; }                
    ;

expression_statement: expression SEMICOLON {$$=$1;}            
    | SEMICOLON {$$ = new Expression();}
    ;


if_helper: IF ROUND_BRACKET_OPEN expression
    {
        convertIntToBool($3);
        $$ = $3;   
    }


selection_statement: if_helper ROUND_BRACKET_CLOSE M statement %prec THEN
    {
        $$ = new Statement();
        backpatch($1->truelist, $3);
        $$->nextlist = merge($1->falselist, $4->nextlist);
    }
    | if_helper ROUND_BRACKET_CLOSE M statement N ELSE M statement
    {   
        $$ = new Statement();
        backpatch($1->truelist, $3);
        backpatch($1->falselist, $7);
        list<int> temp = merge($4->nextlist, $5->nextlist);
        $$->nextlist = merge($8->nextlist,temp);    
    }
    ;

iteration_statement:  FOR ROUND_BRACKET_OPEN expression_statement M expression_statement M expression N ROUND_BRACKET_CLOSE M statement
    {
        $$ = new Statement();        
        convertIntToBool($5);
        backpatch($5->truelist, $10);    
        backpatch($8->nextlist, $4);    
        backpatch($11->nextlist, $6);    
        string str=convertIntToString($6);
        emit("goto", str);                
        $$->nextlist = $5->falselist;
    }
    ;

jump_statement:  RETURN expression SEMICOLON               
    {
        $$ = new Statement();    
        emit("return",$2->loc->name);
    }
    | RETURN SEMICOLON 
    {
        $$ = new Statement();    
        emit("return","");                         
    }
    ;



translation_unit: external_declaration { }
    | translation_unit external_declaration { } 
    ;

external_declaration: function_definition {  }
    | declaration   {  }
    ;
                          
function_definition:type_specifier declarator changetable CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  
    {
        int next_instr=0;         
        ST->parent=globalST;
        table_count = 0;
        label_table.clear();
        changeTable(globalST);
    }
    ;

%%

void yyerror(string s) {
    cout<<s<<endl;
}