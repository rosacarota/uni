/*Un motore percorre n chilometri con x litri di benzina;
calcolare quanti chilometri percorre una moto con un 
litro di benzina*/ 
#include <stdio.h>
int main(){
    float kilometri_input, kilometri, litri_input, litri=1;

    printf("*************QUANTI KILOMETRI FA LA TUA AUTO CON UN LITRO DI BENZINA?***************\n\n");

    printf("Inserire kilometri percorsi: ");
    scanf("%f", &kilometri_input);

    printf("Inserire litri di benzina usati per percorrere i kilometri percorsi: ");
    scanf("%f", &litri_input);

    kilometri= (kilometri_input * litri) / litri_input;

    printf("\nKILOMETRI PERCORSI CON UN LITRO: %.2f\n", kilometri);

    return 0;
}
