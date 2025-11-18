#include <stdio.h>
#include <string.h>

// frase[strcspn(frase, '\n')]='\0';
int main() {
    FILE* fptr = fopen("file.txt", "r");

    char data[2][70];
    for (int i = 0; i<2; i++){
        fgets(data[i], 70, fptr);
    }
    fclose(fptr);

    FILE* fptr2 = fopen("file2.txt", "w");
    char n[2] = {'\n'};
    for (int i = 1; i>=0; i--){
        
        // printf("%s\n", data[i]);
        fputs(data[i],fptr2);
        fputs(n,fptr2);
    }
    fclose(fptr);

    return 0;
}