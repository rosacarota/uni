//una funzione void inverti(char**)
//che prende la matrice e rimpiazza la stringa del nome
// con quella del cognome e viceversa 
// (in sostanza uno swap delle due stringhe)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* leggi_stringa();
void array_stringhe(char *A[2], char *nome, char *cognome);
void inverti(char **A);
void copia_stringa(char *s1, const char *s2);

int main(void){
    char *nome;
    char *cognome;
    char *A[2];

    printf("Inserisci nome: " );
    nome = leggi_stringa();

    printf("Inserisci cognome: ");
    cognome = leggi_stringa();
    
    printf("Nomi e cognomi aggiu\nti:\n")
    printf("%s\n", nome);
    printf("%s", cognome);

    array_stringhe(A, nome, cognome);
    
    printf("Nome e cognome nella matrice: ")
    printf("\n%s", A[0]);
    printf("\n%s", A[1]);
    
    inverti(A);
    
    printf("[Matrice invertita]:")
    printf("\n%s\n", A[0]);
    printf("%s\n", A[1]);

    return 0;
}
char *leggi_stringa(){
    char *s;

    s = malloc(30 + 1);
    if(!s){
        return NULL;
    }

    fgets(s, 30, stdin);
    if( s[strlen(s) - 1] == '\n'){
        s[strlen(s) - 1] = '\0';
    }

    return s;
}

void array_stringhe(char *A[2], char* nome, char *cognome){

    A[0] = nome;
    A[1] = cognome;

}

void inverti(char **A){
    char p[strlen(A[0]) + 1];
    
    copia_stringa(p, A[0]);
    copia_stringa(A[0], A[1]);
    copia_stringa(A[1], p);

}

void copia_stringa(char *s1, const char *s2){
    char *pi = s1;
    
    while(*s2){
        *pi++ = *s2++;
    }

    *pi = '\0';
}

