//#########################################
//## Ashish Rekhani (20CS10010)          ##
//## Ashwani Kumar Kamal (20CS10011)     ##
//## Compilers Laboratory                ##
//## Assignment - 6                      ##
//#########################################
//# GCC version: gcc (GCC) 12.1.1 20220730

%{
	#include "A6_20_translator.h"
	void yyerror(const char*);
	extern "C" int yylex(void);
	using namespace std;
%}


%union{
	int _int_value;   //to hold the value of integer constant
	char _char_value; //to hold the value of character constant
	float _float_value; //to hold the value of floating constant
	string* _string_literal; // to hold the value of string literal
	declarator _declarator;   //to define the declarators
	identifier _identifier;    // to define the type for Identifier
	argList _paramList; //to define the argumnets list
	int _instruction;  // to defin the type used by M->(epsilon)
	expression _expression;   // to define the structure of expression
	list *_nextlist;  //to define the _nextlist type for N->(epsilon)
}

//All tokens
%token BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE EXTERN FLOAT FOR GOTO IF INLINE INT LONG RESTRICT RETURN SHORT SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION VOID VOLATILE WHILE
%token ARROW DECREMENT INCREMENT RIGHT_SHIFT LEFT_SHIFT GREATER_THAN_EQUAL LESS_THAN_EQUAL NOT_EQUAL EQUALITY OR AND ELLIPSIS PLUS_EQUAL MINUS_EQUAL MULTIPLY_EQUAL MOD_EQUAL DIVIDE_EQUAL AND_EQUAL OR_EQUAL XOR_EQUAL RIGHT_SHIFT_EQUAL LEFT_SHIFT_EQUAL
%token WHITESPACE COMMENT

%token <_int_value> INTEGER_CONSTANT
%token <_float_value> FLOATING_CONSTANT
%token <_char_value> CHAR_CONST
%token <_string_literal> STRING_LITERAL

// Non-terminals of type expression (denoting expressions)
%type <_expression>
	primary_expression 
	postfix_expression 
	unary_expression 
	cast_expression 
	multiplicative_expression
	additive_expression 
	shift_expression 
	relational_expression 
	equality_expression 
	AND_expression
	exclusive_OR_expression 
	inclusive_OR_expression 
	logical_AND_expression 
	logical_OR_expression
	conditional_expression 
	assignment_expression_opt 
	assignment_expression 
	expression
	expression_statement 
	expression_opt 
	declarator 
	direct_declarator 
	initializer 
	declaration 
	init_declarator_list
	init_declarator_list_opt 
	init_declarator

%type <_nextlist>
	block_item_list 
	block_item statement 
	compound_statement 
	selection_statement
	iteration_statement 
	jump_statement 
	block_item_list_opt

%type <_paramList> argument_expression_list argument_expression_list_opt
%token <_identifier> IDENTIFIER
%type <_declarator> type_specifier  pointer pointer_opt

// Auxiliary non-terminal M of type instr to help in backpatching
%type <_instruction> M

// Auxiliary non-terminal N of type stmt to help in control flow statements
%type <_nextlist>    N

%type <_char_value> unary_operator

%start translation_unit

// precendence and association
%left '+' '-'
%left '*' '/' '%'
%nonassoc UNARY
%nonassoc IF_CONFLICT
%nonassoc ELSE

%%
M:
{
	$$ = nextInstruction;
};

N:
{
	$$ = makelist(nextInstruction);
	globalQuadArray.emit(Q_GOTO, -1);
};

/*Expressions*/
primary_expression: IDENTIFIER {
												//Check whether its a function
												symbol * check_func = globalSymbolTable->search(*$1.name);
												
												if(check_func == NULL)
												{
													$$.symTPtr  =  currentSymbolTable->globalLookup(*$1.name);
													if($$.symTPtr->type != NULL && $$.symTPtr->type->type == tp_arr)
													{
														//If array
														$$.arr = $$.symTPtr;
														$$.symTPtr = currentSymbolTable->gentemp(new symbolType(tp_int));
														$$.symTPtr->_init_val._INT_INITVAL = 0;
														$$.symTPtr->isInitialized = true;
														globalQuadArray.emit(Q_ASSIGN,0,$$.symTPtr->name);
														$$.type = $$.arr->type;
														$$.poss_array = $$.arr;
													}
													else
													{
														// If not an array
														$$.type = $$.symTPtr->type;
														$$.arr = NULL;
														$$.isPointer = false;
													}
												}
												else
												{
													// It is a function
													$$.symTPtr = check_func;
													$$.type = check_func->type;
													$$.arr = NULL;
													$$.isPointer = false;
													
												}
											} |
								INTEGER_CONSTANT {
													// Declare and initialize the value of the temporary variable with the integer
													$$.symTPtr  = currentSymbolTable->gentemp(new symbolType(tp_int));
													$$.type = $$.symTPtr->type;
													$$.symTPtr->_init_val._INT_INITVAL = $1;
													$$.symTPtr->isInitialized = true;
													$$.arr = NULL;
													globalQuadArray.emit(Q_ASSIGN, $1, $$.symTPtr->name);
												} |
								FLOATING_CONSTANT {
													// Declare and initialize the value of the temporary variable with the _float_value
													$$.symTPtr  = currentSymbolTable->gentemp(new symbolType(tp_double));
													$$.type = $$.symTPtr->type;
													$$.symTPtr->_init_val._DOUBLE_INITVAL = $1;
													$$.symTPtr->isInitialized = true;
													$$.arr = NULL;
													globalQuadArray.emit(Q_ASSIGN, $1, $$.symTPtr->name);
												  } |
								CHAR_CONST {
												// Declare and initialize the value of the temporary variable with the character
												$$.symTPtr  = currentSymbolTable->gentemp(new symbolType(tp_char));
												$$.type = $$.symTPtr->type;
												
												$$.symTPtr->_init_val._CHAR_INITVAL = $1;
												$$.symTPtr->isInitialized = true;
												
												$$.arr = NULL;
												globalQuadArray.emit(Q_ASSIGN, $1, $$.symTPtr->name);
											} |
								STRING_LITERAL {

													_string_labels.push_back(*$1);
													$$.symTPtr = NULL;
													$$.isString = true;
													$$.ind_str = _string_labels.size()-1;
													$$.arr = NULL;
													$$.isPointer = false;
												} |
								'(' expression ')' {
														$$ = $2;
												   };

