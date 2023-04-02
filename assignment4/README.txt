Group Number : 20
Group Members: Arya Avinash Phadke - 200101020
               Siddharth Bansal    - 200101093
Course : CS348 IPLL Implementation of Programming Languages Lab


Assignment 4
A4_20.y contains the bison specifications of nanoC.
A4_20.l contains the flex specifications required to run the bison file.
A4_20.c contains the main function which uses the bison/lex library.
Makefile contains the commands to generate the required tab files and the executable file and to run them.
The rules used to reduce the test.nc file in order are printed in the output.txt file.

There was some issue in the grammar specification given in the assignment. These two changes have been made from our side.

 - Removed '(' declaration_list_opt ')' from function function_definition
 - To allow multiple translation units, new grammar rules have been added.

How to run?
Open the folder containing the files in terminal. 
Command : make