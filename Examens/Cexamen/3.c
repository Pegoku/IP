#include <stdio.h>
#define VEGADES 10

int main()
{
    int min;

    for (int i = 0; i < VEGADES; i++)
    {
        int a;
        printf("Introdueix un nombre (%d/%d): ", i + 1, VEGADES);
        scanf("%d", &a);
        if (i == 0 || a < min)
        {
            min = a;
        }
    }
    printf("El nombre mes petit es: %d\n", min);

    return 0;
}