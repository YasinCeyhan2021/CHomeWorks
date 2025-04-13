// Online C compiler to run C program online
#include <stdio.h>
int factorial(int n);

int main() {
    // Write C code here
    int sayi;
    printf("Faktöriyeli alınacak sayı : ");
    scanf("%d", &sayi);

    printf("%d! = %d", sayi, factorial(sayi));
    return 0;
}

int factorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}