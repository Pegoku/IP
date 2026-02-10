#include <stdio.h>
#include <string.h>

int main()
{
    char cadna[128] = "endavant", cadna2[128];

    printf("Introdueix la paraula secreta\n");
    scanf("%s", &cadna2);
    if (strcmp(cadna, cadna2) == 0)
    {
        printf("la porta està oberta");
    }
    else
    {
        printf("torna a provar");
    }

    return 0;
}