CC = gcc
CFLAGS = -Wall -Wextra -g

all: demo

demo: demo.o mlalog.o
	$(CC) $(CFLAGS) -o demo demo.o mlalog.o

demo.o: demo.c mlalog.h
	$(CC) $(CFLAGS) -c demo.c

mlalog.o: mlalog.c mlalog.h
	$(CC) $(CFLAGS) -c mlalog.c

clean:
	rm -f *.o demo
