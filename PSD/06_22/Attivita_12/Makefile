CC= gcc
CFLAGS= -Wall -g
BIN= main.o pqueue.o

all: pqueue.out

pqueue.out: $(BIN)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c pqueue.h item.h
	$(CC) $(CFLAGS) -c $<

pqueue.o: pqueue.c pqueue.h item.h
	$(CC) $(CFLAGS) -c $<

item.o: item.c item.o
	$(CC) $(CFLAGS) -c $<

clean:
	rm *.o *.out
