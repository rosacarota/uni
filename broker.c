#include <stdio.h>

float commissioni(float quota, float tariffa, float azioni);

int main(){
    float azioni, commissione; 

	printf("***********CALCOLA LE COMMISSIONI DI UN BROKER***********\n\n");
	
	printf("Inserisci il valore delle azioni: $");
	scanf("%f", &azioni);
	
    if(azioni < 2500){
    	commissione = commissioni(30, 1.7, azioni);
    }
    else if(azioni < 6250){
    	commissione = commissioni(56, 0.66, azioni);
    }
    else if(azioni < 20000){
    	commissione = commissioni(76, 0.34, azioni);
    }
    else if (azioni < 50000){
    	commissione = commissioni(100, 0.22, azioni);
    }
    else if (azioni < 500000){
    	commissione = commissioni(155, 0.11, azioni); 
    }
    else {
    	commissione = commissioni(255, 0.09, azioni);
    }

    
    if (commissione <= 39){
    	commissione = 39;
    }


	printf("La commissione vale: $%.2f\n", commissione);
	
	return 0;
}


float commissioni(float quota, float tariffa, float azioni){
	return (quota + ((tariffa/100) * azioni));
}


