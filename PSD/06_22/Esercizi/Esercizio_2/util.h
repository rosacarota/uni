#include "bst.h"
#include "btree.h"
#include "queue.h"
#include "list.h"

#define NODES 10

int altezza(BST t);

BST aggiungi(BST t, Item *arr, int i, int size); 

BST creaBST(void);

int k_bilanciato(BST t, int k);

void stampa_foglie(BST t);

List chiaveMinore(Btree t, Item k);

void reverseQueue(Queue q);
