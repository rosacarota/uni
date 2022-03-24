#include <stdio.h>
#include <stdlib.h>
#include "punto.h"
#include "file.h"

#define NPUNTI 30

int calcola_distanza(punto *p, int n, float d);

int main(void) {
    int n = 0; 
    int m;
    float d;
    float ascissa, ordinata;
    punto *p;
    FILE *fp; 
    
    fp = finput_array("input.txt");
    
    fscanf(fp, "%f", &d); 
    
    p = malloc(sizeof(punto) * NPUNTI);
    if(!p) return -1;

    while (fscanf(fp, "%f%f", &ascissa, &ordinata) == 2){
        p[n++] = creapunto(ascissa, ordinata);
    }

    p = realloc(p, sizeof(punto) * n);
    if(!p) return -1;
    
    fclose(fp);

    m = calcola_distanza(p, n, d);
    printf("Le coppie di punti a distanza minore di %.2f sono %d", d, m);

    return 0;
}

int calcola_distanza(punto *p, int n, float d){
    int i, q, m = 0;
    float tmp;

    for(i = 0; i < n; i++){
        for(q = i + 1; q < n; q++){
            tmp = distanza(p[i], p[q]);
            if(tmp < d){
                m++;
            }
        }
    }

    return m;
}
