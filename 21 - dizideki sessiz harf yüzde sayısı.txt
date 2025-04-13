#include <stdio.h>
#include <stdbool.h>

void sessiz_yuzde(char str[]){
	int i = 0, j = 0, sessiz_harf_sayi = 0;
	float yuzde;
	bool sesli_mi = false;
	char sesli_dizi[] = "aeiou";
	while(str[i] != '\0'){
		// printf("i : %d %c\n", i, str[i]);
		j = 0;
		sesli_mi = false;
		while(sesli_dizi[j] != '\0'){
			if(str[i] == sesli_dizi[j]){
				sesli_mi = true;
			}
			j++;
		}
		if(sesli_mi == false){
			sessiz_harf_sayi++;
		}
		i++;
	}
	// printf("sessiz harf sayisi : %d", sessiz_harf_sayi);
	// printf("harf sayisi : %d", i);
	yuzde = (100 * sessiz_harf_sayi) / i;
	printf("yuzde sayisi : %f", yuzde);
}
void main(){
	char str[] = "aba";
	sessiz_yuzde(str);
}