#include <stdio.h>

int main(){
    int c;
    printf("Introdueix un nombre: ");
    scanf("%d", &c);

    if (c == 0){
        printf("%d\n", 0);
    }
    else if (c < 0)
    {
        for ( int i = 0; i >= c; i--)
        printf("%d\n", i);
    }
    else
    {
        for ( int i = 0; i <= c; i++)
        printf("%d\n", i);
    }
    
    return 0;
}