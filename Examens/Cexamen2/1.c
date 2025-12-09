#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char w1[64], w2[64];
    printf("Introdueix dues paraules:\n");
    scanf("%s", w1);
    scanf("%s", w2);

    if (strlen(w1) < strlen(w2))
    {
        printf("La paraula 2 es mes larga");
    }
    else if (strlen(w1) > strlen(w2))
    {
        printf("La paraula 1 es mes larga");
    }
    else if (strlen(w1) == strlen(w2))
    {
        printf("Les cadenes son de igual longitud");
    }

    printf("\n");

    if (w1[0] < w2[0])
    {
        printf("La paraula 1 comença per la lletra mes baixa");
    }
    else if (w1[0] > w2[0])
    {
        printf("La paraula 2 comença per la lletra mes baixa");
    }
    else if (w1[0] == w2[0])
    {
        printf("Les cadenes començen per la mateixa lletra");
    }

    return 0;
}