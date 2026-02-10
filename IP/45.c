#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char cdna[128];

    scanf("%s", &cdna);
    for (int i = 0; i < strlen(cdna); i++)
    {

        if (cdna[i] == 'u' || cdna[i] == 'o' || cdna[i] == 'i' || cdna[i] == 'e' || cdna[i] == 'a' || cdna[i] == 'U' || cdna[i] == 'O' || cdna[i] == 'I' || cdna[i] == 'E' || cdna[i] == 'A')
        {
            printf(".");
        }
        else
        {
            printf("%c", cdna[i]);
        }
    }

    return 0;
}