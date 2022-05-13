#include <stdio.h>

int quadrato(int n) {
    if (n < 0) 
        n *= -1;

    if(n == 1) return 1;
        
    return (2 * n - 1) + quadrato(n - 1);
}

int main(void) {
    int n = -5;
    int quad; 

    quad = quadrato(n);

    printf("Il quadrato di %d e' %d", n , quad);

    return 0;
}
