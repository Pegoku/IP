#include <stdio.h>
#include <stdlib.h>
int main() {
    int nums[10];
    FILE* fptr = fopen("file.txt", "w");

    for (int i = 0; i<10; i++){
        printf("Introdueix un nombre: ");
        scanf("%d", &nums[i]);
        nums[i] = nums[i]*5;
        char str[128];
        sprintf(str, "%d\n", nums[i]);
        fputs(str,fptr);
    }
    return 0;
}