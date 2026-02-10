#include <stdio.h>
#include <string.h>

void checkForMatch(char * base, char * sol, char in){
    for (int i = 0; i < strlen(sol); i++){
        if (sol[i] == in){
            base[i] = in;
        }
    }

}

void printStr(char * in){
    for (int i = 0; i< strlen(in); i++){
        printf("%c ", in[i]);
    }
    printf("\n");
}


int main() {
    int a, b, c;
    char d[128], e[128], f; // base, sol

    printf("Introdueix una paraula\n");
    scanf("%s", e);
    for (int i = 0; i < strlen(e); i++){
        d[i] = '_';
    }
    for (int i = 0; i < strlen(d); i++){
        printf("%c ", d[i]);
    }
    printf("\n");

    while (strcmp(d, e)){
        // fflush(stdin);
        printf("Prova una lletra: ");
        // scanf("%c", &f)
        while (getchar() != '\n');
        scanf("%c", &f);
        // printf("%c char\n", f);
        checkForMatch(d, e, f);
        printStr(d);
    }

    return 0;
}