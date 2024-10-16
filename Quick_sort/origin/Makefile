CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -pedantic

all : test start

test : test.o sort.o
	$(CC) $(CFLAGS) test.o sort.o -o app

test.o : test.c test.h
	$(CC) $(CFLAGS) -c test.c -o test.o

sort.o : sort.c sort.h
	$(CC) $(CFLAGS) -c sort.c -o sort.o

start :
	./app

clean :
	rm -rf *.o
	rm -rf app