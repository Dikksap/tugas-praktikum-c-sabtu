#include <stdio.h>
int main (){
	int a,b,c,d=2000;
	
	printf("masukan jam masuk parkir : ");
	scanf(" %i",&a);
	
	printf("masukan jam keluar :");
	scanf(" %i",&b);
	
	c = b-a;
	
	 if ( c > 2) {
        c-= 2;
        d += c * 500;
    }
    printf("Biaya parkir: %d\n", d);
}
