#include <stdio.h> 
#include <string.h>
void print_rev(char car); 
int main(){
 	char k;
	printf("\nIntrodurre una sequenza terminata da .:\t");
 	k = getchar();
	print_rev(k);
	printf("\n*** FINE ***\n");
}
void print_rev(char car) {
 	char c;

	if (car != '.')	{
 	    printf("lettera %c\n",car);
 		c = getchar();
 		print_rev(c);
 		printf("%c", car);
 	}
 	else return;
}
