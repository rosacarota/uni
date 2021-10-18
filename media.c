/* Calcola la media dei voti inseriti*/

#include <stdio.h>

int main(){
    int voto, i;
    float media, somma = 0;
    
    printf("**********CALCOLA LA MEDIA DEI VOTI*********\n\n");

    printf("Inserisci un numero di voti\nPremi -1 per fermare: ");
    scanf("%d", &voto);

    i=0; 

    while(voto != -1){ //se il voto è uguale alla "sentinella" allora il ciclo si verma 
   
    /*se il voto inserito è compreso nell'intervallo di valori
     * allora si svolgono le operazioni di somma, aumento del contatore
     * di inserimento di un altro voto
     */

     if (voto >=0 && voto <=30 || voto ==33){
         somma += voto;
         i++;
         printf("Inserisci un altro voto: ");
         scanf("%d", &voto);
    }
    
    else{
        printf("Inserisci un valore valido: ");
         scanf("%d", &voto);

    }
    }
    
    //la media è data dalla somma dei valori inseriti e dal contatore che aumento all'aggiunta dei valori
    media = somma/i; 

    printf("La media è %.2f\n", media);

    return 0;
}
