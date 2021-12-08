#include <stdio.h>
int main ()
{
	char ch; 
	int i;
	
	printf("Enter a message: ");
	
	ch = 'r';
	i=0;
	
	while (ch != '\n'){
	i++;
	scanf("%c", &ch);
	}
	
	printf("Your message was %d character(s) long \n", i);
	
return 0;
}

