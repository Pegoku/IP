#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char a[128];
    printf("Introdueix el nom de l'arxiu a emprar: ");
    fgets(a,128, stdin);
    strtok(a, "\n");
    FILE* fptr = fopen(a, "r");
    char c;
    while (1){
        c = fgetc(fptr);
        if (c == -1){
            break;
        }
        printf("%c", c);
    }
    return 0;
}