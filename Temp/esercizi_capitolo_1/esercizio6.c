#include <stdio.h>

#define equazione (3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) + 7*x - 6)

int main()

{ float x;
	printf("Inserisci il valore della x da mettere nell'equazione \n");
	scanf("%f", &x);
	
	printf("Questo è il risultato: %.2f\n", equazione);
	
	return 0;
}
