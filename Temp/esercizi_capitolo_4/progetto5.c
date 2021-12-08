#include <stdio.h>

int main()
{ 
	float reddito, imposta;
	
	printf("Inserisci il tuo reddito: $");
	scanf("%f", &reddito);
	
	if (reddito < 750.00f){
		imposta = (1.00f/100.00f)*reddito;}
	else 
		if (reddito < 2250.00f){
			imposta =((2.00f/100.00f)*reddito) + 7.50f;}
		else 
			if (reddito < 3750.00f){
				imposta =((3.00f/100.00f)*reddito) + 37.50f ;}
			else 
				if (reddito < 5250.00f){
					imposta =((4.00f/100.00)*reddito) + 82.50f ;}
				else 
					if (reddito <= 7000.00f){
						imposta = ((5.00f/100.00f)*reddito) + 142.50f;}
					else {
						imposta = ((6.00f/100.00f)*reddito) + 230.00;}
	
	printf("Questo è il valore dell'imposta: $%.2f", imposta);
						
	return 0;
}		
