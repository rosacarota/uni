/*Sapendo che in un parcheggio la prima ora costa 2 mentre tutte le successive costano 1, scrivere un programma che richieda il numero complessivi delle ore e visualizzi il totale da pagare*/
#include <stdio.h>
int main(){
	int ore;
	float totale;
	
	printf("Inserisci il numero di ore: ");
	scanf("%d", &ore);
	
	totale = ((ore-1)*1)+2;
	
	printf("ORE TRASCORSE: %d\nTOTALE DA PAGARE: %f\n", ore, totale);
	
	return 0;
}
