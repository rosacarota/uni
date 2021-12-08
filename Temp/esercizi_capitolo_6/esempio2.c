/*Trovare il numero di digitazioni in un numero*/

#include <stdio.h>

int main()
{
	int n, digits = 0;
	printf("Enter a nonnegative integer: ");
	scanf("%d", &n);
	
	do {	n /= 10;
		digits++;
		}
	while (n > 0);
	
	printf("The number has %d digits\n", digits);
	
	return 0;	
}

/*Cosa abbiamo fatto? Abbiamo praticamente detto al programma di dividere il numero per dieci e ogni volta che si divideva il numero per 10 (n /= 10) di digitazioni aumentava (digits++) fino a quando n non risultava essere 0 (while (n >0)). Il printf si trova all'esterno del ciclo per chè altrimenti stamperebbe ogni volta che si ripete il ciclo*/