postfix_expression :    primary_expression {
														$$ = $1;
													} |
								postfix_expression '[' expression ']' {
																		//Explanation of Array handling

																		$$.symTPtr = currentSymbolTable->gentemp(new symbolType(tp_int));
																		symbol* temporary = currentSymbolTable->gentemp(new symbolType(tp_int));
																		char temp[10];
																		sprintf(temp,"%d",$1.type->next->sizeOfType());
																		globalQuadArray.emit(Q_MULT,$3.symTPtr->name,temp,temporary->name);
																		globalQuadArray.emit(Q_PLUS,$1.symTPtr->name,temporary->name,$$.symTPtr->name);
																		// the new size will be calculated and the temporary variable storing the size will be passed on a $$.symTPtr
																		//$$.arr <= base pointer
																		$$.arr = $1.arr;
																		//$$.type <= type(arr)
																		$$.type = $1.type->next;
																		$$.poss_array = NULL;
																		//$$.arr->type has the full type of the arr which will be used for size calculations
																	 } |
								postfix_expression '(' argument_expression_list_opt ')' {
																							//Explanation of Function Handling
																							if(!$1.isPointer && !$1.isString && ($1.type) && ($1.type->type==tp_void))
																							{
																								
																							}
																							else
																								$$.symTPtr = currentSymbolTable->gentemp(CopyType($1.type));
																							//temporary is created
																							char str[10];
																							if($3.args == NULL)
																							{
																								
																								//No function Parameters
																								sprintf(str,"0");
																								
																								if($1.type->type!=tp_void)
																									globalQuadArray.emit(Q_CALL,$1.symTPtr->name,str,$$.symTPtr->name);
																								else
																									globalQuadArray.emitG(Q_CALL,$1.symTPtr->name,str);
																							}
																							else
																							{
																								if((*$3.args)[0]->isString)
																								{
																									str[0] = '_';
																									
																									sprintf(str+1,"%d",(*$3.args)[0]->ind_str);
																									globalQuadArray.emit(Q_PARAM,str);
																									
																									globalQuadArray.emit(Q_CALL,$1.symTPtr->name,"1",$$.symTPtr->name);
																								}
																								else
																								{
																									for(int i=0;i<$3.args->size();i++)
																									{
																										// To print the parameters
																										
																										if((*$3.args)[i]->poss_array != NULL && $1.symTPtr->name != "printInt")
																											globalQuadArray.emit(Q_PARAM,(*$3.args)[i]->poss_array->name);
																										else
																											globalQuadArray.emit(Q_PARAM,(*$3.args)[i]->symTPtr->name);

																									}
																									sprintf(str,"%ld",$3.args->size());
																									//printf("function %s-->%d\n",$1.symTPtr->name.c_str(),$1.type->type);
																									if($1.type->type!=tp_void) {
																										globalQuadArray.emit(Q_CALL,$1.symTPtr->name,str,$$.symTPtr->name);
																										
																									}
																									else
																										globalQuadArray.emitG(Q_CALL,$1.symTPtr->name,str);
																								}
																							}

																							$$.arr = NULL;
																							$$.type = $$.symTPtr->type;
																						 } |
								postfix_expression '.' IDENTIFIER {/*Struct Logic to be Skipped*/}|
								postfix_expression ARROW IDENTIFIER {
																			/*----*/
																	  } |
								postfix_expression INCREMENT {
																$$.symTPtr = currentSymbolTable->gentemp(CopyType($1.type));
																if($1.arr != NULL)
																{
																	// Post increment of an array element
																	symbol * temp_elem = currentSymbolTable->gentemp(CopyType($1.type));
																	globalQuadArray.emit(Q_RINDEX,$1.arr->name,$1.symTPtr->name,$$.symTPtr->name);
																	
																	globalQuadArray.emit(Q_RINDEX,$1.arr->name,$1.symTPtr->name,temp_elem->name);
																	
																	globalQuadArray.emit(Q_PLUS,temp_elem->name,"1",temp_elem->name);
																	globalQuadArray.emit(Q_LINDEX,$1.symTPtr->name,temp_elem->name,$1.arr->name);
																	$$.arr = NULL;
																}
																else
																{
																	//post increment of an simple element
																	
																	globalQuadArray.emit(Q_ASSIGN,$1.symTPtr->name,$$.symTPtr->name);
																	
																	globalQuadArray.emit(Q_PLUS,$1.symTPtr->name,"1",$1.symTPtr->name);
																}
																$$.type = $$.symTPtr->type;
															 } |
								postfix_expression DECREMENT {
																$$.symTPtr = currentSymbolTable->gentemp(CopyType($1.type));
																if($1.arr != NULL)
																{
																	// Post decrement of an array element
																	
																	symbol * temp_elem = currentSymbolTable->gentemp(CopyType($1.type));
																	globalQuadArray.emit(Q_RINDEX,$1.arr->name,$1.symTPtr->name,$$.symTPtr->name);
																	
																	globalQuadArray.emit(Q_RINDEX,$1.arr->name,$1.symTPtr->name,temp_elem->name);
																	globalQuadArray.emit(Q_MINUS,temp_elem->name,"1",temp_elem->name);
																	
																	globalQuadArray.emit(Q_LINDEX,$1.symTPtr->name,temp_elem->name,$1.arr->name);
																	$$.arr = NULL;
																}
																else
																{
																	//post decrement of an simple element
																	globalQuadArray.emit(Q_ASSIGN,$1.symTPtr->name,$$.symTPtr->name);
																	
																	globalQuadArray.emit(Q_MINUS,$1.symTPtr->name,"1",$1.symTPtr->name);
																}
																$$.type = $$.symTPtr->type;
															  };

argument_expression_list:       assignment_expression {
														$$.args = new vector<expression*>;
														
														expression * tex = new expression($1);
														
														$$.args->push_back(tex);
														//printf("name2-->%s\n",tex->symTPtr->name.c_str());
													 }|
								argument_expression_list ',' assignment_expression {
																						expression * tex = new expression($3);
																						$$.args->push_back(tex);
																					};

argument_expression_list_opt:   argument_expression_list {
															$$ = $1;
														  }|
								/*epsilon*/ {
												$$.args = NULL;
												
											};

