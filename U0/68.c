#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VIDES 10
#define AnswLen 4
#define DEBUG 1

int checkIfIn(int *a, int b)
{
    for (int i = 0; i < AnswLen; i++)
        if (a[i] == b)
            return 1;

    return 0;
}

int main()
{
    int answ[AnswLen], in[AnswLen];
    int vides = VIDES;

    srand(time(NULL));
    rand();
    for (int i = 0; i < AnswLen; i++)
    {
        answ[i] = rand() % 10;
    }

    if (DEBUG)
    {
        for (int i = 0; i < AnswLen; i++)
        {
            printf("%d", answ[i]);
        }
        printf("\n");
    }

    while (1)
    {
        int inPos = 0, inNum = 0;
        for (int i = 0; i < AnswLen; i++)
        {
            scanf("%d", &in[i]);
            if (answ[i] == in[i])
            {
                inPos++;
            }
            else if (checkIfIn(answ, in[i]))
            {
                inNum++;
            }
        }

        if (inPos == 4)
        {
            printf("Has guanyat! La sequencia correcta era: ");
            for (int i = 0; i < AnswLen; i++)
            {
                printf("%d ", in[i]);
            }
            return 0;
        }
        else if (vides == 0)
        {
            printf("Has perdut! La sequencia correcta era: ");
            for (int i = 0; i < AnswLen; i++)
            {
                printf("%d ", in[i]);
            }
            return 0;
        }
        else
        {
            vides--;
            printf("Nombre d'encerts: %d\nNombres en posició: %d\nVides restants: %d\n", inNum, inPos, vides);
        }
    }

    // checkIfIn
    return 0;
}