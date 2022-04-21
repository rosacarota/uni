#include <stdio.h>

void hanoi(char P1, char P2, char P3, int n);
int main(void) {
    char a, b, c;

    hanoi('a', 'b', 'c', 10);

    return 0;
}

void hanoi(char P1, char P2, char P3, int n) {
    if (n == 1) {
        printf("da %c in %c\n", P1, P3);
    }
    else{
        hanoi(P1, P3, P2, n - 1);
        printf("da %c in %c\n", P1, P3);
        hanoi(P2, P1, P3, n - 1);
    }
}
