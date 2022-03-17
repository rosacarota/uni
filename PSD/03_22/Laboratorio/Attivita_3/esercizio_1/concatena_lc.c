/*Un programma che implementa la funzione char* merge(char*, char*) 
che prende da riga di comando due stringhe e 
produce una nuova stringa che è il risultato della 
concatenazione delle due date in input. 
Il risultato va mostrato su standard output */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *copia_stringa(char *s, char *stringa);
char *merge(char *nome, char *cognome);

int main(int argc, char* argv[]){
    char *concatenata;

    if (argc < 3){
        printf("Non ci sono abbastanza argomenti\n");
    }
    else{
        concatenata = merge(argv[1], argv[2]);
        printf("%s\n", concatenata);
    }
    return 0;
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

char *copia_stringa(char *s, char *stringa){
    
    while(*stringa){
        *s = *stringa;
        s++;
        stringa++;
    }
    
    return s;
}

