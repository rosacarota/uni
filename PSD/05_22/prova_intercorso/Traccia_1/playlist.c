#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "playlist.h"
#include "canzone.h"

struct Node{
    Canzone c;
    struct Node* next;
};

struct Queue {
    struct Node* head;
    struct Node* tail; 
    int size;
};

Playlist newPlaylist(void) {
    Playlist new; 

    new = malloc(sizeof(struct Queue));
    if(new == NULL) return NULL;

    new->head = NULL;
    new->tail = NULL;
    new->size = 0;

    return new;
}

int isEmpty(Playlist p) {
    return p->size == 0;
}

int enqueue(Playlist p, Canzone c) {
    struct Node *new;

    new = malloc(sizeof(struct Node*));
    if(new == NULL) return 0;

    new->c = c;
    new->next = NULL;

    if(isEmpty(p)) {
        p->head = new; 
        p->tail = new;
        (p->size)++;

        return 1;
    } 
    
    p->tail->next = new; 
    p->tail = new;
    
    (p->size)++;

    return 1;
}

Canzone dequeue(Playlist p) {
    Canzone c; 
    
    if(p == NULL) return NULLITEM;
    
    struct Node *tmp;
    
    c = p->head->c;
    tmp = p->head; 
    p->head = p->head->next;
    free(tmp);

    (p->size)--;

    return c;
}


void printPlaylist(Playlist p) {
    struct Node *head;
    int i = 0;
    
    head = p->head;

    while(head != NULL) {
        putchar('\n');
        printf("Canzone numero %d", i++);
        printCanzone(head->c);
        putchar('\n');
        head = head->next;
    }
}

int removeCanzone(Playlist p, int pos) {
    if(p == NULL) return 0;
    int i = 0; 
    
    struct Node *head, *tmp;

    head = p->head;
    
    if(pos == 0) {
        tmp = p->head; 
        p->head = p->head->next;
        free(tmp);
        return 1;
    }
    
    head = p->head; 
    
    while(i < pos - 1 && head != NULL) { 
        head = head->next;
        i++;
    }
    
    if(head == NULL) return 0;
    if(head->next == NULL) return 0;

    tmp = head->next; 
    head->next = tmp->next; 
    free(tmp);

    return 1;
}

int forward(Playlist p, int pos) {
    if(p == NULL) return 0;

    int i = 0; 
    struct Node *head;
    Canzone c1, c2; 

    head = p->head; 
    
    while(i < pos && head != NULL) {
        head = head->next; 
        i++;
    }
    
    if(head == NULL) return 0;
    if(head->next == NULL) return 0;

    c1 = head->c; 
    c2 = (head->next)->c;

    head->c = c2; 
    (head->next)->c = c1;
    
    return 1;

}

int back(Playlist p, int pos) {
    if(p == NULL) return 0;

    int i = 0; 
    struct Node *head;
    Canzone c1, c2; 
    
    if(pos == 0) return 0;
   
    head = p->head; 
    while(i < pos - 1 && head != NULL) {
        head = head->next; 
        i++;
    }
    
    if(head == NULL) return 0;
    if(head->next == NULL) return 0;

    c1 = head->c; 
    c2 = (head->next)->c;

    head->c = c2; 
    (head->next)->c = c1;
    
    return 1;
}

Playlist sottoPlaylist(Playlist p, char *cantante) {
    if(p == NULL) return NULL;
    if(isEmpty(p)) return NULL;
    
    Playlist new;
    struct Node *head;
    char *ca;
    
    new = newPlaylist();

    head = p->head;

    while(head != NULL) {
        ca = getCantante(head->c);
        if(!strcmp(ca, cantante)){
            enqueue(new, head->c);
        }
        head = head->next;
    }

    return new;
}
