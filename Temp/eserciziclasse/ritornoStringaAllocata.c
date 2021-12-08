#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAXLUN 50
#define N 4

void leggi(char string[]);
void riempi_array(char *string);
//char *alloca_stringa(char *string[], int *count);


int main(){
    char *string[N];
    int *lunghezza;
    int count = 0; 

    riempi_array(string);
    //string[count] = alloca_stringa(string, &count);
    
    //printf("%s", *string);

    return 0;
}

void leggi(char string[]){
    int lun;

    printf("Inserisci stringa:\n");
    fgets(string, MAXLUN + 2, stdin);

    lun = strlen(string);

    if (string[lun - 1] == '\n'){
        string[lun - 1] == '\0';
    }
}

void riempi_array(char *string){
    int i, j;

    for(i = 0; i < N; i++){
        leggi(string[i]);
    }

    for (j = 0; j < N; i++){
    printf("%s", string[i]);
    }
}

/*char *alloca_stringa(char *string[], int *count){
    char string1[MAXLUN], *string2;
    int lun;
    int i;  
    
    for (i = 0; i < N; i++){
        if (string[i] == NULL){
            i++;
        }
        
        if (isalpha(*string[i]) == 0){
            i++;
        }
       
        string1[*count] = *string[i];
        *count ++;
    }

    lun = strlen(string1);

    string2 = malloc(lun + 1);
    
    if(!string2){
        return NULL;
    }

    strcpy(string2, string1); 
    
    return string2;
}
*/

