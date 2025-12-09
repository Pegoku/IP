#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int c=0;


    char num[15];
while (c!=3)
{

    printf("Tria una opció\n\
    1. Demanar numero\n\
    2. Cercar xifra\n\
    3. Sortir\n");

    scanf("%d", &c);

    if (c == 1){

        printf("Introdueix un nombre de 10 xifres\n");
        scanf("%s", num);

    }

    if (c == 2){
        int n1;
        char n2[4];
        printf("Quin nombre vols cercar? ");
        scanf("%d", &n1);
        for (int i = 0; i<10; i++){
sprintf(n2, "%d", n1);
           if (num[i] == n2[0]){
            printf("A la posicio %d hi ha la xifra %d\n", i, n1);
           } 
        }

    }
}





    return 0;
}