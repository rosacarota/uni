#include <stdio.h>


int main( ){
	int s, n, i;

	printf("Aggiungi n\n");
	scanf("%d",&n);

	for(s = 0, i = 0; i < n; i += 2){
		
		s += i;
	}

	printf("%d\n" , s);

return 0;
}
