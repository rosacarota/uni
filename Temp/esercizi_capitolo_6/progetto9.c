#include <stdio.h>
int main()
{
	float i, g, l, t, r, n;
	
	
	printf("Enter amount of loan: ");
	scanf("%f", &i);
	
	
	printf("Enter interest rate: ");
	scanf("%f", &g);
	
	printf("Enter number of payment: ");
	scanf("%f", &r);
	
	n=0;
	while(n <=r){
	printf("Enter monthly payment: ");
	scanf("%f", &l);
	
	t = i;
	
	i= i-l + (t*((g/100)/12));
	
	n++;
	
	printf("Balance remaining after first payment: %.2f\n", i);
		    }
	
return 0;
}
	


