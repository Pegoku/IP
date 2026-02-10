#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr = fopen("file.txt", "r");
    char num[5];
    fgets(num, 5, fptr);
    printf("%s", num);
    sprintf(num, "%d", 2*atoi(num));
    printf("%s", num);
    fclose(fptr);

    FILE* fptr2 = fopen("file.txt", "w");
    fputs(num, fptr2);
    fclose(fptr2);

    return 0;
}