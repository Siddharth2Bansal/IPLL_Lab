MAIN := A6_20
IN_DIR := ./input
OUT_DIR := ./output
TESTFILES := $(wildcard $(IN_DIR)/*.nc) 

tinyc: y.tab.o lex.yy.o $(MAIN)_translator.o $(MAIN)_converter.o 
	@g++ -no-pie -g $(MAIN)_translator.o $(MAIN)_converter.o lex.yy.o y.tab.o -lfl -o tinyc

lex.yy.c: $(MAIN).l
	@flex $(MAIN).l

y.tab.c: $(MAIN).y
	@yacc -dtv $(MAIN).y

$(MAIN)_converter.o: $(MAIN)_converter.cpp
	@g++ -no-pie -g -c $(MAIN)_converter.cpp

$(MAIN)_translator.o: $(MAIN)_translator.cpp
	@g++ -no-pie -g -c $(MAIN)_translator.cpp

lex.yy.o: lex.yy.c
	@g++ -no-pie -g -c lex.yy.c

y.tab.o:    y.tab.c
	@g++ -no-pie -g -DYYDEBUG -c y.tab.c

libmyl.a: myl.o
	@ar -rcs libmyl.a myl.o

ass2_16CS10053.o: myl.c myl.h
	@g++ -no-pie -Wall  -c myl.c

clean:
	@rm *.s \
	test1 test2 test3 test4 test5 \
	lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o \
	*.o libmyl.a \
	*.out tinyc


test1: $(MAIN)_test1.o libmyl.a
	@gcc -no-pie -g $(MAIN)_test1.o -o test1 -L. -lmyl

$(MAIN)_test1.o: $(MAIN)_test1.s myl.h
	@gcc -no-pie -g -Wall  -c $(MAIN)_test1.s -o $(MAIN)_test1.o

test2: $(MAIN)_test2.o libmyl.a
	@gcc -no-pie -g  $(MAIN)_test2.o -o test2 -L. -lmyl
$(MAIN)_test2.o: $(MAIN)_test2.s myl.h
	@gcc -no-pie -g -Wall -c $(MAIN)_test2.s

test3: $(MAIN)_test3.o libmyl.a
	@gcc -no-pie -g  $(MAIN)_test3.o -o test3 -L. -lmyl
$(MAIN)_test3.o: $(MAIN)_test3.s myl.h
	@gcc -no-pie -g -Wall  -c $(MAIN)_test3.s

test4: $(MAIN)_test4.o libmyl.a
	@gcc -no-pie -g  $(MAIN)_test4.o -o test4 -L. -lmyl
$(MAIN)_test4.o: $(MAIN)_test4.s myl.h
	@gcc -no-pie -g -Wall  -c $(MAIN)_test4.s

test5: $(MAIN)_test5.o libmyl.a
	@gcc -no-pie -g  $(MAIN)_test5.o -o test5 -L. -lmyl
$(MAIN)_test5.o: $(MAIN)_test5.s myl.h
	@gcc -no-pie -g -Wall -c $(MAIN)_test5.s

#output: output.o
output: output.o libmyl.a
	@gcc -no-pie -g  output.o -o output -L. -lmyl
output.o: output.s myl.h
	@gcc -no-pie -g -Wall -c output.s

run: 
		
	@./tinyc < ./input/test1.nc > $(MAIN)_quad1.out
	
	@mv output.s $(MAIN)_test1.s
	
	@make test1
	
	@./tinyc < ./input/test2.nc > $(MAIN)_quad2.out

	@mv output.s $(MAIN)_test2.s
	
	@make test2

	@./tinyc < ./input/test3.nc > $(MAIN)_quad3.out

	@mv output.s $(MAIN)_test3.s

	@make test3

	@./tinyc < ./input/test4.nc > $(MAIN)_quad4.out
	
	@mv output.s $(MAIN)_test4.s

	@make test4

	@./tinyc < ./input/test5.nc > $(MAIN)_quad5.out
	
	@mv output.s $(MAIN)_test5.s

	@make test5
	@echo ""
	@echo "Commands for Test Cases"
	@echo "Test Case 1 : Calculate Interest    Command : ./test1"
	@echo "Test Case 2 : Palindrome or Not     Command : ./test2"
	@echo "Test Case 3 : Sum of Digits         Command : ./test3"
	@echo "Test Case 4 : Longest Common Subse. Command : ./test4"
	@echo "Test Case 5 : Merge Sort            Command : ./test5"