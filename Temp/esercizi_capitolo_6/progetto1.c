/*Trovare il maggiore dei numeri*/

#include <stdio.h>
int main()
{ 	
	float n, m=0; 
	
	while (1) {
	
	printf("Enter a number: ");
	scanf("%f", &n);
	
	if (n > m){
		m=n;
		  }
	
	if (n <= 0){
		printf("The largest number entered was %.2f\n", m);
	break;
		   }
		   }

return 0;
}
