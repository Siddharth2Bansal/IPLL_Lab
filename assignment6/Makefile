# Makefile variables
MAKEFLAGS += -s
RM := rm -rf
MAIN := A6_20
EXEC := ./nanoC
IN_DIR := ./input
OUT_DIR := ./output
TESTFILES := $(wildcard $(IN_DIR)/*.nc) # [./input/test1.c, ./input/test2.c, ...]
_INPUTS := $(notdir $(TESTFILES)) # [test1.c, test2.c, ...]
CC := g++

# Colors for printing and logging information on console
LOG:= \033[0;36m
SUCCESS:= \033[0;32m
INFO:= \033[0;33m
RESET:= \033[0m

# Functions for printing and logging information on console
define log
  	printf  "${LOG}%s ${INFO}%s${RESET}\n" "$1" "$2"
endef

define success
  	printf "${SUCCESS}%s${RESET}\n" "$1"
endef

# Explicit newline function
define newline 


endef

default: test

# Makefile recipes
$(EXEC): y.tab.o lex.yy.o $(MAIN)_translator.o $(MAIN)_converter.o myl.o
	$(CC) -g $(MAIN)_translator.o $(MAIN)_converter.o lex.yy.o y.tab.o -lfl -o $(EXEC)
	$(call success,$(EXEC) binary successfully generated) 


$(MAIN)_converter.o: $(MAIN)_converter.cpp
	$(CC) -g -c -no-pie $(MAIN)_converter.cpp
	$(call success,converter object file made)

$(MAIN)_translator.o: $(MAIN)_translator.cpp
	$(CC) -g -c -no-pie $(MAIN)_translator.cpp
	$(call success,translator object file made)

lex.yy.o: $(MAIN).l
	flex $(MAIN).l
	$(CC) -g -c -no-pie lex.yy.c
	$(call success,lex file compiled)

y.tab.o: $(MAIN).y
	yacc -dtv $(MAIN).y -Wno-empty-rule -Wno-yacc -Wno-conflicts-rr
	$(CC) -g -no-pie -DYYDEBUG -c y.tab.c
	$(call success,bison file compiled)

myl.o: myl.cpp myl.h
	$(CC) -g -no-pie -Wall -c myl.cpp
	$(call success,myl file compiled)

test: $(EXEC)
	$(call log,::Creating output directory [if it doesn't exists]::)
	mkdir -p $(OUT_DIR)

	$(call log,::Initiating testing...::)

	$(foreach in_file, $(_INPUTS), $(call log,::Testing file::, $(in_file)) $(newline) $(EXEC) < $(IN_DIR)/$(in_file) > $(OUT_DIR)/$(in_file:.nc=quads.out) $(newline) mv $(OUT_DIR).s $(OUT_DIR)/$(in_file:.nc=.s) $(newline))

	$(call success,Test outputs written to $(OUT_DIR))

clean:
	$(RM) \
	lex.yy.c y.tab.h y.tab.c y.output \
	*.o *.s *.a *.out *.gch $(EXEC)
	$(call success,cleaned)
