#include <stdio.h>
#include <string.h>

#define STR_LEN 30

void leggi(char string[]);
int compare(char string1[], char string2[]);

int main(){
    char string1[STR_LEN], string2[STR_LEN];
    
    leggi(string1);
    leggi(string2);

    if(compare(string1, string2)){
        printf("Le stringhe sono postfisse\n");
    }
    else{
        printf("Le stringhe non sono postfisse\n");
    }

    return 0;
}

void leggi(char string[]){
    
    printf("Inserisci la stringa: ");
    fgets(string, STR_LEN, stdin);
    
    //elimino il carattere \n aggiunto da fgets (strlen da la 
    //lunghezza della stringa - il carattere del terminatore, ma è un 
    //array quindi faccio comunque -1
    string[(strlen(string) - 1)] = '\0';
}

int compare(char string1[], char string2[]){
    int size1, size2, counter = 0, i;

    size2 = strlen(string2);
    
    size1 = strlen(string1);
    
    for(i = size2 - 1; i > 0; i --){
        if (string1[size1 - 1] == string2[i]){
            counter++;
            size1--;
        }
    }
    
    size1 = strlen(string1);
    if (counter == size1){
        return 1;
    }
    
    return 0;
}





