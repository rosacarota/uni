#include <stdio.h>
#include "item.h"

void printItem(Item it){
    printf("%d", it);
}

void freeItem(Item it) {
    ;
}

int isEqual(Item it1, Item it2) {
    return it1 == it2;
}
