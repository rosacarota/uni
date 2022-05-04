#include <stdio.h>
#include <stdlib.h>
#include "referendum.h"

#define MAXSEGGI 50
struct Referendum {
	Seggio seggio;
	struct Referendum *next;
};

Referendum creaRef() {
	return NULL;
}

Referendum tailReferendum (Referendum r) {
	return r = r->next;
}

int isEmpty(Referendum r) {
	return r == NULL;
}

static int isPresent_scheda(Referendum r, Scheda s) {
	Scheda tmp; 
	int id_tmp, id_s;
	
	id_s = getID_scheda(s);
	
	while (!isEmpty(r)) {
		tmp = getScheda(r->seggio); 
		id_tmp = getID_scheda(tmp); 
		
		if(id_tmp == id_s) {
			return 1;
		}
		
		r = tailReferendum(r);
	}
	
	return 0;
}

Referendum insertSeggio(Referendum r, Seggio s) {
	// Controllo se il seggio da aggiungere esiste
	if (s == NULLITEM) return r;
	
	// Controllo che il seggio sia completo o meno 
	if(completRef(r)) return r;
	
	// Controllo che l'id del seggio sia minore di MAXSEGGI
	if (getID_seggio(s) > MAXSEGGI || getID_seggio(s) <= 0) return r; 
	
	// Controllo che l'id della scheda all'interno nel seggio non ci sia già
	if (isPresent_scheda(r, getScheda(s))) return r;
	 
	Referendum new; 
	
	// Alloco il seggio nuovo 
	new = malloc(sizeof(struct Referendum));
	if (new == NULL) return r;
	
	new->seggio = s;
	
	// Se il referendum è vuoto allora il seggio allocato diventa il primo
	if (r == NULL) {
		new->next = NULL;
		r = new;
		return r; 
	}
	
	new->next = r;
	r = new; 
	
	return r;
}

void printReferendum(Referendum r) {
	int i = 0;
	
	while(!isEmpty(r)) {
		printf("Element %d\n", i++);
		printSeggio(r->seggio);
		putchar('\n');
		r = tailReferendum(r);
	}
}

int completRef(Referendum r) {
	int i = 0; 
	
	while(!isEmpty(r)) {
		r = tailReferendum(r);
		i++;
	}
	
	if(i >= MAXSEGGI)
		return 1;
	
	return 0;	
}

/*void stampaReport(Referendum r) {
	Scheda tmp;
	int i = 0;
	
	while(!isEmpty(r)) {
		tmp = getScheda(r->seggio);
		
		printf("-------REPORT-------\n");
		printf("Votanti: %d\n", getVotanti(tmp));
		printf("Voti nulli: %d\n", getVoti_nulli(tmp));
		printf("Voti si: %d\n", getVoti_si(tmp));
		printf("Voti no: %d\n", getVoti_no(tmp));
		r = tailReferendum(r);
		i++;
	}
}*/

void stampaReport(Referendum r) {
	Scheda tmp; 
	int votanti, voti_nulli, voti_si, voti_no;
	
	votanti = 0;
	voti_nulli = 0;
	voti_si = 0;
	voti_no = 0;
	
	while(!isEmpty(r)) {
		tmp = getScheda(r->seggio);
		
		votanti += getVotanti(tmp);
		voti_nulli += getVoti_nulli(tmp);
		voti_si += getVoti_si(tmp);
		voti_no += getVoti_no(tmp);
		
		r = tailReferendum(r);
	}
	
	printf("-------REPORT-------\n");
	printf("Votanti: %d\n", votanti);
	printf("Voti nulli: %d\n", voti_nulli);
	printf("Voti si: %d\n", voti_si);
	printf("Voti no: %d\n", voti_no);
}

int nosiRef(Referendum r) {
	Scheda tmp;
	int voti_no = 0, voti_si = 0;

	while(!isEmpty(r)) {
		tmp = getScheda(r->seggio); 
		
		voti_no += getVoti_no(tmp);
		voti_si += getVoti_si(tmp);
		
		r = tailReferendum(r);
	}
	
	return voti_si > voti_no;
}
