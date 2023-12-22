#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int angka;
    int ketemu = 0;

    printf("Masukkan angka yang dicari: ");
    scanf("%i", &angka);

    printf("Angka %d \n", angka);

    for (int i = 0; i < 11; i++) {
        if (A[i] == angka) {
            ketemu = 1;
            printf("ADA pada indeks: %d \n", i);
        }
    }

    if (ketemu) {
        printf("\n");
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
