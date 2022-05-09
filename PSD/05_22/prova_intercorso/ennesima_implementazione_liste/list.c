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

int addFront(List l, Item val) {
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

int addLast(List l, Item it) {
    if (it == NULLITEM) return 0;
    if (l->head == NULL) return 0;
    
    struct Node *new, *head;
   
    new = malloc(sizeof(struct Node));
    if(new == NULL) return 0;
    
    new->it = it;
    new->next = NULL;
    
    head = l->head;
    
    while (head->next != NULL) {
        head = head->next;
    }
    
    head->next = new;
    
    (l->size)++;
    
    return 1;
}



Item getFirst(List l)  {
    if (l->head == NULL) return NULLITEM;
    
    return l->head->it;
}

Item getItem(List l , int pos) {
    if (l->head == NULL) return NULLITEM; 
    
    if (pos >= l->size || pos < 0) return NULLITEM;
    
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

int removePos(List l, int pos) {
    if (l->head == NULL) return 0;
    
    if (pos >= l->size || pos < 0) return 0;
    
    struct Node *head, *tmp;
    int i = 0;
    
    head = l->head;
   
    if (pos == 0){
        tmp = l->head; 
        l->head = tmp->next;
        free(tmp);
        
        (l->size)--;
        
        return 1;
    }
    
    while (head != NULL && i < pos - 1) {
        head = head->next;
        i++;
    }
    
    tmp = head->next; 
    head->next = tmp->next; 
    free(tmp);
    
    (l->size)--;

    return 1;
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

int addPos(List l, int pos, Item it) {
    if (it == NULLITEM) return 0;
    if (pos >= l->size || pos < 0) return 0;
    if (l->head == NULL) return 0;
    
    struct Node *new; 
    int i = 0;
    
    new = malloc(sizeof(struct Node));
    if (new == NULL) return 0;
    
    new->it = it;
    
    if (pos == 0) {
        addFront(l,it);
        free(new);
        (l->size)++;
        return 1;
    }
    
    struct Node *head;
    head = l->head; 
    
    while (head != NULL && i < pos - 1 ) {
        head = head->next;
        i++;
    }
    
    new->next = head->next; 
    head->next = new;
    
    (l->size)++;
    
    return 1;    
}

List reverse(List l) {
    if(l->head == NULL) return l;
    
    struct Node *head; 
    List reversed = newList();
    Item it;
    
    head = l->head; 
    
    while (head != NULL) {
        it = head->it;
        addFront(reversed, it);
        head = head->next;        
    }
    
    return reversed;
}

int posItem(List l, Item it) {
    if (l->head == NULL) return -1;
    
    struct Node *head; 
    Item tmp;
    int i = 0;
    
    head = l->head;
    
    while (head != NULL) {
        tmp = head->it;
        
        if(eqItem(tmp, it)) 
            return i;
        
        head = head->next;
        i++;
    }
    
    return -1;
}

/* Tipi di dati: Lista, Item, int
Spacifica sintattica: 
cancFinoItem(List, Item) -> List
Specifica semantica:
cancFinoItem(l, it) -> l'

Precondizioni: La lista deve esistere 
Postcondizioni: restituisce una lista l' dove non sono presenti gli elementi
                in posizione precedente a el in l
                
Progettazione: 
1.Controllo che la lista non sia vuota, se è vuota restituisco la lista 
2.Richiamo la funzione posItem per sapere dove si trova l'elemento all'interno della lista l
  Se non è presente, restituisco l senza alcuna modifica 
3.Itero cancellando gli elementi dalla lista l fino ad it, creando quindi la lista l'
4.Restituisco la lista l'
*/
List cancFinoItem(List l, Item it) {
    if(l->head == NULL) return l;
    
    int pos = posItem(l, it);
    if(pos == -1) return l;
    
    struct Node *head, *tmp; 
    int i = 0;
    
    head = l->head; 
    
    while(i < pos) {
        tmp = head; 
        head = head->next; 
        free(tmp);
        (l->size)--;
        i++;
    }
    
    l->head = head;
    
    return l;   
}  
/*Tipi utilizzati: List, Item, int
Specifica sintattica: 
fondiDaItem(List, List, Item) -> List

Specifica Semantica;
fondiDaItem(l1, l2, it) -> l3
Precondizioni: l1 ed l2 devono esistere
Postcondizioni: restituisce una lista l3 che contiene, a partire dall'elemento it, gli elementi contenuti 
                sia in l1 che in l2
Progettazione: 
1. Controllo che l'item esista
2. Controllo che le due liste non siano vuote
3. 

List fondiDaItem(List l1, List l2, Item el) {
    
}
