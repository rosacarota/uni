#include <stdio.h>
#include <stdlib.h>
#include "item.h"

struct Item {
    char lettera;
    int numero;
};

Item creaItem(char l, int n) {
    Item it; 
    
    it = malloc(sizeof(struct Item));
    if(it == NULL) return NULLITEM;
    
    it->lettera = l;
    it->numero = n;
    
    return it;    
}

void printItem(Item it) {
    printf("Il caratteruccio nell'item: %c\n", it->lettera);
    printf("Il numeretto nell'item: %d", it->numero);    
}

int eqItem(Item it1, Item it2) {
    return (it1->numero == it2->numero && it1->lettera == it2->lettera);
}

