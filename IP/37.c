#include <stdio.h>

int main() {
    char ll, ll2;
    for (int i = 0; i < 10; i++){
        printf("Introdueix una lletra\n");
        fflush(stdout);
        scanf(" %c", &ll2);
        if (i == 0 || ll2 < ll){
            ll = ll2;
        }
    }
    printf("%c\n", ll);
    return 0;
}