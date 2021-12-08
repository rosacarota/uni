#include <stdio.h>

int main () 
{    
    int ora, minuti;
    
    printf("Inserisci un orario in formato 24h: ") ;
    scanf("%d :%d", &ora, &minuti);
    
    printf("Equivalente in 12h: ");
    
   if (ora < 12)
    printf("%.2d:%.2d AM\n", ora, minuti);
   else
    switch (ora) {
    case 13:
    printf("01:%.2d PM\n", minuti);
    break;
    case 14:
    printf("02:%.2d PM\n", minuti);
    break;
    case 15:
    printf("03:%.2d PM\n", minuti);
    break;
    case 16:
    printf("04:%.2d PM\n", minuti);
    break;
    case 17:
    printf("05:%.2d PM\n", minuti);
    break;
    case 18:
    printf("06:%.2d PM\n", minuti);
    break;
    case 19:
    printf("07:%.2d PM\n", minuti);
    break;
    case 20:
    printf("08:%.2d PM\n", minuti);
    break;
    case 21:
    printf("09:%.2d PM\n", minuti);
    break;
    case 22:
    printf("10:%.2d PM\n", minuti);
    break;
    case 23:
    printf("11:%.2d PM\n", minuti);
    break;
    case 00:
    printf("12:%.2d PM\n", minuti);
    break;
   }
    
    return 0;
}
