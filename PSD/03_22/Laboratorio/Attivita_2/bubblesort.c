#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *leggi_stringa(int buff);
void ordina(char *s);

int main(void){
    char *nome, *cognome;
    
    printf("Inserisci nome: ");
    nome = leggi_stringa(30);

    printf("Inserisci cognome: ");
    cognome = leggi_stringa(30);

    ordina(nome);
    ordina(cognome);
    
    printf("Nome ordinato: %s\nCognome ordinato: %s", nome, cognome);
    
    return 0;
}

char *leggi_stringa(int buff){
    char *s;
    char ch, p[buff + 1];
    int i = 0;

    while((ch = getchar()) != '\n'){
        if (i < buff)
            p[i++] = ch;
    }

    p[i]= '\0';

    s = malloc(strlen(p) + 1);

    strcpy(s, p);

    return s;
}

void ordina(char *s){
    int i, j;
    int lun;
    int temp; 

    lun = strlen(s);

    for(i = 0; i < lun; i++){
        for(j = 0; j < (lun - 1 - i); j++){
            if (s[j] > s[j+1]){
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}
