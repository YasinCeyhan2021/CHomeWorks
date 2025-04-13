// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
void hesapla(float yariCap);

int main() {
    // Write C code here
    float yari_cap;
    printf("Yarı çap : ");
    scanf("%f", &yari_cap);
    hesapla(yari_cap);
    // printf("pi : %.2f\n", M_PI);
    // printf("s : %f\n", 4/3);
    // printf("%.2f", 4.0/3.0);
    return 0;
}

void hesapla(float yariCap){
    float hacim;
    hacim = 4.0 / 3.0 * M_PI * yariCap * yariCap * yariCap;
    printf("%.0f yarı çaplı kürenin hacmi : %.3f \n", yariCap, hacim);
}