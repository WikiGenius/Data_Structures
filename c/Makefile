# /********************************************************

# makefile

# Author: Muhammed El-Yamani
# muhammedelyamani92@gmail.cppom
# March 2020


# ********************************************************/

CC=clang
CFLAGS=-c -ggdb3 -Wall -Werror  
LDLIBS=-lm
bin_src=bin/
lib=library/
linked_list=$(lib)linked_list/


all: main

main: main.o linked_list.o
	$(CC)  $(bin_src)*.o -o main

main.o: main.c
	$(CC) $(CFLAGS) main.c -o $(bin_src)main.o

linked_list.o: $(linked_list)linked_list.c
	$(CC) $(CFLAGS) $(linked_list)linked_list.c -o $(bin_src)linked_list.o

.PHONY: clean 

clean: 
	rm -rf */*.o a.out main
