#include <stdio.h>

#define equazione ((((3*x + 2)*x -5)*x + 7)*x -6)

int main ()

{ float x; 
	
	printf("Inserisci qui il valore di x \n");
	scanf("%f", &x);
	
	printf("Questo è il risultato: %f\n", equazione);
	
	return 0;
}
	
