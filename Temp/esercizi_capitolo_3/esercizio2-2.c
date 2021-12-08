#include <stdio.h>

int main()
{
	int i=5, j;
	j = (i -= 2) +1;
	printf("%d %d", i, j);
	
	return 0;
}
