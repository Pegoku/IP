#include <stdio.h>

int main()
{
    int minNumber;
    int readNumber;

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &readNumber);
        if (!minNumber || readNumber < minNumber)
        {
            minNumber = readNumber;
        }
    }
    printf("Nombre mes petit: %d", minNumber);
    return 0;
}