#include <stdio.h>
#include <stdlib.h>
#include "btree.h"
#include "queue.h"

struct Node {
    Item data;
    struct Node *left;
    struct Node *right;
};

static void setItem(Btree t, Item it) {
    if (t == NULL) return;

    t->data = it;
}

static Item getItem(Btree t) {
    if (t == NULL) return NULLITEM;

    return t->data;
}

Btree newBtree(void) {
    return NULL;
}

int isEmpty(Btree t) {
    return t == NULL;
}

Btree figlioSX(Btree t) {
    if (t == NULL) return NULL;

    return t->left;
}

Btree figlioDX(Btree t) {
    if (t == NULL) return NULL;

    return t->right;
}

struct Node *getRoot(Btree t) {
    return t;
}

Btree consBtree(Item it, Btree sx, Btree dx) {
    Btree new;

    new = malloc(sizeof(struct Node));
    if (new == NULL) return NULL;

    setItem(new, it);

    new->left = sx;
    new->right = dx;

    return new;
}
void printPerLevel(Btree t){
    if(isEmpty(t)){
        printf("albero vuoto\n");
        return;
    }
    Btree left,right;
    Queue q = newQueue();
    enqueue(q,t);
    while(!isEmptyQueue(q)){
        Btree node=dequeue(q);
        outputItem(node->item);
        if((left = figlioSX(node))!=NULL)
            enqueue(q,left);
        if((right = figlioDX(node))!=NULL)
            enqueue(q,right);
    }
}
void inorder(Btree T) {
	if (isEmpty(T)) return;
	
	printItem(getItem(getRoot(T)));
    putchar(' ');
	inorder(figlioSX(T));
	inorder(figlioDX(T));
}
