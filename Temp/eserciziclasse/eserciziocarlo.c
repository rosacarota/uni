#include <stdio.h>
#include <string.h>
#define STR_LEN 50
void leggi(char string[]);
void compatta(char string[]);
void shift(char string[], int indice, int size);
void compatta_alfabeto(char string1[], char string2[], int size);
void aggiungi_lettera(char string1[], char string2[], int size);
void shift_dx(char string[], int size);

int main(){
    char string[STR_LEN + 1];
    char alfabeto[STR_LEN] = {'a','b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'z'};
    int i;
    
    leggi(string);
    compatta(string);

    printf("\n%s\n", string);

    compatta_alfabeto(string, alfabeto, 21);
   // aggiungi_lettera(string, alfabeto, 21);

    for(i = 0; i < 21; i++){
        printf("%c ", alfabeto[i]);
    }

    return 0;
}

void leggi(char string[]){
    printf("Inserisci una stringa: ");
    fgets(string, STR_LEN, stdin);

    string[strlen(string) - 1] = '\0';
}

void compatta(char string[]){
    int size, i, z = 0, j, temp;

    size = strlen(string);

    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if (string[i] == string[j]){
                shift(string, j, size);
            }
        }
    }
}

void shift(char string[], int indice, int size){
    int i;

    for(i = indice; i < size; i++){
        string[i] = string [i + 1];
    }
}

void compatta_alfabeto(char string1[], char string2[], int size2){
    int i, j, size1;

    size1 = strlen(string1);

    for(i = 0; i < size2 ; i++){
        for (j = 0; j < size1 + 1; j++){
            if (string2[i] == string1[j]){
                shift(string2, i, size2);
            }
        }
    }
}

void *concat(char string1[], char string2[], int size2){
    strcat (string1, string2);
    
    return dest;
}

/*void aggiungi_lettera(char string1[], char string2[], int size){
    int i, j;
    
    j = size - 1;
    for(i = 0; i < size + 1; i++){
        shift_dx(string2, size);
        string2[i] = string1[j];
        j--;
    }
}

void shift_dx(char string[], int size){
    int i, j; 
    
    j=0;
    for(i = size + j; i > 0; i--){
        string[i] = string[i+1];
        j++;
    }
}
*/



