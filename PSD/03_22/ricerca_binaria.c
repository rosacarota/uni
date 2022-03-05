/*Ricerca di un elemento in un array ordinato 
(sia versione con ricerca lineare che con ricerca binaria)*/

#include <stdio.h>
#define LUN 30

int ricerca_binaria(int *arr, int n, int k);

int main(void){
    int array[LUN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int k; 
    
    printf("Inserisci numero da ricercare nell'array: ");
    scanf("%d", &k);
    if(!(ricerca_binaria(array, 15, k))){
        printf("Numero non trovato\n");
    }
    else {
        printf("Numero trovato\n");
    }


    return 0;
}

int ricerca_binaria(int *arr, int n, int k) {
    int sup = n - 1, inf = 0;
    int mid;
    int trovato = 0;
    
    while(inf <= sup && !trovato) {
        mid = (sup + inf) / 2;

        if(k == arr[mid]) {
            trovato = 1;
        }
        else if(k > arr[mid]) {
            inf = mid + 1;
        }
        else if(k < arr[mid]){
            sup = mid - 1;
        }
    }

    if (!trovato){
        mid = 0; 
    }

    return mid;
}
