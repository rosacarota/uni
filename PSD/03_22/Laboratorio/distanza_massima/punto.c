#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "punto.h"

struct miopunto {
    float ascissa;
    float ordinata;
};
      
punto creapunto(float x, float y){
    punto p; 
    
    p = malloc(sizeof(*p));
    if(!p) return NULL;

    p->ascissa = x;
    p->ordinata = y;
    
    return p;
}

float ascissa(punto p){
    return p->ascissa;
}

float ordinata(punto p){
    return p->ordinata;
}

float distanza(punto p1, punto p2){
    float dx = p1->ascissa - p2->ordinata; 
	float dy = p1->ascissa - p2->ordinata; 
	float d = sqrt(dx*dx + dy*dy); 
	return d;
}

void stampa (punto p){
    printf("ascissa: %.2f", p->ascissa);
    printf("ordinata: %.2f", p->ordinata);
}


