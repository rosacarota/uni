#include <stdio.h>
#include "queue.h"

int main(void) {
    Queue q;

    q = newQueue();

    freeQueue(q);

    return 0;
}
