#include <stdio.h>
int main()
{

	int i=0;
	
	printf("Enter a message: ");
	
	while (getchar() != '\n') {
	i++;
	}
	
	printf("Your message is %d character(s) long \n", i);
	
return 0;
}
