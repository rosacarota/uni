#include <stdio.h>

int main ()

{ int num1, denom1, num2, denom2, risult1, risult2;
	
	printf("Inserisci due frazioni con un + in mezzo: \n");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
	
	risult1= denom1*denom2;
	risult2= ((risult1/denom1)*num1) + ((risult1/denom2)*num2);
	
	printf("La somma delle due frazioni è:%d/%d",risult2, risult1);
	
	return 0;
}
