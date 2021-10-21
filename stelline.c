#include <stdio.h>

void stampa(int stelline);

int main(){
	int n;

	printf("******************STAMPA LE STELLINE******************\n\n");

	printf("Inserisci la lunghezza del lato: ");
	scanf("%d", &n);

	stampa(n);
}

/*int*/void stampa (int stelline){
	int i;

	i=0; 
	while(stelline > 0 && i < stelline*stelline){
		printf("*");
		i++;

		if (i % stelline == 0) {
			printf("\n");
		}
	}
}
