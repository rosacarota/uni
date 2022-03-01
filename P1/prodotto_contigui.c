/*Progettare e realizzare un programma che, dato un vettore (sorg[]) di N double, ne 
generi un secondo (dest[]) così definito: l'elemento 0 di dest è dato dal prodotto degli 
elementi 0 e 1 di sorg, l'elemento 1 di dest è dato dal prodotto degli elementi 2 e 3 di 
sorg, e così via. Per esempio, se sorg[] = {0.5,1.0,1.5,2.0} si deve generare dest[] = 
{0.5,3.0}.
Si supponga che il numero di elementi di sorg sia pari. Si visualizzi,poi, il vettore dest.*/

#include <stdio.h>
#define NMAX 30

int get_dim(int min, int max);
void readArray(double array[], int N);
int prod_contigui(double array1[], double array2[], int N);
void print(double array[], int N);

int main(){
    double sorg[NMAX], dest[NMAX];
    int N, M;
    
    printf("Inserire la grandezza dell'array: ");
    N = get_dim(0, 30);
    
    printf("Inserire i valori dell'array\n");
    readArray(sorg, N);

    M = prod_contigui(sorg, dest, N);
    
    printf("\n");
    print(dest, M);
    printf("\n");
}

int get_dim(int min, int max){
    int x; 

    do{
        scanf("%d", &x);
    } while(x < min || x > max);

    return x;
}

void readArray(double array[], int N){
    int i;

    for(i = 0; i < N; i++){
        scanf("%lf", &array[i]);
    }
}
int prod_contigui(double array1[], double array2[], int N){
    int i, j;

    for(i = 0, j = 0; i < N - 1; i += 2){
        array2[j] = array1[i] * array1[i+1];
        j++;
    }

    return j;
}

void print(double array[], int N){
    int i; 

    for(i = 0; i < N; i++){
        printf("%.2lf ", array[i]);
    }
}


