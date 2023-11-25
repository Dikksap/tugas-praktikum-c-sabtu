#include<stdio.h>

int main(){
	int kecepatan = 2;
	int waktu,hasil;
	printf("waktu tempuh  (detik)");
	scanf("%i",&waktu);
	
	hasil = kecepatan * waktu;
	
	printf("jarak yang ditempuh %i meter",hasil);
	return 0;
}