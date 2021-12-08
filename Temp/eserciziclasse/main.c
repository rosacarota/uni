#include <stdio.h>

int somma (int a, int b);

int main(){
    
    int a, b;

    printf("Aggiungi due valori: ");
    
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d\n", somma(a, b));

    printf("%d\n", somma(a+1, b));
    
    return 0;
}



int somma (int a, int b)
{
    printf("%d\n",a);
    int sum = a+b;
    
    return sum;
}

