#include <stdio.h>

int main ()
{
    int giorno1, mese1, anno1, giorno2, mese2, anno2;
    printf("Enter the first date (mm/dd/yy): ");
    scanf("%2d /%2d /%2d", &mese1, &giorno1, &anno1);
    printf("Enter the second date (mm/dd/yy): ");
    scanf("%2d /%2d /%2d", &mese2, &giorno2, &anno2);

    if (mese1>12 || mese2>12) 
        printf("ERROR");

    if (giorno1>31 || giorno2>31)
        printf("ERROR");

    if (anno1 == anno2){
        if (mese1 == mese2){
            if(giorno1 == giorno2){
                printf("They're the same date");
            }
            else {\
                if (giorno1 > giorno2){
                    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mese2, giorno2, anno2, mese1, giorno1, anno1);
                }
                else {
                    printf ("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mese1, giorno1, anno1, mese2, giorno2, anno2);
                }
            }
        }
        else { 
            if (mese1 > mese2)
            {
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mese2, giorno2, anno2, mese1, giorno1, anno1);
            }
            else {
                printf ("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mese1, giorno1, anno1, mese2, giorno2, anno2);
            }
        }
    }
    else {
        if(anno1 > anno2) {
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mese2, giorno2, anno2, mese1, giorno1, anno1);
        }
        else {
            printf ("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mese1, giorno1, anno1, mese2, giorno2, anno2);
            }
    }
    return 0;
}
