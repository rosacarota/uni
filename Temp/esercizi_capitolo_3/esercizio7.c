#include <stdio.h>

int main()
{ 
	int j, i, l;
	printf("Inserisci un numero a 3 cifre: ");
	scanf("%1d%1d%1d", &j, &i, &l);
	
	printf("Questo è in numero al contrario: %d%d%d\n", l, i, j);
	
	return 0;
}
