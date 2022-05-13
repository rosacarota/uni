#include <stdio.h>

#define N 6

void print_array(int a[], int n);

int main(void) {
    int a[N] = {0, 1, 2, 3, 4, 5};
    
    printf("Gli elementi degli array sono: \n");
    print_array(a, N - 1);

    return 0;
}

void print_array(int a[], int n) {
    if(n < 0) return;

    print_array(a, n - 1);

    printf("%d\n", a[n]);
}
