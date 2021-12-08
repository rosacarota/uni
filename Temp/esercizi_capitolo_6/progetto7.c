/*Implementa il programma square3.c in modo he il for inizializzi, 
controlli e incrementi il valore di i. Non riscrivere il programma e non usare moltiplicazioni*/

#include <stdio.h>
int main()
{
	int i, n, odd, square;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	
	odd = 3;
	for (i=1, square = 1; i <= n; ++i, odd +=2) {
	
	printf("%10d%10d\n", i, square);
	square += odd;
							}
return 0;
}
