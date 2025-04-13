// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // rand fonksiyonu için
#include <time.h> // scand fonksiyonu için

int main() {
    int i = 1;
    
    printf("Soru 1 - 1 ile 100 arası tek sayılar\n");
    
    while(1){
        
        if(i%2 == 1){
            printf("%d ", i);
        }

        if(i == 100)
            break;
            
        i++;
    }
    
    int j = 0, sayi, c_tp = 0, t_tp = 0;
    
    printf("\n\nSoru 2 - rand tek çift toplam\n");
    srand(time(NULL)); // her seferinde yeni sayı üretmesi için
    while(1){
        sayi = rand() % 100 + 1;
        
        if(sayi%2 == 0){
            printf("Çift sayı : %d\n", sayi);
            c_tp += sayi;
        }else{
            printf("Tek sayı : %d\n", sayi);
            t_tp += sayi;
        }
        
        j++;
        if(j > 9)
            break;
    }
    
    printf("Tek sayıların toplamı : %d\n", t_tp);
    printf("Çift sayıların toplamı : %d\n", c_tp);

    return 0;
}