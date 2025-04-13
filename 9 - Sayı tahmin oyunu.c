// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    // Write C code here
    int sayi, gSayi;

    sayi = rand() % 100 + 1;
    
    do{
        printf("1 ile 100 arasında tutulan sayıyı tahmin ediniz : ");
        scanf("%d", &gSayi);
        if(sayi == gSayi){
            printf("Doğru tahmin!!!\n");
        }else if(sayi > gSayi){
            printf("Daha büyük bir sayı giriniz...\n\n");
        }else if(sayi < gSayi){
            printf("Daha küçük bir sayı giriniz...\n\n");
        }
    }while(sayi != gSayi);

    return 0;
}