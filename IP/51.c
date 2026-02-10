#include <stdio.h>

int main() {
    char c[128], d;
    scanf("%s %c", c, d); 
    for (int i = 0; i < strlen(c); i++){
        if (c[i] == d){
            printf("hi es");
            return 0;
        }
    }
    printf("no hi es");
    return 0;
}