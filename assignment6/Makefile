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



run:  nanoC libmyl.a 
	mkdir -p $(QUAD_DIR)
	mkdir -p $(ASSEMBLY_DIR)
	mkdir -p $(EXEC_DIR)
	mkdir -p $(OUTPUT_DIR)

	$(foreach test_case,$(TEST_CASES),\
		echo Starting Test Case $$(basename $(test_case) .nc); \
        ./nanoC < $(test_case) > $(QUAD_DIR)/$$(basename $(test_case) .nc).out; \
        mv output.s ./$(ASSEMBLY_DIR)/$$(basename $(test_case) .nc).s; \
		echo Assembly File $(ASSEMBLY_DIR)/$$(basename $(test_case) .nc).s made; \
		echo Compiling .o File $$(basename $(test_case) .nc).o; \
		gcc -no-pie -g -Wall -c ./$(ASSEMBLY_DIR)/$$(basename $(test_case) .nc).s -o ./$(OUTPUT_DIR)/$$(basename $(test_case) .nc).o; \
		gcc -no-pie -g  ./$(OUTPUT_DIR)/$$(basename $(test_case) .nc).o -o ./$(EXEC_DIR)/$$(basename $(test_case) .nc) -L. -lmyl; \
		echo Executable File for $$(basename $(test_case) .nc) made. To run, use command ./$(EXEC_DIR)/$$(basename $(test_case) .nc); \
		echo; \
    )
