#include <stdio.h>
#include "util.h"

BST creaBST(void);

int main(void) {
    Btree t = T;
    BST bst = creaBST();

    print2D(bst);
    
    // printf("\nAlbero binario di ricerca: %d\n", isBST(t));
    
    printf("\nAlbero ordinato: ");

    Item arr[10];

    inserisciArray(bst, arr, 0);

    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}

BST creaBST(void) {
    Item bst[NODES] = { 20, 10, 5, 3, 6, 15, 30, 25, 40, 35 };

    BST new = newBST();

    for (int i = 0; i < NODES; i++)
        new = insertNode(new, bst[i]);

    return new;
}

int isBST(Btree t) {
    if (t == NULL) return 1;

    if (!isEmpty(figlioSX(t))) {
        if (!(isMinus(getItem(figlioSX(t)), getItem(t)))) {
            return 0;
        }
    }

    if (!isEmpty(figlioDX(t))) {
        if (!(isMinus(getItem(t), getItem(figlioDX(t))))) {
            return 0;
        }
    }
   
    return isBST(figlioSX(t)) && isBST(figlioDX(t));
}

/*int isBST(Btree t) {
    if (t == NULL) return 1;

    if (isMinus(getItem(figlioSX(t)), getItem(t))) {
        if (isMinus(getItem(figlioDX(t)), getItem(t))) {
            return 1;
        }
    }
    else {
        return 0;
    }

    isBST(figlioSX(t));
    isBST(figlioDX(t));
}*/

void inserisciArray(BST t, Item *arr, int i) {
    if(t == NULL) return;

    inserisciArray(figlioDX(t), arr, i + 2);
    arr[i] = getItem(t);
    inserisciArray(figlioSX(t), arr, i + 1);
}
