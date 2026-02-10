#include <stdio.h>
#include <string.h>

int main()
{
    int a=0, e=0, i=0, o=0, u=0;
    char c[128];
    printf("Introdueix una frase \n");
    scanf("%s", &c);
    for (int n = 0; n < strlen(c); n++)
    {
        printf("%c", c[n]);
        switch (c[n])
        {
        case 'a':
        case 'A':
            a++;
            break;

        case 'e':
        case 'E':
            e++;
            break;

        case 'i':
        case 'I':
            i++;
            break;

        case 'o':
        case 'O':
            o++;
            break;

        case 'u':
        case 'U':
            u++;
            break;

        default:
            break;
        }
    }
    printf("Num. De A: %d, num E: %d, num I: %d, num. O: %d, num. U: %d. Hi ha %d vocals", a,e,i,o,u,a+e+i+o+u);

    return 0;
}