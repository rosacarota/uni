#include <stdio.h>
int main()
{
	char ch;
	int i=0;
	
	printf("Enter a message: ");
	ch = getchar();
	
	while ((getchar()) =! '\n') {
	ch = getchar(); 
	i++;
	}
	
	printf("Your message is %d character(s) long", i);
	
return 0;
}
