#include <stdio.h>

int main (){
	float a,b,hasil;
	printf("masukan panjang alas :");
	scanf("%f",&a);
	
	printf("\nmasukan tinggi segitiga:");
	scanf("%f",&b);
	hasil=a*b/2;
	printf("hasil : %.2f cm",hasil);
	return 0;
}
