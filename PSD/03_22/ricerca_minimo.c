/*Ricerca del minimo di un array*/

#include <stdio.h>
#define LUN 30


int get_dim(int min, int max);
void crea_array(int a[], int n);
int find_min(int a[], int n);
   
int main(void){
    int array[LUN];
    int dim;
    int min;

    printf("Inserisci la dimensione dell'array: ");
    dim = get_dim(0, 30);
    
    crea_array(array, dim);
    
    min = find_min(array, dim);
    printf("Il minimo dell'array è: %d\n", min);
    
    return 0;
}

int get_dim(int min, int max){
    int x; 

    do{
        scanf("%d", &x);
    }while(x > max || x < min);
    
    return x;
}

void crea_array(int a[], int n){
    int i;

    printf("Inserisci numeri nell'array: \n");

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}

int find_min(int a[], int n){
    int i;
    int min = a[0];

    for(i = 0; i < n; i++){
        if (min > a[i]){
            min = a[i];
        }
    }

    return min;
}