unary_expression:               postfix_expression {
														$$ = $1;
												   }|
								INCREMENT unary_expression {
																$$.symTPtr = currentSymbolTable->gentemp($2.type);
																if($2.arr != NULL)
																{
																	// pre increment of an Array element
																	symbol * temp_elem = currentSymbolTable->gentemp(CopyType($2.type));
																	globalQuadArray.emit(Q_RINDEX,$2.arr->name,$2.symTPtr->name,temp_elem->name);
																	
																	globalQuadArray.emit(Q_PLUS,temp_elem->name,"1",temp_elem->name);
																	globalQuadArray.emit(Q_LINDEX,$2.symTPtr->name,temp_elem->name,$2.arr->name);
																	globalQuadArray.emit(Q_RINDEX,$2.arr->name,$2.symTPtr->name,$$.symTPtr->name);
																	$$.arr = NULL;
																}
																else
																{
																	// pre increment
																	globalQuadArray.emit(Q_PLUS,$2.symTPtr->name,"1",$2.symTPtr->name);
																	
																	globalQuadArray.emit(Q_ASSIGN,$2.symTPtr->name,$$.symTPtr->name);
																	
																}
																$$.type = $$.symTPtr->type;
															}|
								DECREMENT unary_expression {
																$$.symTPtr = currentSymbolTable->gentemp(CopyType($2.type));
																if($2.arr != NULL)
																{
																	//pre decrement of  Array Element
																	
																	symbol * temp_elem = currentSymbolTable->gentemp(CopyType($2.type));
																	globalQuadArray.emit(Q_RINDEX,$2.arr->name,$2.symTPtr->name,temp_elem->name);
																	globalQuadArray.emit(Q_MINUS,temp_elem->name,"1",temp_elem->name);
																	
																	globalQuadArray.emit(Q_LINDEX,$2.symTPtr->name,temp_elem->name,$2.arr->name);
																	globalQuadArray.emit(Q_RINDEX,$2.arr->name,$2.symTPtr->name,$$.symTPtr->name);
																	
																	$$.arr = NULL;
																}
																else
																{
																	// pre decrement
																	globalQuadArray.emit(Q_MINUS,$2.symTPtr->name,"1",$2.symTPtr->name);
																	
																	globalQuadArray.emit(Q_ASSIGN,$2.symTPtr->name,$$.symTPtr->name);
																}
																$$.type = $$.symTPtr->type;
																
															}|
								unary_operator cast_expression
																{
																	symbolType * temp_type;
																	switch($1)
																	{
																		case '&':
																			//create a temporary type store the type
																			temp_type = new symbolType(tp_ptr,1,$2.type);
																			
																			$$.symTPtr = currentSymbolTable->gentemp(CopyType(temp_type));
																			$$.type = $$.symTPtr->type;
																			
																			globalQuadArray.emit(Q_ADDR,$2.symTPtr->name,$$.symTPtr->name);
																			$$.arr = NULL;
																			break;
																		case '*':
																			$$.isPointer = true;
																			$$.type = $2.symTPtr->type->next;
																			$$.symTPtr = $2.symTPtr;
																			
																			$$.arr = NULL;
																			break;
																		case '+':
																			$$.symTPtr = currentSymbolTable->gentemp(CopyType($2.type));
																			$$.type = $$.symTPtr->type;
																			
																			globalQuadArray.emit(Q_ASSIGN,$2.symTPtr->name,$$.symTPtr->name);
																			break;
																		case '-':
																			$$.symTPtr = currentSymbolTable->gentemp(CopyType($2.type));
																			$$.type = $$.symTPtr->type;
																			
																			globalQuadArray.emit(Q_UNARY_MINUS,$2.symTPtr->name,$$.symTPtr->name);
																			break;
																		case '~':
																			/*Bitwise Not to be implemented Later on*/
																			$$.symTPtr = currentSymbolTable->gentemp(CopyType($2.type));
																			$$.type = $$.symTPtr->type;
																			
																			globalQuadArray.emit(Q_NOT,$2.symTPtr->name,$$.symTPtr->name);
																			break;
																		case '!':
																			$$.symTPtr = currentSymbolTable->gentemp(CopyType($2.type));
																			$$.type = $$.symTPtr->type;
																			
																			$$.truelist = $2.falselist;
																			$$.falselist = $2.truelist;
																			break;
																		default:
																			break;
																	}
																};

unary_operator  :               '&' {
										$$ = '&';
									}|
								'*' {
										$$ = '*';
									}|
								'+' {
										$$ = '+';
									}|
								'-' {
										$$ = '-';
									}|
								'~' {
										$$ = '~';
									}|
								'!' {
										$$ = '!';
									};

cast_expression :               unary_expression {
													if($1.arr != NULL && $1.arr->type != NULL&& $1.poss_array==NULL)
													{
														//Right Indexing of an array element as unary expression is converted into cast expression
														$$.symTPtr = currentSymbolTable->gentemp(new symbolType($1.type->type));
														
														globalQuadArray.emit(Q_RINDEX,$1.arr->name,$1.symTPtr->name,$$.symTPtr->name);
														$$.arr = NULL;
														
														$$.type = $$.symTPtr->type;
														//$$.poss_array=$1.arr;
														//printf("name --> %s\n",$$.symTPtr->name.c_str());
													}
													else if($1.isPointer == true)
													{
														//RDereferencing as its a pointer
														$$.symTPtr = currentSymbolTable->gentemp(CopyType($1.type));
														
														$$.isPointer = false;
														
														globalQuadArray.emit(Q_RDEREF,$1.symTPtr->name,$$.symTPtr->name);
													}
													else
														$$ = $1;
												};

multiplicative_expression:      cast_expression {
													$$ = $1;
												}|
								multiplicative_expression '*' cast_expression {
																					typecheck(&$1,&$3);
																					$$.symTPtr = currentSymbolTable->gentemp($1.type);
																					$$.type = $$.symTPtr->type;
																					
																					globalQuadArray.emit(Q_MULT,$1.symTPtr->name,$3.symTPtr->name,$$.symTPtr->name);
																			  }|
								multiplicative_expression '/' cast_expression {
																					typecheck(&$1,&$3);
																					$$.symTPtr = currentSymbolTable->gentemp($1.type);
																					$$.type = $$.symTPtr->type;
																					
																					globalQuadArray.emit(Q_DIVIDE,$1.symTPtr->name,$3.symTPtr->name,$$.symTPtr->name);
																			  }|
								multiplicative_expression '%' cast_expression{
																					typecheck(&$1,&$3);
																					
																					$$.symTPtr = currentSymbolTable->gentemp($1.type);
																					$$.type = $$.symTPtr->type;
																					
																					globalQuadArray.emit(Q_MODULO,$1.symTPtr->name,$3.symTPtr->name,$$.symTPtr->name);
																			 };

