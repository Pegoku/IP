#include <stdio.h>

int main() {
    char c[128] = {};
    printf("Introdueix una frase \n");

    scanf("%s", &c);
    for (int i = 127; i >= 0; i--){
        printf("%c", c[i]);
    }

    return 0;
}