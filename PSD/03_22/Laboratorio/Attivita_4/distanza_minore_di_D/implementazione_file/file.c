#include <stdio.h>
#include <stdlib.h>
#include "punto.h"

FILE* finput_array(char *file_name) {
    int i;
    FILE *fd;

    fd=fopen(file_name, "r");

    if(fd==NULL) {
        printf("Errore in apertura del file %s \n", file_name);
        exit(-1);
    }

    return fd;
}
