#include <stdio.h>

int main ()

{float raggio, volume; 
	
	printf("Calcoliamo il valore del volume di una sfera \n");
	
	printf("Quanto vale il raggio della sfera? \n");
	scanf("%f", &raggio);
	
	volume = (3.0f/4.0f) * 3.14f * raggio * raggio * raggio;
	printf("Questo è il volume della tua sfera: %.3f\n", volume);
	
	return 0;
}
