#include <stdio.h>

int main(){
	int i = 10000;
	
	while (i >= 0){
		if (i % 7 == 0){
			printf("%d\n", i);
		}

		i--;
	}

	return 0;
}
