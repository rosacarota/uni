#include <stdio.h>

int sum_digits(int n) {
    if(n == 0) return 0;

    return (n % 10) + sum_digits(n/10);
}
int main(void) {
    int n = 25;

    printf("La somma dei numeri che compongono %d è %d\n", n, sum_digits(n));

    return 0;
}
