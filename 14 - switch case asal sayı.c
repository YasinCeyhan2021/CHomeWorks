#include <stdio.h>

void main() {
    /*
    int x;
    printf("Yon Bilgisi Giriniz : ");
    scanf("%d", &x);

    switch(x){
        case 1: printf("Kuzey"); break;
        case 2: printf("Batı"); break;
        case 3: printf("Güney"); break;
        case 4: printf("Doğu"); break;
    }
    */
    int asal, i, sayi;
    sayi = 0;
    printf("Sayi Giriniz : ");
    scanf("%d", &asal);

    for(i=2; i<asal; i++){
        if(asal%i == 0){
            sayi++;
            printf("Asal Degil");
            break;
        }
    }
    if(sayi == 0){
        printf("Asal");
    }
}