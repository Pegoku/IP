#include <stdio.h>

int main()
{
    int choice, num1, num2;
    printf("Calculadora\nTria una opció:\n\
    1. Sumar\n\
    2. Restar\n\
    3. Multiplicar\n\
    4. Dividir\n");
    scanf("%d", &choice);
    if (choice <= 4 && choice >= 1)
    {
        printf("Nombre 1: ");
        scanf("%d", &num1);
        printf("Nombre 2: ");
        scanf("%d", &num2);
    }
    switch (choice)
    {
    case 1:
        printf("%d", num1 + num2);
        break;
    case 2:
        printf("%d", num1 - num2);
        break;

    case 3:
        printf("%d", num1 * num2);
        break;

    case 4:
        printf("%lf", (double)num1 / (double)num2);
        break;

    default:
        break;
    }
    return 0;
}