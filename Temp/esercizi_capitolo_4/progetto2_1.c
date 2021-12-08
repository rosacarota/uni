#include <stdio.h>

int main () 
{
    int ora, minuti;

    printf("Inserisci un orario in formato 24h: ");
    scanf("%d :%d", &ora, &minuti);

    printf("Equivalente in 12h: ");

  if (ora>=0 && ora < 24)
  {
    if (ora == 0)
        printf("12:%.2d AM\n", minuti);
    else if (ora < 12)
        printf("%.2d:%.2d AM\n", ora, minuti);
    else if (ora == 12)
        printf("%.2d:%.2d PM\n", ora, minuti);
    else 
        printf("%.2d:%.2d PM\n", ora-12, minuti);

  }

  else
    printf("ERRORE");

    return 0;
}
