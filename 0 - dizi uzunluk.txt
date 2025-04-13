// Online C compiler to run C program online
#include <stdio.h>
int dizi_uzunluk(int dizi[]);

int main() {
    // Write C code here
    int dizi[] = {1, 5, 6, 7, 9, 11, 1, 5, 6, 7, 9, 11};
    
    int len = sizeof(dizi) / sizeof(dizi[0]);
    printf("len : %d\n",  len);
    
    int d_uzun = dizi_uzunluk(dizi);
    // printf("%d\n",  d_uzun);

    return 0;
}

int dizi_uzunluk(int dizi2[]){
    int len = sizeof(dizi2) / sizeof(dizi2[0]);
    printf("len : %d\n",  len);
    
    for(int i = 0; i < 12; i++){
        printf("%d\n",  dizi2[i]);
    }
    return len;
}