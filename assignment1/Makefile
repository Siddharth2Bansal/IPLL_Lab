MAKEFLAGS += -s
TARGET1 = A1A_200101093
TARGET2 = A1B_200101093
.PHONY: default

A: A_ clean_A
B: B_ clean_B


A_: $(TARGET1)
	./$(TARGET1)
	

$(TARGET1): $(TARGET1).o
	gcc -no-pie -o  $(TARGET1) $(TARGET1).o

$(TARGET1).o: $(TARGET1).asm
	nasm $(TARGET1).asm -f elf64 -o $(TARGET1).o


clean_A: 
	rm $(TARGET1) $(TARGET1).o


B_: $(TARGET2)
	./$(TARGET2)
	

$(TARGET2): $(TARGET2).o
	gcc -no-pie -o  $(TARGET2) $(TARGET2).o

$(TARGET2).o: $(TARGET2).asm
	nasm $(TARGET2).asm -f elf64 -o $(TARGET2).o

clean_B: 
	rm $(TARGET2) $(TARGET2).o