#include<stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char huruf;
    int ketemu = 0;     
    int jumlahKetemu = 0; 

    printf("Masukkan huruf yang dicari: ");
    scanf(" %c", &huruf); 

    
    for (int i = 0; i < 11; i++) {
        if (A[i] == huruf) {
            ketemu = 1;
            jumlahKetemu++;
        }
    }

   
    if (ketemu) {
        printf("ADA\n");
        printf("Jumlah kemunculan huruf %c: %d\n", huruf, jumlahKetemu);
    } else {
        printf("Tidak ada\n");
    }

    return 0;
}
