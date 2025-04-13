#include <stdio.h>
#include <stdbool.h>

void hafta_13_soru_2(char *harf){
	int i, j, ascii;
	bool asal_mi = true;
	for(i = 0; i < 5; i++){
		asal_mi = true;
		ascii = *(harf + i);
		for(j = 2; j < ascii; j++){
			if(ascii % j == 0){
				asal_mi = false;
				break;
			}
		}
		if(asal_mi){
			printf("%c karakterinin ascii kod karsiligi %d asaldir.\n", *(harf + i), ascii);
		}
	}
}
void main(){
	char dizi[5] = "Abcde";
	hafta_13_soru_2(&dizi);
}