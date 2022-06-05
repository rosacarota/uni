#include <stdio.h>
#include <stdlib.h>
#include "btree.h"

typedef struct Diff {
    int livello;
    Item a;
    Item b;
} Diff;

Btree createBtree(void);
int contaFoglie(Btree t);
Btree speculare(Btree t);
Item max(Btree t);
Item min(Btree t);
int uguali(Btree t1, Btree t2);
int uguali_diff(Btree t1, Btree t2, Diff *diff);

int main(void) {
    Btree a, b;

    a = createBtree();
    b = createBtree();

    printf("Albero:\n");
    preorder(a);

    printf("\n\nNumero di foglie: %d\n", contaFoglie(a));

    Btree spec = newBtree();
    spec = speculare(a);

    printf("\nAlbero speculare:\n");
    preorder(spec);

    int massimo = max(a);
    printf("\n\nIl massimo è %d", massimo);
    
    int minimo = min(a);
    printf("\nIl minimo è %d\n", minimo);

    // uguali(a, b) ? printf("\nI due alberi sono uguali\n")
    //              : printf("\nI due alberi non sono uguali\n");

    Diff *d = malloc(sizeof(struct Diff));
    d->livello = 0;
    d->a = NULLITEM;
    d->b = NULLITEM;

    if (uguali_diff(a, spec, d)) {
        printf("\nI due alberi sono uguali\n");
    }
    else {
        printf("\nI due alberi non sono uguali");
        printf("\nLivello: %d", d->livello);
        printf("\nItem diversi: %d e %d\n", d->a, d->b);
    }

    return 0;
}

Btree createBtree(void) {
    Btree a, b, c, d, e, f, g;

    a = newBtree();
    b = newBtree();
    c = newBtree();
    d = newBtree();
    e = newBtree();
    f = newBtree();

    d = consBtree(8, NULL, NULL);
    e = consBtree(15, NULL, NULL);
    f = consBtree(6, NULL, NULL);
    g = consBtree(12, NULL, NULL);
    b = consBtree(9, d, e);
    c = consBtree(9, f, g);
    a = consBtree(10, b, c);

    return a;
}

int contaFoglie(Btree t) {
    if (isEmpty(t)) return 0;

    if (isEmpty(figlioSX(t)) && isEmpty(figlioDX(t))) {
        return 1;
    }

    return contaFoglie(figlioSX(t)) + contaFoglie(figlioDX(t));
}

Btree speculare(Btree t) {
    if (isEmpty(t)) return t;

    return consBtree(getItem(t), speculare(figlioDX(t)), speculare(figlioSX(t)));
}

Item max(Btree t) {
    Item massimo;
    Item sx, dx;
     
    if (isEmpty(t)) return ITEM_MIN;

    massimo = getItem(t);

    sx = max(figlioSX(t));
    dx = max(figlioDX(t));

    if (massimo < sx)
        massimo = sx;

    if (massimo < dx)
        massimo = dx; 

    return massimo;
}

Item min(Btree t) {
    Item minimo;
    Item sx, dx;
    
    if (isEmpty(t)) return ITEM_MAX;

    minimo = getItem(t);

    sx = min(figlioSX(t));
    dx = min(figlioDX(t));

    if (minimo > sx)
        minimo = sx;

    if (minimo > dx)
        minimo = dx; 

    return minimo;
}

int uguali(Btree t1, Btree t2) {
    if (isEmpty(t1) && isEmpty(t2)) return 1;

    if (getItem(t1) == getItem(t2)) {
        if (uguali(figlioSX(t1), figlioSX(t2)) && uguali(figlioDX(t1), figlioDX(t2)))
            return 1;
    }

    return 0;
}

int uguali_diff(Btree t1, Btree t2, Diff *diff) {
    if (isEmpty(t1) && isEmpty(t2)) return 1;
    
    diff->a = getItem(t1);
    diff->b = getItem(t2);
    (diff->livello)++;

    if (getItem(t1) == getItem(t2)) {
        if (uguali_diff(figlioSX(t1), figlioSX(t2), diff) && uguali_diff(figlioDX(t1), figlioDX(t2), diff)) {
            return 1;
        }
    }

    return 0;
}

