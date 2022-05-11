#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct Node {
    struct Node *next;
    Item data;
};

List newList(void) {
    return NULL;
}

int isEmpty(List l) {
    return l == NULL;
}

List addFirst(List l, Item it) {
    struct Node* new; 

    new = malloc(sizeof(struct Node));
    if(new == NULL) return NULL;

    new->data = it;

    if(l == NULL) {
        new->next = NULL;
        l = new; 
        return l;
    } 

    new->next = l;
    l = new; 

    return l;
}
void printList(List l) {
    if(isEmpty(l)) return;

    int i = 0;

    while(!isEmpty(l)) {
        printf("Element %d\n", i++);
        printItem(l->data);
        l = l->next;
        putchar('\n');
    }
}
/*List cloneList(List l) {
    if (l->head == NULL) return NULL;

    List clone = newList();
    struct Node *head = l->head;
    Item it;

    while (head != NULL) {
        it = getItem(head);
        addFirst(clone, it);
        head = head->next;
    }

    clone = reverseList(clone);

    return clone;
}*/

//Non ricorsiva
int sizeList(List l) {
    if(l == NULL) return 0;

    int i = 0; 

    l = l->next; 
    
    while(l != NULL) {
       l = l->next; 
        i++;
    }
    
    return i;
}

int sizeListRec(List l) {
    if(l == NULL) return 0;

    l= l->next; 

    return 1 + sizeListRec(l);
}

/*void freeList(List l) {
    struct Node *tmp;

    while (l->head != NULL) {
        tmp = l->head;
        l->head = l->head->next;
        free(tmp);
    }

    free(l);
}

void destroyList(List l) {
    struct Node *tmp;

    while (l->head != NULL) {
        tmp = l->head;
        l->head = l->head->next;
        // freeItem(tmp->data);
        free(tmp);
    }

    free(l);
}*/
