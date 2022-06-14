typedef struct Item *Item;

Item newItem(int key, int data);

void printItem(Item it);

// Restituisce 1 se item e key sono uguali
int isEqual(Item it1, Item it2);

// Restituisce 1 se la chiave di it1 
// è minore della chiave di it2
int isMinus(Item it1, Item it2);
