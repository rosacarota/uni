#include <stdio.h>

int quadrato(int n) {
    if(n == 1) return 1;

    return (2 * n - 1) + quadrato(n - 1);
}

int main(void) {
    int n = 10;
    int quad; 

    quad = quadrato(10);

    printf("Il quadrato di %d e' %d", n , quad);

    return 0;
}