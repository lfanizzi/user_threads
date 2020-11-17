# choose your compiler
CC=gcc
# CC=gcc -Wall

threads: *.c *.o
	$(CC) -g *.o -o threads

*.o: *.c
	$(CC) -g -c *.c

clean:
	rm *.o threads
