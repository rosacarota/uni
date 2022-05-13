#include "item.h"

typedef struct Node *List;

List newList(void);

int isEmpty(List l);

List addFirst(List l, Item it);

List tailList(List l);

int sizeList(List l);

int sizeListRec(List l);

void printList(List l);

void freeList(List l);

void destroyList(List l);
