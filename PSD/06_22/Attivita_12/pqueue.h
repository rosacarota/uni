#include "item.h"

typedef struct PQueue *PQueue;

PQueue newPQ(void);

int isEmpty(PQueue q);

int getMax(PQueue q);

int deleteMax(PQueue q);

int insert(PQueue q, Item it);

