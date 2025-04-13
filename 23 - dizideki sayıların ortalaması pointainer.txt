#include <stdio.h>

float hafta_13_soru_1(int *sayi){
	int i;
	float toplam = 0.0;
	for(i = 0; i < 5; i++){
		toplam += *(sayi + i);
	}
	return (toplam / 5);
	
}
void main(){
	int dizi[5] = {10, 42, 9, 11, 22};
	float ort = hafta_13_soru_1(&dizi);
	printf("Dizi ort : %f", ort);
}