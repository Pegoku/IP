#include <stdio.h>

int main() {
    int ocult = 42, a, i=0;

    printf("Introdueix un nombre\n");
    while(ocult != a && i < 6){
        i++;
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
    if (ocult == a){
      printf("Enhorabona");
    }else
    {
        printf("T'has quedat sense intents.");
    }
    
    return 0;
}