#include <stdio.h>

int main() {
    char array[] = "JOGJAKARTA";
    int hitung[26] = {0};  

    for (int i = 0; array[i] != '\0'; i++) {
        if (array[i] >= 'A' && array[i] <= 'Z') {
            hitung[array[i] - 'A']++;
        } else if (array[i] >= 'a' && array[i] <= 'z') {
            hitung[array[i] - 'a']++;
        }
    }

    int maxCount = 0;
    char mostFrequent;

    for (int i = 0; i < 26; i++) {
        if (hitung[i] > maxCount) {
            maxCount = hitung[i];
            mostFrequent = 'A' + i;
        }
    }

    printf("Huruf yang paling banyak muncul adalah: %c\n", mostFrequent);
    printf("Jumlah kemunculan: %d\n", maxCount);

    return 0;
}
