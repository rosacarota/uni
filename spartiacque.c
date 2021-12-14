#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLUN 30 

int get_dim(int min, int max);
void leggi(char *string);
void riempi_array(char *a[], int sizea);
int primadi(char *fname, char *spartiacque, char *a[], int sizea);

int main(){
    int x; 
    int riempimento;
    char fname[20];
    char spartiacque[20];

    x = get_dim(0, 30);
    
    while(getchar() != '\n');
    printf("Inserisci nome del file: ");
    leggi(fname);
    

    printf("Inserisci stringa da comparare: ");
    leggi(spartiacque);
        
    char *a[x]; 
    riempi_array(a, x);

    riempimento = primadi(fname, spartiacque, a, x);

    printf("Questo è il numero di stringhe scritte in %s: %d\n", fname, riempimento);
}


int get_dim(int min, int max){
    int x;
    
    printf("Inserisci il numero delle stringhe da confrontare: ");

    do{
        scanf("%d", &x);
    } while( x < min || x > max); 
    
    return x; 
}

void leggi(char *string){
    int lun; 
    
    fgets(string, MAXLUN + 2, stdin);

    lun = strlen(string);

    if(string[lun - 1] == '\n'){
        string[lun - 1] = '\0';
    }
}

void *xmalloc(size_t bytes){
    void *p;

    p = malloc(bytes);

    if (!p){
        exit(-1);
    }

    return p;
}

void riempi_array(char *a[], int sizea){
    int i;
    char string[20];
    int lun;
     
    printf("Inserisci le stringhe da copiare nel file:\n");
    
    for (i = 0 ; i < sizea; i++){
        leggi(string);
        lun = strlen(string); 
        a[i] = malloc(sizeof(lun) + 1); 
        strcpy(a[i], string);
    }
}



int primadi(char *fname, char *spartiacque, char *a[], int sizea){
    FILE *fp; 
    int i = 0;
    int d = 0;
    fp = fopen(fname , "w");
    if(!fp){
        fprintf(stderr, "Errore nell'apertura di %s", fname);
        exit(2);
    }
    
    for(i = 0; i < sizea; i++){
        if(strcmp(a[i],spartiacque) < 0){
            fprintf(fp, "%s\n", a[i]);
            d++;
        }    
    }
    
    fprintf(fp, "END\n");
    fclose(fp);

    return d;
}
