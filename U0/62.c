#include <stdio.h>

double toIn(double cm){
   return cm/2.54;
}

double toCm(double cm){
   return cm*2.54;
}

int main() {
    int c;
    double d;
    printf("Conversor d'unitats. Tria una opció:\n\
    (1) cm a polzada\n\
    (2) polzada a cm\n");

    scanf("%d", &c);
    printf("Introdueix el nombre a convertir: ");
    scanf("%lf", &d);
    if (c==1){
       printf("%lf in", toIn(d)); 
    }
    if (c==2){
       printf("%lf cm", toCm(d)); 
    }
    return 0;

}