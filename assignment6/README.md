# Assignment 6 - IPLL Lab IIT Guwahati

This assignment contains the code to translate a nanoC program into an array of 3-address quad's, a symbol table and other auxiliary data structures, to use the generated tables and quad array to create assembly its assembly code for x86-64 architecture and c=to compile the assembly files into executables.

## Group 20
- Arya Avinash Phadke - 200101020
- Siddharth Bansal - 200101093

A6_20.y contains the bison specifications of nanoC.
A6_20.l contains the flex specifications required to run the bison file.
A6_20_translator.h is the header file containing the declarations of the data structures.
A6_20_translator.cpp contains the main function which uses the bison/lex library and the implementation of the data strutures. 
A6_20_converter.cpp contains the functions used to translate the quad array and symbol table into assembly code.
Makefile contains the commands to generate the required tab files and the executable file and to run them.

## To run the file
The input file is of the format A6_20_test[number].nc
Multiple files can be given as input at the same time
to add a new input file, create the input file with the specified name in the inpt folder and add its number in the makefile
In the terminal, enter `make`.
The output which is the Quad Array and the Symbol Table is printed in A5_20_quads[number].out
the quads are saved in the directory quads
the assembly files are saved in the directory assembly
the executables generated from the assembly code are present in the folder exec
To clean up the generated files, enter `make clean` in the terminal.
