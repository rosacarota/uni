/*Ricerca di un elemento in un array non ordinato*/

#include <stdio.h>
#define LUN 30

void inserisci_array(int a[], int dim);
int get_dim(int min, int max);
int ricerca_ele(int a[], int d, int k, int *i);

int main(void){
    int array[LUN];
    int dim, ele;
    int indice;
    printf("Inserisci dimensione dell'array: ");
    dim = get_dim(0, 30);

    printf("\nInserisci elementi nell'array: \n");
    inserisci_array(array, dim);
    
    printf("\nInserisci elemento da confrontare: ");
    scanf("%d", &ele);

    if((ricerca_ele(array, dim, ele, &indice))){
        printf("\nElemento trovato\n");
        printf("Posizione dell'elemento: %d\n", indice + 1);
    }
    else{
        printf("\nElemento non trovato\n");
    }

    return 0;
}

int get_dim(int min, int max){
    int x; 

    do{
        scanf("%d", &x);
    }while(x > max || x < min);

    return x;
}

void inserisci_array(int a[], int dim){
    int i; 
    
    for(i = 0; i < dim; i++){
        scanf("%d", &a[i]);
    }
}

int ricerca_ele(int a[], int d, int k, int *i){
    *i = 0;
    int trovato = 0;

    while(!trovato && *i < d){
        if (k == a[*i]){
            trovato = 1; 
            return trovato;
        }

        (*i)++;
    }

    return trovato;
}
