#include <stdio.h>

int main() {
    int ocult = 42, a;

    printf("Introdueix un nombre\n");
    while(ocult != a){
        scanf("%d", &a);
        if(ocult > a){
            printf("Més gran");
        } else
        if(ocult < a){
            printf("Més petit");
        }
        else{
            break;
        }
        printf("\n");
    } 
    printf("Enhorabona");
    return 0;
}