#include <stdio.h>
#define N 100
int binario(int numero, int a[]);
void  main(){
    int n, a[N], k, i;
    
    printf("Inserisci il numero da convertire: ");
    scanf("%d", &n);   
    
    k = binario(n, a);
    
    for(i=0; i < k; i++){
        printf("%d", a[i]);
    }
    printf("\n");
}

int binario(int numero, int a[]){
    int i, temp, j;
    for(i = 0; numero > 0; i++){
        a[i] = numero % 2;
        numero /= 2;
    }
    
    for(j = 0; j < i/2; j++){
        temp = a[j];
        a[j] = a[i-j-1];
        a[i-j-1] = temp;
    }

    return i;
}



       
