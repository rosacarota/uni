main.out: main.o item.o list.o
	gcc -g -Wall main.o item.o list.o -o main.out -lm
	
item.o: item.c
	gcc -g -Wall -c item.c -lm
	
list.o: list.c
	gcc -g -Wall -c list.c
	
main.o: main.c
	gcc -g -Wall -c main.c -lm
	 
clean:
	rm *o *.out
