#include <stdio.h>
#include <stdlib.h>
#include "punto.h"

punto* distanza_massima(punto *p, int n);

int main(int argc, char *argv[]) {
    int n = (argc - 1)/2;
    int i, j;
    float x, y;
    float ascissa1, ascissa2, ordinata1, ordinata2;
    punto *p, *max_dist;
    
    p = malloc(sizeof(punto) * n);
    if (!p) return -1;

    j = 0;

    for(i = 1; i < argc; i += 2){
        x = atof(argv[i]);
        y = atof(argv[i+1]); 
        p[j] = creapunto(x, y);
       
        j++;
    }
    
    max_dist = distanza_massima(p, n);
    
    ascissa1 = ascissa(max_dist[0]);
    ascissa2 = ascissa(max_dist[1]);

    ordinata1 = ordinata(max_dist[0]);
    ordinata2 = ordinata(max_dist[1]);

    printf("I punti con distanza massima sono:");
    printf(" [%.2f, %.2f] e [%.2f, %.2f]\n", ascissa1, ordinata1, ascissa2, ordinata2);

    return 0;
}
punto* distanza_massima(punto *p, int n){
    int i, q;
    float tmp, max = 0;
    punto *max_dist; 

    max_dist = malloc(sizeof(punto)* 2);
    if(!p) exit(-1);
    
    for(i = 0; i < n; i++){
        for(q = i + 1; q < n; q++){
            tmp = distanza(p[i], p[q]);
            if(tmp > max){
                max = tmp;
                
                max_dist[0] = p[i];
                max_dist[1] = p[q];
            }
        }
    }
    
    return max_dist;
}

