#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct List {
    struct Node* head; 
    int size; 
};

struct Node {
    Item it;
    struct Node *next;
};

List newList() {
    List new; 
    
    new = malloc(sizeof (struct List)); 
    if (new == NULL) return NULL;
    
    new->head = NULL;
    new->size = 0;
    
    return new; 
}

int isEmpty(List l) {
    return l->size == 0;
}

int insertList(List l, Item val) {
    struct Node* new;
    
    new = malloc(sizeof(struct Node));
    if (new == NULL) return 0;
    
    new->it = val;
        
    if (l->head == NULL) {
        new->next = NULL;
        l->head = new;
        (l->size)++;
        return 1;
    }
    
    new->next = l->head;
    l->head = new; 
    (l->size)++;
    
    return 1;
}

Item getFirst(List l)  {
    if (l->head == NULL) return NULLITEM;
    
    return l->head->it;
}

Item getItem(List l , int pos) {
    if (l->head == NULL) return NULLITEM; 
    
    if (pos >= l->size) return NULLITEM;
    
    if (pos == 0) {
        return l->head->it;
    }
    
    struct Node *head; 
    int i = 0;
    
    head = l->head; 
    
    while (head != NULL && i < pos) {
        head = head->next;
        i++;
    }
    
    return head->it;
}

List removePos(List l, int pos) {
    if(l->head == NULL) return l;
    
    if(pos >= l->size) return l;
    
    struct Node *head, *tmp, *new_head;
    int i = 0;
    
    if(pos == 0){
        tmp = l->head; 
        l->head = tmp->next;
        free(tmp);
        
        (l->size)--;
        
        return l;
    }
    
    new_head = l->head;
    head = l->head;
    
    while(head != NULL && i < pos - 1) {
        head = head->next;
        i++;
    }
    
    tmp = head->next; 
    head->next = tmp->next; 
    free(tmp);
    
    (l->size)--;
    
    l->head = new_head;

    return l;
}

void printList(List l) {
    struct Node *head; 
    int i = 0; 
    
    head = l->head;
    
    while(head != NULL) {
        printf("\nElementino carino carino n.%d\n", i++);
        printItem(head->it);
        putchar('\n');
        head = head->next;        
    }
}
