#include <stdio.h>
#include <math.h>

int main()
{

    int option;
    printf("Tria una opcio\n\
1: Rectangle\n\
2: Triangle\n\
3: Cercle\n");

    scanf("%d", &option);
    int num1, num2;
    switch (option)
    {
    case 1:
        printf("Base\n");
        scanf("%d", &num1);
        printf("Height\n");
        scanf("%d", &num2);

        printf("Area d'un Rectangle: %d", num1 * num2);

        break;
    case 2:
        printf("Base\n");
        scanf("%d", &num1);
        printf("Height\n");
        scanf("%d", &num2);

        printf("Area d'un Triangle: %d", num1 * num2 / 2);
        break;

    case 3:
        printf("Radi\n");
        scanf("%d", &num1);
        printf("Area d'un Cercle %f", 3.14159 * num1 * num1);
        break;
    default:
        printf("Opció incorrecte");
        break;
    }

    return 0;
}