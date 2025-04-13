// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

int main() {
    int kSayi, bSayi, i = 1, j, sonuc;
    bool deger;
    do{
        deger = false;
        kSayi = (10*i) + 3;
        for(j = 2; j < kSayi; j++){
            if(kSayi%j==0){
                deger = true;
            }
        }
        if(deger != true)
            break;
            
        i++;
    }while(i<10);
    
    printf("A3 - En küçük asal sayı : %d\n", kSayi);
    
    i = 9;
    
    do{
        deger = false;
        bSayi = (10*i) + 3;
        for(j = 2; j < bSayi; j++){
            if(bSayi%j==0){
                deger = true;
            }
        }
        if(deger != true)
            break;
            
        i--;
    }while(0<i);
    
    printf("A3 - En büyük asal sayı : %d\n", bSayi);
    
    sonuc = kSayi + bSayi;
    printf("En küçük asal sayı : %d ile En büyük asal sayı : %d nın toplamı %d dır.\n", kSayi, bSayi, sonuc);    

    return 0;
}