#include <stdio.h>
#include <string.h>

void reverse_string(char s[], int lun) {
    if(lun == ) return;
    
    char tmp;

    tmp = s[lun];
    s[lun] = *s;
    *s = tmp;

    reverse_string(s + 1, lun - 1);
}

int main(void) {
    char s[] = "stringa";
    
    //for(int i = 0; i < strlen(s); i++){
        reverse_string(s, strlen(s) - 1);
    //}

    printf("La stringa reversata %s\n", s);
}
