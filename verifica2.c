#include <stdio.h>

int verifica_data (int data);

int aaaa(int data);

int mm(int data);

int dd(int data);

int main(){
    
    int data, bis;

    printf("Inserisci una data:");

    scanf("%d", &data);

    printf("Verifica data:\n");
    
    verifica_data(data) ? printf("Data verificata\n") : printf("Data errata\n");
    
    bis = aaaa(data) % 4;
    bis == 0 ? printf("L'anno è bisestile, data verificata\n") : printf("L'anno non è bisestile, data non verificata\n");
    (mm(data) == 4 || mm(data) == 6 || mm(data) == 9 || mm(data) == 11) && (dd(data) >= 1 && dd(data) <=30) ? printf("Data verificata\n") : printf("Data non verificata\n");
    (mm(data) == 1 || mm(data) == 3 || mm(data) == 5 || mm(data) == 7 || mm(data) == 8 || mm(data) == 10 || mm(data) == 12) && (dd(data) >= 1 && dd(data) <=31) ? printf("Data verificata\n") : printf("Data non verificata\n");

}

int verifica_data(int data)
{
   
    return data >= 1101582 && data <= 31122016;
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
