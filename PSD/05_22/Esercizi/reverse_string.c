#include <stdio.h>
#include <string.h>

void reverse_string(char s[], int lun) {
    if(lun == lun/2) return;
    
    char tmp;

    tmp = s[lun];
    s[lun] = *s;
    *s = tmp;
    
    if(lun > 2)
        reverse_string(++s, lun - 2);
}

int main(void) {
    char s[] = "";
    
    reverse_string(s, strlen(s) - 1);


    printf("La stringa reversata %s\n", s);
}
