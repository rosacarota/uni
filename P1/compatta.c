#include <stdio.h>
#define NMAX 20

int readArray(int a[]);
int compatta(int a[], int na, int b[]);
int ricerca(int value, int b[], int nb);
void print(int a[], int n);

int main(){
    int a[NMAX], b[NMAX], na, nb; 
    
    printf("Inserisci i valori dell'array a\n");

    na = readArray(a);
    nb = compatta(a, na, b);
    
    print(b, nb);
}

int readArray(int a[]){
    int i, temp;
    for(i = 0; i < NMAX; i++){
        printf("Inserisci il valore %d dell'array: ", i + 1);
        scanf("%d", &temp);
        if (temp == -1){
             break;
            }
        a[i] = temp;
    }
    
    return i;
}


int compatta(int a[], int na, int b[]){
    int i, j = 0;
    for(i = 0; i < na; i++){
        if (ricerca(a[i], b, j) == 0){
            b[j] = a[i]; 
            j++;
        }
    }

    return j;
}

int ricerca(int value, int b[], int nb){
    int i;
    for(i = 0; i < nb; i++){
        if(value  == b[i]){
            return 1;
        }
    }
    return 0;
}

void print(int a[], int na){
    int i;
    for(i = 0; i < na; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

