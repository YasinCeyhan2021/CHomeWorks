// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    const int maxInput = 6;
    int i;
    double number, average, sum = 0.0;
    
    for(i = 1; i <= maxInput; i++){
        printf("%d. bir pozitif sayı giriniz : ", i);
        scanf("%lf", &number);
        if(number < 0.0){
            //goto git;
            break;
        }
        sum += number;
    }
    
    //git:
    average = sum / (i-1);
    printf("Toplam = %.2f\n", sum); 
    printf("Ortalama = %.2f\n", average); 

    return 0;
}