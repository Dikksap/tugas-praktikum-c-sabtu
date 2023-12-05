#include <stdio.h>
//jika N lebih besar dari 50 maka -25 + 10 jika tidak +10 saja
int main (){
	int a,hasil;
	printf("masukan nilai N:");
	scanf("%i",&a);
	
	if (a>50){
		hasil=a-25+10;
		printf("hasinya %d-25+10 = %d",a,hasil);
	}else{
		hasil=a+10;
		printf("hasinya %d+10= %d",a,hasil);
	}
	
	return 0;
	
}
