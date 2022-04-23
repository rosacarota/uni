#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct Node {
    struct Node *next;
    Item data;
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

int isEmpty(Queue q) {
    return q->size == 0;
}

int enqueue(Queue q, Item it) {
    struct Node *new;

    new = malloc(sizeof(struct Node));
    if(new == NULL) return 0;

    new->next = NULL;
    new->data = it;

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

Item dequeue(Queue q) {
    struct Node *tmp;
    Item val;

    if(q->head == NULL) return NULLITEM;

    val = q->head->data;

    tmp = q->head;
    q->head = q->head->next;
    free(tmp);

    return val;
}

void printQueue(Queue q) {
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
}
