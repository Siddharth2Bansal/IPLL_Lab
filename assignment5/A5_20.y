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
    // unaryOp is the type for the operations
    char unaryOp;
    // char_value is for characters and strings
    char* char_value;
    // intval is for integers
    int intval;
    // instr_number is mainly used for backpatching
    int instr_number;
    // num_params is used for storing the number of parameters in a function call
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
%token CHAR ELSE FOR IF INT RETURN VOID
            
%token  IDENTIFIER                              
%token <char_value> STRING_LITERAL         

%token SQUARE_BRACKET_OPEN SQUARE_BRACKET_CLOSE
%token ROUND_BRACKET_OPEN ROUND_BRACKET_CLOSE
%token CURLY_BRACKET_OPEN CURLY_BRACKET_CLOSE            
%token BITWISE_AND MUL ADD SUB BITWISE_NOT EXCLAIM DIV MOD BIT_SL BIT_SR
%token LTE GTE EQ NEQ AND OR
%token QUESTION COLON SEMICOLON DOTS ASSIGN 
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
// change the current symbol table
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
        // if the type is bool, then store the value of the expression in it
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
        // if the type is not bool, then store the location of the primary expression in the Array 
        if($1->type != "bool")
        {
            $$->Array=$1->loc;    
            $$->type=$1->loc->type;    
            $$->loc=$$->Array;
        } 
        else
        {
            // if the type is bool, then store the information in the Array
            $$->atype = "bool_pass";
        }

    }
    | postfix_expression SQUARE_BRACKET_OPEN expression SQUARE_BRACKET_CLOSE 
    {     
        // create new Array and stores the base address of the array in it along with the address of the index 
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
        // create new temporary and store the return value of the function in it
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
        // add one to the number of arguments and emit param quad
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
            //generate a temporary and store the address of the corresponding variable in it
            case '&':
                $$->Array=gentemp(new SymbolType("ptr"));
                $$->Array->type->arrtype=$2->Array->type; 
                emit("=&",$$->Array->name,$2->Array->name);
                break;
            // change the type of the expression to pointer
            case '*':
                $$->atype="ptr";
                $$->Array=$2->Array;
                break;
            // Similar case with + - ~!
            case '+':  
                $$=$2;
                break;
            case '-':                
                $$->Array=gentemp(new SymbolType($2->Array->type->type));
                emit("uminus",$$->Array->name,$2->Array->name);
                break;
            case '!': 
                if($2->atype == "bool_pass")
                {
                    // if the type is bool, then swap the truelist and falselist
                    list<int> l = temp_rel->truelist;
                    temp_rel->truelist = temp_rel->falselist;
                    temp_rel->falselist = l;
                    $$->atype = "bool_pass";
                }               
                else
                {
                    // if the type is not bool, then generate a temporary and store the value of the opposite of the expression in it
                    //not sure, probably not used in grammer
                    $$->Array=gentemp(new SymbolType($2->Array->type->type));
                    emit("!",$$->Array->name,$2->Array->name);
                }

                break;
        }
    };
// determine the tyoe of the unary operator to be used
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
        // convert array indexes and ponters to temporary variables
        $$ = new Expression();
        if($1->atype=="arr")             
        {
            //dereference the array
            $$->loc = gentemp($1->Array->type->arrtype);    
            emit("=[]", $$->loc->name, $1->Array->name, $1->loc->name);
        }
        else if($1->atype=="ptr")
        { 
            //dereference the pointer
            Symbol* temp_s=gentemp($1->Array->type->arrtype);
            emit("=*",temp_s->name,$1->Array->name);
            $$->loc = temp_s;
        }
        else if($1->atype == "bool_pass")
        {
            // if the type is bool, then store the load the value of the expression from the temporary variable
            $$ = temp_rel;
        }
        else
        {
            $$->loc = $1->Array;
        }
    }
    | multiplicative_expression MUL unary_expression           
    {                        
        $$ = new Expression(); 
        Symbol* temp_s;  
        // dereference the array and pointer if present in the unary expression
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
        // multiply the two expressions and store the result in a temporary variable
        $$->loc = gentemp(new SymbolType($1->loc->type->type));
        emit("*", $$->loc->name, $1->loc->name, temp_s->name);
    }
    | multiplicative_expression DIV unary_expression      
    {       
        $$ = new Expression(); 
        Symbol* temp_s;  
        // dereference the array and pointer if present in the unary expression
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
        // divide the two expressions and store the result in a temporary variable
        $$->loc = gentemp(new SymbolType($1->loc->type->type));
        emit("/", $$->loc->name, $1->loc->name, temp_s->name);
    }
    | multiplicative_expression MOD unary_expression
    {
        $$ = new Expression(); 
        Symbol* temp_s;  
        // dereference the array and pointer if present in the unary expression
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
        // modulo the two expressions and store the result in a temporary variable
        $$->loc = gentemp(new SymbolType($1->loc->type->type));
        emit("%", $$->loc->name, $1->loc->name, temp_s->name);  
    }
    ;

