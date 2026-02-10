#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countChar(char * inStr, char l){
    int i = 0;
    for (int j = 0; j<strlen(inStr); j++) {
        if (tolower(inStr[j]) == l) i++;
    }
    return i;
}

int main() {
    char s[128];
    printf("Introdueix una cadena: ");
    scanf("%s", s);
    printf("A: %d\n", countChar(s,'a'));
    printf("E: %d\n", countChar(s,'e'));
    printf("I: %d\n", countChar(s,'i'));
    printf("O: %d\n", countChar(s,'o'));
    printf("U: %d\n", countChar(s,'u'));
    return 0;
}