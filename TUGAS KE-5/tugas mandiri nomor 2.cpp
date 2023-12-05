#include <stdio.h>

int main() {
    int a, b;
    char jenis;
    float diskon, harga, hasil; 

    printf("Masukkan kode barang: ");
    scanf("%d", &a);

    printf("Masukkan jenis barang A, B, C: ");
    scanf(" %c", &jenis);

    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    switch (jenis) {
        case 'A':
            diskon = 10;
            break;
        case 'B':
            diskon = 15;
            break;
        case 'C':
            diskon = 20;
            break;
        default:
            printf("Jenis barang tidak ada\n");
            return 1;
    }

    hasil = harga - (harga * diskon / 100);

    printf("Jenis barang: %c\nHarga setelah diskon adalah: %.2f\n", jenis, hasil);

    return 0;
}

