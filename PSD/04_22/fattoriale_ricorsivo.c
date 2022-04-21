#include <stdio.h>

long long unsigned fact( long long unsigned n ) {
    if(n == 0) return 1;

    return n * fact(n - 1);
}

int main(void){
    printf("%lld\n", fact(20));
}
