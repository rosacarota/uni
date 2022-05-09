#include "item.h"

typedef struct List *List;

List newList();

int isEmpty(List l);

int addFront(List l, Item val);

int addLast(List l, Item it);

Item getFirst(List l);

Item getItem(List l , int pos);

int removePos(List l, int pos);

int addPos(List l, int pos, Item it);

List reverse(List l);

void printList(List l);

int posItem(List l, Item it);

List cancFinoItem(List l, Item it);
