#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    switch (num)
    {
    case 1:
    printf("Dilluns");
        break;
    case 2:
    printf("Dimarts");
        break;
    case 3:
    printf("Dimecres");
        break;
    case 4:
    printf("Dijous");
        break;
    case 5:
    printf("Divendres");
        break;
    case 6:
    printf("Dissabte");
        break;
    case 7:
    printf("Diumenge");
        break;
    default:
        break;
    }

    return 0;
}