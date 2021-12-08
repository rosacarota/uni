#include <stdio.h> 

int main()
{
	int a, b, c, d, e, f, g, h, i, l, m, n, o, p, q, r, riga1, riga2, riga3, riga4, colonna1, colonna2, colonna3, colonna4, diagonale1, diagonale2;
	
	printf("Inserisci in numeri da 1 a 16 in ordine sparso:\n"); 
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &l, &m, &n, &o, &p, &q, &r);
	
	printf("%2d\t%2d\t%2d\t%2d\n%2d\t%2d\t%2d\t%2d\n%2d\t%2d\t%2d\t%2d\n%2d\t%2d\t%2d\t%2d\n", a, b, c, d, e, f, g, h, i, l, m, n, o, p, q, r);
	
	riga1= a+b+c+d;
	riga2= e+f+g+h;
	riga3= i+l+m+n;
	riga4= o+p+q+r;
	printf("Somma delle righe: %d %d %d %d \n", riga1, riga2, riga3, riga4);
	
	colonna1= a+e+i+o;
	colonna2= b+f+l+p;
	colonna3= c+g+m+q;
	colonna4= d+h+n+r;
	printf("Somma delle colonne: %d %d %d %d \n", colonna1, colonna2, colonna3, colonna4);
	
	diagonale1= a+f+m+r;
	diagonale2= d+g+l+o;
	printf("Somma dei valori delle diagonali: %d %d \n", diagonale1, diagonale2);
	
	return 0;
}
