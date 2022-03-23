#include <stdio.h>
#include <stdlib.h>
#include "punto.h"

int main(int argc, char *argv[]) {
    int i, j, q, tmp;
    int n = 0, m=0;
    float d = 0;
    float ascissa=0, ordinata=0;
    punto *p;

    //carica tutto l'input: coppie e distanza
    if(argc < 4 || (argc % 2) != 0) {
        fprintf(stderr, "formato: < %s, distanza, coppie...>\n", argv[0]);
        exit(-1);
    }

    n = (argc - 2)/2;

    p = malloc(sizeof(punto) * n);

    if(!p) exit(-1);

    d = atof(argv[1]);

    j = 0;

    for(i = 2; i < argc; i += 2){
        ascissa = atof(argv[i]);
        ordinata = atof(argv[i+1]);

        p[j] = creapunto(ascissa, ordinata);

        j++;
    }
    
    //calcola le distanze a coppie e controlla 
    //che siano minori di d
    for(i = 0; i < j; i++){
        for(q = i + 1; q < j; q++){
           tmp = distanza(p[i], p[q]);
           
           if(tmp < d){
               m++;
           }
        }
    }



printf("Le coppie di punti a distanza minore di %.2f sono %d", d, m);

return 0;
}
