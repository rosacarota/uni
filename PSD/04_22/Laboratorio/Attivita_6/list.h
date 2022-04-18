#include "item.h"

typedef struct List *List;

List newList(void);

int emptyList(List list);

List addHead(List list, item val);

List nextNode(List list);

item getItem(List list);

int sizeList(List list);

int posItem(List list, item val);

item getItemPos(List list, int pos);

List reverseList(List list);

void outputList(List list);

void freeList(List list);

void printList(List list);
