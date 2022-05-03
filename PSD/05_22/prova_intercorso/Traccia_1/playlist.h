#include "canzone.h"

typedef struct Queue* Playlist;

Playlist newPlaylist(void);

int isEmpty(Playlist p);

int enqueue(Playlist p, Canzone c);

Canzone dequeue(Playlist p);

void printPlaylist(Playlist p); 

/* Specifica sintattica: 
 * removeCanzone(Playlist, int) -> bool
 *
 * Specifica semantica: 
 * removeCanzone(p, pos) -> n
 * Precondizioni: La playlist deve esistere
 *
 * Post: ritorna 1 se c'è stata la rimozione della canzone
 *       nella specifica condizione, 0 se non c'è stata 
 *
 * Progettazione: 
 * - Controlla se la lista esiste o meno, se la lista non
 *   esiste ritorna 0
 *  
 * 
 *
 */

int removeCanzone(Playlist p, int pos);

int forward(Playlist p, int pos);

int back(Playlist p, int pos);

Playlist sottoPlaylist(Playlist p, char *cantante);
