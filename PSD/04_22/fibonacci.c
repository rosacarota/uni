#include <stdio.h>

int fibonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    return (fibonacci(n-1) + fibonacci(n-2));
}

int main(void) {
   int i;
	
   printf("Fibonacci of %d: " , 20);
	
   for(i = 0; i < 20; i++) {
      printf("%d ",fibonacci(i));            
   }
}
