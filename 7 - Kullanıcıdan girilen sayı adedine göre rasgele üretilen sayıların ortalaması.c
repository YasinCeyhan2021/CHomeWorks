// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // var sayılan değeri 1
    int n, uSayi, tSayi = 0;
    float oSayi;
    printf("Üretilecek Sayı Adedi : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        uSayi = rand() %100 + 1;
        printf("üretilen Sayi : %d\n", uSayi);
        tSayi += uSayi;
    }
    printf("Üretilen sayıların toplamı : %d\n", tSayi);
    oSayi = tSayi / n;
    printf("Üretilen sayıların ortalaması : %f\n", oSayi);
    
    
    return 0;
}