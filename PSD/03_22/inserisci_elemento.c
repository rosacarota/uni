/*Inserimento in una data posizione dell'array*/
#include <stdio.h>
#include <stdlib.h>

#define LUN 50

void stampa_array(int array[], int lun);
int riempi_array(int array[]);
void ins_num(int lun, int pos, int array[]);

int main(void){
    int array[LUN];
    int array_lun; 

    array_lun = riempi_array(array);
    stampa_array(array, array_lun);
    
    printf("\n");
    ins_num(array_lun, 3, array);
    stampa_array(array, array_lun + 1);
}

int riempi_array(int array[]){
    int i;
    int temp;

    while (1){
        scanf("%d", &temp);

        if(temp != -1){
            array[i] = temp;
            i++;
        }
        else{
            return i;
        }
    }
}

void ins_num(int lun, int pos, int array[]){
    int i;

    for(i = lun; i > pos ; i--){
        array[i]= array[i-1];
    }
    
    array[pos]=4;
}

void stampa_array(int array[], int lun){
    int i; 

    for(i=0; i < lun; i++){
        printf("%d ", array[i]);
    }
}