additive_expression: multiplicative_expression   { $$=$1; }// copy the multiplicative expression to the additive expression
    | additive_expression ADD multiplicative_expression
    {
        // add the two expressions and store the result in a temporary variable
        $$ = new Expression();    
        $$->loc = gentemp(new SymbolType($1->loc->type->type));
        emit("+", $$->loc->name, $1->loc->name, $3->loc->name);
    }
    | additive_expression SUB multiplicative_expression
    { 
        // subtract the two expressions and store the result in a temporary variable
        $$ = new Expression();    
        $$->loc = gentemp(new SymbolType($1->loc->type->type));
        emit("-", $$->loc->name, $1->loc->name, $3->loc->name);
    }
    ;

relational_expression: additive_expression   { $$=$1; } // copy the additive expression to the relational expression
    | relational_expression BIT_SL additive_expression
    {
        //change the relational expression to an if statement and saves the truelist and falselist in the expression to patch later 
        // true list is the list of instructions to be executed if the condition is true
        // false list is the list of instructions to be executed if the condition is false
        $$ = new Expression();
        $$->type = "bool";
        $$->truelist = makelist(nextinstr());
        $$->falselist = makelist(nextinstr()+1);
        emit("<", "", $1->loc->name, $3->loc->name);
        emit("goto", "");    
    }
    | relational_expression BIT_SR additive_expression          
    {   
        //change the relational expression to an if statement and saves the truelist and falselist in the expression to patch later
        $$ = new Expression();        
        $$->type = "bool";
        $$->truelist = makelist(nextinstr());
        $$->falselist = makelist(nextinstr()+1);
        emit(">", "", $1->loc->name, $3->loc->name);
        emit("goto", "");
    }
    | relational_expression LTE additive_expression            
    {          
        //change the relational expression to an if statement and saves the truelist and falselist in the expression to patch later
        $$ = new Expression();        
        $$->type = "bool";
        $$->truelist = makelist(nextinstr());
        $$->falselist = makelist(nextinstr()+1);
        emit("<=", "", $1->loc->name, $3->loc->name);
        emit("goto", "");
    }
    | relational_expression GTE additive_expression             
    {  
        //change the relational expression to an if statement and saves the truelist and falselist in the expression to patch later
        $$ = new Expression();    
        $$->type = "bool";
        $$->truelist = makelist(nextinstr());
        $$->falselist = makelist(nextinstr()+1);
        emit(">=", "", $1->loc->name, $3->loc->name);
        emit("goto", "");
    }
    ;

equality_expression: relational_expression  { $$=$1; }         // copy the relational expression to the equality expression                
    | equality_expression EQ M relational_expression 
    {
        //if the type of the equality expression is bool, then convert it to int and save 1 if true and 0 if false
        //patch the next list of the gotos created in conversion to int to the address of the next expression
        if(convertBoolToInt($1) == 1)
        {
            backpatch($1->nextlist, $3);
        }
        //if the type of the relational expression is bool, then convert it to int and save 1 if true and 0 if false
        //patch the next list of the gotos created in conversion to int to the address of the next expression
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
        //same as above
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

//converts the int to bool and saves the result in the expression
// used to keep the translation of the code simple
// moves the conversion to int to the start of the conditional expression
and_helper: logical_and_expression AND
    {
        convertIntToBool($1);
        $$ = $1;
    }


logical_and_expression: equality_expression  { $$=$1; }    
    // backpatching involved B1 & M B2 type expression        
    | and_helper M equality_expression
    { 
        //converting the int to bool
        // not present in the helper function as this is the correct position for the conversion
        convertIntToBool($3);
        // patch the true list of the first expression to the address of the second expression
        // save the true list of the second expression in the true list of the expression
        $$ = new Expression();
        $$->type = "bool";
        backpatch($1->truelist, $2);
        $$->truelist = $3->truelist;
        // save the false list of the first expression and the false list of the second expression in the false list of the expression
        $$->falselist = merge($1->falselist, $3->falselist);
    }
    ;

//converts the int to bool and saves the result in the expression
// used to keep the translation of the code simple
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
        // patch the false list of the first expression to the address of the second expression
        backpatch($1->falselist, $2);        
        $$->truelist = merge($1->truelist, $3->truelist);        
        // save the true list of the first expression and the true list of the second expression in the true list of the expression
        // save the false list of the second expression in the false list of the expression
        $$->falselist = $3->falselist;             
    }
    ;
