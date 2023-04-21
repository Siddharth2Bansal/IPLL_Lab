# Makefile variables
RM = rm -f
MAIN = A5_20
CC = g++
TEST = test1


$(MAIN)_output.txt: a.out $(TEST).nc
	./a.out < $(TEST).nc > output.txt

a.out: lex.yy.o $(MAIN).tab.o $(MAIN)_translator.o
	$(CC) lex.yy.o $(MAIN).tab.o $(MAIN)_translator.o

$(MAIN).tab.c: $(MAIN).y
	bison -dty $(MAIN).y 

lex.yy.c: $(MAIN).l $(MAIN).tab.h 
	flex $(MAIN).l

$(MAIN).tab.h: $(MAIN).y
	bison -d $(MAIN).y 

$(MAIN)_translator.o:
	$(CC) -c $(MAIN)_translator.cpp

lex.yy.o: lex.yy.c
	$(CC) -c lex.yy.c

$(MAIN).tab.o: $(MAIN).tab.c
	$(CC) -c $(MAIN).tab.c

clean:
	$(RM) a.out lex.yy.* *.o *.tab.* *.output