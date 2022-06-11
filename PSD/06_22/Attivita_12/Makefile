CC= gcc
CFLAGS= -Wall -g
BIN= main.o pqueue.o item.o util.o

all: pqueue.out

pqueue.out: $(BIN)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c util.h pqueue.h item.h
	$(CC) $(CFLAGS) -c $<

pqueue.o: pqueue.c pqueue.h item.h
	$(CC) $(CFLAGS) -c $<

item.o: item.c item.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm *.o *.out
