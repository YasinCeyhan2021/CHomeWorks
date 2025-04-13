#include <stdio.h>
#include <stdbool.h>

void tersten_yaz(char str[]){
    int uzunluk = 0;
    while(str[++uzunluk] != '\0');
    uzunluk--;
	while(uzunluk > -1){
		printf("%c", str[uzunluk]);
		uzunluk--;
	}
}
void main(){
	char str[] = "futbol";

	tersten_yaz(str);
}