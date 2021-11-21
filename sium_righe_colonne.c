#include <stdio.h>
#define RMAX 30
#define CMAX 30
int get_dim(int min, int max);
void readMatrix(int a[RMAX][CMAX], int ra, int ca);
int siumColonnaRiga(int a[RMAX][CMAX], int ca, int ra);
int SIUM(int a[RMAX][CMAX], int ra, int ca, int b[RMAX][CMAX], int rb, int cb);
void printSIUM (int sium);


int main(){
    int a[RMAX][CMAX], b[RMAX][CMAX];
    int ra, ca, rb, cb;
    int sium;
    
    printf("Inserisci lunghezza delle righe e delle colonne dei due array\n");
    printf("Numero righe: ");
    ra = get_dim(0, 30);
    rb = ra;
    printf("Numero colonne: ");
    ca = get_dim(0, 30);
    cb = ca;
    
    readMatrix(a, ra, ca);
    readMatrix(b, rb, cb);

    sium = SIUM(a, ra, ca, b, rb, cb);

    printSIUM(sium);

    return 0;
}

int get_dim(int min, int max) {         //inserisce la lunghezza di righe e colonne
    int x;

    do {
        scanf("%d", &x);
    } while(x < min || x > max);

    return x;
}

void readMatrix(int a[RMAX][CMAX], int ra, int ca){     //legge le due matrici (funziona fino a qua :c)
    int i, j;
    for(i = 0; i < ra; i++){
        for(j = 0; j < ca; j++){
            printf("Inserisci riga %d, colonna %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

int siumColonnaRiga(int a[RMAX][CMAX], int ra, int ca){     //fa la somma delle colonne a seconda delle righe di una matrice
    int i, j, sium = 0;
    
    for(i = 0; i < ra; i++){
        for (j = 0; i < ca; j++){
            sium += (a[i][j]);
        }
    }
    return sium;
}

int SIUM(int a[RMAX][CMAX], int ra, int ca, int b[RMAX][CMAX], int rb, int cb){ //fa la somma delle due matrici
    int sium_a, sium_b, sium;

    sium_a = siumColonnaRiga(a, ra, ca);
    sium_b = siumColonnaRiga(b, rb, cb);

    sium = sium_a + sium_b;

    return sium;
}

void printSIUM (int sium){          //stampa la somma delle due matrici
    printf("\nLa somma delle due matrici è: %d\n", sium);
}
