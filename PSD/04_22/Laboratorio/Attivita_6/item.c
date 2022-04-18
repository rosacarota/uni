#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "item.h"

struct puntoitem {
    float x;
    float y;
};

int eq(item a, item b)  {
    return (a->x == b->x) && (a->y == b->y); 
}

static item creaItem(float x, float y)  {
    item e;
    
    e = malloc(sizeof(struct puntoitem));
    if(e == NULL) return NULL; 

    e->x = x;
    e->y = y;

    return e;
}

item input_item() {
    float x, y; 
    item punto; 

    printf("Inserisci ascissa: ");
    scanf("%f", &x);

    printf("Inserisci ordinata: ");
    scanf("%f", &y);

    punto = creaItem (x, y); 
    
    if(punto == NULL) { 
        return NULL;
    }

    return punto;
}

float distanza(item p1, item p2) {
    float d;
    float ascisse, ordinate;

    ascisse = (p2->x - p1->x) * (p2->x - p1->x); 
    ordinate = (p2->y - p1->x) * (p2->y - p1->y);

    d = sqrt(ascisse + ordinate);    
    
    return d;
}

float ascissa(item punto) {
    return punto->x;
}

float ordinata(item punto) {
    return punto->y;
}

void output_item(item punto) {
    float x, y;

    x = ascissa(punto);
    printf("%.2f", x);
    
    y = ordinata(punto);
    printf("\n%.2f\n", y);
}
