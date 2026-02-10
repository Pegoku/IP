#include <stdio.h>
#include <string.h>

int main() {
    int a, b, c;
    char d[128], e;

    printf("Introdueix un numero\n");
    scanf("%d", &a);
    for (int i = 0; i < a; i++){
        d[i] = '_';
    }
    for (int i = 0; i < strlen(d); i++){
        printf("%c ", d[i]);
    }
    return 0;
}