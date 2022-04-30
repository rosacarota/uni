#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "stack.h"

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

int emptyQueue(Queue q) {
    return q->size == 0;
}

int enqueue(Queue q, Item it) {
    Stack s, rev;
    Item val;
    struct Node* new;

    s = newStack();
    rev = newStack();

    if(emptyQueue(q)){
        new = malloc(sizeof(struct Node));
        if(new == NULL) return 0;

        new->data = it;

        q->head = new;
        q->tail = new;

        (q->size)++;

        return 1;
    }

    while(!emptyQueue(q)) {
        val = dequeue(q);
        push(s, val);
    }

    push(s, it);
    
    while(!isEmpty(s)) {
        val = top(s);
        push(rev, val);
        pop(s);
    }
    
    freeStack(s);

    //----------------------------------------
    //muori figlio di troia
    
    val = top(rev); 
    pop(rev);

    new = malloc(sizeof(struct Node));
    if(new == NULL) return 0;

    new->data = val;
    new->next = NULL;

    q->head = new; 
    q->tail = new; 

    (q->size)++;
    

    while(!isEmpty(rev)) {
        val = top(rev);
        pop(rev);

        new = malloc(sizeof(struct Node));
        if(new == NULL) return 0;

        new->data = val;
        new->next = NULL;

        q->tail->next = new;
        q->tail = new;
        
        (q->size)++;
    }
    
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

    (q->size)--;

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
