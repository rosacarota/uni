#include <stdio.h>

int main ()
{
    int month, date, year;
    
    printf("Enter date: mm/dd/yy\n");
    scanf("%d/%d/%d", &month, &date, &year);
    
    if (date>31){
    	printf("Error");}
    else { printf("Dated this %d", date);
    switch (date){
        case 1: case 11: case 21: case 31:
        printf("st");
        break;
        case 2: case 12: case 22:
        printf ("nd");
        break;
        case 3: case 13: case 23:
        printf("rd");
        break;
        case 0:
        printf("Error");
        break;
        default: 
        printf("th");
        break;
        }
    }
    
    printf(" day of ");
    
    switch (month) {
    case 1: printf ("January");
    break;
    case 2: printf("Frebruary");
    break;
    case 3: printf("March");
    break;
    case 4: printf("April");
    break;
    case 5: printf ("May");
    break;
    case 6: printf("June");
    break;
    case 7: printf("July");
    break;
    case 8: printf("August");
    break;
    case 9: printf("September");
    break;
    case 10: printf("October");
    break;
    case 11: printf("November");
    break;
    case 12: printf("December");
    break;
    default: printf("Error");
    break;
    }
    
    printf(", 20%.2d\n", year);
    
    return 0;
}
