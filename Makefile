OBJS = main.o stack.o postfix.o
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
EXEC = ccalc

$(EXEC): $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(EXEC)

main.o: main.c ccalc.h
	$(CC) $(CFLAGS) main.c

stack.o: stack.c ccalc.h
	$(CC) $(CFLAGS) stack.c

postfix.o: postfix.c ccalc.h
	$(CC) $(CFLAGS) postfix.c

clean:
	\rm $(OBJS) $(EXEC)

