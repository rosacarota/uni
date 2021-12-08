#include <stdio.h>

int main()
{ 
	int a, b, br, c, cr, d, dr, e, er, f, fr; 
	printf("Inserisci un numero: \n");
	scanf("%d", &a);
	
	b=a/8;
	br=a%8;
	
	c=b/8;
	cr=b%8;
	
	d=c/8;
	dr=c%8;
	
	e=d/8;
	er=d%8;
	
	f=e/8;
	fr=e%8;
	
	printf("Questo è il numero in ottali: %.1d%.1d%.1d%.1d%.1d", fr, er, dr, cr, br);
	
	return 0;
}