additive_expression :           multiplicative_expression {
																$$ = $1;
														  }|
								additive_expression '+' multiplicative_expression {
																						typecheck(&$1,&$3);
																						
																						$$.symTPtr = currentSymbolTable->gentemp($1.type);
																						$$.type = $$.symTPtr->type;
																						
																						globalQuadArray.emit(Q_PLUS,$1.symTPtr->name,$3.symTPtr->name,$$.symTPtr->name);
																				  }|
								additive_expression '-' multiplicative_expression {
																						typecheck(&$1,&$3);
																						
																						$$.symTPtr = currentSymbolTable->gentemp($1.type);
																						$$.type = $$.symTPtr->type;
																						
																						globalQuadArray.emit(Q_MINUS,$1.symTPtr->name,$3.symTPtr->name,$$.symTPtr->name);
																				  };

shift_expression:               additive_expression {
														$$ = $1;
													}|
								shift_expression LEFT_SHIFT additive_expression {
																					$$.symTPtr = currentSymbolTable->gentemp($1.type);
																					$$.type = $$.symTPtr->type;
																					
																					globalQuadArray.emit(Q_LEFT_OP,$1.symTPtr->name,$3.symTPtr->name,$$.symTPtr->name);
																				}|
								shift_expression RIGHT_SHIFT additive_expression{
																					$$.symTPtr = currentSymbolTable->gentemp($1.type);
																					
																					$$.type = $$.symTPtr->type;
																					
																					globalQuadArray.emit(Q_RIGHT_OP,$1.symTPtr->name,$3.symTPtr->name,$$.symTPtr->name);
																				};

relational_expression:          shift_expression {
														$$ = $1;
												 }|
								relational_expression '<' shift_expression {
																				typecheck(&$1,&$3);
																				$$.type = new symbolType(tp_bool);
																				$$.truelist = makelist(nextInstruction);
																				$$.falselist = makelist(nextInstruction+1);
																				globalQuadArray.emit(Q_IF_LESS,$1.symTPtr->name,$3.symTPtr->name,"-1");
																				globalQuadArray.emit(Q_GOTO,"-1");
																		   }|
								relational_expression '>' shift_expression {
																				typecheck(&$1,&$3);
																				$$.type = new symbolType(tp_bool);
																				$$.truelist = makelist(nextInstruction);
																				$$.falselist = makelist(nextInstruction+1);
																				globalQuadArray.emit(Q_IF_GREATER,$1.symTPtr->name,$3.symTPtr->name,"-1");
																				globalQuadArray.emit(Q_GOTO,"-1");
																		   }|
								relational_expression LESS_THAN_EQUAL shift_expression {
																						typecheck(&$1,&$3);
																						$$.type = new symbolType(tp_bool);
																						
																						$$.truelist = makelist(nextInstruction);
																						
																						$$.falselist = makelist(nextInstruction+1);
																						globalQuadArray.emit(Q_IF_LESS_OR_EQUAL,$1.symTPtr->name,$3.symTPtr->name,"-1");
																						globalQuadArray.emit(Q_GOTO,"-1");
																					}|
								relational_expression GREATER_THAN_EQUAL shift_expression {
																							typecheck(&$1,&$3);
													
																							$$.type = new symbolType(tp_bool);
																							$$.truelist = makelist(nextInstruction);
																							
																							$$.falselist = makelist(nextInstruction+1);
																							globalQuadArray.emit(Q_IF_GREATER_OR_EQUAL,$1.symTPtr->name,$3.symTPtr->name,"-1");
																							globalQuadArray.emit(Q_GOTO,"-1");
																					  };

equality_expression:            relational_expression {
															$$ = $1;
													  }|
								equality_expression EQUALITY relational_expression {
																						typecheck(&$1,&$3);
																						$$.type = new symbolType(tp_bool);
																						$$.truelist = makelist(nextInstruction);
																						
																						$$.falselist = makelist(nextInstruction+1);
																						globalQuadArray.emit(Q_IF_EQUAL,$1.symTPtr->name,$3.symTPtr->name,"-1");
																						globalQuadArray.emit(Q_GOTO,"-1");
																						
																				 }|
								equality_expression NOT_EQUAL relational_expression {
																							typecheck(&$1,&$3);
																							$$.type = new symbolType(tp_bool);
																							
																							$$.truelist = makelist(nextInstruction);
																							$$.falselist = makelist(nextInstruction+1);
													
																							globalQuadArray.emit(Q_IF_NOT_EQUAL,$1.symTPtr->name,$3.symTPtr->name,"-1");
																							globalQuadArray.emit(Q_GOTO,"-1");
																					 };

AND_expression :                equality_expression {
														$$ = $1;
													}|
								AND_expression '&' equality_expression {
																			$$.symTPtr = currentSymbolTable->gentemp($1.type);
																			$$.type = $$.symTPtr->type;
																		
																			globalQuadArray.emit(Q_LOG_AND,$1.symTPtr->name,$3.symTPtr->name,$$.symTPtr->name);
																			
																		};

exclusive_OR_expression:        AND_expression {
													$$ = $1;
											   }|
								exclusive_OR_expression '^' AND_expression {
																				$$.symTPtr = currentSymbolTable->gentemp($1.type);
																				$$.type = $$.symTPtr->type;
																				globalQuadArray.emit(Q_XOR,$1.symTPtr->name,$3.symTPtr->name,$$.symTPtr->name);
																		   };

inclusive_OR_expression:        exclusive_OR_expression {
															$$ = $1;
														}|
								inclusive_OR_expression '|' exclusive_OR_expression {
																						$$.symTPtr = currentSymbolTable->gentemp($1.type);
																						$$.type = $$.symTPtr->type;
																						
																						globalQuadArray.emit(Q_LOG_OR,$1.symTPtr->name,$3.symTPtr->name,$$.symTPtr->name);
																					};

