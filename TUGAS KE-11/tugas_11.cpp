#include<stdio.h>
int main(){
	int A[12]{60,80,55,90,75,40,50,85,70,65,45,55};
	int B[12];
	int C[12];
	int total = 0;
	int nilai_rata_rata;
	int hitungB = 0;
	int hitungC = 0;
	for(int i=0;i < 12;i++){
		total += A[i];
	}
	
	nilai_rata_rata = total / 12;
	
	for(int j=0;j<12;j++){
		if(A[j] > nilai_rata_rata){
			B[hitungB++] = A[j];
				
		} else {
			C[hitungC++] = A[j];
		}
	}
	printf("B = ");
	for(int i = 0; i<hitungB;i++){
		printf("%i,",B[i]);
	} 
	printf("\n");
		printf("B = ");
	for(int i = 0; i<hitungC;i++){
		printf("%i,",C[i]);
	} 
	return 0;
}                                             