#include <stdio.h>

int main()
{
	float vento;
	
	printf("Inserisci la velocità in nodi del vento: ");
	scanf("%f", &vento);
	
	printf("Descrizione vento: ");
	
	if (vento < 1){
		printf("Calmo\n");}
	else if (vento <= 3){
		printf("Bava di vento\n");}
	     else if (vento <=27){
	     		printf("Brezza\n");}
	     	else if (vento <= 47){
	     		printf("Burrasca\n");}
	     	     else if (vento <= 63){
	     	     	     printf("Tempesta\n");}
	     	     	  else {
	     	     	     printf("Uragano\n");}
	     	     	     
	return 0;
}     	     	    
