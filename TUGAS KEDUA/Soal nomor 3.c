#include <stdio.h>
#include <math.h>

int main() {
    double alas = 4.0; 
    double tinggi = 5.0; 
    double sisi_miring = sqrt(pow(alas, 2) + pow(tinggi, 2));

    printf("Panjang sisi alas: %.2f cm\n", alas);
    printf("Panjang sisi tinggi: %.2f cm\n", tinggi);
    printf("Panjang sisi miring: %.2f cm\n", sisi_miring);

    return 0;
}
