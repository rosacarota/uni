#include <stdio.h> 
int main()
{
	float v, com;
	
	while (1){
	
	printf("Enter a value: $");
	scanf("%f", &v);
	
	
	
	if (v < 2500){
		com= 30 + ((1.7/100)*v);
		    }
	else 
		if(v < 6250){
			com= 56+ ((0.66/100)*v);
			    }
		else 
			if (v < 20000){
				com = 76 + ((0.34/100)*v);
				      }
			else 
				if (v < 50000){
					com = 100 + ((0.22/100)*v);
					      }
				else 	
					if (v < 500000){
						com = 155 + ((0.11/100)*v);
							}
					else 
							com = 255 + ((0.09/100)*v);
	
		     
	if (v <=0){
	printf("END\n");
	break;}
	
	
	if (com < 39){
		com = 39;
		     }
		     
		     
		     
	printf("Commission: $%.2f\n\n", com);
	}
	
return 0;
}

