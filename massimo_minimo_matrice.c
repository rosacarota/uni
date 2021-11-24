#include <stdio.h>
#define MAXROW 30
#define MAXCOL 30

int value(int min, int max);
void getMatrix(int matrix[MAXROW][MAXCOL], int N, int M);
void print(int matrix[][MAXCOL], int N, int M);
int sium(int matrix[][MAXCOL],int N, int M);
int maxMatrix(int matrix[][MAXCOL], int N, int M);
int minMatrix(int matrix[][MAXCOL],int N, int  M);

int main(){
    int matrix[MAXROW][MAXCOL], N, M, sum, max, min ;
    
    printf("Inserisci il massimo delle righe: ");
    M = value(0, 30);

    printf("Inserisci il massimo delle colonne: ");
    N = value(0, 30);

    printf("Inserisci i numeri nella matrice\n");
    getMatrix(matrix, N, M); 

    print(matrix, N, M);

    sum = sium(matrix, N, M);
    printf("somma: %d\n", sum);

    max = maxMatrix(matrix, N, M);
    printf("massimo: %d\n", max);

    min = minMatrix(matrix, N, M);
    printf("minimo: %d\n", min);

    return 0;

}

int value(int min, int max){
    int x; 

    do{
        scanf("%d", &x);
    }while(x < min || x > max);
    
    return x;
}

void getMatrix(int matrix[MAXROW][MAXCOL], int N, int M){
    int i, j;
        
        for(i = 0; i < M; i++){
            for (j = 0; j < N; j++){
                printf("Inserisci %d colonna della %d riga: ", j, i);
                scanf("%d", &matrix[i][j]);
            }
        }
}

void print(int matrix[][MAXCOL], int N, int M){
    int i, j;

    printf("\n");

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int sium(int matrix[][MAXCOL],int N, int M){
    int i, j, sium = 0;

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            sium += matrix[i][j];
        }
    }

    return sium;
}

int maxMatrix(int matrix[][MAXCOL], int N, int M){
    int i, j, max = matrix[0][0];
    
    for(i = 0; i < M; i++){
        for(j = 1; j < N; j++){
            if(max < matrix[i][j]){
                max = matrix[i][j];
            }
        }
    }
    return max;
}

int minMatrix(int matrix[][MAXCOL],int N, int  M){
    int i, j, min = matrix[0][0];

    for(i = 0; i < M; i++){
        for(j = 1; j < N; j++){
            if(min > matrix[i][j]){
                min = matrix[i][j];
            }
        }
    }
    return min;
}

