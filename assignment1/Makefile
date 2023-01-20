MAKEFLAGS += -s
TARGET = test1
DEPS = functions
.PHONY: default


default: run clean

run: $(TARGET)
	./$(TARGET)
	

$(TARGET): $(TARGET).o
	gcc -no-pie -g -o  $(TARGET) $(TARGET).o

$(TARGET).o: $(TARGET).asm
	nasm $(TARGET).asm -f elf64 -o $(TARGET).o

clean: 
	rm $(TARGET) $(TARGET).o