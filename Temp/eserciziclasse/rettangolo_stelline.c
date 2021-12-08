#include <stdio.h>

int main(){
    int i, j, n, f;
    
    printf("Inserisci il valore della lunghezza: ");
    scanf("%d", &n);
	
	printf("Inserisci il valore della larghezza: ");
	scanf("%d", &f); 
	
	for(i = 0; i < n; i++){		
		if(i == 0 || i == n -1 ){
			for(j = 0; j < f; j++){
				printf("* ");
			}
			}	
		
		else{
			for(j = 0; j < f; j++){
				if(j == 0 || j == f - 1){
					printf("* ");
				}	
				else{
				printf("  ");
				}

			}	
		}
	
		printf("\n");
	}

	return 0;
}
