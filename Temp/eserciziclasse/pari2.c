#include <stdio.h>


int main( ){
	int s, n, i;

	printf("Quanti numeri pari desideri sommare?\n");
	scanf("%d",&n);

	for(s = 0, i = 0; i < n; i += 2){
		
		s += i;
	}

	printf("La somma dei primi %d numeri pari è %d\n", n, s);

return 0;
}
