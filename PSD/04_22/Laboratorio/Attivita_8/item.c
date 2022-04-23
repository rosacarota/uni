#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Item.h"

struct Punto {
    float ascissa;
    float ordinata;
};
      
Item creaItem(float x, float y) {
    Item p; 
    
    p = malloc(sizeof(*p));
    if(!p) return NULL;

    p->ascissa = x;
    p->ordinata = y;
    
    return p;
}

float ascissa(Item p) {
    return p->ascissa;
}

float ordinata(Item p) {
    return p->ordinata;
}

float distanza(Item p1, Item p2) {
    float dx = p1->ascissa - p2->ordinata; 
	float dy = p1->ascissa - p2->ordinata; 
	float d = sqrt(dx*dx + dy*dy); 
	return d;
}

void stampa (Item p) {
    printf("Ascissa: %.2f\n", p->ascissa);
    printf("Ordinata: %.2f\n\n", p->ordinata);
}
