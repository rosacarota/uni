#include "item.h"

typedef struct Queue* Queue; 

Queue newQueue(void);

int emptyQueue(Queue q);

int enqueue(Queue q, Item it);

Item dequeue(Queue q);

void printQueue(Queue q);

void freeQueue(Queue q);
