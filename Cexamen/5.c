#include <stdio.h>

int main(){

    int a= 0;
    while (a!=-1){
        int c = 0;
        scanf("%d", &a);
        if (a == -1) break;

        for(int i = 0; i<a; i++) 
        {
            int b;
            scanf("%d", &b);
            c+= b;
        } 
        printf("%d\n",c);

    }
    return 0;
}