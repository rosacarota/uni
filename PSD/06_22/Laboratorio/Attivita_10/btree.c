#include <stdio.h>
#include <stdlib.h>
#include "btree.h"
#include "queue.h"
#define COUNT 7

struct Node {
    Item data;
    struct Node *left;
    struct Node *right;
};

Btree newBtree(void) {
    return NULL;
}

int isEmpty(Btree t) {
    return t == NULL;
}

void setItem(Btree t, Item it) {
    if (t == NULL) return;

    t->data = it;
}

Item getItem(Btree t) {
    if (t == NULL) return NULLITEM;

    return t->data;
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

void preorder(Btree t) {
	if (isEmpty(t)) return;
	
	printItem(getItem(getRoot(t)));
    putchar(' ');
	preorder(figlioSX(t));
	preorder(figlioDX(t));
}

/*void print(Btree t){
    if(isEmpty(t)){
        printf("albero vuoto\n");
        return;
    }

    Btree left,right;
    Queue q = newQueue();
    enqueue(q,t);
    
    while(!isEmptyQueue(q)){
        Btree node = dequeue(q);
        printItem(node->data);
        putchar(' '); 
        if((left =figlioSX(node))!=NULL)
            enqueue(q,left);
        if((right = figlioDX(node))!=NULL)
            enqueue(q,right);
    }
}*/

void print(Btree t) {
    if(isEmpty(t)){
        printf("\nL'albero è vuoto\n");
    }

    Queue q = newQueue(); 
    Btree node; 

    enqueue(q, t);

    while(!isEmptyQueue(q)) {
        node = dequeue(q);
        
        printItem(getItem(node));
        putchar(' ');

        if(figlioSX(node) != NULL)
            enqueue(q, figlioSX(node));
        
        if(figlioDX(node) != NULL) 
            enqueue(q, figlioDX(node));
    }
}

static void print2DUtil(Btree root, int space)
{
    // Base case
    if (root == NULL)
        return;
 
    // Increase distance between levels
    space += COUNT;
 
    // Process right child first
    print2DUtil(root->right, space);
 
    // Print current node after space
    // count
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);
 
    // Process left child
    print2DUtil(root->left, space);
}
 
// Wrapper over print2DUtil()
void print2D(Btree root)
{
   // Pass initial space count as 0
   print2DUtil(root, 0);
}
