#ifndef ITEM_H
#define ITEM_H
typedef struct puntoitem *item;

#define NULLITEM 0

int eq(item a, item b);
item input_item(); 
void output_item(item x);
float distanza(item p1, item p2);

#endif
