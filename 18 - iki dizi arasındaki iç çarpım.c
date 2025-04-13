#include <stdio.h>

int main(){
	int dizi1[4];
	int dizi2[4];
	int tp = 0;
	int i;

	for(i = 0; i < 4; i++){
		printf("1. dizinin %d. elamani = ", i+1);
		scanf("%d", &dizi1[i]);
		printf("2. dizinin %d. elamani = ", i+1);
		scanf("%d", &dizi2[i]);
		tp += dizi2[i] * dizi1[i];
		
	}
	printf("iki dizi arasindaki ic carpim : %d", tp);
	
	return 0;
}