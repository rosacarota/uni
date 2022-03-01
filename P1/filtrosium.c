#include <stdio.h>
#define NMAX 30
int readArray (int a[]);
int filtrosium (int a[], int na, int b[], int nb, int c[], int nc);
void printArray(int a[], int na);

int main(){
    int a[NMAX], b[NMAX], c[NMAX]; 
    int na, nb, nc, pippucc;
    
    printf("Inserisci array A \n");
    na = readArray(a);
    
    printf("\nInserisci array B\n");
    nb = readArray(b);
    
    nc = na;
    pippucc = filtrosium(a, na, b, nb, c, nc); 

    printf("\nPippucc è %d\n", pippucc);
    
    printArray(a, na);
    printArray(b, nb);
    printArray(c, pippucc);
}

int readArray (int a[]){
    int i, temp;
    for(i = 0; i < NMAX; i++){
        printf("Inserisci %d elemento dell'array: ", i + 1);
        scanf("%d", &temp);
        if (temp == -1){
            break;
        }
        else{
            a[i] = temp;
        }
    }
    return i;
}
    
int filtrosium (int a[], int na, int b[], int nb, int c[], int nc){
    int i, k, pippucc = 0;
    
    for(i = 0; i < na; i++){
        for(k = 0; k < nb; k++){
            if( (b[k] + b[k + 1]) == a[i]){
                c[pippucc] = a[i];
                pippucc++;
            }
        }
    }
    
    return pippucc;
}

void printArray(int a[], int na){
    int i;
    
    printf("\n");

    for(i = 0; i < na; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
