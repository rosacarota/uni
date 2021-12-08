#include <stdio.h>

int main(){
	int i, j, n;
	
	printf("Inserisci un numero di righe:");
	scanf("%d", &n);

	i = 0;
	while(i < n*n){

		if(i==0 || i == n*n){
			printf("*");
		}	
		
		else{

			j = 1;
	
			while(j <= n){

				if(j==1 || j==0){
				printf("*");
				}
				else if( j > 1 || j < n) {
					printf(" ");
				}

				j++;
		
			}
		}
		
		i++;
		
		if( i % n == 0){
			printf("\n");
		}
		}

	return 0;
}
