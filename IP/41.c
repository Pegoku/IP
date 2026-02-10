#include <stdio.h>

int main() {
    char name[128];
    printf("Quin es el teu nom?\n");
    scanf("%s", &name);
    printf("Hola %s", name);
    return 0;
}