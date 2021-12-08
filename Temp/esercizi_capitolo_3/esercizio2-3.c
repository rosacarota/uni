#include <stdio.h>

int main()
{ 
	int i=7, j;
	j = 6 + (i = 2.5);
	printf("%d %d\n", i, j);
	
	return 0;
}
