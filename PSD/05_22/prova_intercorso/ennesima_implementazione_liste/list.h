#include "item.h"

typedef struct List *List;

List newList();

int isEmpty(List l);

int insertList(List l, Item val);

Item getItem(List l , int pos);

List removePos(List l, int pos);

void printList(List l);