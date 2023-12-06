#include<stdio.h>

int main(){
	int nilai[10];
	char nama[10][20] = {"andri","asep","budi","dika","kurdi","momon","hendri","regi","ilham","ahmad"};
	
	for (int i=0;i < 10;i++)
	{
	
	printf("%i.nama %s \n nilai :",i+1,nama[i]);
	scanf("%i",&nilai[i]);
	
		if(nilai[i] >= 60)
		{
		printf(" LULUS\n\n");
		} else
			
			{
				printf("TIDAK LULUS\n\n");
			}
	
	}
	return 0;
}