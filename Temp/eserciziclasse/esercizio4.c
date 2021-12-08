#include <stdio.h>
int main(){
	float a, b; 
	
	printf("Aggiungi due valori:");
	scanf("%f", &a);
	scanf("%f", &b);
	
	printf("Le 4 operazioni: \naddizione:%.2f\nsottrazione:%.2f\ndivisione%.2f\nmoltiplicazione%.2f\n", a+b, a-b, a/b, a*b);
	
	return 0;
} 
