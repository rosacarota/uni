#include <stdio.h>
#include "item.h"
#include "queue.h"
#include "btree.h"
#include "bst.h"
#include "util.h"

int sumLeafNodes(Btree t);
Btree creaBtree(void);

int main(void) {
    BST t = creaBST();
    
    print2D(t);
    
    printf("L'altezza dell'albero è: %d\n", altezza(t));
    
    printf("L'albero è k-bilanciato: %d\n", k_bilanciato(t, 1));
    
    printf("Le foglie sono: ");
    stampa_foglie(t);
    putchar('\n');
    
    BST bst = newBST();

    Item arr[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    
    bst = aggiungi(bst, arr, 0, 11);
    
    Item b[10] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 10 };
    
    Queue q1 = newQueue();

    for(int i = 0; i < 10; i++){
        enqueue(q1, i);
    }

    reverseQueue(q1);

    printQueue(q1);
    //print2D(bst);

    
    Btree nuovo = creaBtree();

    print2D(nuovo);

    printf("La somma delle foglie è: %d", sumLeafNodes(nuovo));
    
    Btree vuoto = newBtree();

    printf("\nLa somma delle foglie del vuoto è: %d", sumLeafNodes(vuoto));

    Btree foglia = newBtree();
    foglia = consBtree(2, NULL,NULL);

    printf("\nLa somma delle foglie del vuoto è: %d", sumLeafNodes(foglia));

    putchar('\n');
    List l = chiaveMinore(bst, 9);

    printList(l);
    print2D(bst);    


    return 0;
}
//Per creare l'albero della figura usare la funzione di creazione 
//dell'albero date dal tuo ADT 
Btree creaBtree(void) {
    
    Btree a = newBtree();
    Btree b = newBtree();
    Btree c = newBtree();
    Btree d = newBtree();
    Btree e = newBtree();

    a = consBtree(1, NULL, NULL);
    b = consBtree(5, NULL, NULL);
    c = consBtree(3, a, b);
    d = consBtree(9, NULL, NULL);
    e = consBtree(7, c, d);
    
    return e;
}


BST creaBST(void) {
    Item bst[NODES] = { 20, 10, 5, 3, 6, 15, 30, 25, 40, 35 };

    BST new = newBST();

    for (int i = 0; i < NODES; i++)
        new = insertNode(new, bst[i]);

    return new;
}

int k_bilanciato(BST t, int k) {
    if(figlioSX(t) == NULL && figlioDX(t) == NULL) 
        return 1;

    int k_sx = k_bilanciato(figlioSX(t), k);
    int k_dx = k_bilanciato(figlioDX(t), k);


    int diff = altezza(figlioSX(t)) - altezza(figlioDX(t));

    if (diff < 0) {
        diff = diff * (-1);
    }
    
    return k_sx && k_dx && (diff <= k);
}

int altezza(BST t) {
    if (t == NULL) return 0;
 
    int sx, dx;

    sx = 1 + altezza(figlioSX(t));
    dx = 1 + altezza(figlioDX(t));

    if (sx < dx) {
        return dx;
    }
    else {
        return sx;
    }
}

BST aggiungi(BST t, Item *arr, int i, int size) {
    if(i >= size) return t;

    int mid = (i + size) / 2; 

    t = insertNode(t, arr[mid]);
    t = aggiungi(t, arr, i, mid);
    t = aggiungi(t, arr, mid+1, size);
    
    return t;
}

/*void stampa_foglie(BST t) {
    if(t == NULL) return;

    if(altezza(figlioSX(t)) <= altezza(figlioDX(t))) {
        stampa_foglie(figlioSX(t));
        stampa_foglie(figlioDX(t));
    }
    else {
        stampa_foglie(figlioDX(t));
        stampa_foglie(figlioSX(t));
    }

    if(figlioSX(t) == NULL && figlioDX(t) == NULL) {
        printItem(getItem(t));
        putchar(' ');
        return;
    }
}*/

void stampa_foglie(BST t) {
    Queue q = newQueue(); 

    BST node; 

    enqueue(q, t);

    while(!isEmptyQueue(q)) {
        node = dequeue(q);

        if(figlioSX(node) != NULL) {
            enqueue(q, figlioSX(node));
        }

        if(figlioDX(node) != NULL) {
            enqueue(q, figlioDX(node));
        }

        if(figlioSX(node) == NULL && figlioDX(node) == NULL){
            printItem(getItem(node));
            putchar(' ');
        }
    }
}

int sumLeafNodes(Btree t) {
    if(t == NULL) return 0;

    if(figlioSX(t) == NULL && figlioDX(t) == NULL) {
        return getItem(t); 
    }

    return sumLeafNodes(figlioSX(t)) + sumLeafNodes(figlioDX(t));

}

List chiaveMinore(Btree t, Item k) {
    Queue q = newQueue();
    List l = newList();

    enqueue(q, t);
    Btree tmp;

    while (!isEmptyQueue(q)) {
        tmp = dequeue(q);
        
        if (figlioSX(tmp) != NULL) {
            enqueue(q, figlioSX(tmp));
        }

        if (figlioDX(tmp) != NULL) {
            enqueue(q, figlioDX(tmp));
        }

        if (isMinus(getItem(tmp), k)) {
            addFirst(l, getItem(tmp));
        }

    }

    return reverseList(l);
}

void reverseQueue(Queue q) {
    if(isEmptyQueue(q)) return;

    Item e = dequeue(q);

    reverseQueue(q);

    enqueue(q, e);
}
