#include <stdio.h>
#include <string.h>

#define STR_LEN 30

void leggi(char string[]);
int count(char string[], char carattere);

int main(){
    char string[STR_LEN + 1], c;
    int rip;
    
    leggi(string);
    printf("Inserisci il carattere da comparare: ");
    scanf("%c", &c);
    
    rip = count(string, c);
    printf("La lettera %c è ripetuta %d volte\n", c, rip);


}

void leggi(char string[]){

    printf("Inserisci la stringa: ");
    fgets(string, STR_LEN, stdin);

    string[strlen(string) - 1] = '\0';
}

int count(char string[], char carattere){
    int counter = 0, i;

    if (carattere >= 'A' && carattere <= 'Z' || carattere >= 'a' && carattere <= 'z'){
        for( i = 0; i < strlen(string); i++){
            if(carattere == string[i] || carattere + ('a'-'A') == string[i]|| carattere - ('a' - 'A') == string[i]){
                counter++;
            }
        }
        return counter;
    }
    else {
        return 0;
    }
}


