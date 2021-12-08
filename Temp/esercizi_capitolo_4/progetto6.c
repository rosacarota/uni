#include <stdio.h> 

int main()
{
	int a, b, c, d, e, f, g, h, i, l, m, n, somma1, somma2, resto, risultato; 
	
	printf("Inserisci le cifre del codice:\n");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &l, &m, &n);
	
	somma1=a+c+e+g+i+m;
	somma2=b,d,f,h,l;
	resto=(((somma1*3)+somma2)-1) % 10;
	risultato=9-resto;
	
	if (risultato == n){
		printf("VALID CODE\n");}
	else {
		printf("NOT VALID CODE\n");
		printf("Il codice di controllo è: %d\n", risultato);}
	
	return 0;
}
