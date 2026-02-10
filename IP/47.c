#include <stdio.h>

int main() {
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 8; j++){
            printf("%d %c | ", i+16*j);
        }
        printf("\n");
    }
    return 0;
}