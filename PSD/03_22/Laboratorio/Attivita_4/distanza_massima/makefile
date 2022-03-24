punto.out: punto.o main.o  
	gcc punto.o main.o -o punto.out -lm

punto.o: punto.c punto.h 
	gcc -c punto.c -lm

main.o: main.c
	gcc -c main.c -lm
	
clean:
	rm *.o punto.out
	
