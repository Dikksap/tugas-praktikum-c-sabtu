#include <stdio.h>

int main (){
	int a;
	printf("masukan bilangan bulat positif:");
	scanf("%d",&a);
	
	if (a %2==0){
		printf("bilangan genap");
	}else {
	printf("bilangan ganjil");
	}
	return 0;
}
