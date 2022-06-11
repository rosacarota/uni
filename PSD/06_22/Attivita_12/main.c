#include <stdio.h>
#include "item.h"
#include "pqueue.h"

int main(void) {
    return 0;
}

Item max(PQueue q) {
    return getMax(q);
}

Item min(PQueue q) {
    Pqueue tmp;
    int i = 1;
    Item min;

    while(!isEmpty(q)) {
        min = getMax(q);
        tmp[i] = min
        deleteMax(q);
    }

    while()
}
