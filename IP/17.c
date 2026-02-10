#include <stdio.h>

int main() {
    int num1, num2, numDif, numSum;

    printf("Introdueix dos nombres\n");
    scanf("%d %d", &num1, &num2);
    while (!(num1<num2)){
        printf("El primer ha de ser més petit que el segon\n");
        scanf("%d %d", &num1, &num2);
    }
    
    numDif = num2 - num1;
    for (int i = num1; i <= num2; i++){
        numSum += i;
    }
    printf("Hi ha %d nombres i la suma es %d", numDif, numSum);

    return 0;
}