#include <stdio.h>

int primo(int numero);

int main(){
	int i;
	
	i=1;
	while(i <= 100){
		if(primo(i)/*anche solo primo(numero)*/){
			printf("%d\n", i);
		}
	i++;
	}

} 

int primo(int numero){
	int i, flag = 1;

	i = 2;
	
	while (i < numero){
		flag = flag && numero % i != 0;
		i++;
	}
	
	if (flag){
		return flag;
	}
	else {
		return 0;
	}
}	

	
