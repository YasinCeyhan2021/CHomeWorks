// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // rand fonksiyonu için

int main() {
    
    int i = 0, sayi, c_tp = 0, t_tp = 0;
    
    while(1){
        sayi = rand() % 100 + 1;
        
        if(sayi%2 == 0){
            printf("Çift sayı : %d\n", sayi);
            c_tp += sayi;
        }else{
            printf("Tek sayı : %d\n", sayi);
            t_tp += sayi;
        }
        
        i++;
        if(i > 9)
            break;
    }
    
    printf("Tek sayıarlrın toplamı : %d\n", t_tp);
    printf("Çift sayıarlrın toplamı : %d\n", c_tp);

    return 0;
}