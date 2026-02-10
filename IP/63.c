#include <stdio.h>

void laterceralletra(char * c){
    printf("La tercera lletra es: %c",c[2]);
}

int main() {
    char b[128];
    printf("Introdueix una cadena: ");
    scanf("%s", b);
    laterceralletra(b);
    return 0;
}