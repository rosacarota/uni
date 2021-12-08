/* Esempio 3 pagina 114: Tavola dei quadrati */ 

#include <stdio.h>

int main()
{
	int i, n;
	printf("Inserisci il numero per costruire la tavola dei quadrati: \n");
	scanf("%d", &n);
	
	i=n;
	for(i=1; i <= n; i++)
		printf("%d\t%d\n", i, i*i);  /* La printf in questo caso fa parte del ciclo perchè deve essere stampata ogni volta che si esegue*/
		
	return 0;
}
		
