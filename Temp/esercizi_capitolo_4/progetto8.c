#include <stdio.h>

int main()
{
	int orario, minuti, minuti_tot;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &orario, &minuti );
						
	minuti_tot= orario * 60 + minuti;
	
	printf("Closest departure time is ");
		
	if (minuti_tot < (8 * 60)){ 
		printf("8:00 AM, arriving at 3:00 PM\n");}
	else 
		if (minuti_tot < (9 * 60 + 43)){
			printf("9:43 AM, arriving at 11:52\n");}
		else 	
			if (minuti_tot < (11 * 60 + 19)){
				printf("11:19 AM, arriving at 1:31 AM\n");}
			else 
				if (minuti_tot < (12 * 60 + 47)){
					printf("12:47 PM, arriving at 3:00 PM\n");}
				else 
					if (minuti_tot < (14 * 60)){
						printf("2:00 PM arriving at 4:00 PM\n");}
					else 
						if (minuti_tot < (15 * 60 + 45)){
							printf("3:45 PM, arriving at 5:55 PM\n");}
						else 
							if (minuti_tot < (19 * 60)){
								printf("7:00 PM, arriving at 9:20 PM");}
							else 
								if (minuti_tot < (21 * 60 + 45)){
									printf("9:45 PM, arriving at 11:58 PM\n");}
									
	if (orario > 25){
		printf("ERROR");}
	
	if (minuti > 59){
		printf("ERROR");}
		
						
	return 0;
}
									
