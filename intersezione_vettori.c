#include <stdio.h>
#define NMAX 30
int get_dim(int min, int max); 
void readArray(int a[], int n);
int intersezione(int a[], int na, int b[], int nb, int c[]);
void printArray(int a[], int n);

int main(){
    int na, nb, nc, a[NMAX], b[NMAX], c[NMAX];
    
    na = get_dim(0, NMAX);
    nb = get_dim(0, NMAX);
    
    readArray(a, na);
    readArray(b, nb);
    
    nc = intersezione(a, na, b, nb, c);
    
    printArray(c, nc); 
}
int get_dim(int min, int max) {
    int x;

    do {
        printf("Inserisci dimensione array: ");
        scanf("%d", &x);
    } while(x < min || x > max);

    return x;
}

void readArray(int a[], int n){
    int i;
    printf("\nInserisci i valori dell'array:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}

int intersezione(int a[], int na, int b[], int nb, int c[]){
    int i, j, nc = 0;

    for(i = 0; i < na; i++){
        for(j = 0; j < nb; j++){
            if(a[i] == b[j]){
               c[nc] = b[j];
               nc++;
            }
        }
    }
    return nc;
}

void printArray(int a[], int n){
    int i;
    
    printf("\nL'array è formato da: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

