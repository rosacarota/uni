CC=gcc 
CFLAGS=-Wall -g
BIN=main.o queue.o stack.o item.o

all: main.out

main.out: $(BIN)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c queue.h
	$(CC) $(CFLAGS) -c $<

stack.o: stack.c stack.h 
	$(CC) $(CFLAGS) -c $<

queue.o: queue.c queue.h stack.h 
	$(CC) $(CFLAGS) -c $<

item.o: item.c item.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm *.o *.out
