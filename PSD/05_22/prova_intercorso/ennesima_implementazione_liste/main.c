#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void) {
    List l;
    
    l = newList();
    
    Item it1 = creaItem('f', 2);
    Item it2 = creaItem('l', 7);
    
    insertList(l, it1);
    insertList(l, it2);

    printList(l);
    
    //Item tmp = getItem(l, 2);
    
    //printItem(tmp);
    
    l = removePos(l, 0);
    
    printList(l);
    return 0;
}