logical_AND_expression:         inclusive_OR_expression {
															$$ = $1;
														}|
								logical_AND_expression AND M inclusive_OR_expression {
																						if($1.type->type != tp_bool)
																							CONV2BOOL(&$1);
																						if($4.type->type != tp_bool)
																							CONV2BOOL(&$4);
																						backpatch($1.truelist,$3);
																						$$.type = new symbolType(tp_bool);
																						
																						$$.falselist = merge($1.falselist,$4.falselist);
																						$$.truelist = $4.truelist;
																					};

logical_OR_expression:          logical_AND_expression {
															$$ = $1;
													   }|
								logical_OR_expression OR M logical_AND_expression   {
																						if($1.type->type != tp_bool)
																							CONV2BOOL(&$1);
																						if($4.type->type != tp_bool)
																							CONV2BOOL(&$4);
																						backpatch($1.falselist,$3);
																						$$.type = new symbolType(tp_bool);
																						
																						$$.truelist = merge($1.truelist,$4.truelist);
																						$$.falselist = $4.falselist;
																					};

/*It is assumed that type of expression and conditional expression are same*/
conditional_expression:         logical_OR_expression {
															$$ = $1;
													  }|
								logical_OR_expression N '?' M expression N ':' M conditional_expression {
																											$$.symTPtr = currentSymbolTable->gentemp($5.type);
																											$$.type = $$.symTPtr->type;
																											globalQuadArray.emit(Q_ASSIGN,$9.symTPtr->name,$$.symTPtr->name);
																											list* TEMP_LIST = makelist(nextInstruction);
																											globalQuadArray.emit(Q_GOTO,"-1");
																											
																											backpatch($6,nextInstruction);
																											globalQuadArray.emit(Q_ASSIGN,$5.symTPtr->name,$$.symTPtr->name);
																											TEMP_LIST = merge(TEMP_LIST,makelist(nextInstruction));
																											globalQuadArray.emit(Q_GOTO,"-1");
																											backpatch($2,nextInstruction);
																											CONV2BOOL(&$1);
																											backpatch($1.truelist,$4);
																											backpatch($1.falselist,$8);
																											backpatch(TEMP_LIST,nextInstruction);
																										};

assignment_operator:            '='                                                     |
								MULTIPLY_EQUAL                                         |
								DIVIDE_EQUAL                                           |
								MOD_EQUAL                                           |
								PLUS_EQUAL                                              |
								MINUS_EQUAL                                         |
								LEFT_SHIFT_EQUAL                                       |
								RIGHT_SHIFT_EQUAL                                      |
								AND_EQUAL                                              |
								XOR_EQUAL                                              |
								OR_EQUAL                                               ;

assignment_expression:          conditional_expression {
															$$ = $1;
														}|
								unary_expression assignment_operator assignment_expression {
																								//LDereferencing
																								//printf("hoboo --> %s\n",$1.symTPtr->name.c_str());
																								if($1.isPointer)
																								{
																									//printf("Hookah bar\n");
																									
																									globalQuadArray.emit(Q_LDEREF,$3.symTPtr->name,$1.symTPtr->name);
																								}
																								typecheck(&$1,&$3,true);
																								if($1.arr != NULL)
																								{
																									
																									globalQuadArray.emit(Q_LINDEX,$1.symTPtr->name,$3.symTPtr->name,$1.arr->name);
																								}
																								else if(!$1.isPointer)
																									globalQuadArray.emit(Q_ASSIGN,$3.symTPtr->name,$1.symTPtr->name);
																								$$.symTPtr = currentSymbolTable->gentemp($3.type);
																								$$.type = $$.symTPtr->type;
																								//printf("assgi hobobob %s == %s\n",)
																								globalQuadArray.emit(Q_ASSIGN,$3.symTPtr->name,$$.symTPtr->name);
																								
																								//printf("assign %s = %s\n",$3.symTPtr->name.c_str(),$$.symTPtr->name.c_str());
																							};

expression :                    assignment_expression {
															$$ = $1;
													  }|
								expression ',' assignment_expression {
																		$$ = $3;
																	 };

/*Declarations*/

declaration:                    type_specifier init_declarator_list_opt ';' {
																						if($2.symTPtr != NULL && $2.type != NULL && $2.type->type == tp_func)
																						{
																							/*Delete currentSymbolTable*/
																							
																							currentSymbolTable = new symbolTable();
																						}
																					};

init_declarator_list_opt:       init_declarator_list {
														if($1.type != NULL && $1.type->type == tp_func)
														{
															$$ = $1;
															
														}
													 }|
								/*epsilon*/ {
												$$.symTPtr = NULL;
											};


init_declarator_list:           init_declarator {
													/*Expecting only function declaration*/
													$$ = $1;
													
												}|
								init_declarator_list ',' init_declarator                ;

init_declarator:                declarator {
												/*Nothing to be done here*/
												if($1.type != NULL && $1.type->type == tp_func)
												{
													$$ = $1;
													
												}
											}|
								declarator '=' initializer {
																//initializations of declarators
																if($3.type!=NULL)
																{
																if($3.type->type==tp_int)
																{
																	$1.symTPtr->_init_val._INT_INITVAL= $3.symTPtr->_init_val._INT_INITVAL;
																	$1.symTPtr->isInitialized = true;
																	
																	symbol *temp_ver=currentSymbolTable->search($1.symTPtr->name);
																	if(temp_ver!=NULL)
																	{
																	//printf("po %s = %s\n",$1.symTPtr->name.c_str(),$3.symTPtr->name.c_str());
																	temp_ver->_init_val._INT_INITVAL= $3.symTPtr->_init_val._INT_INITVAL;
																	
																	temp_ver->isInitialized = true;
																	}
																}
																else if($3.type->type==tp_char)
																{
																	$1.symTPtr->_init_val._CHAR_INITVAL= $3.symTPtr->_init_val._CHAR_INITVAL;
																	$1.symTPtr->isInitialized = true;
																	
																	symbol *temp_ver=currentSymbolTable->search($1.symTPtr->name);
																	if(temp_ver!=NULL)
																	{temp_ver->_init_val._CHAR_INITVAL= $3.symTPtr->_init_val._CHAR_INITVAL;
																		temp_ver->isInitialized = true;
																	}
																}
																}
																//printf("%s = %s\n",$1.symTPtr->name.c_str(),$3.symTPtr->name.c_str());
																//typecheck(&$1,&$3,true);
																globalQuadArray.emit(Q_ASSIGN,$3.symTPtr->name,$1.symTPtr->name);
															};


