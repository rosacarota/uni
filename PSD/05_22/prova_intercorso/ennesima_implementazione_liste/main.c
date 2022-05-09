#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void) {
    List l;
    
    l = newList();
    
    Item it1 = creaItem('f', 2);
    Item it2 = creaItem('l', 7);
    Item it3 = creaItem('h', 23);
    Item it4 = creaItem('z', 8);
    
    addFront(l, it1);
    addFront(l, it2);
    addLast(l, it3);
    addLast(l, it4);

    printList(l);
    
   /*Item tmp = getItem(l, 2);
    
    printf("\nProva caruccia per item caruccio\n");
    printItem(tmp);*/
    
    //putchar('\n');
    //removePos(l, 0);
    
    //printList(l);
    
    /*Item it5 = creaItem('g', 20);
    printf("\nPrint dopo addPos\n");
    addPos(l, 0, it5);
   
    printList(l);*/
    
    //l = reverse(l);
    /*printf("\nListettina reversata\n");
    printList(l);*/
    
    l = cancFinoItem(l, it3);
    
    printf("\nProva esame \n");
    printList(l);
    
    return 0;
}