//converts the int to bool and saves the result in the expression
// used to keep the translation of the code simple
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
        // convert the conditional expression to the correct format and handle the backpatching
        // if the condition evaluates to true, then the expression is evaluated and the result is saved in the temporary variable
        // else the conditional expression is evaluated and the result is saved in the temporary variable
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
        // different types of assignment expressions for arrays, pointers and direct assignment
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

expression: assignment_expression {  $$=$1;  } // expression is just an assignment expression
    ;


declaration: type_specifier init_declarator SEMICOLON {    } // no semantic action required
    ;


init_declarator: declarator {$$=$1;}
    | declarator ASSIGN initializer 
    {
        // if the initializer has a value, then the value is assigned to the declarator
        if($3->val!="") $1->val=$3->val;
        emit("=", $1->name, $3->name);    
    }
    ;

// the type of the declarator/ function is saved in the global variable var_type
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

// helper function to handle the case of a function declarator
// makes the function declaration simpler
// if not done, changing tables would be much more complicated
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
        //the identifier is created in the symbol table
        Symbol* tem = ST->lookupDeclarator(id);
        //type was set in type_specifier
        $$ = tem->update(new SymbolType(var_type));
        currSymbolPtr = $$;    
    }
    | IDENTIFIER SQUARE_BRACKET_OPEN INTEGER_CONSTANT SQUARE_BRACKET_CLOSE 
    {
        // the identifier is saved as an array in the symbol table
        // the size of the array is saved in the symbol table
        Symbol *tem = ST->lookupDeclarator(id);
        $$ = tem->update(new SymbolType(var_type));
        currSymbolPtr = $$;    
        SymbolType* s = new SymbolType("arr", tem->type, $3);
        $$ = tem->update(s);
    }
    
    | declarator_helper changetable parameter_list_opt ROUND_BRACKET_CLOSE 
    {
        // the function is saved in the symbol table
        // return type is saved in the symbol table
        // the parameters are saved in the symbol table of the function
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

parameter_list_opt: parameter_list { } // no semantic action required as the input is already in the correct format
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
// block_item_list is a list of statements or declarations
// the number of statements in the list is is saved
//the nextlist of the last statement in the list is set as the first quad of the next statement
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

// just like the above helper non terminals, this is a helper function to make the selection statement simpler
if_helper: IF ROUND_BRACKET_OPEN expression
    {
        convertIntToBool($3);
        $$ = $3;   
    }


selection_statement: if_helper ROUND_BRACKET_CLOSE M statement %prec THEN
    {
        // if the expression is true, then the statement is executed
        $$ = new Statement();
        backpatch($1->truelist, $3);
        // if the expression is false, then the statement is not executed
        $$->nextlist = merge($1->falselist, $4->nextlist);
    }
    | if_helper ROUND_BRACKET_CLOSE M statement N ELSE M statement
    {   
        // if the expression is true, then the first statement is executed
        // if the expression is false, then the second statement is executed
        $$ = new Statement();
        backpatch($1->truelist, $3);
        backpatch($1->falselist, $7);
        // the nextlist is the nextlist of the first statement and the second statement
        list<int> temp = merge($4->nextlist, $5->nextlist);
        $$->nextlist = merge($8->nextlist,temp);    
    }
    ;

iteration_statement:  FOR ROUND_BRACKET_OPEN expression_statement M expression_statement M expression N ROUND_BRACKET_CLOSE M statement
    {
        // the first expression is executed
        // if the second expression is true, then the statement is executed
        // the third expression is executed
        // the second expression is executed
        // if the expression is true, then the statement is executed
        // else the statement is not executed and the next block item is executed
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
// the jump statement is either a return statement or an empty return statement
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


// allow multiple translation units
translation_unit: external_declaration { }
    | translation_unit external_declaration { } 
    ;

external_declaration: function_definition {  }
    | declaration   {  }
    ;

       
function_definition:type_specifier declarator changetable CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  
    {
        // the function is saved in the symbol table
        // the parent of the current symbol table is set to the global symbol table
        // the current symbol table is changed to the global symbol table
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