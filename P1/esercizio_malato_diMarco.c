//srand(time(NULL));
//time è in time.h 

//rand() % 4 per generare interi da 0 a 3

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#define R 30
#define C 30


typedef struct{
    int num; 
    char lettera;
}cella; 

int get_dim(int min, int max);
void *xmalloc(size_t bytes);
void inserisci_random(cella* matrix[R][C], int r, int c);
char *percorso(cella* matrix[R][C], int r, int c);
int isThere(cella* array[], cella *confronto, int count);

int main(){
    srand(time(NULL));
    cella* matrix[R][C];
    int r, c;
    int i, j;
    char *string;

    printf("Inserisci numero righe: ");
    r = get_dim(0, 30);

    printf("Inserisci numero colonne: ");
    c = get_dim(0, 30);

    inserisci_random(matrix, r, c);
    
    string = percorso(matrix, r, c);

    printf("\n%s\n\n", string);

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("(%c, %d) ", matrix[i][j]->lettera, matrix[i][j]->num);
        }

        printf("\n");
    }
}

int get_dim(int min, int max){
    int x;

    do{
        scanf("%d", &x);
    } while(x < min || x > max);
    
    return x; 
}

void *xmalloc(size_t bytes){
    void *p;

    p = malloc(bytes);
    if (!p){
        exit(-1);
    }
    
    return p;
}


void inserisci_random(cella* matrix[R][C], int r, int c){
    int i, j;

    for(i = 0 ; i < r; i++){
        for (j = 0; j < c; j++){
            matrix[i][j] = xmalloc(sizeof(cella));

            matrix[i][j]->num = rand() % 4;  //calcola il numero random da 0 a 3 per la freccia
            
            if(rand() % 2 == 0){    //calcol la lettera random da salvare nella stringa
                matrix[i][j]->lettera = (rand() % 26) + 'A';
            }
            else{
                 matrix[i][j]->lettera = (rand() % 26) + 'a';
            }
        }
    }
}

char *percorso(cella* matrix[R][C], int r, int c){
    int i = 0, j = 0, f = 0, d = 0;
    cella  *confronto;
    cella* array[r*c];
    char *string;
    cella *elemento;
    
    string = xmalloc(r*c + 1);

    while(1){
        elemento = matrix[i][j];
           
        string[d] = elemento->lettera;
        d++;
        string[d] = '\0';
            
        confronto = elemento;
            
        if(!isThere(array, confronto, f)){
            array[f] = confronto;
            f++;
        }
        else {
            return string;
        }

        if(j == c - 1 && (elemento->num == 1)){
            return string;
        }
            
        if(j == 0 && (elemento->num == 3)){
            return string;
        }

        if (i == 0 && elemento->num == 0){ 
            return string;
        }

        if (i == r - 1 && elemento->num == 2){
            return string;
        }


        switch (elemento->num){
            case 0:
                i--;
                break;
            case 1: 
                j++;
                break;
            case 2:
                i++;
                break;
            case 3:
                j--;
                break; //ti odio :P
        }  
    }
}



int isThere(cella* array[], cella *confronto, int count){
    int j; 

    for (j = 0; j < count; j++){
        if (array[j] == confronto){
            return 1;
        }
    }
        
    return 0;
}

