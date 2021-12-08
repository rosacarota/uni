#include <stdio.h>
int main()
{
	int i, r;
	printf("Inserisci un numero: ");
	scanf("%d", &i);
	
	printf("Il numero al contrario: ");
	
	do{
	r= i % 10;
	i /= 10;
	printf("%d", r);
	
	}while (i > 0);
	
	
return 0;
}
	
	
