/* Creare una funzione char *merge(char *, char *) che prende in
 * input il nome e il cognome e produca una nuova stringa che è il
 * risultato della concatenazione delle due date in input*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *leggi_stringa();
char *merge(char *nome, char *cognome);
char *copia_stringa(char *s, char *stringa);

int main(void){
    char *nome, *cognome;
    char *concat;

    printf("Inserisci nome: ");
    nome = leggi_stringa();
    
    printf("Inserisci cognome: ");
    cognome = leggi_stringa();
    
    concat = merge(nome, cognome);

    printf("\n%s", concat);
    return 0; 
}

char *leggi_stringa(){
    char *p, *s; 
    char ch;
    int i = 0;

    p = malloc((sizeof(char)*50) + 1);

    while((ch = getchar()) != '\n'){
        p[i++] = ch;
    }
   
    p[i]= '\0';
    
    s = malloc(strlen(p) + 1);

    strcpy(s, p);

    free(p);

    return s;
}
char *copia_stringa(char *s, char *stringa){
    
    while(*stringa){
        *s = *stringa;
        s++;
        stringa++;
    }
    
    return s;
}
    
char *merge(char *nome, char *cognome){
    char *p, *s;

    p = malloc(strlen(nome) + strlen(cognome) + 1);
    
    s = p;
    
    s = copia_stringa(s, nome);
    s = copia_stringa(s, cognome);

    *s = '\0';

    return p;
}   
