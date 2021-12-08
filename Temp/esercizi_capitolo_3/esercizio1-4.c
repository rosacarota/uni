#include <stdio.h>

int main()
{ 	
	int i=1, j=2, k=3;
	i -= j -= k;
	printf("%d %d %d", i, j, k);
	
	return 0;
}
