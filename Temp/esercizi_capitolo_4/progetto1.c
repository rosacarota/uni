#include <stdio.h>

int main ()
{ 
	int number;
	printf("Enter a number:\n");
	scanf("%d", &number);
	
	if (number <= 9) 
		printf("The number %.3d has 1 digit\n", number);
	else if (number <= 99)
		printf("The number %.3d has 2 digits\n", number);
	else  
		printf("The number %.3d has 3 digits\n", number);
	
	return 0;
}
