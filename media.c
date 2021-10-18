#include <stdio.h>

int main(){
    int voto, i;
    float media, somma = 0;
    
    printf("**********CALCOLA LA MEDIA DEI VOTI*********\n\n");

    printf("Inserisci un numero di voti\nPremi -1 per fermare: ");
    scanf("%d", &voto);

    i=0; 

    while(voto != -1){

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

    media = somma/i;

    printf("La media è %.2f\n", media);

    return 0;
}
