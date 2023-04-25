Group Number : 20
Group Members: Arya Avinash Phadke - 200101020
               Siddharth Bansal    - 200101093
Course : CS348 IPLL Implementation of Programming Languages Lab


Assignment 4
A5_20.y contains the bison specifications of nanoC.
A5_20.l contains the flex specifications required to run the bison file.
A5_20.c contains the main function which uses the bison/lex library.
Makefile contains the commands to generate the required tab files and the executable file and to run them.

How to run?
Open the folder containing the files in terminal. 
Command : make  


Augmentation to the grammer:
    removed -> operation
    added Empty non terminal symbols in a lot of productions to adjust the control flow in relational operations
    added non terminals in some logical expressions to allow for conversion of int to bool(by comparing it with 0) in a smooth manner
    added nontermial "changetable" to handle changing symbol table when encountering different scopes