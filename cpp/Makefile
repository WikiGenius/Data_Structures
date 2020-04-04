# /********************************************************

# makefile

# Author: Muhammed El-Yamani
# muhammedelyamani92@gmail.cppom
# March 2020


# ********************************************************/
# CFLAGS=-c -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow

CC=clang++
CFLAGS=-c 
LDLIBS=-lm
bin_src=bin/
lib=library/
linked_list=$(lib)linked_list/


all: main

main: main.o linked_list.o
	$(CC)  $(bin_src)*.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -o $(bin_src)main.o

linked_list.o: $(linked_list)linked_list.cpp
	$(CC) $(CFLAGS) $(linked_list)linked_list.cpp -o $(bin_src)linked_list.o

.PHONY: clean 

clean: 
	rm -rf */*.o a.out main
