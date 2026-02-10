#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int checkIfIn(int * a, int n){
    for (int j = 0; j<sizeof(a); j++){
        if (a[j] == n) return 1;
    }
    return 0;
}

char toQuiniela(int n){
    switch (n)
    {
    case 0:
        return 'X';
        break;
    case 1:
        return '1';
        break;
    case 2:
        return '2';
        break;
    
    default:
        break;
    }
}

int main() {
    int nums[6];
    srand(time(NULL));
    for (int i = 0; i<14; i++){
        int n;
            n = (rand()%3);
            
        char r = toQuiniela(n); 
        printf("%d: %c\n", i+1, r);
    }
    return 0;
}