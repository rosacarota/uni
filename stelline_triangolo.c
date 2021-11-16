int main(){
	int i, j = 1, n;
	
	printf("Inserisci la lunghezza della piramide: ");
	scanf("%d", &n);
	
	while(n != 0){
		for(i = n - 1; i != 0; i--){	
			printf(" ");		
		}	
		for(i = 0; i < j; i++){
			printf("*");
		}

		printf("\n");
		n--;
		j += 2;
	}

	return 0;
}
