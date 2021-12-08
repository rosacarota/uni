#include <stdio.h>

int main()
{ 	
	int t, i, j;
	
	printf("Inserisci un numero ad due cifre: ");
	scanf("%d", &t);
	
	i= t / 10;
	j= t % 10;
	
	printf("Questo è il numero al contrario: %d%d \n", j, i);
	
	return 0;
}
