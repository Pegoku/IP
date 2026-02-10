#include <stdio.h>
#include <string.h>

int main()
{
    char cadna[128] = "endavant", cadna2[128];

    printf("Introdueix la paraula secreta\n");
    scanf("%s", &cadna2);
    while (strcmp(cadna, cadna2) != 0)
    {
        printf("torna a provar\n");
        scanf("%s", &cadna2);
    }
    printf("la porta està oberta");

    return 0;
}