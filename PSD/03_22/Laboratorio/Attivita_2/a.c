#include <stdio.h>
#include <stdlib.h>

void func(int *arr) {
    arr++;
}

int main(void) {
    int *arr = malloc(sizeof(int) * 5);
    arr[0] = 11;
    arr[1] = 21;
    arr[2] = 31;
    arr[4] = 41;
    arr[5] = 51;

    for(int i = 0; i < 5; i++) {
        printf("Elem %d = %d\n", i, arr[i]);
    }

    func(arr);

    printf("\n");

    for(int i = 0; i < 5; i++) {
        printf("Elem %d = %d\n", i, arr[i]);
    }

    return 0;
}
