#include <stdio.h>
int main()
{
	float a, b, media;
	
	printf("Aggiungi due valori\n");
	scanf("%f%f", &a, &b);
	
	media = (a+b)/2;
	
	printf("Questa è la media %.2f\n", media);
	
return 0;
}
