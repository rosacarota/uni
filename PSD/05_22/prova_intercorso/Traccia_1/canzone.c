#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "canzone.h"

struct Item {
    char *titolo;
    char *cantante;
    int durata;
};

Canzone creaCanzone(char *t, char *ca, int d) {
    Canzone c; 
   
    c = malloc(sizeof(struct Item));
    if(c == NULL) return NULL;

    int lun_t = strlen(t);
    c->titolo = malloc(lun_t + 1);
    if(c->titolo == NULL) return NULL;
    
    strcpy(c->titolo, t);
    
    int lun_c = strlen(ca);
    c->cantante = malloc(lun_c + 1);
    if(c->cantante == NULL) return NULL;

    strcpy(c->cantante, ca);

    c->durata = d;

    return c;
}

void printCanzone(Canzone c) {
    printf("\nTitolo: %s", c->titolo);
    printf("\nCantante: %s", c->cantante); 
    printf("\nDurata in secondi: %d", c->durata);
}

char *getCantante(Canzone c) {
    if(c == NULL) return NULL;
    return c->cantante;
}
