punto.out: punto.o main.o file.o
	gcc punto.o main.o file.o -o punto.out -lm

punto.o: punto.c punto.h 
	gcc -c punto.c -lm

file.o: file.c file.h
	gcc -c file.c -lm 

main.o: main.c 
	gcc -c main.c -lm

clean: 
	rm *.o punto.out
	
