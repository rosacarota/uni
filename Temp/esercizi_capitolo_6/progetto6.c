/*Scrivi un programma che chieda all'utente di immettere un numero n e 
successivamenre stampi i quadrati pari compresi tra 1 ed n*/

#include <stdio.h>
int main()
{
	int i, n, g;
	printf("Enter a number: ");
	scanf("%d", &i);
	
	
	n=1;
	while ((n*n)<= i){
	
	n++;
	n*n;
	
	if (((n*n)% 2) != 0)
		continue;
	
	printf("%d\n", n*n);
			}
			
	
return 0;
}
