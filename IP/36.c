#include <stdio.h>

int main() {
    int min, max;
    printf("Introdueix 10 nombres\n");
    for (int i = 0; i < 10; i++){
        int num;
        scanf("%d", &num);
        if (i == 0){
            max = num;
            min = num;
        }
        if (num < min){
            min = num;
        }
        if (num > max){
            max = num;
        }
    }
 
    printf("Max: %d\n", max);
    printf("Min: %d", min);
    return 0;
}