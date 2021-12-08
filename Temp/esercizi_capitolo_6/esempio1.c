#include <stdio.h>

int main()
{
	int n, i;
	printf("This program prints a table of squares\nEnter numbers of entries in table:\n");
	scanf("%d", &n);
	
	i = 1;
	while (i <= n){
	printf("%d\t%d\n", i, i*i);
	i++;
	}
	
return 0;
}
