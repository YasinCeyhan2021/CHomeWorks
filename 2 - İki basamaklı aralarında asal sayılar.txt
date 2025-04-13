// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h> // bool kullanmak için

int main() {
    int sayi1 = 10, i, sayi2, t = 1;
    bool deger = false;
    // 2 - İki basamaklı aralarında asal sayılar
    while(sayi1<99){
        sayi2 = sayi1 + 1;
        // printf("%d\n", sayi1);
        while(sayi2<100){
            deger = false;
            // printf("%d-\n", t);
            for(i=2;i<sayi1;i++){
                if(sayi1%i==0 && sayi2%i==0){
                    deger = true;
                }
            }
            if(deger == false){
                printf("%d sayısı %d sayısı ile aralarında asaldır.\n", sayi1, sayi2);
            }
            // printf("\n");
            t++;
            sayi2++;
        }
        printf("\n");
        sayi1++;
    }

    return 0;
}