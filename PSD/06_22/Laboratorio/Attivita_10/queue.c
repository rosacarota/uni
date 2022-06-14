#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct Node {
    struct Node *next;
    Btree tree;
};

struct Queue {
    struct Node *head;
    struct Node *tail;
    int size;
};

Queue newQueue(void) {
    Queue q;

    q = malloc(sizeof(struct Queue));
    if(q == NULL) return NULL;

    q->head = NULL;
    q->tail = NULL;
    q->size = 0;
    
    return q;
}

int isEmptyQueue(Queue q) {
    return q->size == 0;
}

int enqueue(Queue q, Btree t) {
    struct Node *new;

    new = malloc(sizeof(struct Node));
    if(new == NULL) return 0;

    new->next = NULL;
    new->tree = t;

    if(q->head == NULL) {
        q->head = new;
        q->tail = new;
        (q->size)++;
        return 1;
    }
    
    q->tail->next = new;
    q->tail = new;
    (q->size)++;

    return 1;
}

Btree dequeue(Queue q) {
    struct Node *tmp;
    Btree val;

    if(q->head == NULL) return NULLITEM;

    val = q->head->tree;

    tmp = q->head;
    q->head = q->head->next;
    free(tmp);

    (q->size)--;

    return val;
}

/*void printQueue(Queue q) {
    struct Node *head = q->head;
    int i = 0;

    while(head != NULL) {
        printf("Element %d = ", i);
        printItem(head->data);
        putchar('\n');
        head = head->next;
        i++;
    }
}

void freeQueue(Queue q) {
    struct Node *tmp;

    while(q->head != NULL) {
        tmp = q->head;
        q->head = q->head->next;
        free(tmp);
    }

    free(q);
}*/
