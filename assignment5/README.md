# Assignment 5 - IPLL Lab IIT Guwahati

This assignment contains the Bison code to translate a nanoC program into an array of 3-address quad's, a symbol table and other auxiliary data structures.

## Group 20
- Arya Avinash Phadke - 200101020
- Siddharth Bansal - 200101093

A5_20.y contains the bison specifications of nanoC.
A5_20.l contains the flex specifications required to run the bison file.
A5_20_translator.h is the header file containing the declarations of the data structures.
A5_20_translator.cpp contains the main function which uses the bison/lex library and the implementation of the data strutures. 
Makefile contains the commands to generate the required tab files and the executable file and to run them.

## To run the file
The input file is of the format A5_20_test[number].nc
Multiple files can be given as input at the same time
In the terminal, enter `make`.
The output which is the Quad Array and the Symbol Table is printed in A5_20_quads[number].out
To clean up the generated files, enter `make clean` in the terminal.

Augmentation to the grammer: removed -> operation 
- Added empty non terminal symbols in a lot of productions to adjust the control flow
- In relational operations added non terminals in some logical expressions to allow for conversion of int to bool(by comparing it with 0) in a smooth manner - Added nonterminal "changetable" to handle changing symbol table when encountering different scopes
