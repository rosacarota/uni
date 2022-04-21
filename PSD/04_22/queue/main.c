#include <stdio.h>
#include "queue.h"

int main(void) {
    Queue q;

    q = newQueue();

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    Item x = dequeue(q);

    printQueue(q);

    printf("\nElemento tolto dalla coda: ");
    printItem(x);

    putchar('\n');

    freeQueue(q);

    return 0;
}
