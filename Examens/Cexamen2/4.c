#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int voc = 0, nvoc = 0, a;
    char w[50];

    printf("Introdueix una cadena:\n");
    fgets(w, 50, stdin);

    strtok(w, "\n");
    char w2[strlen(w)];
    for (int i = 0; i < strlen(w); i++)
    {
        w2[i] = '.';
    }

        printf("%s\n", w2);
    while (strcmp(w, w2) != 0){
        printf("Introdueix la posicio del caracter a mostrar: ");
        scanf("%d", &a);

        w2[a] = w[a];
        
        printf("%s\n", w2);
    }

    return 0;
}