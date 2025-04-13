// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i = 1;
    printf("1 ile 100 arası tek sayılar\n");
    while(1){
        
        if(i%2!=0){
            printf("%d ", i);
        }

        if(i == 100)
            break;
            
        i++;
    }

    return 0;
}