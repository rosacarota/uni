/* Trova il MCD tra i numeri inseriti*/
#include <stdio.h> 

int main()
{
	int n, m, resto;
	printf("Enter two integer: ");
	scanf("%d %d", &n, &m);
	
	if (n == 0) { 
		printf("The greatest common divisor: %d\n", m);
		    }
			    
		else if (m == 0) {
				printf("The greatest common divisor: %d\n", n);
				  }
					    
			else if (m == n){
				printf("The greatest common divisor: %d\n", m);
					}
					
				else if (m > n){
					while (9){
					resto = m % n;
					m = n;
					n = resto; 
					if (n==0){
						break;
					 	 }
						  }
					printf("The greatest common disivor: %d\n", m);
			    			}
			    			
			     	else {
			     		while (9){
					resto = n % m;
					n = m;
					m = resto; 
					if (m==0){
						break;
						 }
						  }
				printf("The greatest common divisor : %d\n", n); 
				       }
return 0;
}
