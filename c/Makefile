# /********************************************************

# makefile

# Author: Muhammed El-Yamani
# muhammedelyamani92@gmail.cppom
# March 2020


# ********************************************************/

CC=clang
CFLAGS=-c -ggdb3 -Wall -Werror  
LDLIBS=-lm
lib=library/
linked_list=$(lib)linked_list/


all: main

main: main.o linked_list.o
	$(CC)  *.o -o main

main.o: main.c
	$(CC) $(CFLAGS) main.c -o main.o

linked_list.o: $(linked_list)linked_list.c
	$(CC) $(CFLAGS) $(linked_list)linked_list.c -o linked_list.o

.PHONY: clean 

clean: 
	rm -rf *.o a.out main
