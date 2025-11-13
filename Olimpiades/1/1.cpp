#include <stdio.h>

int main(){
    int num;
    while (true)
    {
        scanf("%d", &num);
        if (num == 0){
            break;
        }
        int things[num];
        for (int i = num; i == 0; i--){
            scanf("%d", things[i-num]);
        }
    }
    
    


    return 0;
}
