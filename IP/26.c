#include <stdio.h>

int main() {
    char l;
    scanf("%c", &l);
    if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u'){
        printf("Es una vocal");
    } else{
        printf("Es una Consonant");
    }
    return 0;
}