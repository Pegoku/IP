#include <stdio.h>

int main()
{
    float posNums, posNumsC, negNums, negNumsC, num;

    for (int i = 0; i < 20; i++)
    {
        scanf("%f", &num);
        if (num > 0)
        {
            posNums += num;
            posNumsC++;
        }
        if (num < 0)
        {
            negNums += num;
            negNumsC++;
        }
    }

    if (posNumsC)
    {
        printf("Positius: %f\n", posNums / posNumsC);
    }
    if (negNumsC)
    {
        printf("Negatius: %f", negNums / negNumsC);
    }
    return 0;
}