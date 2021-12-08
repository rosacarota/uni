#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("Inserisci il numero [(xxx) xxx-xxx]:");
	scanf("(%d) %d-%d", &a, &b, &c);
	
	printf("Hai inserito: %d.%d.%d\n", a, b, c);
	
	return 0;
}
