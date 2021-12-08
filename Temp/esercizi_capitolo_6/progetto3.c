/*Ridurre una frazione ai minimi termini*/

#include <stdio.h>

int main()
{	
	int m, n, resto, num, den, mcd;
	printf("Enter a fraction: ");
	scanf("%d / %d",&m, &n);
	
	num = m;
	den = n;
	
	if (m==0){
	printf("In lowest term: 0\n");
		 }
	
	
	
	
	else if (n==0){
	printf("ERROR\n");
		 }
		      
		      
	else if (m==n){
	printf("In lowest terms: 1\n");
		 }
	
	
	
		
	/*Calcolo del mcd tramite algoritmo euclideo (vedere su internet), memorizzo l'mcd in un'altra variabile (mcd) poiché alla fine la utilizzerò 
	per dividere il numeratore e il denominatore e ridurre la frazione ai minimi termini*/ 
	else if (m > n){
		while (9){
		resto = m % n;
		m = n;
		n = resto; 
		mcd = m;
		if (n==0){
		break;
			 }
		
			  }
		   }
		   
		   
	else {
		 while (9){
		 resto = n % m;
		 n = m;
		 m = resto;
		 mcd = n;
		 if (m==0){
		 break;
			  }
			   }
	     }
	     
	     
	num /= mcd;
	den /= mcd;
	
	if (num != 0 && den !=0){
	printf("In lowest terms: %d/%d\n", num, den);
				}

			  
	
return 0;
}
	
	     
