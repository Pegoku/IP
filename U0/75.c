#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *fptr = fopen("file.txt", "w");

    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        char a[128];
        sprintf(a, "%d\n", rand());
        fputs(a, fptr);
    }
    fclose(fptr);
    
    FILE* fptr2 = fopen("file.txt", "r");
    int min, max;
    int i = 0;
    int prev;
    while (1){
        char a[128];
        fgets(a, sizeof(a), fptr2);
        
        int b = atoi(a);
        if (feof(fptr2)) break;        

        if (!min|| !max){
            min = b;
            max = b;
        }   

        if (b < min) min = b; 
        if (b > max) max = b; 

        i++;
        prev = b;

    }


    printf("Min: %d, Max: %d",min, max);

    return 0;
}