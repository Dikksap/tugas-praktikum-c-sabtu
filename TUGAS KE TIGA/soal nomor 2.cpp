#include <stdio.h>

int main() {
    float a,hasilf, hasilr;

    printf("Masukkan nilai celcius: ");
    scanf("%f", &a);

    hasilf = (float)a * 9 / 5 + 32;
    hasilr = (float)a * 4 / 5;

    printf("\nFahrenheit = %.2f", hasilf);
    printf("\nReamur = %.2f\n", hasilr);

    return 0;
}
