#define NULLITEM NULL 

typedef struct Item* Item;

Item creaItem(char l, int n);

void printItem(Item it);

int eqItem(Item it1, Item it2);