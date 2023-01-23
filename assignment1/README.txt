Name : Siddharth Bansal
Roll number : 200101093
Course : CS348 IPLL Implementation of Programming Languages Lab
Assignment 1
I was assigned question number 2 from set A and 11 from set B.

Makefile is included in the zip file along with the readme and the codes.

Set A question 2
the problem was to read an integer array of n numbers form user input and print the sum of the first k numbers from the array.
the values of n and k were taken from user input as well.
I added the first k numbers (or n if n<k) and printed the sum to stdout.
the maximum value of n is assumed to be 100.
the exit code when n<k is set as 1.

Set b question 11
the problem was to find the Kth larget element of an floating point integer array using selection sort.
The values of k and the number of elements of the array is taken by user input.
I used the standard selection sort algorithm to sort the floating point numbers and then printed the (n-k)th element of the array.
the maximum length of the array is assumed to be 100.
it is assumed that the value of k is not greater than the value of n

Commands to run the programs:
The following commands creates the executable, runs it and then delets the object file and the executable after use.

set A command: make A
set B command: make B

Make sure that the makefile and the codes are present in the same directory when using.
do not change the name of the asm files if using the make command.

the error in makefile when K>N in set A question is because the exit code of the program was 1 in this case.