#include <stdio.h>

int main()
{
    int num1;
    scanf("%d", &num1);

    for (int i = num1; i >= 1; i--)
    {
        printf("%d ", i);
    }

    return 0;
}