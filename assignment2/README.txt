CS 348 Implementation of Programming Languages Lab
Assignment 2

Name: Siddharth Bansal
Roll number: 200101093

Files information:
- input file should be in the same directory as the cpp file.
- the generated intermediate code will be put in "intermediate.txt" which will be created in the same directory.
- the required machine code is in the file "output.txt" which is also in the same directory.
- the optable and the symbol table are in the files "optable.txt" and "symbol_table.txt" respectively.

Assumptions:
- lines beginning with the symbol "." as their first non-whitespace character are treated as comments.
- any amount of ' ' or '\t' can be present between the labels, operands and opcodes.
- instructions of the type "LABEL OPCODE" are not present in the code, the only 2 word instructions present are of the type "OPCODE OPERAND".
- no instruction/comment is present after END instruction.

Basic error checking such as duplicate symbol definition and undeclared symbol usage and invalid opcode is done.
In case of errors during execution, the reason for error is printed in the terminal.

Steps to run code:

compile using: g++ A2_200101093.cpp

Run using:
./a.out <input file>
eg- ./a.out input.txt