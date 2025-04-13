// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

int main() {

    int kSayi, bSayi, tp;
    bool deger = false;
    for(int i = 0; i <= 100; i++){
        if(i<10 || i > 99)
            continue;
            
        printf("%d ", i);
        
        if(i%10==3){
            if(deger == false){
                kSayi = i;
                deger = true;
            }else{
                bSayi = i;
            }
        }
    }
    tp = kSayi + bSayi;
    
    printf("\nKüçük Asal Sayı : %d\nBüyük Asal Sayı : %d\nToplam : %d", kSayi, bSayi, tp);

    return 0;
}