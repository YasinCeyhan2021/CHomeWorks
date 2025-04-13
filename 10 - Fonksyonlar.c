// Online C compiler to run C program online
#include <stdio.h>
void parametresiz_deger_dondurmeyen();
int parametresiz_deger_donduren();
void parametreli_deger_dondurmeyen(int a);
int parametreli_deger_donduren(int a);

int main() {
    // Write C code here
    parametresiz_deger_dondurmeyen();
    printf("parametresiz_deger_donduren : %d\n", parametresiz_deger_donduren());
    parametreli_deger_dondurmeyen(5);
    printf("parametreli_deger_donduren : %d\n", parametreli_deger_donduren(6));
    return 0;
}

void parametresiz_deger_dondurmeyen(){
    printf("parametresiz_deger_dondurmeyen\n");
}

int parametresiz_deger_donduren(){
    return 3 + 5;
}

void parametreli_deger_dondurmeyen(int a){
    printf("parametreli_deger_dondurmeyen : %d\n", a);
}

int parametreli_deger_donduren(int a){
       return a*a;
}