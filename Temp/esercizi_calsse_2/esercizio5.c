#include <stdio.h>

int main()

{ 
	int a, b, c, d, e; 
	
	printf("Inserisci ISBN:");
	scanf("%d-%d-%d-%d-%d", &a, &b, &c, &d, &e);
	
	printf("GS1 prefix: %d\n", a);
	printf("Group indentifier: %d\n", b);
	printf("Publisher code: %d\n", c);
	printf("Item number: %d\n", d);
	printf("Check digit: %d\n", e);

	return 0;
}
