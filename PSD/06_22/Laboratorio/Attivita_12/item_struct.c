#include <stdio.h>
#include <stdlib.h>
#include "item.h"

struct Item {
    int key;
    int data;
}

Item newItem(int key, int data) {
    Item it; 

    it = malloc(sizeof(struct Item));
    if (it == NULL) return NULL;

    it->key = key;
    it->data = data;

    return it;
}

void printItem(Item it) {
    printf("%d\n", it->key);
    printf("%d\n", it->data);
}

int isEqual(Item it1, Item it2) {
    return (it1->key == it2->key) && (it1->item == it2->item);
}

int isMinus(Item it1, Item it2) {
    return (it1->key) < (it2->key);
}
