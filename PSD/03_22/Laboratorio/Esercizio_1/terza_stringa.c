/* una funzione void crea (char**) che aggiunge 
 * una terza stringa alla matrice composta dai primi 
 * tre caratteri del nome e gli ultimi tre del cognome. 
 * Fare uso delle funzioni di copia di stringhe e, 
 * possibilmente, aritmetica dei puntatori.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NSTRINGS 2

void *xmalloc(size_t bytes);
char* leggi_stringa(int buff);
void array_stringhe(char *A[], char *s, int *pos);
void copia_stringa(char *s1, const char *s2, int nchars);
void terza_stringa(char **A, int *pos);
void *xmalloc(size_t bytes);

int main(void){
    char *nome;
    char *cognome;
    char **A = xmalloc(sizeof(char *) * NSTRINGS);
    int i = 0;

    printf("Inserisci nome: " );
    nome = leggi_stringa(30);

    printf("Inserisci cognome: ");
    cognome = leggi_stringa(30);
    
    printf("\nNomi e cognomi aggiunti:\n");
    printf("%s\n", nome);
    printf("%s\n", cognome);

    array_stringhe(A, nome, &i);
    array_stringhe(A, cognome, &i);
     
    printf("\nNome e cognome nella matrice: ");
    printf("\n%s", A[0]);
    printf("\n%s\n", A[1]);

    terza_stringa(A, &i);
    printf("\nTerza stringa %s\n", A[2]);

    return 0;
}
char *leggi_stringa(int buff){
    char *p;
    char s[buff + 1];
    char ch;
    int i = 0;

    while ((ch = getchar()) != '\n' && i < buff){
        s[i] = ch;
        i++;
    }

    s[i] = '\0';

    p = malloc(strlen(s) + 1);
    if(!p){
        exit(-1);
    }

    copia_stringa(p, s, strlen(s) + 1);

    return p;
}

void *xmalloc(size_t bytes){
    void *p; 
    p = malloc(bytes);

    if(!p){
        exit(-1);
    }
    
    return p;
}

void *xrealloc(void *p, size_t bytes){
    
    p = realloc(p, bytes);

    if(!p){
        exit(-1);
    }

    return p;
}

void array_stringhe(char *A[], char *s, int *pos){
    
    A[*pos] = s;
    (*pos)++;

}

void terza_stringa(char **A, int *pos){
    char *terza_stringa; 
    char *pi;
    
    A = xrealloc(A, (sizeof(char*))*(NSTRINGS + 1));
    A[2] = xmalloc(3+3+1);
    
    terza_stringa = A[2];
    
    copia_stringa(A[2], A[0], 3);
    
    strcat(A[2], A[1] + strlen(A[1]) - 3);
    printf("%s\n", A[2]);

}

void copia_stringa(char *s1, const char *s2, int nchars){
    char *pi = s1;
    int i = 0;

    while(*s2 && i < nchars){
        *pi++ = *s2++;
        i++;
    }

    *pi = '\0';
}

