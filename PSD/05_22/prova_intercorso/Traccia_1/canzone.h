#define NULLITEM NULL

typedef struct Item* Canzone;

Canzone creaCanzone(char *t, char *c, int d);

void printCanzone(Canzone c);

char *getCantante(Canzone c);
