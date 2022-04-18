#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct Stack {
    struct Node* head;
    int size;
};

struct Node {
    struct Node* next;
    Item data;
};

Stack newStack(void) {
    Stack s;

    s = malloc(sizeof(struct Stack));
    if(s == NULL) return NULL;

    s->head = NULL;
    s->size = 0;

    return s;
}

int isEmpty(Stack s) {
    return (s->size) == 0;
}

int push(Stack s, Item it) {
    struct Node* new;
    
    new = malloc(sizeof(struct Node));
    if(new == NULL) return 0;
    
    new->data = it;
    
    new->next = s->head; 
    s->head = new;

    (s->size)++;
   
    return 1; 
}

int pop(Stack s) {
    struct Node* tmp;

    if(isEmpty(s)) return 0;

    tmp = s->head;
    s->head = s->head->next;
    free(tmp);
    
    (s->size)--;

    return 1;
}

Item top(Stack s){
    if(isEmpty(s)) return NULLITEM;

    return s->head->data;
}

void freeStack(Stack s) {
    struct Node* tmp;

    while(s->head != NULL) {
        tmp = s->head;
        s->head = s->head->next;
        free(tmp);
    }

    free(s);
}
