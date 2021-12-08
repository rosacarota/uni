#include <stdio.h>

int main ()

{ float raggio = 10.0f, volume; 

 	printf("Questo è il valore del raggio della sfera: %.1f\n", raggio);
 	printf("Quanto vale il volume di questa sfera? \n");
 	
 	volume = (4.0f/3.0f) * 3.14f* raggio * raggio * raggio;
 	printf("Volume della sfera: %.2f\n", volume);
 	
 	return 0;
}
