 #include <stdio.h>
 
int main ()
{ 	
 	float j, commissioni;
 	 	
 	printf("Immetti il valore di una tariffa:");
 	scanf("%f", &j);
 	
 	if (j < 2500) {
 	   commissioni= 30 + ((1.7/100)*j);
 	   }
 	else if (2500<=j && j<6250){
	   commissioni = 56 + ((0.66/100)*j);
	   }
 	else if (6250<=j && j<20000){
 	   commissioni = 76 + ((0.34/100)*j);
 	   }
 	else if (20000<=j && j<50000) {
 	   commissioni = 100 + ((0.22/100)*j);
 	   }
 	else if (50000<=j && j<500000){
 	   commissioni = 155 + ((0.11/100)*j);
 	   }
 	else {
 	   commissioni = 255 + ((0.09/100)*j);
 	   }
 	
 	if (commissioni < 39)
 		commissioni = 39;
 	
 	printf ("Queste sono le commissioni: $%.2f\n", commissioni);
 	
 	return 0;
}
