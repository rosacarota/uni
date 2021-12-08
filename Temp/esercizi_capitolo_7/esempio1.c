//programma che somma numeri interi
#include <stdio.h>
int main()
{
	int num, sum;
	printf("Inserisci numeri da sommare (0 per terminare):\n");
	
	
	sum=0; // la somma deve essere uguale a 0 all'inizio, anche se il compilatore dovrebbe impostarlo automaticamente, ma sempre meglio specificare 
	while (num != 0) {
	scanf("%d", &num); //la scanf è all'interno del ciclo poichè devo aggiungere numeri ad 				     ogni invio
	sum += num;
			 }
	// il ciclo si ferma quando viene ad essere aggiunto 0 (num != 0)
	
	printf("The sum is: %d\n", sum);
	
return 0;
}

