#include <stdio.h>
#include <stdlib.h>
#include "punto.h"

void distanza_massima(punto *p, int n);
int main(int argc, char *argv[]) {
    int n = (argc - 2)/2, m=0;
    int i, j;
    float d = 0;
    float ascissa=0, ordinata=0;
    punto *p;
    
    p = malloc(sizeof(punto) * n);
    if (!p) return -1;

    d = atof(argv[1]);
    
    j = 0;

    for(i = 2; i < argc; i += 2){
        ascissa = atof(argv[i]);
        ordinata = atof(argv[i+1]); 
        p[j] = creapunto(ascissa, ordinata);
       
        j++;
    }

    for(i = 0; i < n; i++){
        stampa(p[i]);
    }
    printf("%g", p[0]->ascissa);
    distanza_massima(p, n);

    return 0;
}
void distanza_massima(punto *p, int n){
    int i, q;
    float tmp, max = 0;
    float ascissa1, ordinata1, ascissa2, ordinata2;
    

 //   printf("%g",p[0]->ascissa);
    for(i = 0; i < n; i++){
        for(q = i+1; q < n; q++){
            tmp = distanza(p[i], p[q]);
            if(tmp > max){
                max = tmp;

                 //printf("%g",p->ascissa);
           //     ascissa2 = p[q]->ascissa;
                
             //   ordinata1 = p[i]->ordinata;
               // ordinata2 = p[q]->ordinata;
            }
        }
    }

    printf("I punti a distanza massima sono: [%f,%f]", ascissa1, ordinata1);
    printf(" [%f,%f]\n", ascissa2, ordinata2); 
}

