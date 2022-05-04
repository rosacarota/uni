#define NULLITEM NULL

typedef struct Seggio* Seggio;
typedef struct Scheda* Scheda; 

Scheda creaScheda(int id_scheda, int aventi_diritto_voto, int votanti, 
				  int voti_nulli, int voti_si, int voti_no);

Seggio creaSeggio(int id_seggio, Scheda sc);

Scheda getScheda(Seggio s);

int getID_scheda(Scheda s);

int getID_seggio(Seggio s);

void printScheda(Scheda s);

void printSeggio(Seggio s);