#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr = fopen("file.txt", "r");
    FILE* fptr2 = fopen("file2.txt", "w");
    char num[5];

    fgets(num, 5, fptr);
    sprintf(num, "%d",2*atoi(num));
    fputs(num, fptr2);

    return 0;
}