#include <stdio.h>

void quadrato_asterischi(int n)
{
	int i, j;

	i = 1;
	//stampa n righe
	while (i <= n) {

		// stampa UNA riga
		j = 1;
		while (j <= n){

			printf("*");
			++j;
		}
		printf("\n");

		++i;
	}
}

int main (void){
	int lato;
	
	printf("Lato del quadrato? ");
	scanf("%d", &lato);
	quadrato_asterischi(lato);
	
return 0;
}

