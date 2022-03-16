//una funzione void inverti(char**)
//che prende la matrice e rimpiazza la stringa del nome
// con quella del cognome e viceversa 
// (in sostanza uno swap delle due stringhe)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* leggi_stringa(int buff);
void array_stringhe(char *A[2], char *nome, char *cognome);
void inverti(char **A);
void copia_stringa(char *s1, const char *s2);

int main(void){
    char *nome;
    char *cognome;
    char *A[2];

    printf("Inserisci nome: " );
    nome = leggi_stringa(30);

    printf("Inserisci cognome: ");
    cognome = leggi_stringa(30);
    
    printf("\nNomi e cognomi aggiunti:\n");
    printf("%s\n", nome);
    printf("%s\n", cognome);

    array_stringhe(A, nome, cognome);
    
    printf("\nNome e cognome nella matrice: ");
    printf("\n%s", A[0]);
    printf("\n%s\n", A[1]);
    
    inverti(A);
    
    printf("\n[Matrice invertita]:");
    printf("\n%s\n", A[0]);
    printf("%s\n", A[1]);

    return 0;
}
char *leggi_stringa(int buff){
    char *p;
    char s[30];
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

    copia_stringa(p, s);

    return p;
}

void array_stringhe(char *A[2], char* nome, char *cognome){

    A[0] = nome;
    A[1] = cognome;

}

void inverti(char **A){
    char p[strlen(A[0]) + 1];
    
    copia_stringa(p, A[0]);
    A[0] = realloc(A[0], strlen(A[1]) + 1);
    copia_stringa(A[0], A[1]);
    A[1] = realloc(A[1], strlen(p) + 1);
    copia_stringa(A[1], p);

}

void copia_stringa(char *s1, const char *s2){
    char *pi = s1;
    
    while(*s2){
        *pi++ = *s2++;
    }

    *pi = '\0';
}

