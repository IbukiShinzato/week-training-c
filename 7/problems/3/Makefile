CC = gcc
TARGET = a.out
SRCS = $(wildcard *.c) 

all: format build run

format:
	clang-format -i $(SRCS)

build:
	$(CC) $(SRCS) -o $(TARGET)

run:
	./$(TARGET)

clean:
	rm -f $(TARGET)
