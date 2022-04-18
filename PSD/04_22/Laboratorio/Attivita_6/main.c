#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "item.h"

int distanza_minore(List list, float d);
item *distanza_massima(List list, int pos);
List crea_punti(List list, int size);

int main(void) {
    List list; 
    int size;
    float d; 
    int m;

    list = newList();
    
    printf("Quanti punti vuoi aggiungere?: ");
    scanf("%d", &size);
    
    list = crea_punti(list, size);

    printf("Inserisci la distnza da confrontare: ");
    scanf("%f", &d);

    printList(list);
    printList(list);

    //m = distanza_minore(list, d);

    printList(list);
    
    //printf("\nCoppie di numeri a distanza minore %d\n", m);

	return 0;
}

List crea_punti(List list, int size) {
    int i = 0;
    item punto; 
    List tmp = list;
    List reverse;

    while(i < size){
        punto = input_item();

        tmp = addHead(tmp, punto);
        if(tmp == NULL) return NULL;
        
        i++;
    }
    
    reverse = reverseList(list);
 
    return reverse; 
}

int distanza_minore(List list, float d){
    int i = 0, q;
    item e1, e2;
    float d_tmp;
    int m = 0;
    List tmp;

    while(!emptyList(list)) {
        e1 = getItemPos(list, i);
        tmp = list;

        for(q = i + 1; !emptyList(tmp); q++) {
            e2 = getItemPos(tmp, q);

            if(!e1 || !e2) return NULLITEM;

            d_tmp = distanza(e1, e2);
            printf("%f\n", d_tmp);

            if(d_tmp < d){
                m++;
                output_item(e1);
                output_item(e2);
            }

            tmp = nextNode(tmp);
        }

        list = nextNode(list);
        i++;
    }

    return m;
}

item *distanza_massima(List list, int pos) {
    int i, q;
    float d_tmp, max = 0;
    item *max_dist, e1, e2;
    List tmp;

    max_dist = malloc(sizeof(*max_dist) * 2);
    if(max_dist == NULL) return NULL;

    while(!emptyList(list)) {
        e1 = getItemPos(list, i);
        tmp = list;

        for(q = i + 1; !emptyList(tmp); q++) {
            e2 = getItemPos(list, q);

            d_tmp = distanza(e1, e2);

            if(d_tmp > max){
                max = d_tmp;

                max_dist[0] = e1;
                max_dist[1] = e2;
            }

            tmp = nextNode(tmp);
        }

        list = nextNode(list);
        i++;
    }

    return max_dist;
}
