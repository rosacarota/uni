 #include <stdio.h>

 int main(){
	int i = 0;

	while(i < 1000){
		
		i % 2 == 0 ? printf("%d %s\n", i, "è un numero pari") : printf("%d %s\n", i, "è un numero dispari");
		
		i++;
	}

	return 0;
}
//printf("%d è %spari\n", k, k % 2 ? "dis" : "");
