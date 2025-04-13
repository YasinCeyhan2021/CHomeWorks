// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    // Write C code here
    int alt, ust, sayi;
    printf("Sayı aralığı alt değeri : ");
    scanf("%d", &alt);
    printf("Sayı aralığı üst değeri : ");
    scanf("%d", &ust);
    sayi = alt + rand() % (ust-alt+1);
    
    printf("%d ile %d arasında üretilen saynın decimal karşılığı : %d\n", alt, ust, sayi);
    printf("%d ile %d arasında üretilen sayının hexadecimal : 0x%x\n", alt, ust, sayi);
    printf("%d ile %d arasında üretilen sayının octal karşılığı : 0%o\n", alt, ust, sayi);
    return 0;
}