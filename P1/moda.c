/*Leggere un array di interi di 10 posizioni e stampare il numero
che compare più volte all’interno dell’array,
qualora ci siano più numeri che compaiano lo stesso
numero di volte stampare quello che compare per primo.*/
#include <stdio.h>
#define NMAX 10
void readArray(int array[NMAX]);
int controllo(int array[]);
int conta_rip(int array[], int value);

int main(){
    int array[NMAX], rip;

    printf("Inserisci i valori dell'array:\n");
    readArray(array);
    
    rip = controllo(array);
    printf("Il numero ripetuto è %d\n", array[rip]);
}

void readArray(int array[NMAX]){
    int i;

    for(i = 0; i < NMAX; i++){
        scanf("%d", &array[i]);
    }
}

int controllo(int array[]){
    int i, rip, temp = 0, temp2;

    for(i = 0; i < NMAX; i++){
        rip = conta_rip(array, array[i]);
        if (temp < rip){
            temp = rip;
            temp2 = i;
        }
    }
    return temp2;
}

int conta_rip(int array[], int value){
    int i, rip = 0;
    for(i = 0; i < NMAX; i++){
        if(value == array[i]){
            rip ++;
        }
    }
    return rip;
}

