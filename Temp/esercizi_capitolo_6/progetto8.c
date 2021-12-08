/*Scrivete un programam che stampi il calendario di un mese. L'utente deve specificare 
il numero di giorni nel mese e il giorno della settimana in cui questo comincia:*/

#include <stdio.h>
int main()
{
	int i, n, g;
	printf("Enter a number of days in month: ");
	scanf("%d", &n);
	
	printf("Enter starting day of the week (1 = Sun, 7= Sat): ");
	scanf("%d",&g);
	
	switch(g){
	
		case 2:
		printf("\t");
		break;
		case 3:
		printf("\t\t");
		break;
		case 4:
		printf("\t\t\t");
		break;
		case 5:
		printf("\t\t\t\t");
		break;
		case 6:
		printf("\t\t\t\t\t");
		break;
		case 7:
		printf("\t\t\t\t\t\t");
		break;
		}
		
	//Lo switch serve per stampare gli spazi a seconda del giorno iniziale del mese
	
	for(i=1; i <= n; i++){
	
	//il for serve per incrementare il nuemro da stampare fino all'ultimo giorno del mese
	
	
	if(g != 7){
	printf("\t%d", i);
	g++;
	//Questo if else ti permette di ritornare a g=1 quando arrivi all'ultimo giorno della settimana (g=7) (incrementa g solo se g è diverso da 7, cioè l'ultimo giorno della settimana)
		  }
	
	else {
	printf("\t%d\n", i);
	g=1;
	     }
	     
	printf("\n");
	     
	     
	     			}
return 0;
}
	
