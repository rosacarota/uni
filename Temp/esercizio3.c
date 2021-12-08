#include <stdio.h>

int main ()

{int mm, dd, yyyy;
	
	printf("Inserisci la data da stampare: \n");
	scanf("%d/%d/%d", &mm, &dd, &yyyy); 
	printf("Hai inserito: %d/%d/%d", yyyy, dd, mm);
	
	return 0;
}
