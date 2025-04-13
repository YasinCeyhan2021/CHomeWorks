#include <stdio.h>
#include <stdbool.h>

void ozel_karakter_kontrol(char c){
	int i;
	bool bl = false;
	char dizi[9] = "%?&/()^'!";
	for(i = 0; i < 9; i++){
		if(c == dizi[i]){
			bl = true;
		}
	}
	if(bl){
		printf("%c karakteri ozel bir karakterdir.", c);
	}else{
		printf("%c karakteri ozel bir karakter degildir.", c);
	}
}

void main(){
	char chr;
	printf("1 karakter giriniz  : ");
	scanf("%c", &chr);
	
	ozel_karakter_kontrol(chr);
}