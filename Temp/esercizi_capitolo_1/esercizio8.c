#include <stdio.h>

int main()

{int x, b20=20, b10=10, b5=5, b1=1, y, z, g, f, z1, g1, f1; 
	
	printf("Quante banconote ti servono? \n");
	
	printf("Inserisci il denaro \n");
	scanf("%d", &x);
	
	y = x / b20;
	printf("Ti servono %d biglietti da 20 \n", y);
	
	z = x-(y*20);
	z1= z / b10;
	printf("Ti servono %d biglietti da 10 \n", z1);
	
	g = z-(z1*10);
	g1= g / b5;
	printf("Ti servono %d biglietti da 5 \n", g1);
	
	f = g-(g1*5);
	f1 = f / b1;
	printf("Ti servono %d biglietti da 1 \n", f1);
	
	return 0;
}
