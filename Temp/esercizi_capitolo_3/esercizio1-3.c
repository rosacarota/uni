#include <stdio.h>

int main()
{
	int i, j, k;
	i = j = k =1;
	i += j += k;
	printf("%d %d %d", i, j, k);
	
	return 0;
}
