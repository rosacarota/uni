#include <stdio.h>

int main(){
    int i, j, n;
    
    printf("Inserisci un valore: ");
    scanf("%d", &n);
    
    i=0;
	while(i < n){
		

		if(i == 0 || i == n -1 ){
			j=0;
			while(j < n){
				printf("*");
				j++;
			}
			}	
		
		else{
		j=0;
		while( j < n){
			
			if(j == 0 || j == n - 1){
				printf("*");
			}
			else{
			printf(" ");
			}

			j++;
		}	
		}
	
	i++; 

		printf("\n");
	}

	return 0;
}
