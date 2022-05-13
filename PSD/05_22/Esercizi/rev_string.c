#include <stdio.h>
#include <string.h>

void reverse_string(char s[], int inf , int sup) {
    if(sup <= inf) return;
    
    char tmp;

    tmp = s[inf];
    s[inf] = s[sup];
    s[sup] = tmp;

    reverse_string(s, inf + 1, sup - 1);
}

int main(void) {
    char s[] = "Stringa";
   
    reverse_string(s, 0, strlen(s) - 1);

    printf("La stringa reversata %s\n", s);
}
