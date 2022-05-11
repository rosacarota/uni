/*Scrivere un programma che chiede all'utente di inserire il proprio 
nome e cognome e che allochi dinamicamente lo spazio necessario a 
memoriccare i due array di caretteri separatamente
dopo di che si pongano i due array in una matrice*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* leggi_stringa(int buff);
char minimo(char *s);
void array_stringhe(char *A[2], char *nome, char *cognome);
char *minimo2(char **A);
void copia_stringa(char *s1, const char *s2);

int main(void){
    char *nome;
    char *cognome;
    char min_c, min_n;
    char *A[2];
    char *min;

    printf("Inserisci nome: " );
    nome = leggi_stringa(30);

    printf("Inserisci cognome: ");
    cognome = leggi_stringa(30);

    printf("\nNome inserito: %s\n", nome);
    printf("Cognome inserito: %s", cognome);

    min_n = minimo(nome);
    min_c = minimo(cognome);
    
    printf("\n\nMinimo del nome: %c", min_n);
    printf("\nMinimo del cognome: %c", min_c);

    array_stringhe(A, nome, cognome);

    min = minimo2(A);

    printf("\n\nMinimo nell'array: %s\n", min);

}
//Funzione di copia di una stringa in un'altra
void copia_stringa(char *s1, const char *s2) {
    char *pi = s1;

    while(*s2) {
        *pi++ = *s2++;
    }
    
    *pi = '\0';
}

//Funzione che legge da stdin la stringa 
//dato un determinato buffer
char *leggi_stringa(int buff){
    char s[buff + 2];
    char *p;    
    char ch;
    int i = 0;

    while((ch = getchar()) != '\n' && i < (buff + 2) ){
        s[i] = ch;
        i++;
    } //legge carattere per carattere la stringa

    s[i] = '\0'; // aggiunge il terminatore alla fine
    
    p = malloc(strlen(s)+1);
    
    //faccio la copia della stringa in un'altra
    //allocata dinamicamente delle giuste dimensioni
    //rispetto ai caratteri inseriti
    copia_stringa(p, s);

    return p;
    
}

void array_stringhe(char *A[2], char* nome, char *cognome){
    
    A[0] = nome;
    A[1] = cognome;

}

//Funzione che trova il carttere più piccolo 
//della stringa
char minimo(char *s){
    char *p; 
    p = s;
    char min;
    int i, j;
    min = p[0]; 

    for(j = 0 ; j < (strlen(s) - 1); j++){
            if (min > p[j]){
                min = p[j]; 
            }
        }
    return min;
}

//Funzione che trova i due caratteri più piccoli
//di nome e cognome e li copia in una stringa 
//allocata dinamicamente
char *minimo2(char **A){
    char *minimo2;
    minimo2 = malloc(sizeof(char) * 2);

    if(!minimo2){
        exit(0);
    }

    minimo2[0] = minimo(A[0]);
    minimo2[1] = minimo(A[1]);

    return minimo2;

}
