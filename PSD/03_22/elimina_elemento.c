/*Elimina un elemento in una determinata posizione dell'array*/

#include <stdio.h>
#define LUN 30

int get_dim(int MIN, int MAX);
void riempi_array(int array[], int dim);
int elimina_ele(int array[], int dim, int pos);
void stampa_array(int array[], int dim);

int main(void){
    int array[LUN];
    int dim; 
    int dim2;

    printf("Inserisci dimensione dell'array: ");
    dim = get_dim(0, 30);

    printf("\nInserisci i numeri nell'array:\n");
    riempi_array(array, dim);
    
    stampa_array(array, dim);

    dim2 = elimina_ele(array, dim, 2);
    
    printf("\n");
    stampa_array(array, dim2);
    
    return 0;
}

int get_dim(int MIN, int MAX){
    int x; 

    do{
        scanf("%d", &x);
    }while(x > MAX || x < MIN);

    return x;
}

void riempi_array(int array[], int dim){
    int i;

    for(i=0; i < dim; i++){
        scanf("%d", &array[i]);
    }
}

int elimina_ele(int array[], int dim, int pos){
    int i;
    
    for(i = pos; i < dim; i++){
        array[i] = array[i + 1];
    }
    
    return (dim - 1); 
}

void stampa_array(int array[], int dim){
    int i;

    for(i = 0; i < dim; i++){
        printf("%d ", array[i]);
    }
}
