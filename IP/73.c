#include <stdio.h>
#include <string.h>
int main() {
    FILE* fptr = fopen("registre.txt", "w");
    char c[128];
    while (1){
        printf("Introdueix una frase: ");
        fgets(c, 128, stdin);
        if (strcmp(c, "fi\n") ==0) break;
        fputs(c, fptr);
    }
    return 0;
}