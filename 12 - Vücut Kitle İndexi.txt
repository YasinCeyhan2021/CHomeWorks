// Online C compiler to run C program online
#include <stdio.h>
void hesapla(float kilo, float boy);

int main() {
    float kilo, boy;
    printf("Kilonuz : ");
    scanf("%f", &kilo);
    printf("Boy : ");
    scanf("%f", &boy);
    hesapla(kilo, boy);

    return 0;
}

void hesapla(float kilo, float boy){
    float bmi = kilo / (boy * boy);
    if(bmi < 18.5){
        printf("Zayıfsıznız. Vücut kitle indeksiniz : %.2f", bmi);
    }else if(bmi < 25){
        printf("Normalsiniz. Vücut kitle indeksiniz : %.2f", bmi);
    }else if(bmi < 30){
        printf("Fazla kilolusunuz. Vücut kitle indeksiniz : %.2f", bmi);
    }else{
        printf("Obezsiniz. Vücut kitle indeksiniz : %.2f", bmi);
    }
}