type_specifier:                 VOID {
										globalType = new symbolType(tp_void);
									}|
								INT {
										globalType = new symbolType(tp_int);
									};


type_qualifier:                 CONST {}|
								RESTRICT {}|
								VOLATILE {};


declarator :                    pointer_opt direct_declarator {
																if($1.type == NULL)
																{
																	/*--------------*/
																	
																}
																else
																{
																	if($2.symTPtr->type->type != tp_ptr)
																	{
																		symbolType * test = $1.type;

																		int k = 2;
																		for(int i=0;i<10;++i) {
																			int l = 0;
																		}
																		if(k) {
																			for(int i=0;i<10;++i) {
																				int k;
																			}
																		}
																		else{
																			int o;
																		}
																		while(test->next != NULL)
																		{
																			test = test->next;
																		}
																		test->next = $2.symTPtr->type;
																		$2.symTPtr->type = $1.type;
																	}
																}

																if($2.type != NULL && $2.type->type == tp_func)
																{
																	$$ = $2;
																}
																else
																{
																	//its not a function
																	$2.symTPtr->width = $2.symTPtr->type->sizeOfType();
																	
																	$2.symTPtr->offset = currentSymbolTable->offset;
																	currentSymbolTable->offset += $2.symTPtr->width;
																	
																	$$ = $2;
																	$$.type = $$.symTPtr->type;
																}
															};

pointer_opt:                    pointer {
											$$ = $1;
										}|
								/*epsilon*/ {
												$$.type = NULL;
											};

