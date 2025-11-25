#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define VIDES 8

int checkForMatch(char * base, char * sol, char in){
    int match = 0;
    for (int i = 0; i < strlen(sol); i++){
        if (sol[i] == in && sol[i] != base[i]){
            base[i] = in;
        match = 1;
        }
    }

    if (match){
        return 1;
    } else{
        return 0;
    }

}

void printStr(char * in){
    for (int i = 0; i< strlen(in); i++){
        printf("%c ", in[i]);
    }
    printf("\n");
}


int main() {
    int a, b, c, v = VIDES;
    char d[128], e[128], f; // base, sol
    // char paraulesOcultes[20][20] = {"elefant", "tortuga", "programa", "ordinador", "senyera", "montanya", "platja", "estacio", "hospital", "biblioteca", "restaurant", "farmacia", "cinema", "teatre", "museu", "iglesia", "castell", "paisatge", "flor", "arbre"};

    char paraulesOcultes[64][20];
    FILE* fptr = fopen("penjat.txt", "r");
    int numWords = 0;    
    while (1){
        // char j[20];     
        fgets(paraulesOcultes[numWords], 20, fptr);        
        strtok(paraulesOcultes[numWords], "\n");
        // printf("%s\n", paraulesOcultes[numWords]);
        if(strlen(paraulesOcultes[numWords]) > 1){
            // printf("%d\n", numWords);
            // for (int j = 0; j<strlen(paraulesOcultes[numWords]); j++){
            //     printf("%d, %c\n",paraulesOcultes[numWords][j] ,paraulesOcultes[numWords][j]);
            // }

            numWords++;
        }
        else{
            // printf("aa");
            break;
        }
        // printf("%s", paraulesOcultes[numWords]);
    }
    // printf("%d", numWords);
    
    // numWords--;
    // printf("Introdueix una paraula\n");
    // scanf("%s", e);

    srand(time(NULL));
    rand();
    strcpy(e,  paraulesOcultes[rand()%numWords]);    
    // printf("%s", e);
    for (int i = 0; i < strlen(e); i++){
        d[i] = '_';
    }
    d[strlen(e)] = '\0';
    for (int i = 0; i < strlen(d); i++){
        printf("%c ", d[i]);
    }
    printf("\n");

    while (strcmp(d, e) != 0 && v != 0){
        // fflush(stdin);
        printf("Vides: %d\n", v);
        printf("Prova una lletra: ");
        // scanf("%c", &f)
        scanf("%c", &f);
        while (getchar() != '\n');
        // printf("%c char\n", f);
        if (!checkForMatch(d, e, f)){
            v--;
        }
        printStr(d);
    }
    if (v == 0){
        printf("Has perdut\n");
        printf("La paraula era %s", e);
    }
    else{
        printf("Has guanyat!");
    }

    return 0;
}