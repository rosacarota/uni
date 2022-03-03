/*Scrivere un programma che chiede all'utente di inserire il proprio 
nome e cognome e che allochi dinamicamente lo spazio necessario a 
memoriccare i due array di caretteri separatamente
dopo di che si pongano di due array in una matrice*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* leggi_stringa();
char minimo(char *s);
void array_stringhe(char *A[2], char *nome, char *cognome);
char *minimo2(char **A);

int main(void){
    char *nome;
    char *cognome;
    char min_c, min_n;
    char *A[2];
    char *min;

    printf("Inserisci nome: " );
    nome = leggi_stringa();

    printf("Inserisci cognome: ");
    cognome = leggi_stringa();

    printf("%s\n", nome);
    printf("%s", cognome);

    min_n = minimo(nome);
    min_c = minimo(cognome);
    
    printf("\n%c", min_n);
    printf("\n%c", min_c);

    array_stringhe(A, nome, cognome);

    printf("\n%s", A[0]);
    printf("\n%s", A[1]);

    min = minimo2(A);

    printf("\n%s\n", min);

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
