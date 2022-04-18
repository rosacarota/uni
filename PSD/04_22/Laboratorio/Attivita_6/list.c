#include <stdio.h>
#include <stdlib.h>
#include "item.h" 
#include "list.h"

struct List {
    struct Node *head;
    int size;
};

struct Node {
     item value;
     struct Node *next;
};

List newList(void) {
    List l; 
    
    l = malloc(sizeof(struct List));
    if(l == NULL) return NULL;

    l->head = NULL;
    l->size = 0;

    return l;
}

int emptyList(List list) { 
    return list->head == NULL;
}

List addHead(List list, item val) {
    struct Node *new; 
    
    new = malloc(sizeof(struct Node));
    if(new == NULL) return NULL; 

    new->next = NULL;
    new->value = val;
    
    //controllo se non ci sono elementi 
    if(list->head == NULL) {
        list->head = new;
        (list->size)++;
        return list;
    }

    new->next = list->head; 
    list->head = new;
    (list->size)++;

    return list;
}

List nextNode(List list) {
    if(list->head != NULL) {
        list->head = list->head->next;
        return list;
    }

    return NULL;
}

item getItem(List list) {
    if(!emptyList(list)) {
        return list->head->value;
    }

    return NULLITEM; 
}

int sizeList(List list) {
    return list->size;
}

int posItem(List list, item val) {
    int pos = 0;
    int found = 0;

    while(!emptyList(list) && !found) {
        if(eq(getItem(list), val)) {
            found = 1;
        }
        else {
            list = nextNode(list);
            pos++;
        }
    }

    return found == 0 ? -1 : pos;
}

item getItemPos(List list, int pos) {
    int i = 0;

    while(i < pos && !emptyList(list)) {
        list = nextNode(list);
        i++;
    }

    if(!emptyList(list)) {
        return getItem(list);
    }

    return NULLITEM;
}

List reverseList(List list) {
    List reverse;
    List tmp = list;
    item val;

    reverse = newList();

    while(!emptyList(list)){
        val = getItem(list);
        reverse = addHead(reverse, val);
        list = nextNode(list);
    }

    freeList(tmp);
    return reverse;
}

void printList(List list) {
    int i = 0;
    item val; 
    struct Node *tmp = list->head;
    
    while(!emptyList(list)) { 
        val = getItem(list);
        printf("Elemento di posizione %d: \n", i);
        output_item(val);
        list = nextNode(list);
        i++;
    }

    list->head = tmp;

    /*while(!emptyList(list)){
        val = getItem(list);
        printf("Elemento di posizione %d: \n", i);
        output_item(val);
        head = nextNode(head);
    }*/
}

void freeList(List list){
    struct Node *tmp;
    /*int size = sizeList(list);

    for(i = 0; i < size; i++) {
        tmp = list->head;
        list = nextNode(list);
        free(tmp);
    }

    free(list);*/

    while(!emptyList(list)) {
        tmp = list->head;
        list = nextNode(list);
        free(tmp);
    }

    free(list);
}
