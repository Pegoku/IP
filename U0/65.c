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

int main() {
    int nums[6];
    srand(time(NULL));
    
    for (int i = 0; i<6; i++){
        int n;
        do
        {
            n = (rand()%49)+1;
            
        } while (checkIfIn(nums, n)); 
        nums[i] = n; 
        printf("%d\n", n);
    }
    return 0;
}