#include <stdio.h>

int massimo(int a[], int n) {
    int max;

    if (n == 0) return a[n];

    max = massimo(a, n - 1);

    if(max > a[n]) return max;

    return a[n];

}

int main(void){
    int a[6] = {4, 5, 12, 7, 9, 2};

    printf("Il massimo dell'array è %d\n", massimo(a, 6 - 1));

    return 0;
}
