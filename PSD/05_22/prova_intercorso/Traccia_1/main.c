#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "playlist.h"

int main(void) {
    Playlist p;
    Canzone c0, c1, c2, c3, c4;

    p = newPlaylist();

    c0 = creaCanzone("Titolo 0", "Rosa", 300);
    c1 = creaCanzone("Titolo 1", "Antonio_gay", 200);
    c2 = creaCanzone("Titolo 2", "Antonio_gay", 400);
    c3 = creaCanzone("Titolo 3", "Antonio_gay", 500);
    c4 = creaCanzone("Titolo 4", "Antonio_gay", 600);

    enqueue(p, c0);
    enqueue(p, c1);
    enqueue(p, c2);
    enqueue(p, c3);
    enqueue(p, c4);
    
    printf("---------Stampa prima di rimozione---------");
    printPlaylist(p);
    putchar('\n');

    removeCanzone(p, 3);
    
    printf("---------Stampa dopo rimozione---------");
    printPlaylist(p);
    putchar('\n');

    forward(p, 1);
    
    printf("---------Stampa dopo il forward---------");
    printPlaylist(p);

    back(p, 2);
    printf("---------Stampa dopo il back---------");
    printPlaylist(p);

    Playlist new;

    new = sottoPlaylist(p, "Antonio_gay");
    
    printf("---------Stampa sottoplaylist---------");
    printPlaylist(new);
    return 0;
}


