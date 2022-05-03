all: main.out

main.out: main.o playlist.o canzone.o
	gcc -Wall -g main.o playlist.o canzone.o -o main.out

main.o: main.c playlist.h
	gcc -Wall -g -c main.c 

playlist.o: playlist.c playlist.h
	gcc -Wall -g -c playlist.c

canzone.o: canzone.c canzone.h
	gcc -Wall -g -c canzone.c

clean: 
	rm *.o *.out
