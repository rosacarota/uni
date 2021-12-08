#include <stdio.h>

void stampa(int stelline);

int main() {
	int n;

	printf("Inserisci la lunghezza del lato: ");
	scanf("%d", &n);

	stampa(n);
}

void stampa(int stelline){
	int i, j;
	
	i=0;
	while (i < 2*stelline){
		printf("*");
		i++;
			
			if(i % stelline == 0){
				printf("\n*");

			}
				j=0;
				while(j < stelline-2){
					printf(" ");
					j++;
				}
	}
}
