#include <stdio.h>
#include <string.h>

int palindroma(char *s);

int main(void) {
    char s[] = "osso";

    if(palindroma(s))
        printf("La stringa è palindroma\n");
    else 
        printf("La stringa non è palindroma\n");
    
    return 0;
}

int palindroma(char *s) {
    if (s[0] != s[strlen(s) - 1])
        return 0;

    s++;
    s[strlen(s) - 1] = '\0';

    if(strlen(s) <= 1)
        return 1;

    palindroma(s);
}
