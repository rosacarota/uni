#include <stdio.h>

int verifica_data (int data);

int aaaa(int data);

int mm(int data);

int dd(int data);

int main() {
    
    int data, bis;
    int verifica_range, verifica_mese_giorno30, verifica_mese_giorno31, verifica_bisestile;

    printf("Inserisci una data: ");

    scanf("%d", &data);

    verifica_range =  verifica_data(data); 
    
    bis = aaaa(data) % 4;
    verifica_bisestile = bis == 0 || ( bis == 0 && mm(data) == 2 && dd(data) == 29); 
    
    verifica_mese_giorno30 = (mm(data) == 4 || mm(data) == 6 || mm(data) == 9 || mm(data) == 11) && (dd(data) >= 1 && dd(data) <=30); 
   
    verifica_mese_giorno31 = (mm(data) == 1 || mm(data) == 3 || mm(data) == 5 || mm(data) == 7 || mm(data) == 8 || mm(data) == 10 || mm(data) == 12) 
        && (dd(data) >= 1 && dd(data) <=31); 

    (verifica_range) && (verifica_mese_giorno30 || verifica_mese_giorno31 || verifica_bisestile) ? printf("\nData verificata\n") : printf("\nData non verificata\n");
}

int verifica_data(int data)
{
    return data >= 1101582 && data <= 31122021;
}

int aaaa(int data)
{
    return data % 10000;
}

int mm(int data)
{
    return (data / 10000) % 100;
}

int dd(int data)
{
    return (data / 1000000); 
}
