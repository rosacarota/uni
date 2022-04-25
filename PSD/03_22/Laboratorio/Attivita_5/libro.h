
typedef struct Libro *Libro;

Libro creaLibro(char *t, char *e, float p, int a);
char *titolo(Libro l);
char *editore(Libro l);
int anno(Libro l);
float prezzo(Libro l);
float sconto(Libro *l, float percentuale);
void aggiorna(Libro *l, int anno);
