#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLUN 20
#define NOMIMAX 2  

void leggi(char string[]);
char *leggi_stringa(int maxlun);
void ins_name_sur(char *EL[][2]);
char *ins_namecompare(char *string);
void namecompare(char *string, char *EL[][2]);

int main(){
    char *EL[NOMIMAX][2];
    char *string;
    
    ins_name_sur(EL);

    string = ins_namecompare(string);

    namecompare(string, EL);
}

void leggi(char string[]){
    int n; 

    fgets(string, MAXLUN + 2, stdin);
    n = strlen(string);
    if (string [n - 1] == '\n'){
        string[n - 1] = '\0';
    }
}

char *leggi_stringa(int maxlun){
    char *string, *string1;
    int lun;
    string = malloc(MAXLUN +1);
    if (!string){
        return NULL;
    }

    leggi(string);
    lun = strlen(string);

    string1 = malloc(lun + 1);
    if (!string1) {
        free(string);
        return NULL;
    }
 
    strcpy(string1, string);
    
    free(string);

    return string1;
}

void ins_name_sur(char *EL[][2]){
    int i, j;
    
    printf("Inserisci il nome e cognome (premi invio tra nome e cognome)\n");

    for(i = 0; i < NOMIMAX; i++){
        printf("Inserisci nome: ");
        EL[i][0] = leggi_stringa(MAXLUN);
        printf("Inserisci cognome: ");
        EL[i][1] = leggi_stringa(MAXLUN);
    }

}

char *ins_namecompare(char *string) {
    printf("Inserisci la stringa da comparare: ");
    string = leggi_stringa(MAXLUN + 1);
    return string;
}

void namecompare(char *string, char *EL[][2]) {
    int i, count = 0;
    
    for(i = 0; i < NOMIMAX ; i++){
        if (strcmp(string, EL[i][0]) == 0){
            printf("Cognome associato: " );
            printf("%s\n ", EL[i][1]);
            count++;
         }
    }

    if (count == 0)
        printf("Non esiste nessun cognome associato al nome %s\n", string);

}



