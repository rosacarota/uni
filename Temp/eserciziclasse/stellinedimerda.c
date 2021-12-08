#include <stdio.h>

int main() {
    int i, n, j;


    printf("Inserisci il numero del lato: ");
    scanf("%d", &n);
    
    
    i=0; 
    while (i < n) {
        printf("*");
        i++;
    }
    
    printf("\n"); 
    
    j=0;
    while (j < n-2) {
        printf("*");
        

        i=0;
        while(i < n-2){
            printf(" ");
            i++;
        }
    
    printf("*\n"); 
    j++;
    
    }  
    
    i=0; 
    while (i < n) {
        printf("*");
        i++;
    }
    
    return 0;
}
