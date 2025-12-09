#include <stdio.h>

int main()
{
    int a[2], b = 0, c;
    while (c != 3)
    {
        printf("Tria una opcció: \n\
    1. Introduir 2 nombres.\n\
    2. Fer la suma dels nombres introduïts anteriorment\n\
    3. Sortir.\n");
    scanf("%d", &c);
        switch (c)
        {
        case 1:
            for (int i = 0; i < 2; i++)
            {
                printf("Introdueix el nombre n.%d: ", i+1);
                scanf("%d", &a[i]);
            }
            b = 1;
            break;
        case 2:
            if (b == 0)
            {
                printf("No has introduit cap nombre.\n");
            }
            else
            {
                printf("La suma dels nombres es: %d\n", a[0] + a[1]);
            }
            break;
        case 3:
            break;
        default:
            printf("Opció incorrecte\n");
            break;
        }
    }
    return 0;
}