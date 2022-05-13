#include <stdio.h>

int algoritmoEuclide (int n, int m);

int main(void) {
    printf("L'MCD tra 494 e 130 è: %d\n", algoritmoEuclide(494, 130));
    return 0;
}

int algoritmoEuclide(int n, int m){
    if(m == n)
        return m;

    if(m > n)
        return algoritmoEuclide(m - n, n);
    else 
        return algoritmoEuclide(m, n - m);
}