direct_declarator:              IDENTIFIER {
													$$.symTPtr = currentSymbolTable->lookup(*$1.name);
												
													if($$.symTPtr->var_type == "")
													{
														//Type initialization
														$$.symTPtr->var_type = "local";
														$$.symTPtr->type = new symbolType(globalType->type);
														//$$.symTPtr->type->print();
													}
													$$.type = $$.symTPtr->type;
											}|
								direct_declarator '[' type_qualifier_list_opt assignment_expression_opt ']' {
																												//printf("Hello\n");
																												if($1.type->type == tp_arr)
																												{
																													/*if type is already an arr*/
																													symbolType * typ1 = $1.type,*typ = $1.type;
																													typ1 = typ1->next;
																													
																													while(typ1->next != NULL)
																													{
																														typ1 = typ1->next;
																														typ = typ->next;
																													}
																													typ->next = new symbolType(tp_arr,$4.symTPtr->_init_val._INT_INITVAL,typ1);
																												}
																												else
																												{
																													for(int l=0;l<10;++l) {
																														int pp = 0;
																													}
																													if(1) {
																														for(int m=0;m<10;++m) {
																															int k;
																														}
																													}
																													else{
																														int n;
																													}
																													//add the type of array to list
																													
																													if($4.symTPtr == NULL)
																														$1.type = new symbolType(tp_arr,-1,$1.type);
																													else
																														$1.type = new symbolType(tp_arr,$4.symTPtr->_init_val._INT_INITVAL,$1.type);
																												}
																												$$ = $1;
																												$$.symTPtr->type = $$.type;
																											}|
								direct_declarator '[' STATIC type_qualifier_list_opt assignment_expression ']' {}|
								direct_declarator '[' type_qualifier_list STATIC assignment_expression ']' {}|
								direct_declarator '[' type_qualifier_list_opt '*' ']' {/*Not sure but mostly we don't have to implement this*/}|
								direct_declarator '(' parameter_type_list ')' {
																				   int params_no=currentSymbolTable->emptyArgList;
																				   //printf("no.ofparameters-->%d\n",params_no);
																				   currentSymbolTable->emptyArgList=0;
																				   int dec_params=0;
																				   
																				   int over_params=params_no;
																				   for(int i=currentSymbolTable->symbolTabList.size()-1;i>=0;i--)
																				   {
																						//printf("what-->%s\n",currentSymbolTable->symbolTabList[i]->name.c_str());
																					}
																				   for(int i=currentSymbolTable->symbolTabList.size()-1;i>=0;i--)
																				   {
																						//printf("mazaknaminST-->%s\n",currentSymbolTable->symbolTabList[i]->name.c_str());
																						string detect=currentSymbolTable->symbolTabList[i]->name;
																						if(over_params==0)
																						{
																							break;
																						}
																						if(detect.size()==4)
																						{
																							if(detect[0]=='t')
																							{
																								
																								if('0'<=detect[1]&&detect[1]<='9')
																								{
																									if('0'<=detect[2]&&detect[2]<='9')
																									{
																										if('0'<=detect[3]&&detect[3]<='9')
																											dec_params++;
																									}
																								}
																							}
																						}
																						else
																							over_params--;

																				   }
																				   params_no+=dec_params;
																				   //printf("no.ofparameters-->%d\n",params_no);
																				   int temp_i=currentSymbolTable->symbolTabList.size()-params_no;
																				   symbol * new_func = globalSymbolTable->search(currentSymbolTable->symbolTabList[temp_i-1]->name);
																				
																					if(new_func == NULL)
																					{
																						new_func = globalSymbolTable->lookup(currentSymbolTable->symbolTabList[temp_i-1]->name);
																						$$.symTPtr = currentSymbolTable->symbolTabList[temp_i-1];
																						
																						for(int i=0;i<(temp_i-1);i++)
																						{
																							currentSymbolTable->symbolTabList[i]->isValid=false;
																							if(currentSymbolTable->symbolTabList[i]->var_type=="local"||currentSymbolTable->symbolTabList[i]->var_type=="temp")
																							{
																								symbol *glob_var=globalSymbolTable->search(currentSymbolTable->symbolTabList[i]->name);
																								if(glob_var==NULL)
																								{
																									
																									glob_var=globalSymbolTable->lookup(currentSymbolTable->symbolTabList[i]->name);
																									int t_size=currentSymbolTable->symbolTabList[i]->type->sizeOfType();
																									glob_var->offset=globalSymbolTable->offset;
																									glob_var->width=t_size;
																									globalSymbolTable->offset+=t_size;
																								
																									glob_var->nested=globalSymbolTable;
																									glob_var->var_type=currentSymbolTable->symbolTabList[i]->var_type;
																									glob_var->type=currentSymbolTable->symbolTabList[i]->type;
																									if(currentSymbolTable->symbolTabList[i]->isInitialized)
																									{
																										glob_var->isInitialized=currentSymbolTable->symbolTabList[i]->isInitialized;
																										glob_var->_init_val=currentSymbolTable->symbolTabList[i]->_init_val;
																									}

																								}
																							}
																						}
																						if(new_func->var_type == "")
																						{
																							// Declaration of the function for the first time
																							new_func->type = CopyType(currentSymbolTable->symbolTabList[temp_i-1]->type);
													
																							new_func->var_type = "func";
																							new_func->isInitialized = false;
																							new_func->nested = currentSymbolTable;
																							
																							currentSymbolTable->name = currentSymbolTable->symbolTabList[temp_i-1]->name;
																						
																							currentSymbolTable->symbolTabList[temp_i-1]->name = "retVal";
																							currentSymbolTable->symbolTabList[temp_i-1]->var_type = "return";
																							currentSymbolTable->symbolTabList[temp_i-1]->width = currentSymbolTable->symbolTabList[temp_i-1]->type->sizeOfType();
																							currentSymbolTable->symbolTabList[temp_i-1]->offset = 0;
																							currentSymbolTable->offset = 16;
																							int count=0;
																							for(int i=(currentSymbolTable->symbolTabList.size())-params_no;i<currentSymbolTable->symbolTabList.size();i++)
																							{
																								currentSymbolTable->symbolTabList[i]->var_type = "param";
																								currentSymbolTable->symbolTabList[i]->offset = count- currentSymbolTable->symbolTabList[i]->width;
																								count=count-currentSymbolTable->symbolTabList[i]->width;
																							}
																						}
																					}
																					else
																					{
																						currentSymbolTable = new_func->nested;
																						
																					}
																					currentSymbolTable->initQuad = nextInstruction;
																					$$.symTPtr = new_func;
																					$$.type = new symbolType(tp_func);
																				}|
								direct_declarator '(' identifier_list_opt ')' {
																				int temp_i=currentSymbolTable->symbolTabList.size();
																				symbol * new_func = globalSymbolTable->search(currentSymbolTable->symbolTabList[temp_i-1]->name);
																				if(new_func == NULL)
																				{
																					
																					new_func = globalSymbolTable->lookup(currentSymbolTable->symbolTabList[temp_i-1]->name);
																					$$.symTPtr = currentSymbolTable->symbolTabList[temp_i-1];
																					
																					for(int i=0;i<temp_i-1;i++)
																					{
																						currentSymbolTable->symbolTabList[i]->isValid=false;
																						if(currentSymbolTable->symbolTabList[i]->var_type=="local"||currentSymbolTable->symbolTabList[i]->var_type=="temp")
																						{
																							symbol *glob_var=globalSymbolTable->search(currentSymbolTable->symbolTabList[i]->name);
																							if(glob_var==NULL)
																							{
																								//printf("glob_var-->%s\n",currentSymbolTable->symbolTabList[i]->name.c_str());
																								glob_var=globalSymbolTable->lookup(currentSymbolTable->symbolTabList[i]->name);
																								int t_size=currentSymbolTable->symbolTabList[i]->type->sizeOfType();
																								
																								glob_var->offset=globalSymbolTable->offset;
																								glob_var->width=t_size;
																								globalSymbolTable->offset+=t_size;
																								
																								glob_var->nested=globalSymbolTable;
																								glob_var->var_type=currentSymbolTable->symbolTabList[i]->var_type;
																								glob_var->type=currentSymbolTable->symbolTabList[i]->type;
																								if(currentSymbolTable->symbolTabList[i]->isInitialized)
																								{
																									glob_var->isInitialized=currentSymbolTable->symbolTabList[i]->isInitialized;
																									glob_var->_init_val=currentSymbolTable->symbolTabList[i]->_init_val;
																								}
																							}
																						}
																					}
																					if(new_func->var_type == "")
																					{
																						/*Function is being declared here for the first time*/
																						new_func->type = CopyType(currentSymbolTable->symbolTabList[temp_i-1]->type);
																						new_func->var_type = "func";
																						new_func->isInitialized = false;
																						new_func->nested = currentSymbolTable;
																						
																						/*Change the first element to retval and change the rest to param*/
																						currentSymbolTable->name = currentSymbolTable->symbolTabList[temp_i-1]->name;
																						currentSymbolTable->symbolTabList[temp_i-1]->name = "retVal";
																						currentSymbolTable->symbolTabList[temp_i-1]->var_type = "return";
																						currentSymbolTable->symbolTabList[temp_i-1]->width = currentSymbolTable->symbolTabList[0]->type->sizeOfType();
																						currentSymbolTable->symbolTabList[temp_i-1]->offset = 0;
																						currentSymbolTable->offset = 16;
																					}
																				}
																				else
																				{
																					// Already declared function. Therefore drop the new table and connect current symbol table pointer to the previously created funciton symbol table
																					currentSymbolTable = new_func->nested;
																					
																				}
																				currentSymbolTable->initQuad = nextInstruction;
																				$$.symTPtr = new_func;
																				$$.type = new symbolType(tp_func);
																			};

type_qualifier_list_opt:        type_qualifier_list {}|
								/*epsilon*/ {};

assignment_expression_opt:      assignment_expression {
															$$ = $1;
														}|
								/*epsilon*/ {
												$$.symTPtr = NULL;
												
											};

identifier_list_opt:            identifier_list                                         |
								/*epsilon*/                                             ;

pointer:                        '*' {
																$$.type = new symbolType(tp_ptr);
															}
type_qualifier_list:            type_qualifier {}|
								type_qualifier_list type_qualifier {};

parameter_type_list:            parameter_list {
													/*-------*/
												}|
								parameter_list ',' ELLIPSIS {};

parameter_list:                 parameter_declaration {
															/*---------*/
															(currentSymbolTable->emptyArgList)++;
														}|
								parameter_list ',' parameter_declaration {
																			/*------------*/
																			(currentSymbolTable->emptyArgList)++;
																		};

parameter_declaration:          type_specifier declarator {
																		/*The parameter is already added to the current Symbol Table*/
																  }|
								type_specifier {};

identifier_list :               IDENTIFIER                                              |
								identifier_list ',' IDENTIFIER                          ;
                            ;

initializer:                    assignment_expression {
									$$ = $1;
								};

