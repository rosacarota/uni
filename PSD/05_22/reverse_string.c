#include <stdio.h>
#include <string.h>

void reverse_string(char s[], int inf , int sup) {
    if(sup == inf) return;
    
    char tmp;

    tmp = s[inf];
    s[inf] = s[sup];
    s[sup] = tmp;

    reverse_string(s, inf + 1, sup - 1);
}

int main(void) {
    char s[] = "stringa";
   
    reverse_string(s, 0, strlen(s) - 1);

    /*for(int i = 0; i < strlen(s)/2; i++){
        reverse_string(s, strlen(s) - 1);
    }*/

    printf("La stringa reversata %s\n", s);
}
