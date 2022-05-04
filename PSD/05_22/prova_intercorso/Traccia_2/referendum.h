#include "seggio.h"
typedef struct Referendum* Referendum;

Referendum creaRef();

Referendum tailReferendum (Referendum r);

int isEmpty(Referendum r);

Referendum insertSeggio(Referendum r, Seggio s);

void printReferendum(Referendum r);

int completRef(Referendum r);

