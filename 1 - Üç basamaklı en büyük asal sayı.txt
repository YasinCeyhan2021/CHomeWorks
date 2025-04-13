// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int sayi = 0, i = 2, tbv = 0, asal;
    // 1 - Üç basamaklı en büyük asal sayı
    while(sayi < 1000){
        i = 2;
        tbv = 0;
        if(sayi < 100){
            sayi++;
            continue;
        }
        
        while(i < sayi){
            if(sayi%i==0){
                tbv++;
                break;
            }
            i++;
        }
        if(tbv == 0){

            asal = sayi;
        }
        sayi++;
    }
    
    printf("Asal sayı : %d \n ", asal);
    

    return 0;
}