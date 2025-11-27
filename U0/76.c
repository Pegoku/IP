#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *fptr = fopen("file.txt", "r");

    int l = 0, v = 0, n = 0, p = 1;
    while (1)
    {
        char a = fgetc(fptr);
        if (a == ' ')
            p++;

        if (isalpha(a))
        {
            l++;
            if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
            {
                v++;
            }
        }
        if (isdigit(a))
            n++;
        if (feof(fptr))
            break;
    }

    printf("Lletres: %d, Vocals: %d, Nombres: %d, Paraules: %d", l, v, n, p);
    return 0;
}