#include <stdio.h>

int main()
{
    int choice, num;

    printf("Tria una opció\n\
    1. Quin any vaig neixer?\n\
    2. Hola que tal\n\
    3. Sortir\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Quina es la teva edat?\n");
        scanf("%d", &num);
        printf("Vas neixer al %d", 2025 - num);
        break;
    case 2:
        printf("Hola que tal\n");
        break;
    default:
        break;
    }
    return 0;
}