#include <stdio.h>
#include <string.h>

int main() {
    int a, b, c;
    char d[128], e[128];

    printf("Introdueix una paraula\n");
    scanf("%s", e);
    for (int i = 0; i < strlen(e); i++){
        d[i] = '_';
    }
    for (int i = 0; i < strlen(d); i++){
        printf("%c ", d[i]);
    }
    return 0;
}