#include <stdio.h>

int main() {
    int d = 1, i=0;
    double b= 0,c;

    while (d == 1)
    {
        i++;
        printf("Introdueix un nombre: ");
        scanf("%lf", &c);
        b += c;
        printf("Vols continuar (1/0): ");
        scanf("%d", &d);
    }
    printf("%lf\n", b/ (float) i);

    
return 0;
}