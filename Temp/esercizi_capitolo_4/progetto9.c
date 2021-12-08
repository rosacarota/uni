#include <stdio.h>

int main ()
{     
    int giorno1, mese1, anno1, giorno2, mese2, anno2, i, j ,k, l;
    printf("Enter the first date (mm/dd/yy): ");
    scanf("%2d /%2d /%2d", &mese1, &giorno1, &anno1);
    printf("Enter the second date (mm/dd/yy): ");
    scanf("%2d /%2d /%2d", &mese2, &giorno2, &anno2);
    
    if (mese1>12 || mese2>12) 
        printf("ERROR");
        
    if (giorno1>31 || giorno2>31)
        printf("ERROR");
       
    i=anno1; 
    j=mese1;
    k=giorno1;
    
    if (i > anno2){
    	i=anno2;
    	printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mese2, giorno2, i, j, k, anno1);} 	
    else
       	if (i == anno2 && j > mese2){
    		j=mese2;
    		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", j, giorno2, anno2, mese1, anno1)}
    	else 
    		if (i == anno2 && j == mese2 && k > giorno2){
    			k=giorno2;} 
  
   printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", j==mese2?mese1:mese2, k==giorno2?giorno1:giorno2, i==anno2?anno1:anno2, j, k, i);
  
   return 0;
} 
