#include "item.h"

typedef struct Node* List;

List newList();

int isEmpty(List l);

List tailList(List l);

List addHead(List l, Item it);

Item getFirst(List l);

void printList(List l);

int sizeList(List l);

int posItem(List l, Item it);

int searchItem(List l, Item it);

List reverseList(List l);

List removeItem(List l, Item it);

Item getItem(List l, int pos);

List insertList(List l, Item it, int pos);

List removeList(List l, int pos);

