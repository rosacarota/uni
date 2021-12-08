#include <stdio.h>
#define TRUE 1
#define FALSE 0
int main()
{
	int age, teenager;
	
	printf("Inserisci un'età: \n");
	scanf("%d", &age);
	
	if (13 <= age && age <=19){
		teenager= TRUE;
		printf("%d\n", teenager);}
	else
		{teenager = FALSE;
		printf("%d\n", teenager);}

	return 0;
}
