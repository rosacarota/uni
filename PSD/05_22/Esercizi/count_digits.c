#include <stdio.h>

int count_digits(int n){
    if(n == 0) return 0;

    return 1 + count_digits(n/10);
}

int main(void) {
    int n = 5000;
    
    printf("%d contiene %d caratteri\n", n, count_digits(n));

    return 0;
}
