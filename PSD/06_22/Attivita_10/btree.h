#include "item.h"
#include "queue.h"

typedef struct Node *Btree;

Btree newBtree(void);

int isEmpty(Btree t);

Btree figlioSX(Btree t);

Btree figlioDX(Btree t);

struct Node *getRoot(Btree t);

Btree consBtree(Item it, Btree sx, Btree dx);

void printPerLevel(Btree t);

void inorder(Btree T);
