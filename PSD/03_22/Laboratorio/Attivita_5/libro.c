#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libro.h"

struct Libro {
    char *titolo;
    char *editore;
    float prezzo;
    int anno;
};

Libro creaLibro(char *t, char *e, float p, int a) {
    Libro l;
    
    l = malloc(sizeof(struct Libro));
    if(l == NULL) exit(-1);

    l->titolo = malloc(strlen(t) + 1);
    if(l->titolo == NULL) return NULL;

    strcpy(l->titolo, t);

    l->editore = malloc(strlen(e) + 1);
    if(l->editore == NULL) return NULL;

    strcpy(l->editore, e);
    
    l->prezzo = p;
    l->anno = a;

    return l;
}

char *titolo(Libro l) { 
    char *t;

    t = malloc(sizeof(l->titolo));
    if(t == NULL) return NULL;

    strcpy(t, l->titolo); 

    return t;
}

char *editore(Libro l) { 
    char *e;

    e = malloc(sizeof(l->editore));
    if (e == NULL) return NULL;

    strcpy(e, l->editore);

    return e;
}

int anno(Libro l) {
    return l->anno;
} 

float prezzo(Libro l) {
    return l->prezzo;
}

float sconto(Libro *l, float percentuale){
    float p, tot;
    
    p = (*l)->prezzo;

    tot = p - (p * (percentuale/100));
    
    (*l)->prezzo = tot;

    return tot;

}

void aggiorna(Libro *l, int anno) {
	(*l)->anno = anno;
}

void freeLibro(Libro l) {
    free(l->titolo);
    free(l->editore);

    free(l);
}