/*Statements*/
statement:                      
								compound_statement {
														$$ = $1;
													}|
								expression_statement {
														$$ = NULL;
													}|
								selection_statement {
														$$ = $1;
													}|
								iteration_statement {
														$$ = $1;
													}|
								jump_statement {
													$$ = $1;
													
												};


compound_statement:             '{' block_item_list_opt '}' {
																$$ = $2;
															};

block_item_list_opt:            block_item_list {
													$$ = $1;
												}|
								/*Epslion*/ {
												$$ = NULL;
												
											};

block_item_list:                block_item {
												$$ = $1;
											}|
								block_item_list M block_item {
																	backpatch($1,$2);
																	$$ = $3;
															 };

block_item:                     declaration {
												$$ = NULL;
											}|
								statement {
												$$ = $1;
										  };

expression_statement:           expression_opt ';'{
														$$ = $1;
												  };

expression_opt:                 expression {
												$$ = $1;
										   }|
								/*Epslion*/ {
												/*Initialize Expression to NULL*/
												$$.symTPtr = NULL;
											};

selection_statement:            IF '(' expression N ')' M statement N ELSE M statement {
																							/*N1 is used for falselist of expression, M1 is used for truelist of expression, N2 is used to prevent fall through, M2 is used for falselist of expression*/
																							$7 = merge($7,$8);
													
																							$11 = merge($11,makelist(nextInstruction));
																							globalQuadArray.emit(Q_GOTO,"-1");
																							backpatch($4,nextInstruction);
																							
																							CONV2BOOL(&$3);

																							backpatch($3.truelist,$6);
																							backpatch($3.falselist,$10);
																							$$ = merge($7,$11);
																						}|
								IF '(' expression N ')' M statement %prec IF_CONFLICT{
																		/*N is used for the falselist of expression to skip the block and M is used for truelist of expression*/
																		$7 = merge($7,makelist(nextInstruction));
																		globalQuadArray.emit(Q_GOTO,"-1");
																		backpatch($4,nextInstruction);
																		CONV2BOOL(&$3);
																		
																		backpatch($3.truelist,$6);
																		$$ = merge($7,$3.falselist);
																	};

iteration_statement:            FOR '(' expression_opt ';' M expression_opt N ';' M expression_opt N ')' M statement {
																													   /*M1 is used for coming back to check the epression at every iteration. N1 is used  for generating the goto which will be used for exit conditions. M2 is used for _nextlist of statement and N2 is used for jump to check the expression and M3 is used for the truelist of expression*/
																														backpatch($11,$5);          /*N2._nextlist to M1._instruction*/
																														backpatch($14,$9);          /*S._nextlist to M2._instruction*/
																														globalQuadArray.emit(Q_GOTO,$9);
																														
																														backpatch($7,nextInstruction);    /*N1._nextlist to nextInstruction*/
																														CONV2BOOL(&$6);
																														
																														backpatch($6.truelist,$13);
																														$$ = $6.falselist;
																													}|
								FOR '(' declaration expression_opt ';' expression_opt ')' statement {};

jump_statement:                 
								RETURN expression_opt ';' {
																if($2.symTPtr == NULL)
																	globalQuadArray.emit(Q_RETURN);
																else
																{
																	expression * dummy = new expression();
																	dummy->symTPtr = currentSymbolTable->symbolTabList[0];
																	dummy->type = dummy->symTPtr->type;
																	typecheck(dummy,&$2,true);
																	
																	delete dummy;
																	globalQuadArray.emit(Q_RETURN,$2.symTPtr->name);
																}
																$$=NULL;
														  };

/*External Definitions*/
translation_unit:               external_declaration                                    |
								translation_unit external_declaration                   ;

external_declaration:           function_definition                                     |
								declaration      {
									for(int i=0;i<currentSymbolTable->symbolTabList.size();i++)
									{
										if(currentSymbolTable->symbolTabList[i]->nested==NULL)
										{
											
											if(currentSymbolTable->symbolTabList[i]->var_type=="local"||currentSymbolTable->symbolTabList[i]->var_type=="temp")
											{
												symbol *glob_var=globalSymbolTable->search(currentSymbolTable->symbolTabList[i]->name);
												if(glob_var==NULL)
												{
													glob_var=globalSymbolTable->lookup(currentSymbolTable->symbolTabList[i]->name);
													int t_size=currentSymbolTable->symbolTabList[i]->type->sizeOfType();
													glob_var->offset=globalSymbolTable->offset;
													
													glob_var->width=t_size;
													globalSymbolTable->offset+=t_size;
													glob_var->nested=globalSymbolTable;
													
													glob_var->var_type=currentSymbolTable->symbolTabList[i]->var_type;
													glob_var->type=currentSymbolTable->symbolTabList[i]->type;
													if(currentSymbolTable->symbolTabList[i]->isInitialized)
													{
														glob_var->isInitialized=currentSymbolTable->symbolTabList[i]->isInitialized;
														glob_var->_init_val=currentSymbolTable->symbolTabList[i]->_init_val;
													}
												}
											}
										}
									}
								};

function_definition:    type_specifier declarator declaration_list_opt compound_statement {
																									symbol * func = globalSymbolTable->lookup($2.symTPtr->name);
																									//printf("Hello2\n");
																									func->nested->symbolTabList[0]->type = CopyType(func->type);
																									func->nested->symbolTabList[0]->name = "retVal";
																									
																									func->nested->symbolTabList[0]->offset = 0;
																									//If return type is pointer then change the offset
																									if(func->nested->symbolTabList[0]->type->type == tp_ptr)
																									{
																										int diff = __POINTER_SIZE - func->nested->symbolTabList[0]->width;
																										func->nested->symbolTabList[0]->width = __POINTER_SIZE;
																										for(int i=1;i<func->nested->symbolTabList.size();i++)
																										{
																											func->nested->symbolTabList[i]->offset += diff;
																										}
																									}
																									int offset_size = 0;
																									for(int i=0;i<func->nested->symbolTabList.size();i++)
																									{
																										offset_size += func->nested->symbolTabList[i]->width;
																									}
																									func->nested->lastQuad = nextInstruction-1;
																									//Create a new Current Symbol Table
																									currentSymbolTable = new symbolTable();
																								};

declaration_list_opt:           declaration_list                                        |
								/*epsilon*/                                             ;

declaration_list:               declaration                                             |
								declaration_list declaration                            ;

%%
void yyerror(const char*s)
{
	printf("%s",s);
}
