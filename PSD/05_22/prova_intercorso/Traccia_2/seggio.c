#include <stdio.h>
#include <stdlib.h>
#include "seggio.h" 

struct Scheda {
	int id_scheda;
	int aventi_diritto_voto;
	int votanti;
	int voti_nulli; 
	int voti_si;
	int voti_no;
}; 

struct Seggio {
	int id_seggio;
	Scheda s;
};

Scheda creaScheda(int id_scheda, int aventi_diritto_voto, int votanti, 
				  int voti_nulli, int voti_si, int voti_no) {
	Scheda s; 
	
	s = malloc(sizeof(struct Scheda)); 
	if (s == NULL) return NULL;
	
	s->id_scheda = id_scheda;
	s->aventi_diritto_voto = aventi_diritto_voto;
	s->votanti = votanti;
	s->voti_nulli = voti_nulli;
	s->voti_si = voti_si;
	s->voti_no = voti_no;
	
	return s;
}
	
Seggio creaSeggio(int id_seggio, Scheda sc) {
	if (sc == NULL) return NULL;
	Seggio s; 

	s = malloc(sizeof(struct Seggio)); 
	if (s == NULL) return NULL;
	
	s->id_seggio = id_seggio;	
	s->s = sc;
	
	return s;
}

Scheda getScheda(Seggio s) {
	return s->s;
}

int getID_scheda(Scheda s) {
	return s->id_scheda;
}

int getID_seggio(Seggio s) {
	return s->id_seggio;
}

void printScheda(Scheda s) {
	printf("ID scheda: %d\n", s->id_scheda); 
	printf("Aventi diritto al voto: %d\n", s->aventi_diritto_voto); 
	printf("Votanti: %d\n", s->votanti); 
	printf("Voti nulli: %d\n", s->voti_nulli); 
	printf("Voti si: %d\n", s->voti_si); 
	printf("Voti no: %d\n", s->voti_no); 
}

void printSeggio(Seggio s) {
	printf("ID seggio: %d\n", s->id_seggio);
	printf("-----Scheda-----\n");
	printScheda(s->s);
}

