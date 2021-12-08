#include <stdio.h>

int main()
{
	int a, b, c, d, e, f, g, h, i, l, m, n, sommapari, sommadispari, resto, check_digit;
	
	printf("Inserisci le prime dodici cifre dell'EAN:");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &l, &m, &n);
	
	sommapari= b+d+f+h+l+n;
	sommadispari=a+c+e+g+i+m;
	
	resto= (((sommapari*3)+sommadispari)-1) %10;
	
	check_digit= 9 - resto;
	
	printf("Check digit: %d\n", check_digit);
	
	return 0;
}
