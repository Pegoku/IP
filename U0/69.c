#include <stdio.h>
#include <string.h>


int main() {
    FILE* fptr = fopen("file.txt", "a");
    char a[128], b[64], c[64], n[4] = {'\n'};

    printf("Introdueix un nombre: ");
    scanf("%s", b);
    fputs(b, fptr);
    fputs(n, fptr);
    printf("Introdueix una cadena: ");
    scanf("%s", c);
    fputs(c, fptr);
    return 0;
}