# /********************************************************

# makefile

# Author: Muhammed El-Yamani
# muhammedelyamani92@gmail.cppom
# March 2020


# ********************************************************/

CC=clang++
CFLAGS=-c -ggdb3 -Wall -Werror
LDLIBS=-lm
bin_src=bin/
lib=library/

all: main

main: main.o library.o
	$(CC)  $(bin_src)*.o -o main

main.o: main.cpp $(lib)library.hpp
	$(CC) $(CFLAGS) main.cpp -o $(bin_src)main.o

library.o: $(lib)library.cpp
	$(CC) $(CFLAGS) $(lib)library.cpp -o $(bin_src)library.o

.PHONY: clean 

clean: 
	rm -rf */*.o a.out main
