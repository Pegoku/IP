#include <stdio.h>


int main() {
    int choice;

    printf("Que t'agrada més?\n\
    1 - Platja\n\
    2- Muntanya\n\
    3 - Ciutat\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Així que t’agrada més la Platja");
        break;

    case 2:
        printf("Així que t’agrada més la Muntanya");
        break;
    
    case 3:
        printf("Així que t’agrada més la Ciutat");
        break;
    default:
        break;
    }

    return 0;
}