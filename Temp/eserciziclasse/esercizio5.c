/*Esercizio 1 in classe: il programma compie 4 operazioni tra due numeri reali*/
#include <stdio.h>
int main (){
	float op1, op2;
	
	/*
	printf("Inserisci due valori: ");
	scanf("%f", &op1);
	scanf("%f", &op2);
	*/
	
	printf("Inserisci due valori: ");
	scanf("%f%f", &op1, &op2);
	
	//%g serve semplicemente a far uscire il numero con il minimo numero di caratteri necessari
	printf("SOMMA: %g\nSOTTRAZIONE: %g\nMOLTIPLICAZIONE: %g\nDIVISIONE: %g\n", op1+op2, op1-op2, op1*op2, op1/op2);
	
	return 0;
}
