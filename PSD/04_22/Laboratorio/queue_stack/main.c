#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(void) {
    Queue q; 

    q = newQueue();

    for(int i = 0; i < 6; i++) {
        enqueue(q, i);
    }
    
    printQueue(q);

    return 0;
}
