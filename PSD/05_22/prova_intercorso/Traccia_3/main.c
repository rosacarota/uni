#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void) {
    List list;

    list = newList();

    for(int i = 0; i <= 3; i++) {
        list = addHead(list, i);
    }
    
    printList(list);

    putchar('\n');

    list = removeList(list, 3);

    printList(list);

    return 0;
}
