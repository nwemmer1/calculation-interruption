# Mention Default target
program = pa1
program-objects = pa1.o

.PHONY: all
all: pa1

pa1: pa1.o
	g++ --std=gnu++11 -o pa1 pa1.o

pa1.o: pa1.cc
	g++ --std=gnu++11 -c pa1.cc

.PHONY: clean
clean:
	rm pa1.o