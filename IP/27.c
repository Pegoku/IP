#include <stdio.h>


int main() {
    int num;
    scanf("%d", &num);
    if (num%10 == 0)
    {
        printf("El nombre acaba en 0");
    }
    else{
        printf("El nombre no acaba en 0");
    }
    return 0;
}