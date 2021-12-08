#include <stdio.h> 

int main(){
	int i, n;

	printf("******************DEVI AUMENTARE LE TASSE?******************\n\n");
	
	printf("Inserisci i voti dei 10 studenti\nScrivi 1 per i promossi\n0 per i bocciati: ");

	i=0;
	while (i < 10){
		i++;
		scanf("%d", &n);
	}	

	if (i >=8) {
		printf("\nLE TASSE DEVONO AUMENTARE\n");
	}
	else {
		printf("\nLE TASSE NON DEVONO AUMENTARE\n");
	}	

return 0;
}
