#include <stdio.h>

int main()
{ 	
	int l, i, j, z, t;
	printf("Inserisci un nuemro a tre cifre: ");
	scanf("%d", &l);
	
	i = l/100;
	j = l%100;
	z= j/10;
	t= j%10;
	
	printf("Questo è il numero al contrario: %d%d%d \n", t, z, i);
	
	return 0;
}
