#include <stdio.h>

int bisestile(int bis);

int main(){
	int i = 1600;

	while(i < 9999){
		if (bisestile(i)){
			printf("%d\n", i);
		}
	i++;
	}
	
	return 0;
}

int bisestile(int bis){
	return (bis % 4 == 0);
}
