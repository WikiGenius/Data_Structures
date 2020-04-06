# /********************************************************

# makefile

# Author: Muhammed El-Yamani
# muhammedelyamani92@gmail.cppom
# March 2020


# ********************************************************/

CC=clang++
CFLAGS=-c -ggdb3 -Wall -Werror
LDLIBS=-lm
lib=library/

all: main

main: main.o library.o
	$(CC)  *.o -o main

main.o: main.cpp $(lib)library.hpp
	$(CC) $(CFLAGS) main.cpp -o main.o

library.o: $(lib)library.cpp
	$(CC) $(CFLAGS) $(lib)library.cpp -o library.o

.PHONY: clean 

clean: 
	rm -rf *.o a.out main
