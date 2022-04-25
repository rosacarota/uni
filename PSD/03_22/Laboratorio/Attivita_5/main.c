#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libro.h"


#define BUFFSIZE 100

/*//Ricerca del libro più vecchio
libro libropiuvecchio(libro* biblioteca);

//Ricerca del libro meno costoso
libro libromenocostoso(libro* biblioteca);

//Trova tutti i libri dell’editore X
libro* ricercaeditore(char* editore);

//Ridurre del X% il costo dei libri dell’anno AAAA.
// questa funzione potrebbe restituire void oppure un intero
// che restiuisce 0 in caso tutto è andato correttamente
int scontalibri(libro* biblioteca, int anno, float percentuale);

//Trova due libri con scarto di prezzo minore
libro* trovalibriprezzosimile(libro* biblioteca);

//Calcola il costo totale di tutti i libri dell’anno AAAA
float costototale(libro* biblioteca, int anno);

//Elimina i libri dell'anno AAAA
void eliminaLibri(libro* biblioteca, int anno);*/

void leggi_stringa(char *s);

int main(int argc, char *argv[]) {
    int n;
    Libro *biblioteca;
    char tit[100];
    char ed[50];
    char buffer[50];
    float pr;
    int an;

    printf("Dammi il numero di libri in biblioteca da inserire: ");
    scanf("%d", &n);
    getchar();

    biblioteca = malloc(sizeof(Libro)*n);
    if(biblioteca == NULL) exit(-1);

    for(int i = 0; i < n; i++){
        printf("Inserisci titolo: ");
        leggi_stringa(tit);

        printf("Inserisci editore: ");
        leggi_stringa(ed);
        
        printf("Inserisci prezzo: ");
        scanf("%f", &pr);
        getchar();

        printf("Inserisci anno: ");
        scanf("%d", &an);
        getchar();

        biblioteca[i] = creaLibro(tit, ed, pr, an);
        
        putchar('\n');
    }

    for (int i=0; i < n; i++) { 
        printf("Titolo: %s\n", titolo(biblioteca[i]));
        printf("Editore: %s\n", editore(biblioteca[i]));
        printf("Prezzo: %.2f\n", prezzo(biblioteca[i]));
        printf("Anno: %d\n", anno(biblioteca[i]));
        
        putchar('\n');
    }
   
   
    return 0;
}

void leggi_stringa(char *s) {
    char s1[BUFFSIZE];
    int i = 0;
    char ch;

    while((ch = getchar()) != '\n') {
        s1[i] = ch;
        i++;
    }

    s[i] = '\0';

    strcpy(s, s1);
}
