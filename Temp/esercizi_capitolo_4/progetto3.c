 #include <stdio.h>
 
int main ()
{ 	
 	float numero_azioni, valore_azioni, j, commissioni, commissioni2;
	
	printf("Inserisci il numero di azioni e il valore delle azioni\nNumero di azioni: ");
	scanf("%f", &numero_azioni);
	printf("Valore delle azioni: $");
	scanf("%f", &valore_azioni);
	
	j = numero_azioni * valore_azioni;
	
	printf("Dimensione della transazione: $%.2f\n", j);
	
 	if (j < 2500) {
 	   commissioni= 30 + ((1.7/100)*j);
 	   }
 	else if (2500<=j && j<6250){
	   commissioni = 56 + ((0.66/100)*j);
	   }
 	else if (6250<=j && j<20000){
 	   commissioni = 76 + ((0.34/100)*j);
 	   }
 	else if (20000<=j && j<50000) {
 	   commissioni = 100 + ((0.22/100)*j);
 	   }
 	else if (50000<=j && j<500000){
 	   commissioni = 155 + ((0.11/100)*j);
 	   }
 	else {
 	   commissioni = 255 + ((0.09/100)*j);
 	   }
 	
 	if (commissioni < 39)
 		commissioni = 39;
 	
 	printf ("Queste sono le commissioni del primo broker: $%.2f\n", commissioni);
 	
 	if (numero_azioni < 2000) {
 		commissioni2 = numero_azioni * 33.03;}
 	else if (numero_azioni >= 200){
 		commissioni2 = numero_azioni * 33.03;
 		}
 		
 	printf("Queste solo le commissioni del secondo broker: $%.2f\n", commissioni2);
 		
 	printf("Questo è quello che conviene di più: $%.2f\n", commissioni>commissioni2?commissioni2:commissioni);
	
 	return 0;
}
