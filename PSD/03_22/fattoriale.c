/* Fattoriale di un numero */

#include <stdio.h>

int fattoriale(int n);

int main(void){
    int risultato; 
    int numero; 

    printf("Inserisci il numero di cui fare il fattoriale: ");
    scanf("%d", &numero);

    risultato = fattoriale(numero);

    printf("Questo è il fattoriale: %d", risultato);
    return 0; 
}

int fattoriale(int n){
	if(n <= 1) {
		return 1;
    }
    else{ 
		return n * fattoriale (n - 1);
    }
}

