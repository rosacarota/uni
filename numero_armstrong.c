#include <stdio.h>
#define NMAX 100
int leggiVett (int A[]);
int azzera_no_Arm(int A[], int n);
int isArmstrong (int k); //100 <= k < 999
int sommacubi_cifre(int k);
void stampa_non_null(int A[], int n);

int main(){
    int A[NMAX], n, array_finale;

    n = leggiVett(A);

    array_finale = azzera_no_Arm(A, n);
    
    stampa_non_null(A, array_finale);
}

int leggiVett (int A[]){
    int i=0, temp;
    
    while(666){
        scanf("%d", &temp);
        if(temp != -1){
            A[i] = temp;
            i++;
        }
        else{
            return i;
        }
    }
}


int sommacubi_cifre(int k){
    int i = 0, f = 0;
    
    while(k != 0){
        f += (k%10)*(k%10)*(k%10);
        k/10;
        i++;
    }
    
    return f;
}

int isArmstrong (int k){ //100 <= k < 999
    int f;

    if(k >= 100 || k <= 999){
        f = sommacubi_cifre(k);
        
        if (f != k){
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}


int azzera_no_Arm(int A[], int n){
    int i, j = 0;
    

    for(i = 0; i < n; i++){
        if(!isArmstrong(A[i])){
            A[i] = A[i+1];
            j++;
        }
    }

    return n-j;
}

void stampa_non_null(int A[], int n){
    int i;

    for(i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
}





