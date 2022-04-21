#include <stdio.h>

int sum(int n, int m){
    if(n == 0) return m;
    
    return 1 + (sum(m, n-1));
}

int main(void){
    int somma;

    somma = sum(3,4);

    printf("La somma ricorsiva è: %d\n", somma);
    
    return 0;
}
