#include <stdio.h>

int main(){
	int dizi[5];
	int i, j, sayi, max = 0;
	int tbv = 0;

	for(i = 0; i < 5; i++){
		printf("%d. elaman = ", i+1);
		scanf("%d", &sayi);
		for(j = 2; j < sayi; j++){
			if(sayi%j == 0){
				tbv++;
				break;
			}
		}
		if(tbv == 0){
			dizi[i] = sayi;
		}else{
			dizi[i] = 0;
		}
		tbv = 0;
	}

	for(i = 0; i < 5; i++){
		if(dizi[i] > max){
			max = dizi[i];
		}
	}

	if(max == 0){
		printf("Dizide asal sayi yoktur");
	}else{
		printf("Dizide en buyuk asal sayi : %d", max);
	}
	
	return 0;
}