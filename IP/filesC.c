#include <stdio.h>
#include <stdio.h>

int main() {
    FILE* fptr = fopen("file.txt", "r");
    char nombre[5];
    fgets(nombre, 5, fptr);
    printf("%s", nombre);

    return 0;
}