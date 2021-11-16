/*Scrivere un programma in linguaggio C che
legga N numeri interi da tastiera e li memorizzi in un vettore .
Il numero N viene inserito dall'utente ed è minore di 20.
Il programma deve generare un secondo vettore che compatta i numeri contenuti
nel primo vettore in particolare: ogni numero che comprare ripetuto
nel primo vettore deve comparire una sola volta nel secondo vettore
Il programma deve visualizzare il contenuto del secondo vettore*/

#include <stdio.h>
#define NMAX 100
int riempimento(int a[]){
void riempi2(int a[], int b[], int n);
void main(){
    int a[NMAX], b[NMAX], n, i, f;

    n = riempimento(a);
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
        printf("\n");

    f = riempi2(a, b, n);
    for(i = 0; i < f; i++){
        printf("%d ", b[i]);
    } 
}

int riempimento(int a[]){
    int i;
    for(i = 0; ; i++){
        scanf("%d", &a[i]);
            if(a[i] == -1){
                return i;
            }
    }
}

void riempi(int a[], int b[], int n){
    int i, j, f;
    f=0;
    for (i = 0; i < n; i++){
        for(j=0; j <= f; j++){
            if (a[i] == b[j]){
                break;
            }
        }
    if(j > f){
        f++;
        b[f] = a[i];
    }
    }
}

