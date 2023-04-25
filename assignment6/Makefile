MAKEFLAGS += -s
MAIN := A6_20
INPUT_DIR:= input
OUTPUT_DIR:= output
QUAD_DIR := quads
EXEC_DIR:= exec
ASSEMBLY_DIR := assembly

.PHONY: test
TEST_CASES := $(wildcard $(INPUT_DIR)/*.nc)

nanoC: y.tab.o lex.yy.o $(MAIN)_translator.o $(MAIN)_converter.o 
	@g++ -no-pie -g $(MAIN)_translator.o $(MAIN)_converter.o lex.yy.o y.tab.o -lfl -o nanoC

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
	cc    -c -o myl.o myl.c
	@ar -rcs libmyl.a myl.o


clean:
	@rm -f *.s  lex.yy.c y.tab.h y.output y.tab.c  *.o libmyl.a  *.out nanoC
	rm -rf $(QUAD_DIR) $(EXEC_DIR) $(OUTPUT_DIR) $(ASSEMBLY_DIR)


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


run:  libmyl.a
	mkdir -p $(QUAD_DIR)
	mkdir -p $(ASSEMBLY_DIR)
	mkdir -p $(EXEC_DIR)
	mkdir -p $(OUTPUT_DIR)

	$(foreach test_case,$(TEST_CASES),\
		echo starting test case $$(basename $(test_case) .nc); \
        ./nanoC < $(test_case) > $(QUAD_DIR)/$$(basename $(test_case) .nc).out; \
        mv output.s ./$(ASSEMBLY_DIR)/$$(basename $(test_case) .nc).s; \
		echo assembly file $(ASSEMBLY_DIR)/$$(basename $(test_case) .nc).s made; \
		echo compiling .o file $$(basename $(test_case) .nc).o; \
		gcc -no-pie -g -Wall -c ./$(ASSEMBLY_DIR)/$$(basename $(test_case) .nc).s -o ./$(OUTPUT_DIR)/$$(basename $(test_case) .nc).o; \
		gcc -no-pie -g  ./$(OUTPUT_DIR)/$$(basename $(test_case) .nc).o -o ./$(EXEC_DIR)/$$(basename $(test_case) .nc) -L. -lmyl; \
		echo executable file for $$(basename $(test_case) .nc) made, to run, use command ./$(EXEC_DIR)/$$(basename $(test_case) .nc); \
		echo; \
    )
