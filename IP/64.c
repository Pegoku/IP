#include <stdio.h>

void lalletrax(char * c, int num){
    printf("La lletra n.%d es: %c", num+1, c[num]);
}

int main() {
    char b[128];
    int d;
    printf("Introdueix una cadena: ");
    scanf("%s", b);
    printf("Introdueix la posició de la lletra desitjada: ");
    scanf("%d", &d);
    lalletrax(b, d-1);
    return 0;
}
