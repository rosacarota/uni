#include <stdio.h>
#include <stdlib.h>
#include "punto.h"

int main(int argc, char *argv[]) {
    int i, j, lun;
    int n = 0, m=0;
    float d = 0;
    float ascissa=0, ordinata=0;
    punto *p;

    //carica tutto l'input: coppie e distanza
    if(argc < 4){
        fprintf(stderr, "formato: < %s, distanza, coppie...>\n", argv[0]);
    }
    else {
        lun = (argc - 2)/2;

        p = malloc(sizeof(punto) * lun);

        if(!p) exit(-1);
       
        d = (float) atoi(argv[1]);
        
        j = 0;

        for(i = 2; i < argc; i += 2){
            ascissa = (float) atoi(argv[i]);
            ordinata = (float) atoi(argv[i+1]);
            
            p[j] = creapunto(ascissa, ordinata);
          
            stampa(p[j]);
            j++;
    
        }

    }

    //calcola le distanze a coppie e controlla che siano minori di d

    //printf("Le coppie di punti a distanza minore di %f sono %d", d, m);

    return 0;
}
