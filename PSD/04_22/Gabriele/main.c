#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "list.h"

int sizeListRec(List l);

int main(void) {
    List l = newList();

    for(int i = 0; i < 10; i++) {
      l = addHead(l, i);
    }
    printList(l);
    printf("Lunghezza: %d\n", sizeListRec(l));
    printList(l);
    return 0;
}

int sizeListRec(List l) {
    if(l == NULL) return 0;

    l = tailList(l);

    return 1 + sizeListRec(l);
}

