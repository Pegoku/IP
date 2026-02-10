#include <stdio.h>

int main() {

    int num1;

    scanf("%d", &num1);
    if (num1 >= 1 && num1 <= 100){
        printf("El nombre es bo");
    }    
    else{
        printf("El nombre es dolent");
    }

    return 0;
}