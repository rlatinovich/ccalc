OBJS = main.o stack.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
EXEC = ccalc

$(EXEC): $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(EXEC)

main.o: main.c ccalc.h
	$(CC) $(CFLAGS) main.c

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) stack.c

clean:
	\rm $(OBJS) $(EXEC)

