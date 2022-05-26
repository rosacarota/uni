#include "list.h"
#include "punto.h"

int distanza_minore(List l, float d);

Punto *distanza_massima(List l);

List sottolista_rec(List l, List sottolista, int m, int n);

List sottolista(List *l, int m, int n);

List inserisci_lista(List l, List k, int m);

List ordina_crescente(List l);

void riordina(List* l, char coordinata,char criterio);

List zigzag(List* l);

