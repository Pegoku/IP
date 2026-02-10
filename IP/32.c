#include <stdio.h>

int main() {
    int sum, num; 
    for (int i = 0; i < 5; i++){
        scanf("%d", &num);
        sum += num;
    }
    sum = sum/5;

    printf("%d", sum);
    
    return 0;
}