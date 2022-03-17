/* 2.Un programma che riceve da riga di comando 
 * una successione di numeri e ne effettui 
 * l’ordinamento attraverso una funzione 
 * void ordina(int*) con uno degli algoritmi 
 * di ordinamento implementati al corso. 
 * Il risultato va mostrato su standard output.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *riempi_array(char* argv[], int lun);
void ordina(int *s, int lun);

int main(int argc, char* argv[]){
    int lun = argc - 1;
    int *array;
    int i;

    if (argc < 2){
        printf("Non ci sono abbastanza argomenti");
    }
    else{
        array = riempi_array((argv + 1), lun);
        ordina(array, lun);
        for(i = 0; i < lun; i++) {
            printf("%d ", array[i]);
            printf("\n");
        }
    }

    return 0;
}

int *riempi_array(char* numeri[], int lun){
    int *array;
    int i;

    array = malloc((sizeof(int)) * lun);

    if(!array){
        exit(-1);
    }

    for(i = 0; i < lun; i++){
        array[i] = atoi(numeri[i]);
    } 

    return array;
}

void ordina(int *s, int lun){
    int i, j;
    int temp; 

    for(i = 0; i < lun; i++){
        for(j = 0; j < (lun - 1 - i); j++){
            if (s[j] > s[j+1]){
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}
