MAKEFLAGS += -s
LEX = A3_20
MAIN = A3_20

default: run clean

exe: lex_ 
	gcc $(MAIN).c lex.yy.c

lex_: $(LEX).l
	lex $(LEX).l

run: exe
	./a.out > out.txt

clean:
	rm lex.yy.c a.out