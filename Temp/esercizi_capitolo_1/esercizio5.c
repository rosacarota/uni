#include <stdio.h>

int main ()

{ float importo, importo_con_tasse;
	
	printf("Inserire importo \n");
	scanf("%f", &importo);
	
	importo_con_tasse = importo + (5.0f/100.0f)*importo;
	
	printf("questo è l'importo con l'aggiunta di tasse: %.2f", importo_con_tasse);
	
	return 0;
}
