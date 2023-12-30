#include<stdio.h>
#include<stdbool.h>

int main (){
	char A[8]{"JAKARTA"};
	int flag = false;
	int panjang = sizeof(A)/sizeof(A[0]);
	
	for(int i=0;i < panjang - 1;i++){
		for(int j= i + 1; j < panjang ; j++){
			if(A[i]==A[j]){
				flag = true;
				break;
			}
		}
	}
	
	if(flag){
		printf("ADA");
	}else{
		printf("TIDAK ADA");
	}
	return 0;
}