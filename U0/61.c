#include <stdio.h>
#include <ctype.h>

int isNum(int num){
    if (num >=48 && num <= 57){
        return 1;
    }
    return 0;
}

int main() {
    int c;
    printf("Introdueix un caracter: ");
    scanf("%c", &c);
    // printf("%c %d", c, c);

    if (!isNum(c)) printf("no ");    
    printf("es un digit");

    return 0;
}