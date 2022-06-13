CC= gcc
CFLAGS= -Wall -g
BIN= main.o pqueue.o key.o util.o

all: pqueue.out

pqueue.out: $(BIN)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c util.h pqueue.h item.h
	$(CC) $(CFLAGS) -c $<

pqueue.o: pqueue.c pqueue.h item.h
	$(CC) $(CFLAGS) -c $<

key.o: key.c key.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm *.o *.out
