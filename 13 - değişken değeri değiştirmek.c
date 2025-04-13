// Online C compiler to run C program online
#include <stdio.h>

void main() {

    /* iki sayının toplamı
	int a = 7, b = 8, tp;
	
	tp = a + b;
	
	printf("Toplam : %d", tp);
	*/
	
	// iki degişkenin değerini değiştirmek
	int a, b;
	int temp;
	
	printf("a' nın değerini giriniz : ");
    scanf("%d", &a);	
	printf("b' nin değerini giriniz : ");
	scanf("%d", &b);
	printf("a'nın ilk değeri : %d - b'nin ilk değeri : %d\n", a, b);
	
	// 3. cü bir değişken kullanamdan iki değişkenin değeri değiştirildi
		
	a = a + b; // 5 => 5 + 5 = 15
	b = a - b; // 10 => 15 - 10 = 5
	a = a - b; // 15 => 15 - 5 = 10
	
	printf("a'nın ikinci değeri : %d - b'nin ikinci değeri : %d\n", a, b);
	
	// 3. cü bir değişken kullanarak iki değişkenin değeri değiştirildi
	temp = a;
	a = b;
	b = temp;
	
	printf("a'nın üçüncü değeri : %d - b'nin üçüncü değeri : %d\n", a, b);

}