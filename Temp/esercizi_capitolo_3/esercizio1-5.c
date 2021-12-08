#include <stdio.h>

int main ()
{ 
	int i=2, j=1, k=0; 
	i *= j *= k;
	printf("%d %d %d", i, j, k);
	
	return 0;
}
