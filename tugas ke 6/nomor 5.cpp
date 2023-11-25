#include<stdio.h>

int main(){
float uang = 1000000;
float bunga = 0.02;
float jumlah_uang = uang;
	for(int i=0;i < 10;i++){
		jumlah_uang += jumlah_uang*bunga;
	}
	printf(" jumlah uang setelah 10 bulan = %2.lf", jumlah_uang);
	return 0;
}