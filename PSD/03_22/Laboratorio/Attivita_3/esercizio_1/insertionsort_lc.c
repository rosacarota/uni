#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *riempi_array(char* argv[], int lun);
void ordina(int *array, int lun);

int main(int argc, char* argv[]){
    int lun = argc - 1;
    int *array;
    int i;

    if (argc < 2){
        printf("Non ci sono abbastanza argomenti");
    }
    else{
        array = riempi_array(argv + 1, lun);
        ordina(array, lun);
        
        for(i = 0; i < lun; i++) {
            printf("%d ", array[i]);
        }
        
        printf("\n");
    }

    return 0;
}

int *riempi_array(char *numeri[], int lun){
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

void ordina(int *array, int lun){
    int i, j; 
    int tmp;

    for(i = 1; i < lun; i++){
        tmp = array[i];
        j = i - 1 ;

        while(j >= 0 && array[j] > tmp){
            array[j+1] = array[j];
            j--;
        }
        
        array[j+1] = tmp;
    }
}
