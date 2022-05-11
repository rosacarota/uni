#include <stdio.h>
#include "list.h"

int main(void) {
    List l;

    l = newList();

    l = addFirst(l, 10);
    l = addFirst(l, 20);
    l = addFirst(l, 30);
    l = addFirst(l, 40);
    l = addFirst(l, 50);
    l = addFirst(l, 100);

    printList(l);

    int count = 0;

    count = sizeListRec(l);

    printf("\nNumero di nodi: %d\n", count);

    return 0;
}
