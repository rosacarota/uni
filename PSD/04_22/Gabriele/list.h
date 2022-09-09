#include "item.h"

typedef struct Node* List;

List newList();

int isEmpty(List l);

List tailList(List l);

List addHead(List l, int p);

int getFirst(List l);

void printList(List l);

int sizeList(List l);

int posItem(List l, int p);

//int searchItem(List l, Punto p);

List reverseList(List l);

//List removeItem(List l, Punto p);

int getItem(List l, int pos);

//List insertList(List l, Punto p, int pos);

List removeList(List l, int pos);
