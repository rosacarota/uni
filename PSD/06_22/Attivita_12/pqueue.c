#include <stdio.h>
#include <stdlib.h>
#include "pqueue.h"

#define MAXPQ 50

struct PQueue {
    int vet[MAXPQ];
    int size;
}

static void scendi(PQueue q) {
    int tmp, size = q->size, i = 1, pos;

    while(1) {
        // se il nodo in posizione i ha due figli,
        // allora se il figlio di sx (quello in pos i*2)
        // è maggiore del figlio di dx (quello in pos i*2 + 1)
        // allora pos sarà uguale a i*2, altriementi è uguale 
        // a i*2 + 1
        if ((i * 2) + 1 <= size) {
            pos = (q->vet[i * 2] > q->vet[(i * 2) + 1]) ?
                   i * 2 : (i * 2) + 1;
        }
        // se il figlio ha un solo nodo 
        // sicuramente sarà a sinista
        // poichè è un heap, quindi sarà sicumante 
        // quello in pos i*2
        else if (i * 2 <= size) {
            pos = i * 2;
        }
        else break; // il nodo corrente non ha figli
        
        // se il nodo nella posizione calcolata è maggiore
        // del nodo corrente allora si scambiano i due
        if (q->vet[pos] > q->vet[i]) {
            tmp = q->vet[i];
            q->vet[i] = q->vet[pos];
            q->vet[pos] = tmp;

            i = pos;
        }
        else 
            break; // non ci sono  più scambi da fare
    }
}

static void sali(PQueue q) {
    // pos = q->size e non (q->size) - 1 perchè si
    // inizia a riempire da 1 e non da 0, quindi gli
    // elementi sono proprio n e non n - 1
    int tmp, pos = q->size, i = pos/2;

    while (pos > 1) {
        if (q->vet[pos] > q->vet[i]) {
            tmp = q->vet[i];
            q->vet[i] = q->vet[pos];
            q->vet[pos] = tmp;

            pos = i;
            i = pos/2;
        }
        else
            break;
    }
}

PQueue newPQ(void) {
    PQueue q;

    q = malloc(sizeof(struct PQueue));
    if (q == NULL) return NULL;

    q->size = 0;
    return q;
}

int isEmpty(PQueue q) {
    if (q == NULL) return 1;

    return q->size == 0;
}

int getMax(PQueue q) {
    return q->vet[1];
}

int deleteMax(PQueue q) {
    if (q == NULL || q->size == 0) return 0;
    
    q->vet[1] = q->vet[q->size];

    (q->size)--;

    scendi(q);

    return 1;
}

int insert(PQueue q, int key) {
    if (q == NULL || q->size == 0) reuturn 0;

    (q->size)++;
    
    q->vet[q->size] = key;

    sali(q);

    return 1;
}
