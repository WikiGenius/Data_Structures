# /********************************************************

# makefile

# Author: Muhammed El-Yamani
# muhammedelyamani92@gmail.cppom
# March 2020


# ********************************************************/
# CFLAGS=-c -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow

CC=clang
CFLAGS=-c  
LDLIBS=-lm
bin_src=bin/
lib=library/
linked_list=$(lib)linked_list/


all: main

main: main.o singly_linked_list.o doubly_linked_list.o
	$(CC) $(LDLIBS) $(bin_src)main.o $(bin_src)singly_linked_list.o \
$(bin_src)doubly_linked_list.o  -o main

main.o: main.c
	$(CC) $(CFLAGS) main.c -o $(bin_src)main.o

singly_linked_list.o: $(linked_list)singly_linked_list.c $(linked_list)singly_linked_list.h
	$(CC) $(CFLAGS) $(linked_list)singly_linked_list.c -o $(bin_src)singly_linked_list.o

doubly_linked_list.o: $(linked_list)doubly_linked_list.c  $(linked_list)doubly_linked_list.h
	$(CC) $(CFLAGS) $(linked_list)doubly_linked_list.c -o $(bin_src)doubly_linked_list.o


.PHONY: clean 

clean: 
	rm -rf */*.o a.out main
