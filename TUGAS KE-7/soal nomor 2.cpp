#include<stdio.h>

int main(){
int A[11];
	printf("masukan angka :\n");
	for(int i=0;i < 11;i++){
	printf("nilai \n");
	scanf("%i",&A[i]);
	}
	
	printf("bilangan genap \n");
	for(int i=0;i < 11;i++){
		if(A[i] %2 == 0){
		printf(" %i \n",A[i]);	
	}
	}
	
}