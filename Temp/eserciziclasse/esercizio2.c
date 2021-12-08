#include <stdio.h>
int main()
{
	int s;
	
	printf("Inserisci un valore intero\n");
	scanf("%d",&s);
	
	printf("Valore:%d\nValore precedente:%d\nValore successivo:%d\n", s, s-1, s+1);
	
return 0;
}
