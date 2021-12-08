#include <stdio.h>
#include <string.h>
#define MAXLUN 20

typedef struct{
    char nome[MAXLUN + 1];
    char cognome[MAXLUN + 1];
    int anni;
    int ID;
}ebreo;

void scheda_ebreo(ebreo *ebreo);
void leggi(char string[]);

int main(){
    ebreo *vittorio;
    ebreo *luca; 
    ebreo *rosalia;
    ebreo *angelo;
    ebreo *cristina;
    ebreo *sasha;
    ebreo *fabio;
    ebreo *carlo;
    ebreo *marco;
    
    ebreo *custom;

    inserisci_ebreo(vittorio, "Vittorio", "Borrello", 23, 696);
    inserisci_ebreo(vittorio, "Luca", "Casillo", 19, 456);
    inserisci_ebreo(vittorio, "Rosalia", "Fortino", 22, 333);
    inserisci_ebreo(vittorio, "Angelo", "De Luca", 19, 789);
    inserisci_ebreo(vittorio, "Cristina", "Perna", 19, );
    inserisci_ebreo(vittorio, "Salvatore", "Moscariello", 19, 696969);
    inserisci_ebreo(vittorio, "Fabio", "D'Antonio", 22, 696969);
    inserisci_ebreo(vittorio, "Carlo", "Sorrentino", 20, 696969);
    inserisci_ebreo(vittorio, "Marco", "D'Antonio", 23, 696969);
    
    scheda_ebreo(custom);
    
}

void scheda_ebreo(ebreo *ebreo){
    printf("Inserisci nome: ");
    leggi(ebreo->nome);

    printf("Inserisci cognome: ");
    leggi(ebreo->cognome);
    
    printf("Inserisci età: ");
    scanf("%d", &ebreo->anni);

    printf("Inserisci codice: ");
    scanf("%d", &ebreo->ID);
}

void leggi(char string[]){
    int lun;

    fgets(string, MAXLUN + 2, stdin);

    lun = strlen(string);

    if(string[lun - 1] == '\n'){
        string[lun - 1] = '\0';
    }
    
}

void lista_ebrei(ebreo *ebreo, char nome[], char cognome[], int anni, int ID){
   strcpy(ebreo->nome, nome);
   strcpy(ebreo->cognome, cognome);
   ebreo->anni = anni;
   ebreo->ID = ID;
}    

