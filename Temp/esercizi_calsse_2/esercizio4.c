#include <stdio.h>

int main ()

{ int item, mm, dd, yyyy;

  float price;
	
	printf("Inserisci il numero dell'oggetto:");
	scanf("%d", &item);
	
	printf("Inserisci il prezzo:");
	scanf("%f$", &price);
	
	printf("Inserisci la data:");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	
	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%.2f\t\t%d/%d/%d", item, price, mm, dd, yyyy);
	
	return 0;
}
