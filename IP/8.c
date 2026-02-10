#include <stdio.h>

int main() {
    
    int num1;
    int num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 == num2){
        printf("son iguals");
    }
    if (num1 < num2){
        printf("el primer es més petit");
    }
    if (num1 > num2){
        printf("el primer era més gran");
    }
    return 0;
}