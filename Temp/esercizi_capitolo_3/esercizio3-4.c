#include <stdio.h>

int main()
{ 
	int i = 3, j = 4, k = 5; 
	printf("%d \n", i++ - j++ + --k);
	printf("%d %d %d \n", i, j, k);
	
	return 0;
}
