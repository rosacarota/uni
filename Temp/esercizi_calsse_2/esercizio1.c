#include <stdio.h>

int main ()

{ int x=86, y=1040;
  float z=30.253, u=83.162, o=0.0000009979;

	printf("%6d, %4d\n", x, y);
	printf("%12.5e\n", z);
	printf("%.4f\n", u);
	printf("%-6.2g\n", o);
	
	return 0;
}
