#include <stdio.h>
#include <string.h>

#define MAX 100
#define HARGA 7000

struct Laundry {
    char nama[50];
    float berat;
    float biaya;
};

int main() {

    struct Laundry data[MAX];
    int jumlah = 0;
    char hari[20];
    float total = 0;

    printf("Masukkan hari (Selasa / Rabu): ");
    scanf("%s", hari);

    // Jika hari Selasa → input laundry
    if(strcmp(hari, "Selasa") == 0) {

        printf("\n=== INPUT LAUNDRY (SELASA) ===\n");
        printf("Masukkan jumlah laundry (maks 100): ");
        scanf("%d", &jumlah);

        if(jumlah > MAX) {
            jumlah = MAX;
        }

        for(int i = 0; i < jumlah; i++) {
            printf("\nData ke-%d\n", i+1);

            printf("Nama: ");
            scanf("%s", data[i].nama);

            printf("Berat (kg): ");
            scanf("%f", &data[i].berat);

            data[i].biaya = data[i].berat * HARGA;
        }

        printf("\nData laundry berhasil disimpan.\n");
    }

    // Jika hari Rabu → tampilkan laporan
    else if(strcmp(hari, "Rabu") == 0) {

        printf("\n=== LAPORAN LAUNDRY (RABU) ===\n");
        printf("Masukkan jumlah data yang ingin ditampilkan: ");
        scanf("%d", &jumlah);

        for(int i = 0; i < jumlah; i++) {

            printf("\nNama: %s\n", data[i].nama);
            printf("Berat: %.2f kg\n", data[i].berat);
            printf("Biaya: Rp %.2f\n", data[i].biaya);

            total += data[i].biaya;
        }

        printf("\nTotal Pemasukan: Rp %.2f\n", total);
    }

    else {
        printf("\nTidak ada layanan laundry hari ini.\n");
    }

    return 0;
}