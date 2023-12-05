#include <stdio.h>

int main() {
    int jumlah_data;

    printf("Masukkan jumlah data pegawai: ");
    scanf("%d", &jumlah_data);

    if (jumlah_data <= 0) {
        printf("Jumlah data tidak valid. Harus lebih dari 0.\n");
        return 1;
    }

    int data_pegawai[jumlah_data][2]; 
    for (int i = 0; i < jumlah_data; i++) {
        printf("Data Pegawai ke-%d\n", i + 1);
        printf("Masukkan jam masuk (1-12): ");
        scanf("%d", &data_pegawai[i][0]);

        printf("Masukkan jam pulang (1-12): ");
        scanf("%d", &data_pegawai[i][1]);
    }

    printf("\n============================================\n");
    printf("| No | Jam Masuk | Jam Keluar | Lama Bekerja |\n");
    printf("============================================\n");

    for (int i = 0; i < jumlah_data; i++) {
        int jam_masuk = data_pegawai[i][0];
        int jam_pulang = data_pegawai[i][1];
        int lama_bekerja;

        printf("| %2d | ", i + 1);

        if ((1 <= jam_masuk && jam_masuk <= 12) && (1 <= jam_pulang && jam_pulang <= 12)) {
            if (jam_pulang >= jam_masuk) {
                lama_bekerja = jam_pulang - jam_masuk;
            } else {
                lama_bekerja = (jam_pulang + 12) - jam_masuk;
            }
        } else {
            lama_bekerja = -1; // Menandai data yang tidak valid
        }

        printf("   %2d      |   %2d       |     %2d       |\n", jam_masuk, jam_pulang, lama_bekerja);
    }

    printf("============================================\n");

    return 0;
}

