#include <stdio.h>

int main()
{
    int choice = 1, sum, value;

    while (choice == 1)
    {
        printf("Introdueix un nombre\n");
        scanf("%d", &value);
        sum += value;

        printf("Vols continuar? (1(Si)/0(No))\n");
        scanf("%d", &choice);
    }
    printf("%d", sum);

    return 0;
}