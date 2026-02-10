#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE* fptr = fopen("file.txt", "w");
    char nombre[2];
    printf("Introdueix un nombre: ");
    scanf("%s", nombre);
    fputs(nombre,fptr);
    return 0;
}