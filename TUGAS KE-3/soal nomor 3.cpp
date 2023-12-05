#include <stdio.h>
#include <math.h>

int main() {
    double alas, tinggi, sisi_miring;

    // Input sisi alas dan sisi tinggi dari pengguna
    printf("Masukkan panjang sisi alas: ");
    scanf("%lf", &alas);
    
    printf("Masukkan panjang sisi tinggi: ");
    scanf("%lf", &tinggi);

    // Menggunakan rumus Pythagoras untuk menghitung sisi miring
    sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));
    printf("Panjang sisi miring segitiga: %.2lf cm\n", sisi_miring);

    return 0;
}

