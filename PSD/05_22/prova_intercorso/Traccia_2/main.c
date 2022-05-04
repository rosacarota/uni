#include <stdio.h>
#include <stdlib.h>
#include "referendum.h"

int main(void) {
	Referendum r; 
	Seggio seggio1, seggio2; 
	Scheda scheda1, scheda2;
	
	r = creaRef(); 

	scheda1 = creaScheda(1, 2, 3, 4, 5, 6);
	scheda2 = creaScheda(7, 8, 9, 10, 11, 12);

	seggio1 = creaSeggio(1, scheda1);
	seggio2 = creaSeggio(2, scheda2);
	
	r = insertSeggio(r, seggio1);
	r = insertSeggio(r, seggio2);
	
	printReferendum(r);
	
	if(completRef(r)) 
		printf("La lista dei seggi è completa\n");
	else 
		printf("La lista dei seggi non è completa\n");
	
	stampaReport(r);
	
	nosiRef(r) ? printf("\nIl si ha vinto yuhu\n") : printf("\nIl no ha vinto D:\n");
					
	
	return 0;
}