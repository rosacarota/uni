/*Progettare e realizzare un programma che legge una sequenza di n interi 
e li memorizza in una array a, ne calcola il quadrato di ciascuno e
lo memorizza in una array b, ne calcola il cubo, memorizzandolo
in una array c, infine visualizza il contenuto di b e di c.*/
#include <stdio.h>
#define NMAX 30
int get_dim(int min, int max);
void getArray(int array[], int N);
void potenza(int array1[], int array2[], int k, int N);
void print(int array[], int N);

int main(){
    int a[NMAX], b[NMAX], c[NMAX];
    int N;

    N = get_dim(0, 30);

    getArray(a, N);

    potenza(a, b, 2, N);
    potenza(a, c, 3, N);

    print(b, N);
    print(c, N);

}


int get_dim(int min, int max){
    int x;
    do{
        printf("Inserisci la lunghezza dell'array: ");
        scanf("%d", &x);
    } while(x < min || x > max);

return x;
}

void getArray(int array[], int N){
    int i;

    printf("Inserisci i valori dell'array:\n");

    for(i = 0; i < N; i++){
        scanf("%d", &array[i]);
    }
}

void potenza(int array1[], int array2[], int k, int N){
    int i, j; 
    
    for(i = 0; i < N; i++){
        array2[i] = array1[i];
        for(j = 0; j < k-1; j++){
            array2[i] *= array2[i];
        }
    }
}

void print(int array[], int N){
    int i;
    
    printf("\n");

    for (i = 0; i < N; i++){
        printf("%d ", array[i]);
    }
}








