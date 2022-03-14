/*Conta quante volte compare una determinata stringa 
 * all'interno di tutto il file (stringa da confrontare 
 * scrittada linea di comando*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int confronta_lettere(char *s1, char *s2);
int occorrenze(FILE *fp, char *s);
FILE* apertura_file(char **argv);
int main(int argc, char *argv[]){
    FILE *fp;
    int occorr;

    if(argc < 3){
        printf("Non ci sono abbastanza argomenti...");
    }
    else{
        fp = apertura_file(argv);
        occorr = occorrenze (fp, argv[2]);
        printf("Questo è il numero di volte che compare la stringa: %d\n", occorr); 
    }
    return 0;
}

FILE* apertura_file(char **argv){
    FILE *fp;

    fp = fopen(argv[1], "r+");

    if(!fp){
        printf("File non trovato...");
        exit(-1);
    }

    return fp;
}

int occorrenze(FILE *fp, char *s){
    long lun = strlen(s);
    char tmp[lun + 1];
    int i, occorrenze = 0;
    int ch;

    do{
        for (i = 0; i < lun; i++){
            ch = fgetc(fp);
            tmp[i] = ch;
        }
        tmp[lun] ='\0';
        
        if(confronta_lettere(tmp, s)){
             occorrenze++;
        }
        //sposto il cursore della lunghezza della parola -1
        //(sarebbe mi muovo solo di una lettera)
        fseek(fp, (1 - lun) , SEEK_CUR); 

    }while(ch != EOF); 

    return occorrenze;
}

int confronta_lettere(char *s1, char *s2){
    int lun = strlen(s1); 
    int i, count = 0;

    for(i = 0; i < lun; i++){
        if(s1[i] == s2[i]){
            count++;
        }
    }

    return (count == strlen(s1)) ? 1 : 0;
}
