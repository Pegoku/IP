#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadna[128], cadnaMaj[128];
    printf("Introdueix una cadena\n");
    scanf("%s", &cadna);
    for (int i = 0; i < strlen(cadna)  ; i++){
        if (isupper(cadna[i])){
        printf("%c", cadna[i]);
        }
    }
    return 0;
}