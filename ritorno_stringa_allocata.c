#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAXLUN 50
#define N 4

void *xmalloc(size_t bytes);
void leggi(char string[]);
void riempi_array(char *string_sorg[]);
char *alloca_stringa(char *string_sorg[]); 

int main(){
    char *string_sorg[N], *string_dest;
    int *lunghezza;
    
    riempi_array(string_sorg);
    string_dest = alloca_stringa(string_sorg);

    printf("\n%s" , string_dest);
   
    return 0;
}

void *xmalloc(size_t bytes){
    void *p;

    p = malloc(bytes);

    if (!p){
        exit(-1);
    }

    return p;
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

void riempi_array(char *string_sorg[]){
    int i, j;
    char string1[MAXLUN + 1];

    for(i = 0; i < N; i++){
        leggi(string1);
        string_sorg[i] = xmalloc(strlen(string1) + 1);
        strcpy(string_sorg[i], string1);
    }
    
}

char *alloca_stringa(char *string_sorg[]){
    char string1[MAXLUN], *string2;
    int lun;
    int i, count = 0;
    
    for (i = 0; i < N; i++){
        if (string_sorg[i] == NULL){
            i++;
        }
        
        if (isalpha(*(string_sorg[i])) == 0){
            i++;
        }
       
        string1[count] = *(string_sorg[i]);
        count ++;
    }

    lun = strlen(string1);

    string2 = xmalloc(lun + 1);
    
    strcpy(string2, string1); 
    
    for(i = 0; i < N; i++){
        free(string_sorg[i]);
    }

    return string2;
}


