#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[15];
    int length = sizeof(A) / sizeof(A[0]);
    char null = ' ';

    for (int i = 0; i < length; i++) {
        // untuk menginput data
        printf("masukan angka ");
        scanf("%i", &A[i]);

        // untuk penanda akhir input
        if (A[i] == 999) {
            break;
        }
    }

    system("cls");

    // output A
    printf("isi array : \n A.");
    for (int j = 0; j < length && A[j] != 999; j++) {
        printf("%i ", A[j]);
    }

    printf("\nisi array a: \n A.");
    for (int j = 0; j < length && A[j] != 999; j += 2) {
        printf("%i ", A[j]);
    }

    printf("\nisi array b: \n A.");
    for (int j = 0; j < length && A[j] != 999; j++) {
        if (A[j] < 9) {
            printf("%c ", null);
        } else {
            printf("%i ", A[j]);
        }
    }

    printf("\nisi array c: \n A.");
    for (int j = 0; j < length && A[j] != 999; j++) {
        if (A[j] < 9) {
            printf("%i ", A[j]);
        }
    }

    printf("\nisi array d: \n A.");
    for (int j = 0; j < length && A[j] != 999; j++) {
        if (A[j] > 9) {
            printf("%i ", A[j]);
        }
    }
    
	    printf("\nisi array e: \n A.");
	for (int j = 0; j < length && A[j] != 999; j++) {
	    if (A[j] % 2 == 0) {
	        printf("%i ", A[j]);
	    }
	}  
    

    return 0;
}