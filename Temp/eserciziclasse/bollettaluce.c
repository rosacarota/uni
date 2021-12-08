/*Scrivere un programma che calcoli e visualizzi il numero di KWh da addebitare e l'ammontare della bolletta della luce di un utente ricevendo in input: il numero di codice dell'utente, il numero di KWh della lettura precedente, il nuemro di KWh della lettura attuale. 

L'ammontare della bolletta è dato da una quota fissa (canone, che deve essere fornita in input), e dall'importo relativo al consumo, numero di KWh consuimati moltiplicato per il consumo unitario 

Quest'ultimo vinee rappresentato da un valore costante definito ad inizio programma*/ 
#include <stdio.h>
int main(){
	int codice_utente;
	float kwh_prima, kwh_dopo, canone, costo_unitario , costo_bolletta, costo_kwh;
	
	printf("*****QUANTO COSTA LA TUA BOLLETTA?*****\n\n");
	
	
	printf("Inserisci il codice utente: ");
	scanf("%d", &codice_utente);
	
	printf("Inserisci il numero di KWh della lettura precedente: ");
	scanf("%g", &kwh_prima);
	
	printf("Inserisci il numero di KWh della lettura attuale: ");
	scanf("%g", &kwh_dopo);
	
	printf("Inserisci il canone: ");
	scanf("%g", &canone);
	
	costo_unitario = 0.056; //vero costo unitario enel
	
	costo_kwh = (kwh_dopo - kwh_prima) * costo_unitario;
	costo_bolletta = costo_kwh + canone;
	
	printf("CODICE UTENTE: %d\nCOSTO KWh: %.2f\nCOSTO BOLLETTA: %.2f\n", codice_utente, costo_kwh, costo_bolletta);
	
	return 0;
}

	
	
	
