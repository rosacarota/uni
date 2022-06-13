#include <stdio.h>
#include "Key.h"

void printKey(Key k){
    printf("%d", k);
}

int isEqual(Key k1, Key k2) {
    return k1 == k2;
}

int isMinus(Key k1, Key k2) {
    return k1 < k2;
}
