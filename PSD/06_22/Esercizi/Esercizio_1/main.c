#include <stdio.h>
#include "bst.h"
#include "btree.h"
#include "item.h"
#include "util.h"

int main(void) {
    Btree t = creaAlbero();
    
    printf("I nodi dell'albero sono: %d\n", contanodi(t));
    
    int size = contanodi(t);

    char arr[size + 1];

    espressione(t, arr, size, 1);
        
    for(int i = 0; i < size + 1 ; i++) {
        printf("%c\n", arr[i]);
    }
    return 0;
}

Btree creaAlbero(void) {
    Btree a = newBtree();
    Btree b = newBtree();
    Btree c = newBtree();
    Btree d = newBtree();
    Btree e = newBtree();
    Btree f = newBtree();
    Btree g = newBtree();
    Btree h = newBtree();
    Btree r = newBtree();

    a = consBtree('8', NULL, NULL);
    b = consBtree('9', NULL, NULL);
    c = consBtree('+', a, b);
    d = consBtree('1', NULL, NULL);
    e = consBtree('-', c, d);
    f = consBtree('6', NULL, NULL);
    g = consBtree('2', NULL, NULL);
    h = consBtree('*', f, g);
    r = consBtree('/', e, h);
    
    return r;
}

void espressione(Btree t, char *a, int size, int i) {
    if(i > size) return;

    a[i] = getItem(t);

    espressione(figlioSX(t), a, size, 2*i);

    espressione(figlioDX(t), a, size, 2*i + 1);

}

int contanodi(Btree t) {
    if(t == NULL) return 0;

    return 1 + contanodi(figlioSX(t)) + contanodi(figlioDX(t));
}
