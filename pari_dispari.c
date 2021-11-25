/*Progettare e realizzare un programma che, 
dati due vettori di interi di dimensione N, 
ne costruisca un terzo di dimensione 2N i cui elementi 
di posizione pari siano gli elementi del primo vettore e 
gli elementi di posizione dispari siano gli elementi 
del secondo vettore.*/
#include <stdio.h> 
#define NMAX 30

int get_dim(int max, int min);
void readArray(int array[], int N);
void stellina(int array1[], int array2[], int array3[], int N);
void print(int array[], int N);

int main(){
    int a[NMAX], b[NMAX], c[NMAX];
    int N;

    N = get_dim(0, 30);

    printf("Inserisci i valori dell'array A:\n");
    readArray(a, N);

    printf("Inserisci i valori dell'array B:\n");
    readArray(b, N);

    stellina(a, b, c, N);

    print(c, N);

}

int get_dim(int min, int max){
    int x;
    
    printf("Inserisci la lunghezza dei due array: ");

    do{
        scanf("%d", &x);
    } while(x < min || x > max);
    
    return x;
}


void readArray(int array[], int N){
    int i;
    
    for(i = 0; i < N; i++){
        scanf("%d", &array[i]);
    }
}

void stellina(int array1[], int array2[], int array3[] ,int N){
    int i, j = 0, f = 0;
    
    for(i = 0; i < 2*N; i++){
        if(i % 2 == 0){
            array3[i] = array1[j];
            j++;
        }
        else if(i % 2 != 0){
            array3[i] = array2[f];
            f++;
        }
    }
}

void print(int array[], int N){
    int i;
    
    printf("\n");

    for(i = 0; i < 2*N; i++){
        printf("%d", array[i]);
    }
}
